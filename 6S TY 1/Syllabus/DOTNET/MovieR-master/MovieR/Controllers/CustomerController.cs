using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;
using MovieR.Models;
using MovieR.ViewModels;
using System.Data.Entity;

namespace MovieR.Controllers
{
    public class CustomerController : Controller
    {
        //------------------------------------------------------------------------------------------------
        private ApplicationDbContext _context;

        public CustomerController()
        {
            _context = new ApplicationDbContext();
        }

        protected override void Dispose(bool disposing)
        {
            _context.Dispose();
        }
        //-------------------------------------------------------------------------------------------------

        [HttpPost]
        [ValidateAntiForgeryToken]
        public ActionResult Create(Customer customer)
        {
            if (!ModelState.IsValid)
            {
                var viewm = new NewCustomerViewModel
                {
                    customer = customer,
                    membershipTypes = _context.membershipTypes.ToList()
                };
                return View("New",viewm);
            }
            if (customer.Id == 0)
            {
                _context.Customer.Add(customer);
            }
            else
            {
                var customerinDB = _context.Customer.Single(c => c.Id == customer.Id);
                customerinDB.Name = customer.Name;
                customerinDB.IsSubscribed = customer.IsSubscribed;
                customerinDB.membershiptypeId = customer.membershiptypeId;
            }
            _context.SaveChanges();
            return RedirectToAction("Index", "Customer");
        }

        public ActionResult New()
        {
            var membershiptype = _context.membershipTypes.ToList();
            var ViewModel = new NewCustomerViewModel
            {
                customer=new Customer(),
                membershipTypes = membershiptype
            };
            return View(ViewModel);
        }

        // GET: Customer
        public ActionResult Index()
        {
            var customer = _context.Customer.Include(cc=>cc.membershiptype).ToList();
            
            var viewModel = new RandomMovieViewModel
            {
                Customers = customer
            };

            return View(viewModel);
        }

        public ActionResult details(int id, string name,Customer cust)
        {
            var customer = _context.Customer.Include(cc => cc.membershiptype).ToList();
            ViewBag.ids = id;
            ViewBag.names = name;
            var ccc = customer.Where(ccm => ccm.Id == id).Select(rr => rr.membershiptype.membershiptypename);
            ViewBag.custm = ccc;
            return View();
        }

        public ActionResult Edit(int id)
        {
            var customer = _context.Customer.SingleOrDefault(c => c.Id == id);
            if (customer == null)
            {
                return HttpNotFound();
            }
            else
            {
                var viewModel = new NewCustomerViewModel {
                    customer=customer,
                    membershipTypes=_context.membershipTypes.ToList()
                };
                return View("New",viewModel);
            }
        }
    }
}
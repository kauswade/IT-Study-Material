using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Web.Http;
using MovieR.Models;

namespace MovieR.Controllers.Api
{
    public class CustomerController : ApiController
    {
        private ApplicationDbContext _context;
        public CustomerController()
        {
            _context = new ApplicationDbContext();
        }
        public IEnumerable<Customer> GetCustomers()
        {
            return _context.Customer.ToList();
        }

        protected override void Dispose(bool disposing)
        {
            _context.Dispose();
        }
        public Customer GetCustomer(int id)
        {
            var customer = _context.Customer.SingleOrDefault(c => c.Id == id);
            if (customer == null)
            {
                throw new HttpResponseException(HttpStatusCode.NotFound);
            }
            else
            {
                return customer;
            }
        }

        [HttpPost]
        public Customer CreateCustomer(Customer customer)
        {
            if (!ModelState.IsValid)
            {
                throw new HttpResponseException(HttpStatusCode.BadRequest);
            }
            else
            {
                _context.Customer.Add(customer);
                _context.SaveChanges();

                return customer;
            }
        }
        [HttpPut]
        public void UpdateCustomer(int id,Customer customer)
        {
            if (!ModelState.IsValid)
            { 
                throw new HttpResponseException(HttpStatusCode.BadRequest);
            }

            var customerinDB = _context.Customer.SingleOrDefault(c => c.Id == id);
            if (customerinDB == null)
            {
                throw new HttpResponseException(HttpStatusCode.NotFound);

            }

            customerinDB.IsSubscribed = customer.IsSubscribed;
            customerinDB.Name = customer.Name;
            customerinDB.membershiptypeId = customer.membershiptypeId;
            _context.SaveChanges();

        }
        [HttpDelete]
        public void DeleteCustomer(int id)
        {
            var customerinDB = _context.Customer.SingleOrDefault(c => c.Id == id);
            if (customerinDB == null)
            {
                throw new HttpResponseException(HttpStatusCode.NotFound);

            }
            _context.Customer.Remove(customerinDB);
            _context.SaveChanges();
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;
using MovieR.Models;
using MovieR.ViewModels;

namespace MovieR.Controllers
{
    public class MoviesController : Controller
    {
        private ApplicationDbContext _context;
        public MoviesController()
        {
            _context = new ApplicationDbContext();
        }

        protected override void Dispose(bool disposing)
        {
            _context.Dispose();
        }
        //----------------------------------------------------




        // GET: Movies/Random
        public ActionResult Random()
        {
            Movie movie = new Movie();
            movie.Name = "Shrek";

            var customer = new List<Customer>();
            customer.Add(new Customer() { Name = "hello there" });
            customer.Add(new Customer() { Name = "customer2" });

            var viewModel = new RandomMovieViewModel();
            viewModel.movie = movie;
            viewModel.Customers = customer;

            return View(viewModel);
        }

        //---------------------------------------------------

        



        //GET:Movies
        public ActionResult Index()
        {
            var mov = _context.Movies.ToList();
            var movie = new RandomMovieViewModel() {

                Movie = mov
            };
            
            return View(movie);
        }

        public ActionResult New()
        {
            var newmovie = new MovieViewModel() {

                movie=new Movie()
            };
            
            return View(newmovie);
        }



        public ActionResult details(int Id)
        {
            var movies = _context.Movies.SingleOrDefault(cc => cc.Id == Id);
            return View(movies);
        }

        //----------------------------------------------------

        //GET:movies/released
        [Route("movies/released/{year}/{month}")]
        public ActionResult byReleaseDate(int year, int month)
        {
            return Content($"year={year} and month={month}");
        }


        [HttpPost]
        [ValidateAntiForgeryToken]
        public ActionResult Create(Movie movie)
        {
            if (!ModelState.IsValid)
            {
                var mov = new MovieViewModel()
                {
                    movie = movie
                };
                return View("New", mov);
            }
            if (movie.Id == 0)
            {
                _context.Movies.Add(movie);
            }
            else
            {
                var mov = _context.Movies.Single(c => c.Id == movie.Id);
                mov.Name = movie.Name;
                mov.noOfStock = movie.noOfStock;
                mov.releasedate = movie.releasedate;
                mov.genre = movie.genre;
            }
            _context.SaveChanges();
            return RedirectToAction("Index","Movies");
        }

        public ActionResult Edit(int Id)
        {
            var movie = _context.Movies.SingleOrDefault(c => c.Id == Id);
            var updatemovies = new MovieViewModel
            {
                movie = movie
            };
            return View("New",updatemovies);
        }
    }
}
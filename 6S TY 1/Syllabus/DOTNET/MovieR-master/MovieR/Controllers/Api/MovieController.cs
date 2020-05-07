using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Web.Http;
using MovieR.Models;

namespace MovieR.Controllers.Api
{

    public class MovieController : ApiController
    {
        private ApplicationDbContext _context;
        public MovieController()
        {
            _context = new ApplicationDbContext();
        }
        protected override void Dispose(bool disposing)
        {
            _context.Dispose();
        }
        [HttpGet]
        public Movie movies(int id)
        {
            var mov = _context.Movies.SingleOrDefault(c => c.Id == id);
            if (mov == null)
            {
                throw new HttpResponseException(HttpStatusCode.NotFound);
            }
            return mov;
        }

        [HttpGet]
        public IEnumerable<Movie> movies()
        {
            return _context.Movies.ToList();
        }


        

        [HttpPost]
        public Movie createMovie(Movie movie)
        {
            if (!ModelState.IsValid)
            {
                throw new HttpResponseException(HttpStatusCode.BadRequest);
            }
            else
            {
                _context.Movies.Add(movie);
                _context.SaveChanges();

                return movie;
                
            }


        }


        [HttpPut]
        public void UpdateMovie(int id,Movie movie)
        {
            if (!ModelState.IsValid)
            {
                throw new HttpResponseException(HttpStatusCode.BadRequest);
            }
            else
            {
                var MovDB = _context.Movies.SingleOrDefault(c => c.Id == id);
                if(MovDB == null)
                {
                    throw new HttpResponseException(HttpStatusCode.NotFound);
                }
                else
                {
                    MovDB.genre = movie.genre;
                    MovDB.Name = movie.Name;
                    MovDB.noOfStock = movie.noOfStock;
                    MovDB.releasedate = movie.releasedate;
                    _context.SaveChanges();
                }
            }
        }


        [HttpDelete]
        public void DelteMovie(int id)
        {
            var MovDB = _context.Movies.SingleOrDefault(c => c.Id == id);
            if (MovDB == null)
            {
                throw new HttpResponseException(HttpStatusCode.NotFound);
            }
            else
            {
                
                _context.Movies.Remove(MovDB);
                _context.SaveChanges();
            }
        }
    }
}

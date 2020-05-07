using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using MovieR.Models;

namespace MovieR.ViewModels
{
    public class RandomMovieViewModel
    {
        public Movie movie { get; set; }
        public List<Movie> Movie { get; set; }
        public List<Customer> Customers { get; set; }
        
    }
}
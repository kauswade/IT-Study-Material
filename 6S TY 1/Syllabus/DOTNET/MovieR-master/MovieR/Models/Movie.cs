using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Data.Entity;
using System.Linq;
using System.Web;

namespace MovieR.Models
{
    public class Movie
    {
        public int Id { get; set; }
        [Required]
        public string Name { get; set; }
        [Required]
        public string genre { get; set; }
        [Required]
        public string releasedate { get; set; }
        [Required]
        public int noOfStock { get; set; }
    }
}
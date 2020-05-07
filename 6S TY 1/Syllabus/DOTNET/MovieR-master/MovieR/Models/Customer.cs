using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Data.Entity;
using System.Linq;
using System.Web;

namespace MovieR.Models
{
    public class Customer
    {

        public int Id { get; set; }

        [Required]
        [Display(Name="Customer Name")]
        public string Name { get; set; }
        public bool IsSubscribed { get; set; }
        public MembershipTypes membershiptype { get; set; }

        [Display(Name="Membership Type")]
        public byte membershiptypeId { get; set; }

    }
}
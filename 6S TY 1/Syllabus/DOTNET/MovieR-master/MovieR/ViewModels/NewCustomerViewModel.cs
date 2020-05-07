using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using MovieR.Models;

namespace MovieR.ViewModels
{
    public class NewCustomerViewModel
    {
        public IEnumerable<MembershipTypes> membershipTypes { get; set; }
        public Customer customer { get; set; }

    }
}
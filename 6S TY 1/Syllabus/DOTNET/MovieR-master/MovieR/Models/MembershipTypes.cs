using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace MovieR.Models
{
    public class MembershipTypes
    {
        public byte Id { get; set; }
        public short signupfee { get; set; }
        public byte DurationinMonths { get; set; }
        public byte DiscountRate { get; set; }
        public string membershiptypename { get; set; }
    }
}
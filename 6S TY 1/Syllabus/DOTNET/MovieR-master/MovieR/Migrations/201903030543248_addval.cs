namespace MovieR.Migrations
{
    using System;
    using System.Data.Entity.Migrations;
    
    public partial class addval : DbMigration
    {
        public override void Up()
        {
            Sql("UPDATE MembershipTypes SET membershiptypename = 'pay-on-go' WHERE DurationinMonths = 0");
            Sql("UPDATE MembershipTypes SET membershiptypename = 'monthly' WHERE DurationinMonths = 1");
            Sql("UPDATE MembershipTypes SET membershiptypename = '3-moths' WHERE DurationinMonths = 3");
            Sql("UPDATE MembershipTypes SET membershiptypename = 'yearly' WHERE DurationinMonths = 12");
        }
        
        public override void Down()
        {
        }
    }
}

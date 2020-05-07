namespace MovieR.Migrations
{
    using System;
    using System.Data.Entity.Migrations;
    
    public partial class newaddition : DbMigration
    {
        public override void Up()
        {
            Sql("UPDATE MembershipTypes SET membershiptypename = '3-months' WHERE DurationinMonths = 3");
        }
        
        public override void Down()
        {
        }
    }
}

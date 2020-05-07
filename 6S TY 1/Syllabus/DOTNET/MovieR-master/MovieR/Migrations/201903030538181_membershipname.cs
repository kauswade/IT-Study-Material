namespace MovieR.Migrations
{
    using System;
    using System.Data.Entity.Migrations;
    
    public partial class membershipname : DbMigration
    {
        public override void Up()
        {
            AddColumn("dbo.MembershipTypes", "membershiptypename", c => c.String());
        }
        
        public override void Down()
        {
            DropColumn("dbo.MembershipTypes", "membershiptypename");
        }
    }
}

namespace MovieR.Migrations
{
    using System;
    using System.Data.Entity.Migrations;
    
    public partial class moviecol : DbMigration
    {
        public override void Up()
        {
            AddColumn("dbo.Movies", "releasedate", c => c.String());
            AddColumn("dbo.Movies", "noOfStock", c => c.Int(nullable: false));
        }
        
        public override void Down()
        {
            DropColumn("dbo.Movies", "noOfStock");
            DropColumn("dbo.Movies", "releasedate");
        }
    }
}

//
//  GBACheatManagerTableViewCell.m
//  GBA4iOS
//
//  Created by Riley Testut on 8/27/13.
//  Copyright (c) 2013 Riley Testut. All rights reserved.
//

#import "GBACheatManagerTableViewCell.h"

@implementation GBACheatManagerTableViewCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:UITableViewCellStyleValue1 reuseIdentifier:reuseIdentifier];
    if (self)
    {
        self.detailTextLabel.textColor = [UIColor purpleColor];
        self.showsReorderControl = YES;
    }
    return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (void)setEditing:(BOOL)editing animated:(BOOL)animated
{
    [super setEditing:editing animated:animated];
    
    if (editing)
    {
        self.detailTextLabel.hidden = YES;
    }
    else
    {
        self.detailTextLabel.hidden = NO;
    }
}

@end
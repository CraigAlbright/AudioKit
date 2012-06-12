//
//  ReverbViewController.h
//  ExampleProject
//
//  Created by Aurelius Prochazka on 6/9/12.
//  Copyright (c) 2012 Hear For Yourself. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CSDManager.h"
#import "ToneGenerator.h"
#import "EffectsProcessor.h"

@interface ReverbViewController : UIViewController {
    EffectsProcessor * fx;
    ToneGenerator * toneGenerator;
    CSDOrchestra * myOrchestra;
}
- (IBAction)hit1:(id)sender;
- (IBAction)hit2:(id)sender;


@end
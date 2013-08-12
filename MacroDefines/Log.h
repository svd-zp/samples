//  Created by Serg Dergach
//  Copyright (c) 2013 Serg Dergach. All rights reserved.


#ifdef DEBUG
#   define  SLog(fmt, ...) NSLog((@"%s " fmt), __FUNCTION__, ##__VA_ARGS__);
#   define  FLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#   define  SLog(...)
#   define  FLog(...)
#endif

//
//  SPMaros.h
//  Pods
//
//  Created by huanglexian on 16/4/3.
//
//

#ifndef SPMaros_h
#define SPMaros_h

/**
 *  颜色 - 通过十六进制的颜色值生成颜色对象
 *
 *  @param s 十六进制的颜色值
 *
 *  @return UIColor 对象
 */
#define SPM_colorWithHex(s) [UIColor colorWithRed:(((s & 0xFF0000) >> 16))/255.0 green:(((s &0xFF00) >>8))/255.0 blue:((s &0xFF))/255.0 alpha:1.0]

#endif /* SPMaros_h */

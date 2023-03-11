//
//  ViewController.h
//  StudyObjC
//
//  Created by Insu on 2023/03/11.
//

// C언어의 #include와 다른점은 같은 헤더 파일이 여러번 불리는 것을 알아서 방지해줌
// 외부 라이브러리, 프레임워크 뿐만 아니라, 프로젝트 내에 선언된 클래스 등을 불러올 때도 꼭 import 해주어야 함
#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    NSString *name; // 인스턴스 변수
}

@property NSString *alias;  // 속성

@end


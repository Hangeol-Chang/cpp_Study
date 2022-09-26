## 디자인 패턴
> 코드 예시는 cpp파일들 참고.

### Creational Patterns
#### Abstract Factory
##### 추상화
- 상위의 인터페이스를 정의하고, 이를 이용하여 다양한 클래스를 제작.

##### 인터페이스를 제작하는 공장
- 인터페이스를 제작하는 메서드를 가진 인터페이스(공장) 생성.

- 클라이언트는 생성된 모든 객체를 추상화해서 생각함.

#### Bulilder
복잡한 객체를 차례차례 조립하여 생성할 수 있게 해 줌.
construction code를 사용하여, 한 객체를 다양하게 표현할 수 있음.

집을 만든다고 생각해보자.
간단한 집을 만들기 위해서는, 단순히 네 개의 벽과 바닥, 문, 창문, 천장 정도만 필요하다.
하지만, 더 크고, 밝고, 정원과 난방, 전자 등등을 고려하게 되면 어떨까

가장 간단한 방법은, base가 되는 '집'에 부수적인 모듈을 붙여나가는 것이다.
이렇게 붙여나가지 않는다면, 너는 모든 것을 가진 '집'에서 하나씩 떼어가며 원하는 형태의 집을 만들 수 있다.

하지만, 2번 방법(하나씩 떼어가는)으로 제작할 시, constructor call이 지저분해 질 수 있다. 그러므로 1번 방법(하나씩 붙여가는)을 주로 사용하고, 이를 builder pattern이라고 한다.

---
빌더 패턴은 객체의 생성자를 각각의 class로 분리시킨다.
이 중에서 필요한 생성자만 가져와서 객체를 생성한다.

##### Director 감독관
- 빌드 순서를 관리한다.
- 반드시 필요한 것은 아니지만, 있으면 코드 재사용에 용이하다.

#### Factory Method
부모클래스가 객체를 생성할 때, 하위클래스를 교체할 수 있도록 하는 디자인 패턴.
객체의 생성자가 Factory를 통해 관리됨.


#### Prototype
#### Singleton

### Structural Patterns
#### Adapter
#### Bridge
#### Composite
#### Decorator
#### Facade
#### Flyweight
#### Proxy

### Behavioral Patterns
#### Chain of Responsivility
#### Command
#### Iterator
#### Mediator
#### Memento
#### Observer
#### State
#### Strategy
#### Template Method
#### Visitor


##### 참고자료
https://refactoring.guru/design-patterns/cpp
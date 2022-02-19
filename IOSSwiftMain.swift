import Foundation
import Glibc


// Question1
// var x = 5

// func inc() -> Int{
//     defer {x += 1}
//     return x
// }
// x = inc()
// let res = inc()
// print(x, res,x)

// Question2
// class SwiftC{
//     var diff: Int?=0
// }

// var swift1 = SwiftC()
// var swift2 = SwiftC()

// swift2.diff = 2

// print(swift1.diff)


// Question3
// protocol
// DProtocol{func render()} 

// extension
// DProtocol{
//     func circle(){
//         print("protocol")
//     }
//     func render(){
//         circle()
//     }
// }

// class SVG: DProtocol{
//     func circle(){
//         print("class")
//     }
// }
// SVG().render()


// Question4
// func +(l: CGPoint, r: CGPoint) -> CGPoint{
//     return CGPoint(x: l.x + r.x, y: l.y + r.y)
// }
// var rect = CGRect(x:30, y:0, width:320, height:480)
// rect.origin + CGPoint(x:10, y:10) 
// rect.origin + CGPoint(x:50, y:10) 

// print(rect.origin)


// Question5
// var code = 200
// let res: Result<Int, Error> = .success(code)
// code  = 404
// switch res{
//     case .success(code): print(code)
//     case  .failure(_): print("403")
//     default: print("500")
// }


// Question6
// struct XA {
//     static var xa = "Adv"
//     var xb: String{
//         didSet{
//             XA.xa = oldValue
//         }
//     }
// }

// var objXA = XA(xb:"Turing")
// print(XA.xa)
// objXA.xb = "Swift"
// print(XA.xa)
// let objXB = XA(xb: "Quiz")
// print(XA.xa)



// Question7
// func sqr<T>(_ value: T) -> T{
//     return value * value
// }
// print(sqr(2)) 


// Question8
// class PersonalComputer{
//     var system: Stringvar price: Doubleinit(system: String, price: Double){
//         self.system = system
//         self.price = price   
//     }
// }
// class client{
//     var name: Stringvar personalComputer: PersonalComputerinit(name: String, pc: PersonalComputer){
//         self.name = name
//         self.personalComputer = pc 
//     }
// }

// var PC = PersonalComputer(system: "MacOS", price: 12000)
// var rian = Client(name:"Rian", pc:PC)
// var d = Client(name:"Daniel", pc:PC)

// d.personalComputer.price -= 1000

// print(rian.personalComputer.price)


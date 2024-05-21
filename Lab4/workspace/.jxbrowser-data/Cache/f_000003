(function(){/*

 Copyright The Closure Library Authors.
 SPDX-License-Identifier: Apache-2.0
*/
'use strict';var k;function aa(a){var b=0;return function(){return b<a.length?{done:!1,value:a[b++]}:{done:!0}}}
var ba="function"==typeof Object.defineProperties?Object.defineProperty:function(a,b,c){if(a==Array.prototype||a==Object.prototype)return a;a[b]=c.value;return a};
function ca(a){a=["object"==typeof globalThis&&globalThis,a,"object"==typeof window&&window,"object"==typeof self&&self,"object"==typeof global&&global];for(var b=0;b<a.length;++b){var c=a[b];if(c&&c.Math==Math)return c}throw Error("Cannot find global object");}
var da=ca(this);function p(a,b){if(b)a:{var c=da;a=a.split(".");for(var d=0;d<a.length-1;d++){var e=a[d];if(!(e in c))break a;c=c[e]}a=a[a.length-1];d=c[a];b=b(d);b!=d&&null!=b&&ba(c,a,{configurable:!0,writable:!0,value:b})}}
p("Symbol",function(a){function b(f){if(this instanceof b)throw new TypeError("Symbol is not a constructor");return new c(d+(f||"")+"_"+e++,f)}
function c(f,g){this.h=f;ba(this,"description",{configurable:!0,writable:!0,value:g})}
if(a)return a;c.prototype.toString=function(){return this.h};
var d="jscomp_symbol_"+(1E9*Math.random()>>>0)+"_",e=0;return b});
p("Symbol.iterator",function(a){if(a)return a;a=Symbol("Symbol.iterator");for(var b="Array Int8Array Uint8Array Uint8ClampedArray Int16Array Uint16Array Int32Array Uint32Array Float32Array Float64Array".split(" "),c=0;c<b.length;c++){var d=da[b[c]];"function"===typeof d&&"function"!=typeof d.prototype[a]&&ba(d.prototype,a,{configurable:!0,writable:!0,value:function(){return ea(aa(this))}})}return a});
function ea(a){a={next:a};a[Symbol.iterator]=function(){return this};
return a}
function fa(a){return a.raw=a}
function r(a){var b="undefined"!=typeof Symbol&&Symbol.iterator&&a[Symbol.iterator];if(b)return b.call(a);if("number"==typeof a.length)return{next:aa(a)};throw Error(String(a)+" is not an iterable or ArrayLike");}
function ha(a){if(!(a instanceof Array)){a=r(a);for(var b,c=[];!(b=a.next()).done;)c.push(b.value);a=c}return a}
function ja(a,b){return Object.prototype.hasOwnProperty.call(a,b)}
var ka="function"==typeof Object.assign?Object.assign:function(a,b){for(var c=1;c<arguments.length;c++){var d=arguments[c];if(d)for(var e in d)ja(d,e)&&(a[e]=d[e])}return a};
p("Object.assign",function(a){return a||ka});
var la="function"==typeof Object.create?Object.create:function(a){function b(){}
b.prototype=a;return new b},ma=function(){function a(){function c(){}
new c;Reflect.construct(c,[],function(){});
return new c instanceof c}
if("undefined"!=typeof Reflect&&Reflect.construct){if(a())return Reflect.construct;var b=Reflect.construct;return function(c,d,e){c=b(c,d);e&&Reflect.setPrototypeOf(c,e.prototype);return c}}return function(c,d,e){void 0===e&&(e=c);
e=la(e.prototype||Object.prototype);return Function.prototype.apply.call(c,e,d)||e}}(),na;
if("function"==typeof Object.setPrototypeOf)na=Object.setPrototypeOf;else{var oa;a:{var pa={a:!0},qa={};try{qa.__proto__=pa;oa=qa.a;break a}catch(a){}oa=!1}na=oa?function(a,b){a.__proto__=b;if(a.__proto__!==b)throw new TypeError(a+" is not extensible");return a}:null}var sa=na;
function v(a,b){a.prototype=la(b.prototype);a.prototype.constructor=a;if(sa)sa(a,b);else for(var c in b)if("prototype"!=c)if(Object.defineProperties){var d=Object.getOwnPropertyDescriptor(b,c);d&&Object.defineProperty(a,c,d)}else a[c]=b[c];a.ta=b.prototype}
function ta(){this.H=!1;this.l=null;this.i=void 0;this.h=1;this.m=this.s=0;this.A=this.j=null}
function ua(a){if(a.H)throw new TypeError("Generator is already running");a.H=!0}
ta.prototype.W=function(a){this.i=a};
function wa(a,b){a.j={md:b,wd:!0};a.h=a.s||a.m}
ta.prototype.return=function(a){this.j={return:a};this.h=this.m};
function w(a,b,c){a.h=c;return{value:b}}
ta.prototype.v=function(a){this.h=a};
function xa(a,b,c){a.s=b;void 0!=c&&(a.m=c)}
function ya(a,b){a.h=b;a.s=0}
function za(a){a.s=0;var b=a.j.md;a.j=null;return b}
function Aa(a){a.A=[a.j];a.s=0;a.m=0}
function Ca(a){var b=a.A.splice(0)[0];(b=a.j=a.j||b)?b.wd?a.h=a.s||a.m:void 0!=b.v&&a.m<b.v?(a.h=b.v,a.j=null):a.h=a.m:a.h=0}
function Da(a){this.h=new ta;this.i=a}
function Ea(a,b){ua(a.h);var c=a.h.l;if(c)return Fa(a,"return"in c?c["return"]:function(d){return{value:d,done:!0}},b,a.h.return);
a.h.return(b);return Ga(a)}
function Fa(a,b,c,d){try{var e=b.call(a.h.l,c);if(!(e instanceof Object))throw new TypeError("Iterator result "+e+" is not an object");if(!e.done)return a.h.H=!1,e;var f=e.value}catch(g){return a.h.l=null,wa(a.h,g),Ga(a)}a.h.l=null;d.call(a.h,f);return Ga(a)}
function Ga(a){for(;a.h.h;)try{var b=a.i(a.h);if(b)return a.h.H=!1,{value:b.value,done:!1}}catch(c){a.h.i=void 0,wa(a.h,c)}a.h.H=!1;if(a.h.j){b=a.h.j;a.h.j=null;if(b.wd)throw b.md;return{value:b.return,done:!0}}return{value:void 0,done:!0}}
function Ha(a){this.next=function(b){ua(a.h);a.h.l?b=Fa(a,a.h.l.next,b,a.h.W):(a.h.W(b),b=Ga(a));return b};
this.throw=function(b){ua(a.h);a.h.l?b=Fa(a,a.h.l["throw"],b,a.h.W):(wa(a.h,b),b=Ga(a));return b};
this.return=function(b){return Ea(a,b)};
this[Symbol.iterator]=function(){return this}}
function Ia(a){function b(d){return a.next(d)}
function c(d){return a.throw(d)}
return new Promise(function(d,e){function f(g){g.done?d(g.value):Promise.resolve(g.value).then(b,c).then(f,e)}
f(a.next())})}
function x(a){return Ia(new Ha(new Da(a)))}
function Ja(){for(var a=Number(this),b=[],c=a;c<arguments.length;c++)b[c-a]=arguments[c];return b}
p("Reflect",function(a){return a?a:{}});
p("Reflect.construct",function(){return ma});
p("Reflect.setPrototypeOf",function(a){return a?a:sa?function(b,c){try{return sa(b,c),!0}catch(d){return!1}}:null});
p("Promise",function(a){function b(g){this.h=0;this.j=void 0;this.i=[];this.H=!1;var h=this.l();try{g(h.resolve,h.reject)}catch(l){h.reject(l)}}
function c(){this.h=null}
function d(g){return g instanceof b?g:new b(function(h){h(g)})}
if(a)return a;c.prototype.i=function(g){if(null==this.h){this.h=[];var h=this;this.j(function(){h.m()})}this.h.push(g)};
var e=da.setTimeout;c.prototype.j=function(g){e(g,0)};
c.prototype.m=function(){for(;this.h&&this.h.length;){var g=this.h;this.h=[];for(var h=0;h<g.length;++h){var l=g[h];g[h]=null;try{l()}catch(m){this.l(m)}}}this.h=null};
c.prototype.l=function(g){this.j(function(){throw g;})};
b.prototype.l=function(){function g(m){return function(n){l||(l=!0,m.call(h,n))}}
var h=this,l=!1;return{resolve:g(this.U),reject:g(this.m)}};
b.prototype.U=function(g){if(g===this)this.m(new TypeError("A Promise cannot resolve to itself"));else if(g instanceof b)this.Z(g);else{a:switch(typeof g){case "object":var h=null!=g;break a;case "function":h=!0;break a;default:h=!1}h?this.R(g):this.s(g)}};
b.prototype.R=function(g){var h=void 0;try{h=g.then}catch(l){this.m(l);return}"function"==typeof h?this.ha(h,g):this.s(g)};
b.prototype.m=function(g){this.W(2,g)};
b.prototype.s=function(g){this.W(1,g)};
b.prototype.W=function(g,h){if(0!=this.h)throw Error("Cannot settle("+g+", "+h+"): Promise already settled in state"+this.h);this.h=g;this.j=h;2===this.h&&this.Y();this.A()};
b.prototype.Y=function(){var g=this;e(function(){if(g.L()){var h=da.console;"undefined"!==typeof h&&h.error(g.j)}},1)};
b.prototype.L=function(){if(this.H)return!1;var g=da.CustomEvent,h=da.Event,l=da.dispatchEvent;if("undefined"===typeof l)return!0;"function"===typeof g?g=new g("unhandledrejection",{cancelable:!0}):"function"===typeof h?g=new h("unhandledrejection",{cancelable:!0}):(g=da.document.createEvent("CustomEvent"),g.initCustomEvent("unhandledrejection",!1,!0,g));g.promise=this;g.reason=this.j;return l(g)};
b.prototype.A=function(){if(null!=this.i){for(var g=0;g<this.i.length;++g)f.i(this.i[g]);this.i=null}};
var f=new c;b.prototype.Z=function(g){var h=this.l();g.cc(h.resolve,h.reject)};
b.prototype.ha=function(g,h){var l=this.l();try{g.call(h,l.resolve,l.reject)}catch(m){l.reject(m)}};
b.prototype.then=function(g,h){function l(u,t){return"function"==typeof u?function(B){try{m(u(B))}catch(C){n(C)}}:t}
var m,n,q=new b(function(u,t){m=u;n=t});
this.cc(l(g,m),l(h,n));return q};
b.prototype.catch=function(g){return this.then(void 0,g)};
b.prototype.cc=function(g,h){function l(){switch(m.h){case 1:g(m.j);break;case 2:h(m.j);break;default:throw Error("Unexpected state: "+m.h);}}
var m=this;null==this.i?f.i(l):this.i.push(l);this.H=!0};
b.resolve=d;b.reject=function(g){return new b(function(h,l){l(g)})};
b.race=function(g){return new b(function(h,l){for(var m=r(g),n=m.next();!n.done;n=m.next())d(n.value).cc(h,l)})};
b.all=function(g){var h=r(g),l=h.next();return l.done?d([]):new b(function(m,n){function q(B){return function(C){u[B]=C;t--;0==t&&m(u)}}
var u=[],t=0;do u.push(void 0),t++,d(l.value).cc(q(u.length-1),n),l=h.next();while(!l.done)})};
return b});
p("WeakMap",function(a){function b(l){this.h=(h+=Math.random()+1).toString();if(l){l=r(l);for(var m;!(m=l.next()).done;)m=m.value,this.set(m[0],m[1])}}
function c(){}
function d(l){var m=typeof l;return"object"===m&&null!==l||"function"===m}
function e(l){if(!ja(l,g)){var m=new c;ba(l,g,{value:m})}}
function f(l){var m=Object[l];m&&(Object[l]=function(n){if(n instanceof c)return n;Object.isExtensible(n)&&e(n);return m(n)})}
if(function(){if(!a||!Object.seal)return!1;try{var l=Object.seal({}),m=Object.seal({}),n=new a([[l,2],[m,3]]);if(2!=n.get(l)||3!=n.get(m))return!1;n.delete(l);n.set(m,4);return!n.has(l)&&4==n.get(m)}catch(q){return!1}}())return a;
var g="$jscomp_hidden_"+Math.random();f("freeze");f("preventExtensions");f("seal");var h=0;b.prototype.set=function(l,m){if(!d(l))throw Error("Invalid WeakMap key");e(l);if(!ja(l,g))throw Error("WeakMap key fail: "+l);l[g][this.h]=m;return this};
b.prototype.get=function(l){return d(l)&&ja(l,g)?l[g][this.h]:void 0};
b.prototype.has=function(l){return d(l)&&ja(l,g)&&ja(l[g],this.h)};
b.prototype.delete=function(l){return d(l)&&ja(l,g)&&ja(l[g],this.h)?delete l[g][this.h]:!1};
return b});
p("Map",function(a){function b(){var h={};return h.previous=h.next=h.head=h}
function c(h,l){var m=h.h;return ea(function(){if(m){for(;m.head!=h.h;)m=m.previous;for(;m.next!=m.head;)return m=m.next,{done:!1,value:l(m)};m=null}return{done:!0,value:void 0}})}
function d(h,l){var m=l&&typeof l;"object"==m||"function"==m?f.has(l)?m=f.get(l):(m=""+ ++g,f.set(l,m)):m="p_"+l;var n=h.data_[m];if(n&&ja(h.data_,m))for(h=0;h<n.length;h++){var q=n[h];if(l!==l&&q.key!==q.key||l===q.key)return{id:m,list:n,index:h,entry:q}}return{id:m,list:n,index:-1,entry:void 0}}
function e(h){this.data_={};this.h=b();this.size=0;if(h){h=r(h);for(var l;!(l=h.next()).done;)l=l.value,this.set(l[0],l[1])}}
if(function(){if(!a||"function"!=typeof a||!a.prototype.entries||"function"!=typeof Object.seal)return!1;try{var h=Object.seal({x:4}),l=new a(r([[h,"s"]]));if("s"!=l.get(h)||1!=l.size||l.get({x:4})||l.set({x:4},"t")!=l||2!=l.size)return!1;var m=l.entries(),n=m.next();if(n.done||n.value[0]!=h||"s"!=n.value[1])return!1;n=m.next();return n.done||4!=n.value[0].x||"t"!=n.value[1]||!m.next().done?!1:!0}catch(q){return!1}}())return a;
var f=new WeakMap;e.prototype.set=function(h,l){h=0===h?0:h;var m=d(this,h);m.list||(m.list=this.data_[m.id]=[]);m.entry?m.entry.value=l:(m.entry={next:this.h,previous:this.h.previous,head:this.h,key:h,value:l},m.list.push(m.entry),this.h.previous.next=m.entry,this.h.previous=m.entry,this.size++);return this};
e.prototype.delete=function(h){h=d(this,h);return h.entry&&h.list?(h.list.splice(h.index,1),h.list.length||delete this.data_[h.id],h.entry.previous.next=h.entry.next,h.entry.next.previous=h.entry.previous,h.entry.head=null,this.size--,!0):!1};
e.prototype.clear=function(){this.data_={};this.h=this.h.previous=b();this.size=0};
e.prototype.has=function(h){return!!d(this,h).entry};
e.prototype.get=function(h){return(h=d(this,h).entry)&&h.value};
e.prototype.entries=function(){return c(this,function(h){return[h.key,h.value]})};
e.prototype.keys=function(){return c(this,function(h){return h.key})};
e.prototype.values=function(){return c(this,function(h){return h.value})};
e.prototype.forEach=function(h,l){for(var m=this.entries(),n;!(n=m.next()).done;)n=n.value,h.call(l,n[1],n[0],this)};
e.prototype[Symbol.iterator]=e.prototype.entries;var g=0;return e});
function Ka(a,b,c){if(null==a)throw new TypeError("The 'this' value for String.prototype."+c+" must not be null or undefined");if(b instanceof RegExp)throw new TypeError("First argument to String.prototype."+c+" must not be a regular expression");return a+""}
p("String.prototype.endsWith",function(a){return a?a:function(b,c){var d=Ka(this,b,"endsWith");b+="";void 0===c&&(c=d.length);c=Math.max(0,Math.min(c|0,d.length));for(var e=b.length;0<e&&0<c;)if(d[--c]!=b[--e])return!1;return 0>=e}});
p("Array.prototype.find",function(a){return a?a:function(b,c){a:{var d=this;d instanceof String&&(d=String(d));for(var e=d.length,f=0;f<e;f++){var g=d[f];if(b.call(c,g,f,d)){b=g;break a}}b=void 0}return b}});
p("String.prototype.startsWith",function(a){return a?a:function(b,c){var d=Ka(this,b,"startsWith");b+="";var e=d.length,f=b.length;c=Math.max(0,Math.min(c|0,d.length));for(var g=0;g<f&&c<e;)if(d[c++]!=b[g++])return!1;return g>=f}});
p("Number.isFinite",function(a){return a?a:function(b){return"number"!==typeof b?!1:!isNaN(b)&&Infinity!==b&&-Infinity!==b}});
p("Number.MAX_SAFE_INTEGER",function(){return 9007199254740991});
p("Number.isNaN",function(a){return a?a:function(b){return"number"===typeof b&&isNaN(b)}});
function La(a,b){a instanceof String&&(a+="");var c=0,d=!1,e={next:function(){if(!d&&c<a.length){var f=c++;return{value:b(f,a[f]),done:!1}}d=!0;return{done:!0,value:void 0}}};
e[Symbol.iterator]=function(){return e};
return e}
p("Array.prototype.entries",function(a){return a?a:function(){return La(this,function(b,c){return[b,c]})}});
p("Array.from",function(a){return a?a:function(b,c,d){c=null!=c?c:function(h){return h};
var e=[],f="undefined"!=typeof Symbol&&Symbol.iterator&&b[Symbol.iterator];if("function"==typeof f){b=f.call(b);for(var g=0;!(f=b.next()).done;)e.push(c.call(d,f.value,g++))}else for(f=b.length,g=0;g<f;g++)e.push(c.call(d,b[g],g));return e}});
p("Array.prototype.keys",function(a){return a?a:function(){return La(this,function(b){return b})}});
p("Number.isInteger",function(a){return a?a:function(b){return Number.isFinite(b)?b===Math.floor(b):!1}});
p("Array.prototype.values",function(a){return a?a:function(){return La(this,function(b,c){return c})}});
p("Object.setPrototypeOf",function(a){return a||sa});
p("Set",function(a){function b(c){this.h=new Map;if(c){c=r(c);for(var d;!(d=c.next()).done;)this.add(d.value)}this.size=this.h.size}
if(function(){if(!a||"function"!=typeof a||!a.prototype.entries||"function"!=typeof Object.seal)return!1;try{var c=Object.seal({x:4}),d=new a(r([c]));if(!d.has(c)||1!=d.size||d.add(c)!=d||1!=d.size||d.add({x:4})!=d||2!=d.size)return!1;var e=d.entries(),f=e.next();if(f.done||f.value[0]!=c||f.value[1]!=c)return!1;f=e.next();return f.done||f.value[0]==c||4!=f.value[0].x||f.value[1]!=f.value[0]?!1:e.next().done}catch(g){return!1}}())return a;
b.prototype.add=function(c){c=0===c?0:c;this.h.set(c,c);this.size=this.h.size;return this};
b.prototype.delete=function(c){c=this.h.delete(c);this.size=this.h.size;return c};
b.prototype.clear=function(){this.h.clear();this.size=0};
b.prototype.has=function(c){return this.h.has(c)};
b.prototype.entries=function(){return this.h.entries()};
b.prototype.values=function(){return this.h.values()};
b.prototype.keys=b.prototype.values;b.prototype[Symbol.iterator]=b.prototype.values;b.prototype.forEach=function(c,d){var e=this;this.h.forEach(function(f){return c.call(d,f,f,e)})};
return b});
p("Object.entries",function(a){return a?a:function(b){var c=[],d;for(d in b)ja(b,d)&&c.push([d,b[d]]);return c}});
p("Object.is",function(a){return a?a:function(b,c){return b===c?0!==b||1/b===1/c:b!==b&&c!==c}});
p("Array.prototype.includes",function(a){return a?a:function(b,c){var d=this;d instanceof String&&(d=String(d));var e=d.length;c=c||0;for(0>c&&(c=Math.max(c+e,0));c<e;c++){var f=d[c];if(f===b||Object.is(f,b))return!0}return!1}});
p("String.prototype.includes",function(a){return a?a:function(b,c){return-1!==Ka(this,b,"includes").indexOf(b,c||0)}});
p("globalThis",function(a){return a||da});
p("Object.values",function(a){return a?a:function(b){var c=[],d;for(d in b)ja(b,d)&&c.push(b[d]);return c}});
var Ma=Ma||{},y=this||self;function z(a,b,c){a=a.split(".");c=c||y;a[0]in c||"undefined"==typeof c.execScript||c.execScript("var "+a[0]);for(var d;a.length&&(d=a.shift());)a.length||void 0===b?c[d]&&c[d]!==Object.prototype[d]?c=c[d]:c=c[d]={}:c[d]=b}
function A(a,b){a=a.split(".");b=b||y;for(var c=0;c<a.length;c++)if(b=b[a[c]],null==b)return null;return b}
function Na(a){var b=typeof a;return"object"!=b?b:a?Array.isArray(a)?"array":b:"null"}
function Pa(a){var b=Na(a);return"array"==b||"object"==b&&"number"==typeof a.length}
function Qa(a){var b=typeof a;return"object"==b&&null!=a||"function"==b}
function Ra(a){return Object.prototype.hasOwnProperty.call(a,Sa)&&a[Sa]||(a[Sa]=++Ta)}
var Sa="closure_uid_"+(1E9*Math.random()>>>0),Ta=0;function Ua(a,b,c){return a.call.apply(a.bind,arguments)}
function Va(a,b,c){if(!a)throw Error();if(2<arguments.length){var d=Array.prototype.slice.call(arguments,2);return function(){var e=Array.prototype.slice.call(arguments);Array.prototype.unshift.apply(e,d);return a.apply(b,e)}}return function(){return a.apply(b,arguments)}}
function Wa(a,b,c){Function.prototype.bind&&-1!=Function.prototype.bind.toString().indexOf("native code")?Wa=Ua:Wa=Va;return Wa.apply(null,arguments)}
function Xa(a,b){var c=Array.prototype.slice.call(arguments,1);return function(){var d=c.slice();d.push.apply(d,arguments);return a.apply(this,d)}}
function Ya(a,b){function c(){}
c.prototype=b.prototype;a.ta=b.prototype;a.prototype=new c;a.prototype.constructor=a;a.og=function(d,e,f){for(var g=Array(arguments.length-2),h=2;h<arguments.length;h++)g[h-2]=arguments[h];return b.prototype[e].apply(d,g)}}
function Za(a){return a}
;function ab(a,b){if(Error.captureStackTrace)Error.captureStackTrace(this,ab);else{var c=Error().stack;c&&(this.stack=c)}a&&(this.message=String(a));void 0!==b&&(this.cause=b)}
Ya(ab,Error);ab.prototype.name="CustomError";function bb(a){a=a.url;var b=/[?&]dsh=1(&|$)/.test(a);this.j=!b&&/[?&]ae=1(&|$)/.test(a);this.l=!b&&/[?&]ae=2(&|$)/.test(a);if((this.h=/[?&]adurl=([^&]*)/.exec(a))&&this.h[1]){try{var c=decodeURIComponent(this.h[1])}catch(d){c=null}this.i=c}}
;function cb(){}
function db(a){var b=!1,c;return function(){b||(c=a(),b=!0);return c}}
;var eb=Array.prototype.indexOf?function(a,b){return Array.prototype.indexOf.call(a,b,void 0)}:function(a,b){if("string"===typeof a)return"string"!==typeof b||1!=b.length?-1:a.indexOf(b,0);
for(var c=0;c<a.length;c++)if(c in a&&a[c]===b)return c;return-1},fb=Array.prototype.forEach?function(a,b,c){Array.prototype.forEach.call(a,b,c)}:function(a,b,c){for(var d=a.length,e="string"===typeof a?a.split(""):a,f=0;f<d;f++)f in e&&b.call(c,e[f],f,a)},gb=Array.prototype.filter?function(a,b){return Array.prototype.filter.call(a,b,void 0)}:function(a,b){for(var c=a.length,d=[],e=0,f="string"===typeof a?a.split(""):a,g=0;g<c;g++)if(g in f){var h=f[g];
b.call(void 0,h,g,a)&&(d[e++]=h)}return d},hb=Array.prototype.map?function(a,b){return Array.prototype.map.call(a,b,void 0)}:function(a,b){for(var c=a.length,d=Array(c),e="string"===typeof a?a.split(""):a,f=0;f<c;f++)f in e&&(d[f]=b.call(void 0,e[f],f,a));
return d},ib=Array.prototype.reduce?function(a,b,c){return Array.prototype.reduce.call(a,b,c)}:function(a,b,c){var d=c;
fb(a,function(e,f){d=b.call(void 0,d,e,f,a)});
return d};
function jb(a,b){a:{for(var c=a.length,d="string"===typeof a?a.split(""):a,e=0;e<c;e++)if(e in d&&b.call(void 0,d[e],e,a)){b=e;break a}b=-1}return 0>b?null:"string"===typeof a?a.charAt(b):a[b]}
function kb(a,b){b=eb(a,b);var c;(c=0<=b)&&Array.prototype.splice.call(a,b,1);return c}
function lb(a,b){for(var c=1;c<arguments.length;c++){var d=arguments[c];if(Pa(d)){var e=a.length||0,f=d.length||0;a.length=e+f;for(var g=0;g<f;g++)a[e+g]=d[g]}else a.push(d)}}
;function mb(a,b){for(var c in a)b.call(void 0,a[c],c,a)}
function nb(a){var b=ob,c;for(c in b)if(a.call(void 0,b[c],c,b))return c}
function pb(a){for(var b in a)return!1;return!0}
function qb(a,b){if(null!==a&&b in a)throw Error('The object already contains the key "'+b+'"');a[b]=!0}
function rb(a){return null!==a&&"privembed"in a?a.privembed:!1}
function sb(a,b){for(var c in a)if(!(c in b)||a[c]!==b[c])return!1;for(var d in b)if(!(d in a))return!1;return!0}
function tb(a){var b={},c;for(c in a)b[c]=a[c];return b}
function ub(a){if(!a||"object"!==typeof a)return a;if("function"===typeof a.clone)return a.clone();if("undefined"!==typeof Map&&a instanceof Map)return new Map(a);if("undefined"!==typeof Set&&a instanceof Set)return new Set(a);if(a instanceof Date)return new Date(a.getTime());var b=Array.isArray(a)?[]:"function"!==typeof ArrayBuffer||"function"!==typeof ArrayBuffer.isView||!ArrayBuffer.isView(a)||a instanceof DataView?{}:new a.constructor(a.length),c;for(c in a)b[c]=ub(a[c]);return b}
var vb="constructor hasOwnProperty isPrototypeOf propertyIsEnumerable toLocaleString toString valueOf".split(" ");function wb(a,b){for(var c,d,e=1;e<arguments.length;e++){d=arguments[e];for(c in d)a[c]=d[c];for(var f=0;f<vb.length;f++)c=vb[f],Object.prototype.hasOwnProperty.call(d,c)&&(a[c]=d[c])}}
;var xb;function yb(){if(void 0===xb){var a=null,b=y.trustedTypes;if(b&&b.createPolicy){try{a=b.createPolicy("goog#html",{createHTML:Za,createScript:Za,createScriptURL:Za})}catch(c){y.console&&y.console.error(c.message)}xb=a}else xb=a}return xb}
;function zb(a,b){this.j=a===Ab&&b||""}
zb.prototype.i=!0;zb.prototype.h=function(){return this.j};
function Bb(a){return new zb(Ab,a)}
var Ab={};Bb("");var Cb={};function Db(a,b){this.j=b===Cb?a:"";this.i=!0}
Db.prototype.toString=function(){return this.j.toString()};
Db.prototype.h=function(){return this.j.toString()};function Eb(a,b){this.j=b===Fb?a:""}
Eb.prototype.toString=function(){return this.j+""};
Eb.prototype.i=!0;Eb.prototype.h=function(){return this.j.toString()};
function Gb(a){if(a instanceof Eb&&a.constructor===Eb)return a.j;Na(a);return"type_error:TrustedResourceUrl"}
var Fb={};function Hb(a){var b=yb();a=b?b.createScriptURL(a):a;return new Eb(a,Fb)}
;var Ib=String.prototype.trim?function(a){return a.trim()}:function(a){return/^[\s\xa0]*([\s\S]*?)[\s\xa0]*$/.exec(a)[1]};
function Jb(a,b){return a<b?-1:a>b?1:0}
;function Kb(a,b){this.j=b===Lb?a:""}
Kb.prototype.toString=function(){return this.j.toString()};
Kb.prototype.i=!0;Kb.prototype.h=function(){return this.j.toString()};
function Mb(a){if(a instanceof Kb&&a.constructor===Kb)return a.j;Na(a);return"type_error:SafeUrl"}
var Nb;try{new URL("s://g"),Nb=!0}catch(a){Nb=!1}var Ob=Nb,Lb={},Rb=new Kb("about:invalid#zClosurez",Lb);var Sb,Tb=A("CLOSURE_FLAGS"),Ub=Tb&&Tb[610401301];Sb=null!=Ub?Ub:!1;function Vb(){var a=y.navigator;return a&&(a=a.userAgent)?a:""}
var Wb,Xb=y.navigator;Wb=Xb?Xb.userAgentData||null:null;function Yb(a){return Sb?Wb?Wb.brands.some(function(b){return(b=b.brand)&&-1!=b.indexOf(a)}):!1:!1}
function D(a){return-1!=Vb().indexOf(a)}
;function Zb(){return Sb?!!Wb&&0<Wb.brands.length:!1}
function $b(){return Zb()?!1:D("Opera")}
function ac(){return Zb()?!1:D("Trident")||D("MSIE")}
function bc(){return Zb()?!1:D("Edge")}
function cc(){return Zb()?Yb("Microsoft Edge"):D("Edg/")}
function dc(){return D("Firefox")||D("FxiOS")}
function ec(){return D("Safari")&&!(fc()||(Zb()?0:D("Coast"))||$b()||bc()||cc()||(Zb()?Yb("Opera"):D("OPR"))||dc()||D("Silk")||D("Android"))}
function fc(){return Zb()?Yb("Chromium"):(D("Chrome")||D("CriOS"))&&!bc()||D("Silk")}
function gc(){return D("Android")&&!(fc()||dc()||$b()||D("Silk"))}
function hc(a){var b={};a.forEach(function(c){b[c[0]]=c[1]});
return function(c){return b[c.find(function(d){return d in b})]||""}}
function ic(a){var b=Vb();if("Internet Explorer"===a){if(ac())if((a=/rv: *([\d\.]*)/.exec(b))&&a[1])b=a[1];else{a="";var c=/MSIE +([\d\.]+)/.exec(b);if(c&&c[1])if(b=/Trident\/(\d.\d)/.exec(b),"7.0"==c[1])if(b&&b[1])switch(b[1]){case "4.0":a="8.0";break;case "5.0":a="9.0";break;case "6.0":a="10.0";break;case "7.0":a="11.0"}else a="7.0";else a=c[1];b=a}else b="";return b}var d=RegExp("([A-Z][\\w ]+)/([^\\s]+)\\s*(?:\\((.*?)\\))?","g");c=[];for(var e;e=d.exec(b);)c.push([e[1],e[2],e[3]||void 0]);b=hc(c);
switch(a){case "Opera":if($b())return b(["Version","Opera"]);if(Zb()?Yb("Opera"):D("OPR"))return b(["OPR"]);break;case "Microsoft Edge":if(bc())return b(["Edge"]);if(cc())return b(["Edg"]);break;case "Chromium":if(fc())return b(["Chrome","CriOS","HeadlessChrome"])}return"Firefox"===a&&dc()||"Safari"===a&&ec()||"Android Browser"===a&&gc()||"Silk"===a&&D("Silk")?(b=c[2])&&b[1]||"":""}
function jc(a){if(Zb()&&"Silk"!==a){var b=Wb.brands.find(function(c){return c.brand===a});
if(!b||!b.version)return NaN;b=b.version.split(".")}else{b=ic(a);if(""===b)return NaN;b=b.split(".")}return 0===b.length?NaN:Number(b[0])}
;var kc={};function mc(a){this.j=kc===kc?a:"";this.i=!0}
mc.prototype.h=function(){return this.j.toString()};
mc.prototype.toString=function(){return this.j.toString()};function nc(a,b){if(!(b instanceof Kb||b instanceof Kb)){b="object"==typeof b&&b.i?b.h():String(b);b:{var c=b;if(Ob){try{var d=new URL(c)}catch(e){c="https:";break b}c=d.protocol}else c:{d=document.createElement("a");try{d.href=c}catch(e){c=void 0;break c}c=d.protocol;c=":"===c||""===c?"https:":c}}"javascript:"!==c||(b="about:invalid#zClosurez");b=new Kb(b,Lb)}a.href=Mb(b)}
function oc(a,b){a.rel="stylesheet";a.href=Gb(b).toString();(b=pc('style[nonce],link[rel="stylesheet"][nonce]',a.ownerDocument&&a.ownerDocument.defaultView))&&a.setAttribute("nonce",b)}
function qc(){return pc("script[nonce]")}
var rc=/^[\w+/_-]+[=]{0,2}$/;function pc(a,b){b=(b||y).document;return b.querySelector?(a=b.querySelector(a))&&(a=a.nonce||a.getAttribute("nonce"))&&rc.test(a)?a:"":""}
;function sc(a){for(var b=0,c=0;c<a.length;++c)b=31*b+a.charCodeAt(c)>>>0;return b}
;var tc=RegExp("^(?:([^:/?#.]+):)?(?://(?:([^\\\\/?#]*)@)?([^\\\\/?#]*?)(?::([0-9]+))?(?=[\\\\/?#]|$))?([^?#]+)?(?:\\?([^#]*))?(?:#([\\s\\S]*))?$");function uc(a){return a?decodeURI(a):a}
function vc(a,b){return b.match(tc)[a]||null}
function wc(a){return uc(vc(3,a))}
function xc(a){var b=a.match(tc);a=b[5];var c=b[6];b=b[7];var d="";a&&(d+=a);c&&(d+="?"+c);b&&(d+="#"+b);return d}
function yc(a,b){if(!b)return a;var c=a.indexOf("#");0>c&&(c=a.length);var d=a.indexOf("?");if(0>d||d>c){d=c;var e=""}else e=a.substring(d+1,c);a=[a.slice(0,d),e,a.slice(c)];c=a[1];a[1]=b?c?c+"&"+b:b:c;return a[0]+(a[1]?"?"+a[1]:"")+a[2]}
function zc(a,b,c){if(Array.isArray(b))for(var d=0;d<b.length;d++)zc(a,String(b[d]),c);else null!=b&&c.push(a+(""===b?"":"="+encodeURIComponent(String(b))))}
function Ac(a,b){var c=[];for(b=b||0;b<a.length;b+=2)zc(a[b],a[b+1],c);return c.join("&")}
function Bc(a){var b=[],c;for(c in a)zc(c,a[c],b);return b.join("&")}
function Cc(a,b){var c=2==arguments.length?Ac(arguments[1],0):Ac(arguments,1);return yc(a,c)}
function Dc(a,b){b=Bc(b);return yc(a,b)}
function Ec(a,b,c){c=null!=c?"="+encodeURIComponent(String(c)):"";return yc(a,b+c)}
function Fc(a,b,c,d){for(var e=c.length;0<=(b=a.indexOf(c,b))&&b<d;){var f=a.charCodeAt(b-1);if(38==f||63==f)if(f=a.charCodeAt(b+e),!f||61==f||38==f||35==f)return b;b+=e+1}return-1}
var Gc=/#|$/,Hc=/[?&]($|#)/;function Ic(a,b){for(var c=a.search(Gc),d=0,e,f=[];0<=(e=Fc(a,d,b,c));)f.push(a.substring(d,e)),d=Math.min(a.indexOf("&",e)+1||c,c);f.push(a.slice(d));return f.join("").replace(Hc,"$1")}
;function Jc(a){y.setTimeout(function(){throw a;},0)}
;function Kc(a){for(var b=[],c=0,d=0;d<a.length;d++){var e=a.charCodeAt(d);128>e?b[c++]=e:(2048>e?b[c++]=e>>6|192:(55296==(e&64512)&&d+1<a.length&&56320==(a.charCodeAt(d+1)&64512)?(e=65536+((e&1023)<<10)+(a.charCodeAt(++d)&1023),b[c++]=e>>18|240,b[c++]=e>>12&63|128):b[c++]=e>>12|224,b[c++]=e>>6&63|128),b[c++]=e&63|128)}return b}
;function Qc(){return Sb?!!Wb&&!!Wb.platform:!1}
function Rc(){return Qc()?"Android"===Wb.platform:D("Android")}
function Sc(){return D("iPhone")&&!D("iPod")&&!D("iPad")}
function Tc(){var a=Vb(),b="";if(Qc()?"Windows"===Wb.platform:D("Windows"))b=/Windows (?:NT|Phone) ([0-9.]+)/,b=(a=b.exec(a))?a[1]:"0.0";else if(Sc()||D("iPad")||D("iPod"))b=/(?:iPhone|iPod|iPad|CPU)\s+OS\s+(\S+)/,b=(a=b.exec(a))&&a[1].replace(/_/g,".");else if(Qc()?"macOS"===Wb.platform:D("Macintosh"))b=/Mac OS X ([0-9_.]+)/,b=(a=b.exec(a))?a[1].replace(/_/g,"."):"10";else if(-1!=Vb().toLowerCase().indexOf("kaios"))b=/(?:KaiOS)\/(\S+)/i,b=(a=b.exec(a))&&a[1];else if(Rc())b=/Android\s+([^\);]+)(\)|;)/,
b=(a=b.exec(a))&&a[1];else if(Qc()?"Chrome OS"===Wb.platform:D("CrOS"))b=/(?:CrOS\s+(?:i686|x86_64)\s+([0-9.]+))/,b=(a=b.exec(a))&&a[1];a=0;b=Ib(String(b||"")).split(".");for(var c=Ib("12").split("."),d=Math.max(b.length,c.length),e=0;0==a&&e<d;e++){var f=b[e]||"",g=c[e]||"";do{f=/(\d*)(\D*)(.*)/.exec(f)||["","","",""];g=/(\d*)(\D*)(.*)/.exec(g)||["","","",""];if(0==f[0].length&&0==g[0].length)break;a=Jb(0==f[1].length?0:parseInt(f[1],10),0==g[1].length?0:parseInt(g[1],10))||Jb(0==f[2].length,0==
g[2].length)||Jb(f[2],g[2]);f=f[3];g=g[3]}while(0==a)}}
;function Uc(a){Uc[" "](a);return a}
Uc[" "]=function(){};var Vc=$b(),Wc=ac(),Xc=D("Edge"),Yc=D("Gecko")&&!(-1!=Vb().toLowerCase().indexOf("webkit")&&!D("Edge"))&&!(D("Trident")||D("MSIE"))&&!D("Edge"),Zc=-1!=Vb().toLowerCase().indexOf("webkit")&&!D("Edge"),$c=Rc();function ad(){var a=y.document;return a?a.documentMode:void 0}
var bd;a:{var cd="",dd=function(){var a=Vb();if(Yc)return/rv:([^\);]+)(\)|;)/.exec(a);if(Xc)return/Edge\/([\d\.]+)/.exec(a);if(Wc)return/\b(?:MSIE|rv)[: ]([^\);]+)(\)|;)/.exec(a);if(Zc)return/WebKit\/(\S+)/.exec(a);if(Vc)return/(?:Version)[ \/]?(\S+)/.exec(a)}();
dd&&(cd=dd?dd[1]:"");if(Wc){var ed=ad();if(null!=ed&&ed>parseFloat(cd)){bd=String(ed);break a}}bd=cd}var fd=bd,gd;if(y.document&&Wc){var hd=ad();gd=hd?hd:parseInt(fd,10)||void 0}else gd=void 0;var id=gd;var jd=Sc()||D("iPod"),kd=D("iPad");gc();fc();var ld=ec()&&!(Sc()||D("iPad")||D("iPod"));var md={},nd=null;function od(a,b){Pa(a);void 0===b&&(b=0);pd();b=md[b];for(var c=Array(Math.floor(a.length/3)),d=b[64]||"",e=0,f=0;e<a.length-2;e+=3){var g=a[e],h=a[e+1],l=a[e+2],m=b[g>>2];g=b[(g&3)<<4|h>>4];h=b[(h&15)<<2|l>>6];l=b[l&63];c[f++]=""+m+g+h+l}m=0;l=d;switch(a.length-e){case 2:m=a[e+1],l=b[(m&15)<<2]||d;case 1:a=a[e],c[f]=""+b[a>>2]+b[(a&3)<<4|m>>4]+l+d}return c.join("")}
function qd(a){var b=a.length,c=3*b/4;c%3?c=Math.floor(c):-1!="=.".indexOf(a[b-1])&&(c=-1!="=.".indexOf(a[b-2])?c-2:c-1);var d=new Uint8Array(c),e=0;rd(a,function(f){d[e++]=f});
return e!==c?d.subarray(0,e):d}
function rd(a,b){function c(l){for(;d<a.length;){var m=a.charAt(d++),n=nd[m];if(null!=n)return n;if(!/^[\s\xa0]*$/.test(m))throw Error("Unknown base64 encoding at char: "+m);}return l}
pd();for(var d=0;;){var e=c(-1),f=c(0),g=c(64),h=c(64);if(64===h&&-1===e)break;b(e<<2|f>>4);64!=g&&(b(f<<4&240|g>>2),64!=h&&b(g<<6&192|h))}}
function pd(){if(!nd){nd={};for(var a="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789".split(""),b=["+/=","+/","-_=","-_.","-_"],c=0;5>c;c++){var d=a.concat(b[c].split(""));md[c]=d;for(var e=0;e<d.length;e++){var f=d[e];void 0===nd[f]&&(nd[f]=e)}}}}
;var sd="undefined"!==typeof Uint8Array,td=!Wc&&"function"===typeof y.btoa;function ud(a){if(!td)return od(a);for(var b="";10240<a.length;)b+=String.fromCharCode.apply(null,a.subarray(0,10240)),a=a.subarray(10240);b+=String.fromCharCode.apply(null,a);return btoa(b)}
var vd=/[-_.]/g,wd={"-":"+",_:"/",".":"="};function xd(a){return wd[a]||""}
function yd(a){return sd&&null!=a&&a instanceof Uint8Array}
var zd={};var Ad;function Bd(a){if(a!==zd)throw Error("illegal external caller");}
function Cd(a,b){Bd(b);this.h=a;if(null!=a&&0===a.length)throw Error("ByteString should be constructed with non-empty values");}
Cd.prototype.sizeBytes=function(){Bd(zd);var a=this.h;if(null!=a&&!yd(a))if("string"===typeof a)if(td){vd.test(a)&&(a=a.replace(vd,xd));a=atob(a);for(var b=new Uint8Array(a.length),c=0;c<a.length;c++)b[c]=a.charCodeAt(c);a=b}else a=qd(a);else Na(a),a=null;return(a=null==a?a:this.h=a)?a.length:0};var Dd="function"===typeof Symbol&&"symbol"===typeof Symbol()?Symbol():void 0;function Ed(a,b){if(Dd)return a[Dd]|=b;if(void 0!==a.Ca)return a.Ca|=b;Object.defineProperties(a,{Ca:{value:b,configurable:!0,writable:!0,enumerable:!1}});return b}
function Fd(a,b){var c=E(a);(c&b)!==b&&(Object.isFrozen(a)&&(a=Array.prototype.slice.call(a)),Gd(a,c|b));return a}
function Hd(a,b){Dd?a[Dd]&&(a[Dd]&=~b):void 0!==a.Ca&&(a.Ca&=~b)}
function E(a){var b;Dd?b=a[Dd]:b=a.Ca;return null==b?0:b}
function Gd(a,b){Dd?a[Dd]=b:void 0!==a.Ca?a.Ca=b:Object.defineProperties(a,{Ca:{value:b,configurable:!0,writable:!0,enumerable:!1}});return a}
function Id(a){Ed(a,1);return a}
function Jd(a,b){Gd(b,(a|0)&-51)}
function Kd(a,b){Gd(b,(a|18)&-41)}
;var Od={};function Pd(a){return null!==a&&"object"===typeof a&&!Array.isArray(a)&&a.constructor===Object}
var Qd,Rd=Object.freeze(Gd([],23));function Sd(a){if(E(a.P)&2)throw Error();}
function Td(a){var b=a.length;(b=b?a[b-1]:void 0)&&Pd(b)?b.g=1:(b={},a.push((b.g=1,b)))}
;function Ud(a){if(null!=a&&"number"!==typeof a)throw Error("Value of float/double field must be a number|null|undefined, found "+typeof a+": "+a);return a}
function Vd(a){return a.displayName||a.name||"unknown type name"}
function Wd(a,b){if(!(a instanceof b))throw Error("Expected instanceof "+Vd(b)+" but got "+(a&&Vd(a.constructor)));return a}
function Xd(a,b){var c=E(a),d=c;0===d&&(d|=b&16);d|=b&2;d!==c&&Gd(a,d)}
;function Yd(a){var b=a.j+a.fb;return a.wa||(a.wa=a.P[b]={})}
function Zd(a,b,c){return-1===b?null:b>=a.j?a.wa?a.wa[b]:void 0:c&&a.wa&&(c=a.wa[b],null!=c)?c:a.P[b+a.fb]}
function G(a,b,c,d){Sd(a);return $d(a,b,c,d)}
function $d(a,b,c,d){a.m&&(a.m=void 0);if(b>=a.j||d)return Yd(a)[b]=c,a;a.P[b+a.fb]=c;(c=a.wa)&&b in c&&delete c[b];return a}
function ae(a,b,c,d,e){var f=Zd(a,b,d);Array.isArray(f)||(f=Rd);var g=E(f);g&1||Id(f);if(e)g&2||Ed(f,18),c&1||Object.freeze(f);else{e=!(c&2);var h=g&2;c&1||!h?e&&g&16&&!h&&Hd(f,16):(f=Id(Array.prototype.slice.call(f)),$d(a,b,f,d))}return f}
function be(a,b,c,d){Sd(a);(c=ce(a,c))&&c!==b&&null!=d&&$d(a,c,void 0,!1);return $d(a,b,d)}
function ce(a,b){for(var c=0,d=0;d<b.length;d++){var e=b[d];null!=Zd(a,e)&&(0!==c&&$d(a,c,void 0,!1),c=e)}return c}
function de(a,b,c,d){d=void 0===d?!1:d;var e=d;var f=Zd(a,c,e);var g=E(a.P),h=!1;null==f||"object"!==typeof f||(h=Array.isArray(f))||f.Jc!==Od?h?(Xd(f,g),b=new b(f)):b=void 0:b=f;b!==f&&null!=b&&$d(a,c,b,e);e=b;if(null==e)return e;E(a.P)&2||(f=ee(e),f!==e&&(e=f,$d(a,c,e,d)));return e}
function fe(a,b,c,d,e){var f=!!(e&2);a.i||(a.i={});var g=a.i[c],h=ae(a,c,3,void 0,f);if(!g){var l=h;g=[];f=!!(e&2);h=!!(E(l)&2);var m=l;!f&&h&&(l=Array.prototype.slice.call(l));var n=e|(h?2:0);e=h;for(var q=0;q<l.length;q++){var u=l[q];var t=b;Array.isArray(u)?(Xd(u,n),u=new t(u)):u=void 0;void 0!==u&&(e=e||!!(2&E(u.P)),g.push(u))}a.i[c]=g;b=l;e=!e;n=E(b);l=n|33;l=e?l|8:l&-9;n!=l&&(Object.isFrozen(b)&&(b=Array.prototype.slice.call(b)),Gd(b,l));l=b;m!==l&&$d(a,c,l);(f||d&&h)&&Ed(g,18);d&&Object.freeze(g);
return g}f||(f=Object.isFrozen(g),d&&!f?Object.freeze(g):!d&&f&&(g=Array.prototype.slice.call(g),a.i[c]=g));return g}
function H(a,b,c,d){Sd(a);null!=d?Wd(d,b):d=void 0;return $d(a,c,d)}
function ge(a,b,c,d,e){Sd(a);null!=e?Wd(e,b):e=void 0;be(a,c,d,e)}
function he(a,b,c,d,e){Sd(a);var f=null==d?Rd:Id([]);if(null!=d){for(var g=!!d.length,h=0;h<d.length;h++){var l=d[h];Wd(l,b);g=g&&!(E(l.P)&2);f[h]=l.P}f=Fd(f,(g?8:0)|1);a.i||(a.i={});a.i[c]=d}else a.i&&(a.i[c]=void 0);return $d(a,c,f,e)}
function ie(a,b,c,d){var e=E(a.P);if(e&2)throw Error();e=fe(a,c,b,!1,e);c=null!=d?Wd(d,c):new c;a=ae(a,b,2,void 0,!1);e.push(c);a.push(c.P);E(c.P)&2&&Hd(a,8)}
function je(){var a=new ke;return G(a,1,1)}
function le(a,b){return null==a?b:a}
function me(a,b){return le(Zd(a,b),"")}
;var ne;function oe(a){switch(typeof a){case "number":return isFinite(a)?a:String(a);case "object":if(a)if(Array.isArray(a)){if(0!==(E(a)&128))return a=Array.prototype.slice.call(a),Td(a),a}else{if(yd(a))return ud(a);if(a instanceof Cd){var b=a.h;return null==b?"":"string"===typeof b?b:a.h=ud(b)}}}return a}
;function pe(a,b,c,d){if(null!=a){if(Array.isArray(a))a=qe(a,b,c,void 0!==d);else if(Pd(a)){var e={},f;for(f in a)e[f]=pe(a[f],b,c,d);a=e}else a=b(a,d);return a}}
function qe(a,b,c,d){var e=E(a);d=d?!!(e&16):void 0;a=Array.prototype.slice.call(a);for(var f=0;f<a.length;f++)a[f]=pe(a[f],b,c,d);c(e,a);return a}
function re(a){return a.Jc===Od?a.toJSON():oe(a)}
function se(a,b){a&128&&Td(b)}
;function te(a,b,c){c=void 0===c?Kd:c;if(null!=a){if(sd&&a instanceof Uint8Array)return b?a:new Uint8Array(a);if(Array.isArray(a)){var d=E(a);if(d&2)return a;if(b&&!(d&32)&&(d&16||0===d))return Gd(a,d|18),a;a=qe(a,te,d&4?Kd:c,!0);b=E(a);b&4&&b&2&&Object.freeze(a);return a}return a.Jc===Od?ue(a):a}}
function ve(a,b,c,d,e,f,g){(a=a.i&&a.i[c])?(d=0<a.length?a[0].constructor:void 0,f=E(a),f&2||(a=hb(a,ue),Kd(f,a),Object.freeze(a)),he(b,d,c,a,e)):G(b,c,te(d,f,g),e)}
function ue(a){if(E(a.P)&2)return a;a=we(a,!0);Ed(a.P,18);return a}
function we(a,b){var c=a.P,d=[];Ed(d,16);var e=a.constructor.h;e&&d.push(e);e=a.wa;if(e){d.length=c.length;var f={};d[d.length-1]=f}0!==(E(c)&128)&&Td(d);b=b||E(a.P)&2?Kd:Jd;f=a.constructor;E(d);ne=d;d=new f(d);ne=void 0;a.vd&&(d.vd=a.vd.slice());f=!!(E(c)&16);for(var g=e?c.length-1:c.length,h=0;h<g;h++)ve(a,d,h-a.fb,c[h],!1,f,b);if(e)for(var l in e)c=e[l],g=+l,Number.isNaN(g),ve(a,d,g,c,!0,f,b);return d}
function ee(a){if(!(E(a.P)&2))return a;var b=we(a,!1);b.m=a;return b}
;function I(a,b,c,d){null==a&&(a=ne);ne=void 0;var e=this.constructor.h;if(null==a){a=e?[e]:[];var f=48;var g=!0;d&&(f|=128);Gd(a,f)}else{if(!Array.isArray(a))throw Error();if(e&&e!==a[0])throw Error();f=Ed(a,0)|32;g=0!==(16&f);if(d){if(!(f&128)&&0<a.length){var h=a[a.length-1];if(Pd(h)&&"g"in h){f|=128;delete h.g;var l=!0,m;for(m in h){l=!1;break}l&&a.pop()}else throw Error();}}else if(128&f)throw Error();Gd(a,f)}this.fb=e?0:-1;this.i=void 0;this.P=a;a:{f=this.P.length;e=f-1;if(f&&(f=this.P[e],Pd(f))){this.wa=
f;this.j=e-this.fb;break a}void 0!==b&&-1<b?(this.j=Math.max(b,e+1-this.fb),this.wa=void 0):this.j=Number.MAX_VALUE}if(!d&&this.wa&&"g"in this.wa)throw Error('Unexpected "g" flag in sparse object of message that is not a group type.');if(c){b=g&&!0;d=this.j;var n;for(g=0;g<c.length;g++)e=c[g],e<d?(e+=this.fb,(f=a[e])?xe(f,b):a[e]=Rd):(n||(n=Yd(this)),(f=n[e])?xe(f,b):n[e]=Rd)}E(this.P)}
I.prototype.toJSON=function(){var a=this.P,b;Qd?b=a:b=qe(a,re,se);return b};
function ye(a){Qd=!0;try{return JSON.stringify(a.toJSON(),ze)}finally{Qd=!1}}
I.prototype.clone=function(){return we(this,!1)};
function xe(a,b){if(Array.isArray(a)){var c=E(a),d=1;!b||c&2||(d|=16);(c&d)!==d&&Gd(a,c|d)}}
I.prototype.Jc=Od;I.prototype.toString=function(){return this.P.toString()};
function ze(a,b){return oe(b)}
;function Ae(a){this.fd=a}
;function Be(a,b,c){this.i=a;this.l=b;this.h=c||[];this.qb=new Map}
k=Be.prototype;k.ae=function(a){var b=Ja.apply(1,arguments),c=this.yc(b);c?c.push(new Ae(a)):this.Jd(a,b)};
k.Jd=function(a){this.qb.set(this.od(Ja.apply(1,arguments)),[new Ae(a)])};
k.yc=function(){var a=this.od(Ja.apply(0,arguments));return this.qb.has(a)?this.qb.get(a):void 0};
k.re=function(){var a=this.yc(Ja.apply(0,arguments));return a&&a.length?a[0]:void 0};
k.clear=function(){this.qb.clear()};
k.od=function(){var a=Ja.apply(0,arguments);return a?a.join(","):"key"};function Ce(a,b){Be.call(this,a,3,b)}
v(Ce,Be);Ce.prototype.j=function(a){var b=Ja.apply(1,arguments),c=0,d=this.re(b);d&&(c=d.fd);this.Jd(c+a,b)};function De(a,b){Be.call(this,a,2,b)}
v(De,Be);De.prototype.j=function(a){this.ae(a,Ja.apply(1,arguments))};function Ee(a){a&&"function"==typeof a.dispose&&a.dispose()}
;function Fe(a){for(var b=0,c=arguments.length;b<c;++b){var d=arguments[b];Pa(d)?Fe.apply(null,d):Ee(d)}}
;function Ge(){this.W=this.W;this.H=this.H}
Ge.prototype.W=!1;Ge.prototype.h=function(){return this.W};
Ge.prototype.dispose=function(){this.W||(this.W=!0,this.M())};
function He(a,b){Ie(a,Xa(Ee,b))}
function Ie(a,b){a.W?b():(a.H||(a.H=[]),a.H.push(b))}
Ge.prototype.M=function(){if(this.H)for(;this.H.length;)this.H.shift()()};function Je(a,b){this.type=a;this.h=this.target=b;this.defaultPrevented=this.j=!1}
Je.prototype.stopPropagation=function(){this.j=!0};
Je.prototype.preventDefault=function(){this.defaultPrevented=!0};function Ke(a){var b=A("window.location.href");null==a&&(a='Unknown Error of type "null/undefined"');if("string"===typeof a)return{message:a,name:"Unknown error",lineNumber:"Not available",fileName:b,stack:"Not available"};var c=!1;try{var d=a.lineNumber||a.line||"Not available"}catch(g){d="Not available",c=!0}try{var e=a.fileName||a.filename||a.sourceURL||y.$googDebugFname||b}catch(g){e="Not available",c=!0}b=Le(a);if(!(!c&&a.lineNumber&&a.fileName&&a.stack&&a.message&&a.name)){c=a.message;if(null==
c){if(a.constructor&&a.constructor instanceof Function){if(a.constructor.name)c=a.constructor.name;else if(c=a.constructor,Me[c])c=Me[c];else{c=String(c);if(!Me[c]){var f=/function\s+([^\(]+)/m.exec(c);Me[c]=f?f[1]:"[Anonymous]"}c=Me[c]}c='Unknown Error of type "'+c+'"'}else c="Unknown Error of unknown type";"function"===typeof a.toString&&Object.prototype.toString!==a.toString&&(c+=": "+a.toString())}return{message:c,name:a.name||"UnknownError",lineNumber:d,fileName:e,stack:b||"Not available"}}a.stack=
b;return{message:a.message,name:a.name,lineNumber:a.lineNumber,fileName:a.fileName,stack:a.stack}}
function Le(a,b){b||(b={});b[Ne(a)]=!0;var c=a.stack||"";(a=a.cause)&&!b[Ne(a)]&&(c+="\nCaused by: ",a.stack&&0==a.stack.indexOf(a.toString())||(c+="string"===typeof a?a:a.message+"\n"),c+=Le(a,b));return c}
function Ne(a){var b="";"function"===typeof a.toString&&(b=""+a);return b+a.stack}
var Me={};var Oe=function(){if(!y.addEventListener||!Object.defineProperty)return!1;var a=!1,b=Object.defineProperty({},"passive",{get:function(){a=!0}});
try{y.addEventListener("test",function(){},b),y.removeEventListener("test",function(){},b)}catch(c){}return a}();function Pe(a,b){Je.call(this,a?a.type:"");this.relatedTarget=this.h=this.target=null;this.button=this.screenY=this.screenX=this.clientY=this.clientX=0;this.key="";this.charCode=this.keyCode=0;this.metaKey=this.shiftKey=this.altKey=this.ctrlKey=!1;this.state=null;this.pointerId=0;this.pointerType="";this.i=null;a&&this.init(a,b)}
Ya(Pe,Je);var Qe={2:"touch",3:"pen",4:"mouse"};
Pe.prototype.init=function(a,b){var c=this.type=a.type,d=a.changedTouches&&a.changedTouches.length?a.changedTouches[0]:null;this.target=a.target||a.srcElement;this.h=b;if(b=a.relatedTarget){if(Yc){a:{try{Uc(b.nodeName);var e=!0;break a}catch(f){}e=!1}e||(b=null)}}else"mouseover"==c?b=a.fromElement:"mouseout"==c&&(b=a.toElement);this.relatedTarget=b;d?(this.clientX=void 0!==d.clientX?d.clientX:d.pageX,this.clientY=void 0!==d.clientY?d.clientY:d.pageY,this.screenX=d.screenX||0,this.screenY=d.screenY||
0):(this.clientX=void 0!==a.clientX?a.clientX:a.pageX,this.clientY=void 0!==a.clientY?a.clientY:a.pageY,this.screenX=a.screenX||0,this.screenY=a.screenY||0);this.button=a.button;this.keyCode=a.keyCode||0;this.key=a.key||"";this.charCode=a.charCode||("keypress"==c?a.keyCode:0);this.ctrlKey=a.ctrlKey;this.altKey=a.altKey;this.shiftKey=a.shiftKey;this.metaKey=a.metaKey;this.pointerId=a.pointerId||0;this.pointerType="string"===typeof a.pointerType?a.pointerType:Qe[a.pointerType]||"";this.state=a.state;
this.i=a;a.defaultPrevented&&Pe.ta.preventDefault.call(this)};
Pe.prototype.stopPropagation=function(){Pe.ta.stopPropagation.call(this);this.i.stopPropagation?this.i.stopPropagation():this.i.cancelBubble=!0};
Pe.prototype.preventDefault=function(){Pe.ta.preventDefault.call(this);var a=this.i;a.preventDefault?a.preventDefault():a.returnValue=!1};var Re="closure_listenable_"+(1E6*Math.random()|0);var Se=0;function Te(a,b,c,d,e){this.listener=a;this.proxy=null;this.src=b;this.type=c;this.capture=!!d;this.hc=e;this.key=++Se;this.Pb=this.ac=!1}
function Ue(a){a.Pb=!0;a.listener=null;a.proxy=null;a.src=null;a.hc=null}
;function Ve(a){this.src=a;this.listeners={};this.h=0}
Ve.prototype.add=function(a,b,c,d,e){var f=a.toString();a=this.listeners[f];a||(a=this.listeners[f]=[],this.h++);var g=We(a,b,d,e);-1<g?(b=a[g],c||(b.ac=!1)):(b=new Te(b,this.src,f,!!d,e),b.ac=c,a.push(b));return b};
Ve.prototype.remove=function(a,b,c,d){a=a.toString();if(!(a in this.listeners))return!1;var e=this.listeners[a];b=We(e,b,c,d);return-1<b?(Ue(e[b]),Array.prototype.splice.call(e,b,1),0==e.length&&(delete this.listeners[a],this.h--),!0):!1};
function Xe(a,b){var c=b.type;c in a.listeners&&kb(a.listeners[c],b)&&(Ue(b),0==a.listeners[c].length&&(delete a.listeners[c],a.h--))}
function We(a,b,c,d){for(var e=0;e<a.length;++e){var f=a[e];if(!f.Pb&&f.listener==b&&f.capture==!!c&&f.hc==d)return e}return-1}
;var Ye="closure_lm_"+(1E6*Math.random()|0),Ze={},$e=0;function af(a,b,c,d,e){if(d&&d.once)bf(a,b,c,d,e);else if(Array.isArray(b))for(var f=0;f<b.length;f++)af(a,b[f],c,d,e);else c=gf(c),a&&a[Re]?a.Ka(b,c,Qa(d)?!!d.capture:!!d,e):hf(a,b,c,!1,d,e)}
function hf(a,b,c,d,e,f){if(!b)throw Error("Invalid event type");var g=Qa(e)?!!e.capture:!!e,h=jf(a);h||(a[Ye]=h=new Ve(a));c=h.add(b,c,d,g,f);if(!c.proxy){d=kf();c.proxy=d;d.src=a;d.listener=c;if(a.addEventListener)Oe||(e=g),void 0===e&&(e=!1),a.addEventListener(b.toString(),d,e);else if(a.attachEvent)a.attachEvent(lf(b.toString()),d);else if(a.addListener&&a.removeListener)a.addListener(d);else throw Error("addEventListener and attachEvent are unavailable.");$e++}}
function kf(){function a(c){return b.call(a.src,a.listener,c)}
var b=mf;return a}
function bf(a,b,c,d,e){if(Array.isArray(b))for(var f=0;f<b.length;f++)bf(a,b[f],c,d,e);else c=gf(c),a&&a[Re]?a.l.add(String(b),c,!0,Qa(d)?!!d.capture:!!d,e):hf(a,b,c,!0,d,e)}
function nf(a,b,c,d,e){if(Array.isArray(b))for(var f=0;f<b.length;f++)nf(a,b[f],c,d,e);else(d=Qa(d)?!!d.capture:!!d,c=gf(c),a&&a[Re])?a.l.remove(String(b),c,d,e):a&&(a=jf(a))&&(b=a.listeners[b.toString()],a=-1,b&&(a=We(b,c,d,e)),(c=-1<a?b[a]:null)&&of(c))}
function of(a){if("number"!==typeof a&&a&&!a.Pb){var b=a.src;if(b&&b[Re])Xe(b.l,a);else{var c=a.type,d=a.proxy;b.removeEventListener?b.removeEventListener(c,d,a.capture):b.detachEvent?b.detachEvent(lf(c),d):b.addListener&&b.removeListener&&b.removeListener(d);$e--;(c=jf(b))?(Xe(c,a),0==c.h&&(c.src=null,b[Ye]=null)):Ue(a)}}}
function lf(a){return a in Ze?Ze[a]:Ze[a]="on"+a}
function mf(a,b){if(a.Pb)a=!0;else{b=new Pe(b,this);var c=a.listener,d=a.hc||a.src;a.ac&&of(a);a=c.call(d,b)}return a}
function jf(a){a=a[Ye];return a instanceof Ve?a:null}
var pf="__closure_events_fn_"+(1E9*Math.random()>>>0);function gf(a){if("function"===typeof a)return a;a[pf]||(a[pf]=function(b){return a.handleEvent(b)});
return a[pf]}
;function qf(){Ge.call(this);this.l=new Ve(this);this.Xd=this;this.Oa=null}
Ya(qf,Ge);qf.prototype[Re]=!0;qf.prototype.addEventListener=function(a,b,c,d){af(this,a,b,c,d)};
qf.prototype.removeEventListener=function(a,b,c,d){nf(this,a,b,c,d)};
function rf(a,b){var c=a.Oa;if(c){var d=[];for(var e=1;c;c=c.Oa)d.push(c),++e}a=a.Xd;c=b.type||b;"string"===typeof b?b=new Je(b,a):b instanceof Je?b.target=b.target||a:(e=b,b=new Je(c,a),wb(b,e));e=!0;if(d)for(var f=d.length-1;!b.j&&0<=f;f--){var g=b.h=d[f];e=sf(g,c,!0,b)&&e}b.j||(g=b.h=a,e=sf(g,c,!0,b)&&e,b.j||(e=sf(g,c,!1,b)&&e));if(d)for(f=0;!b.j&&f<d.length;f++)g=b.h=d[f],e=sf(g,c,!1,b)&&e}
qf.prototype.M=function(){qf.ta.M.call(this);if(this.l){var a=this.l,b=0,c;for(c in a.listeners){for(var d=a.listeners[c],e=0;e<d.length;e++)++b,Ue(d[e]);delete a.listeners[c];a.h--}}this.Oa=null};
qf.prototype.Ka=function(a,b,c,d){return this.l.add(String(a),b,!1,c,d)};
function sf(a,b,c,d){b=a.l.listeners[String(b)];if(!b)return!0;b=b.concat();for(var e=!0,f=0;f<b.length;++f){var g=b[f];if(g&&!g.Pb&&g.capture==c){var h=g.listener,l=g.hc||g.src;g.ac&&Xe(a.l,g);e=!1!==h.call(l,d)&&e}}return e&&!d.defaultPrevented}
;function tf(a,b){this.j=a;this.l=b;this.i=0;this.h=null}
tf.prototype.get=function(){if(0<this.i){this.i--;var a=this.h;this.h=a.next;a.next=null}else a=this.j();return a};
function uf(a,b){a.l(b);100>a.i&&(a.i++,b.next=a.h,a.h=b)}
;function vf(a,b){return a+Math.random()*(b-a)}
;function wf(a,b){this.x=void 0!==a?a:0;this.y=void 0!==b?b:0}
k=wf.prototype;k.clone=function(){return new wf(this.x,this.y)};
k.equals=function(a){return a instanceof wf&&(this==a?!0:this&&a?this.x==a.x&&this.y==a.y:!1)};
k.ceil=function(){this.x=Math.ceil(this.x);this.y=Math.ceil(this.y);return this};
k.floor=function(){this.x=Math.floor(this.x);this.y=Math.floor(this.y);return this};
k.round=function(){this.x=Math.round(this.x);this.y=Math.round(this.y);return this};
k.scale=function(a,b){this.x*=a;this.y*="number"===typeof b?b:a;return this};function xf(a,b){this.width=a;this.height=b}
k=xf.prototype;k.clone=function(){return new xf(this.width,this.height)};
k.aspectRatio=function(){return this.width/this.height};
k.ceil=function(){this.width=Math.ceil(this.width);this.height=Math.ceil(this.height);return this};
k.floor=function(){this.width=Math.floor(this.width);this.height=Math.floor(this.height);return this};
k.round=function(){this.width=Math.round(this.width);this.height=Math.round(this.height);return this};
k.scale=function(a,b){this.width*=a;this.height*="number"===typeof b?b:a;return this};function yf(a){var b=document;return"string"===typeof a?b.getElementById(a):a}
function zf(a){var b=document;a=String(a);"application/xhtml+xml"===b.contentType&&(a=a.toLowerCase());return b.createElement(a)}
function Af(a,b){for(var c=0;a;){if(b(a))return a;a=a.parentNode;c++}return null}
;var Bf;function Cf(){var a=y.MessageChannel;"undefined"===typeof a&&"undefined"!==typeof window&&window.postMessage&&window.addEventListener&&!D("Presto")&&(a=function(){var e=zf("IFRAME");e.style.display="none";document.documentElement.appendChild(e);var f=e.contentWindow;e=f.document;e.open();e.close();var g="callImmediate"+Math.random(),h="file:"==f.location.protocol?"*":f.location.protocol+"//"+f.location.host;e=Wa(function(l){if(("*"==h||l.origin==h)&&l.data==g)this.port1.onmessage()},this);
f.addEventListener("message",e,!1);this.port1={};this.port2={postMessage:function(){f.postMessage(g,h)}}});
if("undefined"!==typeof a&&!ac()){var b=new a,c={},d=c;b.port1.onmessage=function(){if(void 0!==c.next){c=c.next;var e=c.ed;c.ed=null;e()}};
return function(e){d.next={ed:e};d=d.next;b.port2.postMessage(0)}}return function(e){y.setTimeout(e,0)}}
;function Df(){this.i=this.h=null}
Df.prototype.add=function(a,b){var c=Ef.get();c.set(a,b);this.i?this.i.next=c:this.h=c;this.i=c};
Df.prototype.remove=function(){var a=null;this.h&&(a=this.h,this.h=this.h.next,this.h||(this.i=null),a.next=null);return a};
var Ef=new tf(function(){return new Ff},function(a){return a.reset()});
function Ff(){this.next=this.scope=this.h=null}
Ff.prototype.set=function(a,b){this.h=a;this.scope=b;this.next=null};
Ff.prototype.reset=function(){this.next=this.scope=this.h=null};var Gf,Hf=!1,If=new Df;function Jf(a,b){Gf||Kf();Hf||(Gf(),Hf=!0);If.add(a,b)}
function Kf(){if(y.Promise&&y.Promise.resolve){var a=y.Promise.resolve(void 0);Gf=function(){a.then(Lf)}}else Gf=function(){var b=Lf;
"function"!==typeof y.setImmediate||y.Window&&y.Window.prototype&&!bc()&&y.Window.prototype.setImmediate==y.setImmediate?(Bf||(Bf=Cf()),Bf(b)):y.setImmediate(b)}}
function Lf(){for(var a;a=If.remove();){try{a.h.call(a.scope)}catch(b){Jc(b)}uf(Ef,a)}Hf=!1}
;function Mf(a){this.h=0;this.H=void 0;this.l=this.i=this.j=null;this.m=this.s=!1;if(a!=cb)try{var b=this;a.call(void 0,function(c){Nf(b,2,c)},function(c){Nf(b,3,c)})}catch(c){Nf(this,3,c)}}
function Of(){this.next=this.context=this.i=this.j=this.h=null;this.l=!1}
Of.prototype.reset=function(){this.context=this.i=this.j=this.h=null;this.l=!1};
var Pf=new tf(function(){return new Of},function(a){a.reset()});
function Qf(a,b,c){var d=Pf.get();d.j=a;d.i=b;d.context=c;return d}
function Rf(a){return new Mf(function(b,c){c(a)})}
Mf.prototype.then=function(a,b,c){return Sf(this,"function"===typeof a?a:null,"function"===typeof b?b:null,c)};
Mf.prototype.$goog_Thenable=!0;k=Mf.prototype;k.sc=function(a,b){return Sf(this,null,a,b)};
k.catch=Mf.prototype.sc;k.cancel=function(a){if(0==this.h){var b=new Tf(a);Jf(function(){Uf(this,b)},this)}};
function Uf(a,b){if(0==a.h)if(a.j){var c=a.j;if(c.i){for(var d=0,e=null,f=null,g=c.i;g&&(g.l||(d++,g.h==a&&(e=g),!(e&&1<d)));g=g.next)e||(f=g);e&&(0==c.h&&1==d?Uf(c,b):(f?(d=f,d.next==c.l&&(c.l=d),d.next=d.next.next):Vf(c),Wf(c,e,3,b)))}a.j=null}else Nf(a,3,b)}
function Xf(a,b){a.i||2!=a.h&&3!=a.h||Yf(a);a.l?a.l.next=b:a.i=b;a.l=b}
function Sf(a,b,c,d){var e=Qf(null,null,null);e.h=new Mf(function(f,g){e.j=b?function(h){try{var l=b.call(d,h);f(l)}catch(m){g(m)}}:f;
e.i=c?function(h){try{var l=c.call(d,h);void 0===l&&h instanceof Tf?g(h):f(l)}catch(m){g(m)}}:g});
e.h.j=a;Xf(a,e);return e.h}
k.kf=function(a){this.h=0;Nf(this,2,a)};
k.lf=function(a){this.h=0;Nf(this,3,a)};
function Nf(a,b,c){if(0==a.h){a===c&&(b=3,c=new TypeError("Promise cannot resolve to itself"));a.h=1;a:{var d=c,e=a.kf,f=a.lf;if(d instanceof Mf){Xf(d,Qf(e||cb,f||null,a));var g=!0}else{if(d)try{var h=!!d.$goog_Thenable}catch(m){h=!1}else h=!1;if(h)d.then(e,f,a),g=!0;else{if(Qa(d))try{var l=d.then;if("function"===typeof l){Zf(d,l,e,f,a);g=!0;break a}}catch(m){f.call(a,m);g=!0;break a}g=!1}}}g||(a.H=c,a.h=b,a.j=null,Yf(a),3!=b||c instanceof Tf||$f(a,c))}}
function Zf(a,b,c,d,e){function f(l){h||(h=!0,d.call(e,l))}
function g(l){h||(h=!0,c.call(e,l))}
var h=!1;try{b.call(a,g,f)}catch(l){f(l)}}
function Yf(a){a.s||(a.s=!0,Jf(a.me,a))}
function Vf(a){var b=null;a.i&&(b=a.i,a.i=b.next,b.next=null);a.i||(a.l=null);return b}
k.me=function(){for(var a;a=Vf(this);)Wf(this,a,this.h,this.H);this.s=!1};
function Wf(a,b,c,d){if(3==c&&b.i&&!b.l)for(;a&&a.m;a=a.j)a.m=!1;if(b.h)b.h.j=null,ag(b,c,d);else try{b.l?b.j.call(b.context):ag(b,c,d)}catch(e){bg.call(null,e)}uf(Pf,b)}
function ag(a,b,c){2==b?a.j.call(a.context,c):a.i&&a.i.call(a.context,c)}
function $f(a,b){a.m=!0;Jf(function(){a.m&&bg.call(null,b)})}
var bg=Jc;function Tf(a){ab.call(this,a)}
Ya(Tf,ab);Tf.prototype.name="cancel";function cg(a,b){qf.call(this);this.j=a||1;this.i=b||y;this.m=Wa(this.hf,this);this.s=Date.now()}
Ya(cg,qf);k=cg.prototype;k.enabled=!1;k.ya=null;function dg(a,b){a.j=b;a.ya&&a.enabled?(a.stop(),a.start()):a.ya&&a.stop()}
k.hf=function(){if(this.enabled){var a=Date.now()-this.s;0<a&&a<.8*this.j?this.ya=this.i.setTimeout(this.m,this.j-a):(this.ya&&(this.i.clearTimeout(this.ya),this.ya=null),rf(this,"tick"),this.enabled&&(this.stop(),this.start()))}};
k.start=function(){this.enabled=!0;this.ya||(this.ya=this.i.setTimeout(this.m,this.j),this.s=Date.now())};
k.stop=function(){this.enabled=!1;this.ya&&(this.i.clearTimeout(this.ya),this.ya=null)};
k.M=function(){cg.ta.M.call(this);this.stop();delete this.i};
function eg(a,b,c){if("function"===typeof a)c&&(a=Wa(a,c));else if(a&&"function"==typeof a.handleEvent)a=Wa(a.handleEvent,a);else throw Error("Invalid listener argument");return 2147483647<Number(b)?-1:y.setTimeout(a,b||0)}
;function fg(a){this.H=a;this.h=new Map;this.s=new Set;this.j=0;this.l=100;this.flushInterval=3E4;this.i=new cg(this.flushInterval);this.i.Ka("tick",this.Db,!1,this);this.m=!1}
k=fg.prototype;k.sendIsolatedPayload=function(a){this.m=a;this.l=1};
function gg(a){a.i.enabled||a.i.start();a.j++;a.j>=a.l&&a.Db()}
k.Db=function(){var a=this.h.values();a=[].concat(ha(a)).filter(function(b){return b.qb.size});
a.length&&this.H.flush(a,this.m);hg(a);this.j=0;this.i.enabled&&this.i.stop()};
k.Zc=function(a){var b=Ja.apply(1,arguments);this.h.has(a)||this.h.set(a,new Ce(a,b))};
k.bd=function(a){var b=Ja.apply(1,arguments);this.h.has(a)||this.h.set(a,new De(a,b))};
function ig(a,b){return a.s.has(b)?void 0:a.h.get(b)}
k.uc=function(a){this.Vd.apply(this,[a,1].concat(ha(Ja.apply(1,arguments))))};
k.Vd=function(a,b){var c=Ja.apply(2,arguments),d=ig(this,a);d&&d instanceof Ce&&(d.j(b,c),gg(this))};
k.vc=function(a,b){var c=Ja.apply(2,arguments),d=ig(this,a);d&&d instanceof De&&(d.j(b,c),gg(this))};
function hg(a){for(var b=0;b<a.length;b++)a[b].clear()}
;function jg(a){this.h=a;this.h.Zc("/client_streamz/bg/fiec",{Lb:3,Kb:"rk"},{Lb:2,Kb:"ec"})}
function kg(a,b,c){a.h.uc("/client_streamz/bg/fiec",b,c)}
function lg(a){this.h=a;this.h.bd("/client_streamz/bg/fil",{Lb:3,Kb:"rk"})}
function mg(a){this.h=a;this.h.Zc("/client_streamz/bg/fsc",{Lb:3,Kb:"rk"})}
function ng(a){this.h=a;this.h.bd("/client_streamz/bg/fsl",{Lb:3,Kb:"rk"})}
;var og={toString:function(a){var b=[],c=0;a-=-2147483648;b[c++]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ".charAt(a%52);for(a=Math.floor(a/52);0<a;)b[c++]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789".charAt(a%62),a=Math.floor(a/62);return b.join("")}};function pg(a){function b(){c-=d;c-=e;c^=e>>>13;d-=e;d-=c;d^=c<<8;e-=c;e-=d;e^=d>>>13;c-=d;c-=e;c^=e>>>12;d-=e;d-=c;d^=c<<16;e-=c;e-=d;e^=d>>>5;c-=d;c-=e;c^=e>>>3;d-=e;d-=c;d^=c<<10;e-=c;e-=d;e^=d>>>15}
a=qg(a);for(var c=2654435769,d=2654435769,e=314159265,f=a.length,g=f,h=0;12<=g;g-=12,h+=12)c+=rg(a,h),d+=rg(a,h+4),e+=rg(a,h+8),b();e+=f;switch(g){case 11:e+=a[h+10]<<24;case 10:e+=a[h+9]<<16;case 9:e+=a[h+8]<<8;case 8:d+=a[h+7]<<24;case 7:d+=a[h+6]<<16;case 6:d+=a[h+5]<<8;case 5:d+=a[h+4];case 4:c+=a[h+3]<<24;case 3:c+=a[h+2]<<16;case 2:c+=a[h+1]<<8;case 1:c+=a[h+0]}b();return og.toString(e)}
function qg(a){for(var b=[],c=0;c<a.length;c++)b.push(a.charCodeAt(c));return b}
function rg(a,b){return a[b+0]+(a[b+1]<<8)+(a[b+2]<<16)+(a[b+3]<<24)}
;function sg(a){I.call(this,a)}
v(sg,I);var tg=[1,2,3];function ug(a){I.call(this,a)}
v(ug,I);var vg=[1,2,3];function wg(a){I.call(this,a,-1,xg)}
v(wg,I);var xg=[1];function yg(a){I.call(this,a,-1,zg)}
v(yg,I);var zg=[3,6,4];function Ag(a){I.call(this,a,-1,Bg)}
v(Ag,I);var Bg=[1];function Cg(a){if(!a)return"";if(/^about:(?:blank|srcdoc)$/.test(a))return window.origin||"";a=a.split("#")[0].split("?")[0];a=a.toLowerCase();0==a.indexOf("//")&&(a=window.location.protocol+a);/^[\w\-]*:\/\//.test(a)||(a=window.location.href);var b=a.substring(a.indexOf("://")+3),c=b.indexOf("/");-1!=c&&(b=b.substring(0,c));c=a.substring(0,a.indexOf("://"));if(!c)throw Error("URI is missing protocol: "+a);if("http"!==c&&"https"!==c&&"chrome-extension"!==c&&"moz-extension"!==c&&"file"!==c&&"android-app"!==
c&&"chrome-search"!==c&&"chrome-untrusted"!==c&&"chrome"!==c&&"app"!==c&&"devtools"!==c)throw Error("Invalid URI scheme in origin: "+c);a="";var d=b.indexOf(":");if(-1!=d){var e=b.substring(d+1);b=b.substring(0,d);if("http"===c&&"80"!==e||"https"===c&&"443"!==e)a=":"+e}return c+"://"+b+a}
;function Dg(){function a(){e[0]=1732584193;e[1]=4023233417;e[2]=2562383102;e[3]=271733878;e[4]=3285377520;n=m=0}
function b(q){for(var u=g,t=0;64>t;t+=4)u[t/4]=q[t]<<24|q[t+1]<<16|q[t+2]<<8|q[t+3];for(t=16;80>t;t++)q=u[t-3]^u[t-8]^u[t-14]^u[t-16],u[t]=(q<<1|q>>>31)&4294967295;q=e[0];var B=e[1],C=e[2],F=e[3],M=e[4];for(t=0;80>t;t++){if(40>t)if(20>t){var S=F^B&(C^F);var R=1518500249}else S=B^C^F,R=1859775393;else 60>t?(S=B&C|F&(B|C),R=2400959708):(S=B^C^F,R=3395469782);S=((q<<5|q>>>27)&4294967295)+S+M+R+u[t]&4294967295;M=F;F=C;C=(B<<30|B>>>2)&4294967295;B=q;q=S}e[0]=e[0]+q&4294967295;e[1]=e[1]+B&4294967295;e[2]=
e[2]+C&4294967295;e[3]=e[3]+F&4294967295;e[4]=e[4]+M&4294967295}
function c(q,u){if("string"===typeof q){q=unescape(encodeURIComponent(q));for(var t=[],B=0,C=q.length;B<C;++B)t.push(q.charCodeAt(B));q=t}u||(u=q.length);t=0;if(0==m)for(;t+64<u;)b(q.slice(t,t+64)),t+=64,n+=64;for(;t<u;)if(f[m++]=q[t++],n++,64==m)for(m=0,b(f);t+64<u;)b(q.slice(t,t+64)),t+=64,n+=64}
function d(){var q=[],u=8*n;56>m?c(h,56-m):c(h,64-(m-56));for(var t=63;56<=t;t--)f[t]=u&255,u>>>=8;b(f);for(t=u=0;5>t;t++)for(var B=24;0<=B;B-=8)q[u++]=e[t]>>B&255;return q}
for(var e=[],f=[],g=[],h=[128],l=1;64>l;++l)h[l]=0;var m,n;a();return{reset:a,update:c,digest:d,ie:function(){for(var q=d(),u="",t=0;t<q.length;t++)u+="0123456789ABCDEF".charAt(Math.floor(q[t]/16))+"0123456789ABCDEF".charAt(q[t]%16);return u}}}
;function Eg(a,b,c){var d=String(y.location.href);return d&&a&&b?[b,Fg(Cg(d),a,c||null)].join(" "):null}
function Fg(a,b,c){var d=[],e=[];if(1==(Array.isArray(c)?2:1))return e=[b,a],fb(d,function(h){e.push(h)}),Gg(e.join(" "));
var f=[],g=[];fb(c,function(h){g.push(h.key);f.push(h.value)});
c=Math.floor((new Date).getTime()/1E3);e=0==f.length?[c,b,a]:[f.join(":"),c,b,a];fb(d,function(h){e.push(h)});
a=Gg(e.join(" "));a=[c,a];0==g.length||a.push(g.join(""));return a.join("_")}
function Gg(a){var b=Dg();b.update(a);return b.ie().toLowerCase()}
;var Hg={};function Ig(a){this.h=a||{cookie:""}}
k=Ig.prototype;k.isEnabled=function(){if(!y.navigator.cookieEnabled)return!1;if(this.h.cookie)return!0;this.set("TESTCOOKIESENABLED","1",{kc:60});if("1"!==this.get("TESTCOOKIESENABLED"))return!1;this.remove("TESTCOOKIESENABLED");return!0};
k.set=function(a,b,c){var d=!1;if("object"===typeof c){var e=c.Gg;d=c.secure||!1;var f=c.domain||void 0;var g=c.path||void 0;var h=c.kc}if(/[;=\s]/.test(a))throw Error('Invalid cookie name "'+a+'"');if(/[;\r\n]/.test(b))throw Error('Invalid cookie value "'+b+'"');void 0===h&&(h=-1);c=f?";domain="+f:"";g=g?";path="+g:"";d=d?";secure":"";h=0>h?"":0==h?";expires="+(new Date(1970,1,1)).toUTCString():";expires="+(new Date(Date.now()+1E3*h)).toUTCString();this.h.cookie=a+"="+b+c+g+h+d+(null!=e?";samesite="+
e:"")};
k.get=function(a,b){for(var c=a+"=",d=(this.h.cookie||"").split(";"),e=0,f;e<d.length;e++){f=Ib(d[e]);if(0==f.lastIndexOf(c,0))return f.slice(c.length);if(f==a)return""}return b};
k.remove=function(a,b,c){var d=void 0!==this.get(a);this.set(a,"",{kc:0,path:b,domain:c});return d};
k.Bc=function(){return Jg(this).keys};
k.clear=function(){for(var a=Jg(this).keys,b=a.length-1;0<=b;b--)this.remove(a[b])};
function Jg(a){a=(a.h.cookie||"").split(";");for(var b=[],c=[],d,e,f=0;f<a.length;f++)e=Ib(a[f]),d=e.indexOf("="),-1==d?(b.push(""),c.push(e)):(b.push(e.substring(0,d)),c.push(e.substring(d+1)));return{keys:b,values:c}}
var Kg=new Ig("undefined"==typeof document?null:document);function Lg(a){return!!Hg.FPA_SAMESITE_PHASE2_MOD||!(void 0===a||!a)}
function Mg(a){a=void 0===a?!1:a;var b=y.__SAPISID||y.__APISID||y.__3PSAPISID||y.__OVERRIDE_SID;Lg(a)&&(b=b||y.__1PSAPISID);if(b)return!0;var c=new Ig(document);b=c.get("SAPISID")||c.get("APISID")||c.get("__Secure-3PAPISID")||c.get("SID")||c.get("OSID");Lg(a)&&(b=b||c.get("__Secure-1PAPISID"));return!!b}
function Ng(a,b,c,d){(a=y[a])||(a=(new Ig(document)).get(b));return a?Eg(a,c,d):null}
function Og(a,b){b=void 0===b?!1:b;var c=Cg(String(y.location.href)),d=[];if(Mg(b)){c=0==c.indexOf("https:")||0==c.indexOf("chrome-extension:")||0==c.indexOf("moz-extension:");var e=c?y.__SAPISID:y.__APISID;e||(e=new Ig(document),e=e.get(c?"SAPISID":"APISID")||e.get("__Secure-3PAPISID"));(e=e?Eg(e,c?"SAPISIDHASH":"APISIDHASH",a):null)&&d.push(e);c&&Lg(b)&&((b=Ng("__1PSAPISID","__Secure-1PAPISID","SAPISID1PHASH",a))&&d.push(b),(a=Ng("__3PSAPISID","__Secure-3PAPISID","SAPISID3PHASH",a))&&d.push(a))}return 0==
d.length?null:d.join(" ")}
;function Pg(a){I.call(this,a,-1,Qg)}
v(Pg,I);var Qg=[2];function Rg(a){this.h=this.i=this.j=a}
Rg.prototype.reset=function(){this.h=this.i=this.j};
Rg.prototype.getValue=function(){return this.i};function Sg(a){var b=[];Tg(new Ug,a,b);return b.join("")}
function Ug(){}
function Tg(a,b,c){if(null==b)c.push("null");else{if("object"==typeof b){if(Array.isArray(b)){var d=b;b=d.length;c.push("[");for(var e="",f=0;f<b;f++)c.push(e),Tg(a,d[f],c),e=",";c.push("]");return}if(b instanceof String||b instanceof Number||b instanceof Boolean)b=b.valueOf();else{c.push("{");e="";for(d in b)Object.prototype.hasOwnProperty.call(b,d)&&(f=b[d],"function"!=typeof f&&(c.push(e),Vg(d,c),c.push(":"),Tg(a,f,c),e=","));c.push("}");return}}switch(typeof b){case "string":Vg(b,c);break;case "number":c.push(isFinite(b)&&
!isNaN(b)?String(b):"null");break;case "boolean":c.push(String(b));break;case "function":c.push("null");break;default:throw Error("Unknown type: "+typeof b);}}}
var Wg={'"':'\\"',"\\":"\\\\","/":"\\/","\b":"\\b","\f":"\\f","\n":"\\n","\r":"\\r","\t":"\\t","\v":"\\u000b"},Xg=/\uffff/.test("\uffff")?/[\\"\x00-\x1f\x7f-\uffff]/g:/[\\"\x00-\x1f\x7f-\xff]/g;function Vg(a,b){b.push('"',a.replace(Xg,function(c){var d=Wg[c];d||(d="\\u"+(c.charCodeAt(0)|65536).toString(16).slice(1),Wg[c]=d);return d}),'"')}
;function Yg(){}
Yg.prototype.h=null;Yg.prototype.getOptions=function(){var a;(a=this.h)||(a={},Zg(this)&&(a[0]=!0,a[1]=!0),a=this.h=a);return a};var $g;function ah(){}
Ya(ah,Yg);function bh(a){return(a=Zg(a))?new ActiveXObject(a):new XMLHttpRequest}
function Zg(a){if(!a.i&&"undefined"==typeof XMLHttpRequest&&"undefined"!=typeof ActiveXObject){for(var b=["MSXML2.XMLHTTP.6.0","MSXML2.XMLHTTP.3.0","MSXML2.XMLHTTP","Microsoft.XMLHTTP"],c=0;c<b.length;c++){var d=b[c];try{return new ActiveXObject(d),a.i=d}catch(e){}}throw Error("Could not create ActiveXObject. ActiveX might be disabled, or MSXML might not be installed");}return a.i}
$g=new ah;function ch(a){qf.call(this);this.headers=new Map;this.U=a||null;this.i=!1;this.R=this.F=null;this.m=this.ha="";this.j=this.Z=this.A=this.Y=!1;this.s=0;this.L=null;this.za="";this.na=this.oa=!1}
Ya(ch,qf);var dh=/^https?$/i,eh=["POST","PUT"],fh=[];function gh(a,b,c,d,e,f,g){var h=new ch;fh.push(h);b&&h.Ka("complete",b);h.l.add("ready",h.ge,!0,void 0,void 0);f&&(h.s=Math.max(0,f));g&&(h.oa=g);h.send(a,c,d,e)}
k=ch.prototype;k.ge=function(){this.dispose();kb(fh,this)};
k.send=function(a,b,c,d){if(this.F)throw Error("[goog.net.XhrIo] Object is active with another request="+this.ha+"; newUri="+a);b=b?b.toUpperCase():"GET";this.ha=a;this.m="";this.Y=!1;this.i=!0;this.F=this.U?bh(this.U):bh($g);this.R=this.U?this.U.getOptions():$g.getOptions();this.F.onreadystatechange=Wa(this.Ad,this);try{this.getStatus(),this.Z=!0,this.F.open(b,String(a),!0),this.Z=!1}catch(g){this.getStatus();hh(this,g);return}a=c||"";c=new Map(this.headers);if(d)if(Object.getPrototypeOf(d)===Object.prototype)for(var e in d)c.set(e,
d[e]);else if("function"===typeof d.keys&&"function"===typeof d.get){e=r(d.keys());for(var f=e.next();!f.done;f=e.next())f=f.value,c.set(f,d.get(f))}else throw Error("Unknown input type for opt_headers: "+String(d));d=Array.from(c.keys()).find(function(g){return"content-type"==g.toLowerCase()});
e=y.FormData&&a instanceof y.FormData;!(0<=eb(eh,b))||d||e||c.set("Content-Type","application/x-www-form-urlencoded;charset=utf-8");b=r(c);for(d=b.next();!d.done;d=b.next())c=r(d.value),d=c.next().value,c=c.next().value,this.F.setRequestHeader(d,c);this.za&&(this.F.responseType=this.za);"withCredentials"in this.F&&this.F.withCredentials!==this.oa&&(this.F.withCredentials=this.oa);try{ih(this),0<this.s&&(this.na=jh(this.F),this.getStatus(),this.na?(this.F.timeout=this.s,this.F.ontimeout=Wa(this.Od,
this)):this.L=eg(this.Od,this.s,this)),this.getStatus(),this.A=!0,this.F.send(a),this.A=!1}catch(g){this.getStatus(),hh(this,g)}};
function jh(a){return Wc&&"number"===typeof a.timeout&&void 0!==a.ontimeout}
k.Od=function(){"undefined"!=typeof Ma&&this.F&&(this.m="Timed out after "+this.s+"ms, aborting",this.getStatus(),rf(this,"timeout"),this.abort(8))};
function hh(a,b){a.i=!1;a.F&&(a.j=!0,a.F.abort(),a.j=!1);a.m=b;kh(a);lh(a)}
function kh(a){a.Y||(a.Y=!0,rf(a,"complete"),rf(a,"error"))}
k.abort=function(){this.F&&this.i&&(this.getStatus(),this.i=!1,this.j=!0,this.F.abort(),this.j=!1,rf(this,"complete"),rf(this,"abort"),lh(this))};
k.M=function(){this.F&&(this.i&&(this.i=!1,this.j=!0,this.F.abort(),this.j=!1),lh(this,!0));ch.ta.M.call(this)};
k.Ad=function(){this.h()||(this.Z||this.A||this.j?mh(this):this.Je())};
k.Je=function(){mh(this)};
function mh(a){if(a.i&&"undefined"!=typeof Ma)if(a.R[1]&&4==nh(a)&&2==a.getStatus())a.getStatus();else if(a.A&&4==nh(a))eg(a.Ad,0,a);else if(rf(a,"readystatechange"),a.isComplete()){a.getStatus();a.i=!1;try{if(oh(a))rf(a,"complete"),rf(a,"success");else{try{var b=2<nh(a)?a.F.statusText:""}catch(c){b=""}a.m=b+" ["+a.getStatus()+"]";kh(a)}}finally{lh(a)}}}
function lh(a,b){if(a.F){ih(a);var c=a.F,d=a.R[0]?function(){}:null;
a.F=null;a.R=null;b||rf(a,"ready");try{c.onreadystatechange=d}catch(e){}}}
function ih(a){a.F&&a.na&&(a.F.ontimeout=null);a.L&&(y.clearTimeout(a.L),a.L=null)}
k.isActive=function(){return!!this.F};
k.isComplete=function(){return 4==nh(this)};
function oh(a){var b=a.getStatus();a:switch(b){case 200:case 201:case 202:case 204:case 206:case 304:case 1223:var c=!0;break a;default:c=!1}if(!c){if(b=0===b)a=vc(1,String(a.ha)),!a&&y.self&&y.self.location&&(a=y.self.location.protocol.slice(0,-1)),b=!dh.test(a?a.toLowerCase():"");c=b}return c}
function nh(a){return a.F?a.F.readyState:0}
k.getStatus=function(){try{return 2<nh(this)?this.F.status:-1}catch(a){return-1}};
k.getLastError=function(){return"string"===typeof this.m?this.m:String(this.m)};function ph(a){I.call(this,a,-1,qh)}
v(ph,I);var qh=[1];function rh(a){I.call(this,a)}
v(rh,I);var sh=["platform","platformVersion","architecture","model","uaFullVersion"];new ph;function ke(a){I.call(this,a)}
v(ke,I);function th(a){I.call(this,a,33,uh)}
v(th,I);var uh=[3,20,27];function vh(a){I.call(this,a,17,wh)}
v(vh,I);var wh=[3,5];function xh(a){I.call(this,a,6,yh)}
v(xh,I);var yh=[5];function zh(a){I.call(this,a)}
v(zh,I);var Ch;Ch=new function(a,b,c){this.i=a;this.fieldName=b;this.h=c;this.isRepeated=0;this.j=de;this.defaultValue=void 0}(175237375,{wg:0},zh);function Dh(a,b,c,d,e,f,g,h,l,m,n){qf.call(this);var q=this;this.Y="";this.j=[];this.Xc="";this.Yc=this.eb=-1;this.Wb=!1;this.R=this.m=null;this.L=0;this.Yd=1;this.timeoutMillis=0;this.za=!1;qf.call(this);this.Xb=b||function(){};
this.A=new Eh(a,f);this.Wd=d;this.Vb=n;this.Zd=Xa(vf,0,1);this.ha=e||null;this.U=c||null;this.na=g||!1;this.pageId=l||null;this.logger=null;this.withCredentials=!h;this.Fb=f||!1;!this.Fb&&(65<=jc("Chromium")||45<=jc("Firefox")||12<=jc("Safari")||(Sc()||D("iPad")||D("iPod"))&&Tc());a=je();Fh(this.A,a);this.s=new Rg(1E4);this.i=new cg(this.s.getValue());He(this,this.i);m=Gh(this,m);af(this.i,"tick",m,!1,this);this.Z=new cg(6E5);He(this,this.Z);af(this.Z,"tick",m,!1,this);this.na||this.Z.start();this.Fb||
(af(document,"visibilitychange",function(){"hidden"===document.visibilityState&&q.oa()}),af(document,"pagehide",this.oa,!1,this))}
v(Dh,qf);function Gh(a,b){return b?function(){b().then(function(){a.flush()})}:function(){a.flush()}}
Dh.prototype.M=function(){this.oa();qf.prototype.M.call(this)};
function Hh(a){a.ha||(a.ha=.01>a.Zd()?"https://www.google.com/log?format=json&hasfast=true":"https://play.google.com/log?format=json&hasfast=true");return a.ha}
function Ih(a,b){a.s=new Rg(1>b?1:b);dg(a.i,a.s.getValue())}
Dh.prototype.log=function(a){a=a.clone();var b=this.Yd++;G(a,21,b);this.Y&&G(a,26,this.Y);if(!Zd(a,1)){b=a;var c=Date.now().toString();G(b,1,c)}null==Zd(a,15)&&G(a,15,60*(new Date).getTimezoneOffset());this.m&&(b=this.m.clone(),H(a,Pg,16,b));for(;1E3<=this.j.length;)this.j.shift(),++this.L;this.j.push(a);rf(this,new Jh(a));this.na||this.i.enabled||this.i.start()};
Dh.prototype.flush=function(a,b){var c=this;if(0===this.j.length)a&&a();else if(this.za)Kh(this);else{var d=Date.now();if(this.Yc>d&&this.eb<d)b&&b("throttled");else{var e=Lh(this.A,this.j,this.L);d={};var f=this.Xb();f&&(d.Authorization=f);var g=Hh(this);this.U&&(d["X-Goog-AuthUser"]=this.U,g=Ec(g,"authuser",this.U));this.pageId&&(d["X-Goog-PageId"]=this.pageId,g=Ec(g,"pageId",this.pageId));if(f&&this.Xc===f)b&&b("stale-auth-token");else{this.j=[];this.i.enabled&&this.i.stop();this.L=0;var h=ye(e),
l;this.R&&this.R.isSupported(h.length)&&(l=this.R.compress(h));var m={url:g,body:h,de:1,Oc:d,requestType:"POST",withCredentials:this.withCredentials,timeoutMillis:this.timeoutMillis},n=function(t){c.s.reset();dg(c.i,c.s.getValue());if(t){var B=null;try{var C=JSON.parse(t.replace(")]}'\n",""));B=new xh(C)}catch(F){}B&&(t=Number(le(Zd(B,1),"-1")),0<t&&(c.eb=Date.now(),c.Yc=c.eb+t),B=Ch.h?Ch.j(B,Ch.h,Ch.i,!0):Ch.j(B,Ch.i,Ch.defaultValue,!0))&&(B=le(Zd(B,1),-1),-1!=B&&(c.Wb||Ih(c,B)))}a&&a()},q=function(t,
B){var C=E(e.P),F=!!(C&2);
C=fe(e,th,3,F,C);var M=ae(e,3,3,void 0,F);if(!(F||E(M)&8)){for(F=0;F<C.length;F++){var S=C[F],R=ee(S);S!==R&&(C[F]=R,M[F]=R.P)}Ed(M,8)}M=c.s;M.h=Math.min(3E5,2*M.h);M.i=Math.min(3E5,M.h+Math.round(.2*(Math.random()-.5)*M.h));dg(c.i,c.s.getValue());401===t&&f&&(c.Xc=f);void 0===B&&(B=500<=t&&600>t||401===t||0===t);B&&(c.j=C.concat(c.j),c.na||c.i.enabled||c.i.start());b&&b("net-send-failed",t)},u=function(){c.Vb?c.Vb.send(m,n,q):c.Wd(m,n,q)};
l?l.then(function(t){m.Oc["Content-Encoding"]="gzip";m.Oc["Content-Type"]="application/binary";m.body=t;m.de=2;u()},function(){u()}):u()}}}};
Dh.prototype.oa=function(){this.flush()};
function Kh(a){Mh(a,function(b,c){b=Ec(b,"format","json");var d=!1;try{d=window.navigator.sendBeacon(b,ye(c))}catch(e){}a.za&&!d&&(a.za=!1);return d})}
function Mh(a,b){if(0!==a.j.length){var c=Ic(Hh(a),"format");c=Cc(c,"auth",a.Xb(),"authuser",a.U||"0");for(var d=0;10>d&&a.j.length;++d){var e=a.j.slice(0,32),f=Lh(a.A,e,a.L);if(!b(c,f))break;a.L=0;a.j=a.j.slice(e.length)}a.i.enabled&&a.i.stop()}}
function Jh(){Je.call(this,"event-logged",void 0)}
v(Jh,Je);function Eh(a,b){this.i=b=void 0===b?!1:b;this.uach=this.locale=null;this.h=new vh;G(this.h,2,a);b||(this.locale=document.documentElement.getAttribute("lang"));Fh(this,new ke)}
function Fh(a,b){H(a.h,ke,1,b);Zd(b,1)||G(b,1,1);a.i||(b=Nh(a),Zd(b,5)||G(b,5,a.locale));a.uach&&(b=Nh(a),de(b,ph,9)||H(b,ph,9,a.uach))}
function Oh(a,b){var c=void 0===c?sh:c;b(window,c).then(function(d){a.uach=d;d=Nh(a);H(d,ph,9,a.uach);return!0}).catch(function(){return!1})}
function Nh(a){a=de(a.h,ke,1);var b=de(a,rh,11);b||(b=new rh,H(a,rh,11,b));return b}
function Lh(a,b,c){c=void 0===c?0:c;a=a.h.clone();var d=Date.now().toString();a=G(a,4,d);b=he(a,th,3,b);c&&G(b,14,c);return b}
;function Ph(a,b,c){gh(a.url,function(d){d=d.target;if(oh(d)){try{var e=d.F?d.F.responseText:""}catch(f){e=""}b(e)}else c(d.getStatus())},a.requestType,a.body,a.Oc,a.timeoutMillis,a.withCredentials)}
;function Qh(){this.j="https://play.google.com/log?format=json&hasfast=true";this.A=!1;this.m=Ph;this.h=""}
;function Rh(){var a=void 0===a?"":a;var b=void 0===b?"":b;var c=new Qh;c.h="";""!=a&&(c.j=a);b&&(c.i=b);a=new Dh(1828,c.R?c.R:Og,"0",c.m,c.j,c.A,!1,c.Z,void 0,void 0,c.s?c.s:void 0);c.W&&Fh(a.A,c.W);if(c.i){b=c.i;var d=Nh(a.A);G(d,7,b)}c.l&&(a.R=c.l);c.h&&(a.Y=c.h);c.H&&((b=c.H)?(a.m||(a.m=new Pg),b=ye(b),G(a.m,4,b)):a.m&&G(a.m,4,void 0,!1));c.U&&(d=c.U,a.m||(a.m=new Pg),b=a.m,d=null==d?Rd:Fd(d,1),G(b,2,d));c.L&&(b=c.L,a.Wb=!0,Ih(a,b));c.Y&&Oh(a.A,c.Y);this.h=a}
Rh.prototype.flush=function(a){var b=a||[];if(b.length){a=new Ag;for(var c=[],d=0;d<b.length;d++){var e=b[d],f=e,g=new yg;var h=G(g,1,f.i);var l=f;g=[];for(var m=0;m<l.h.length;m++)g.push(l.h[m].Kb);if(null==g)g=G(h,3,Rd);else{l=E(g);if(!(l&4)){if(l&2||Object.isFrozen(g))g=Array.prototype.slice.call(g);for(m=0;m<g.length;m++)g[m]=g[m];Gd(g,l|5)}g=G(h,3,g)}h=[];l=[];m=r(f.qb.keys());for(var n=m.next();!n.done;n=m.next())l.push(n.value.split(","));for(m=0;m<l.length;m++){n=l[m];var q=f.l;for(var u=
f.yc(n)||[],t=[],B=0;B<u.length;B++){var C=u[B];C=C&&C.fd;var F=new ug;switch(q){case 3:be(F,1,vg,Number(C));break;case 2:be(F,2,vg,Ud(Number(C)))}t.push(F)}q=t;for(u=0;u<q.length;u++){t=q[u];B=new wg;t=H(B,ug,2,t);B=n;C=[];F=f;for(var M=[],S=0;S<F.h.length;S++)M.push(F.h[S].Lb);F=M;for(M=0;M<F.length;M++){S=F[M];var R=B[M],X=new sg;switch(S){case 3:be(X,1,tg,String(R));break;case 2:be(X,2,tg,Number(R));break;case 1:be(X,3,tg,"true"==R)}C.push(X)}he(t,sg,1,C);h.push(t)}}he(g,wg,4,h);c.push(g);e.clear()}he(a,
yg,1,c);b=this.h;a instanceof th?b.log(a):(c=new th,a=ye(a),a=G(c,8,a),b.log(a));this.h.flush()}};function Sh(a){this.H=Th();this.m=new Rh;this.h=new fg(this.m);this.s=new lg(this.h);this.j=new mg(this.h);this.l=new ng(this.h);this.i=new jg(this.h);this.Ma=pg(a)}
function Th(){var a,b,c;return null!=(c=null==(a=globalThis.performance)?void 0:null==(b=a.now)?void 0:b.call(a))?c:Date.now()}
;function Uh(){var a=this;this.promise=new Promise(function(b,c){a.resolve=b;a.reject=c})}
;function Vh(a){var b=this;this.i=!1;var c=a.program;var d=a.te;if(a.Ne){var e;this.qa=null!=(e=a.qa)?e:new Sh(d)}var f=new Uh;this.j=f.promise;if(y[d])if(y[d].a){var g;null!=(g=this.qa)&&kg(g.i,g.Ma,3)}else{var h;null!=(h=this.qa)&&kg(h.i,h.Ma,2);var l;null!=(l=this.qa)&&l.h.Db()}else{var m;null!=(m=this.qa)&&kg(m.i,m.Ma,1);var n;null!=(n=this.qa)&&n.h.Db()}this.l=r((0,y[d].a)(c,function(q,u){Promise.resolve().then(function(){var t;if(null!=(t=b.qa)){var B=Th()-t.H;t.s.h.vc("/client_streamz/bg/fil",
B,t.Ma)}f.resolve({be:q,df:u})})},!0)).next().value;
this.cf=f.promise.then(function(){})}
Vh.prototype.snapshot=function(a){var b=this;if(this.i)throw Error("Already disposed");var c=Th(),d;null!=(d=this.qa)&&d.j.h.uc("/client_streamz/bg/fsc",d.Ma);return this.j.then(function(e){var f=e.be;return new Promise(function(g){f(function(h){var l;if(null!=(l=b.qa)){var m=Th()-c;l.l.h.vc("/client_streamz/bg/fsl",m,l.Ma)}g(h)},[a.hd,
a.ef])})})};
Vh.prototype.Ld=function(a){if(this.i)throw Error("Already disposed");var b=Th(),c;null!=(c=this.qa)&&c.j.h.uc("/client_streamz/bg/fsc",c.Ma);a=this.l([a.hd,a.ef]);null!=(c=this.qa)&&(b=Th()-b,c.l.h.vc("/client_streamz/bg/fsl",b,c.Ma));return a};
Vh.prototype.dispose=function(){var a;null!=(a=this.qa)&&a.h.Db();this.i=!0;this.j.then(function(b){(b=b.df)&&b()})};
Vh.prototype.h=function(){return this.i};var Wh=window;Bb("csi.gstatic.com");Bb("googleads.g.doubleclick.net");Bb("partner.googleadservices.com");Bb("pubads.g.doubleclick.net");Bb("securepubads.g.doubleclick.net");Bb("tpc.googlesyndication.com");/*

 SPDX-License-Identifier: Apache-2.0
*/
var Xh;try{new URL("s://g"),Xh=!0}catch(a){Xh=!1}var Yh=Xh;var Zh={};function $h(){}
function ai(a){this.h=a}
v(ai,$h);ai.prototype.toString=function(){return this.h};function bi(a){var b="true".toString(),c=[new ai(ci[0].toLowerCase(),Zh)];if(0===c.length)throw Error("");if(c.map(function(d){if(d instanceof ai)d=d.h;else throw Error("");return d}).every(function(d){return 0!=="data-loaded".indexOf(d)}))throw Error('Attribute "data-loaded" does not match any of the allowed prefixes.');
a.setAttribute("data-loaded",b)}
;function di(a){var b,c,d=null==(c=(b=(a.ownerDocument&&a.ownerDocument.defaultView||window).document).querySelector)?void 0:c.call(b,"script[nonce]");(b=d?d.nonce||d.getAttribute("nonce")||"":"")&&a.setAttribute("nonce",b)}
function ei(a,b){a.src=Gb(b);di(a)}
;function fi(a){this.Be=a}
function gi(a){return new fi(function(b){return b.substr(0,a.length+1).toLowerCase()===a+":"})}
var hi=[gi("data"),gi("http"),gi("https"),gi("mailto"),gi("ftp"),new fi(function(a){return/^[^:]*([/?#]|$)/.test(a)})];function ii(a){var b=ji;if(b)for(var c in b)Object.prototype.hasOwnProperty.call(b,c)&&a(b[c],c,b)}
function ki(){var a=[];ii(function(b){a.push(b)});
return a}
var ji={nf:"allow-forms",pf:"allow-modals",qf:"allow-orientation-lock",rf:"allow-pointer-lock",sf:"allow-popups",tf:"allow-popups-to-escape-sandbox",uf:"allow-presentation",vf:"allow-same-origin",wf:"allow-scripts",xf:"allow-top-navigation",yf:"allow-top-navigation-by-user-activation"},li=db(function(){return ki()});
function mi(){var a=ni(),b={};fb(li(),function(c){a.sandbox&&a.sandbox.supports&&a.sandbox.supports(c)&&(b[c]=!0)});
return b}
function ni(){var a=void 0===a?document:a;return a.createElement("iframe")}
;function oi(a){"number"==typeof a&&(a=Math.round(a)+"px");return a}
;var pi=(new Date).getTime();var qi="client_dev_domain client_dev_regex_map client_dev_root_url client_rollout_override expflag forcedCapability jsfeat jsmode mods".split(" ");ha(qi);"undefined"!==typeof TextDecoder&&new TextDecoder;var ri="undefined"!==typeof TextEncoder?new TextEncoder:null,si=ri?function(a){return ri.encode(a)}:function(a){a=Kc(a);
for(var b=new Uint8Array(a.length),c=0;c<b.length;c++)b[c]=a[c];return b};function ti(a){qf.call(this);var b=this;this.A=this.j=0;this.xa=null!=a?a:{ea:function(e,f){return setTimeout(e,f)},
Ba:function(e){clearTimeout(e)}};
var c,d;this.i=null!=(d=null==(c=window.navigator)?void 0:c.onLine)?d:!0;this.m=function(){return x(function(e){return w(e,ui(b),0)})};
window.addEventListener("offline",this.m);window.addEventListener("online",this.m);this.A||vi(this)}
v(ti,qf);function wi(){var a=xi;ti.h||(ti.h=new ti(a));return ti.h}
ti.prototype.dispose=function(){window.removeEventListener("offline",this.m);window.removeEventListener("online",this.m);this.xa.Ba(this.A);delete ti.h};
ti.prototype.la=function(){return this.i};
function vi(a){a.A=a.xa.ea(function(){var b;return x(function(c){if(1==c.h)return a.i?(null==(b=window.navigator)?0:b.onLine)?c.v(3):w(c,ui(a),3):w(c,ui(a),3);vi(a);c.h=0})},3E4)}
function ui(a,b){return a.s?a.s:a.s=new Promise(function(c){var d,e,f,g;return x(function(h){switch(h.h){case 1:return d=window.AbortController?new window.AbortController:void 0,f=null==(e=d)?void 0:e.signal,g=!1,xa(h,2,3),d&&(a.j=a.xa.ea(function(){d.abort()},b||2E4)),w(h,fetch("/generate_204",{method:"HEAD",
signal:f}),5);case 5:g=!0;case 3:Aa(h);a.s=void 0;a.j&&(a.xa.Ba(a.j),a.j=0);g!==a.i&&(a.i=g,a.i?rf(a,"networkstatus-online"):rf(a,"networkstatus-offline"));c(g);Ca(h);break;case 2:za(h),g=!1,h.v(3)}})})}
;function yi(){this.data_=[];this.h=-1}
yi.prototype.set=function(a,b){b=void 0===b?!0:b;0<=a&&52>a&&Number.isInteger(a)&&this.data_[a]!==b&&(this.data_[a]=b,this.h=-1)};
yi.prototype.get=function(a){return!!this.data_[a]};
function zi(a){-1===a.h&&(a.h=ib(a.data_,function(b,c,d){return c?b+Math.pow(2,d):b},0));
return a.h}
;function Ai(a,b){this.h=a[y.Symbol.iterator]();this.i=b}
Ai.prototype[Symbol.iterator]=function(){return this};
Ai.prototype.next=function(){var a=this.h.next();return{value:a.done?void 0:this.i.call(void 0,a.value),done:a.done}};
function Bi(a,b){return new Ai(a,b)}
;function Ci(){this.blockSize=-1}
;function Di(){this.blockSize=-1;this.blockSize=64;this.h=[];this.m=[];this.s=[];this.j=[];this.j[0]=128;for(var a=1;a<this.blockSize;++a)this.j[a]=0;this.l=this.i=0;this.reset()}
Ya(Di,Ci);Di.prototype.reset=function(){this.h[0]=1732584193;this.h[1]=4023233417;this.h[2]=2562383102;this.h[3]=271733878;this.h[4]=3285377520;this.l=this.i=0};
function Ei(a,b,c){c||(c=0);var d=a.s;if("string"===typeof b)for(var e=0;16>e;e++)d[e]=b.charCodeAt(c)<<24|b.charCodeAt(c+1)<<16|b.charCodeAt(c+2)<<8|b.charCodeAt(c+3),c+=4;else for(e=0;16>e;e++)d[e]=b[c]<<24|b[c+1]<<16|b[c+2]<<8|b[c+3],c+=4;for(e=16;80>e;e++){var f=d[e-3]^d[e-8]^d[e-14]^d[e-16];d[e]=(f<<1|f>>>31)&4294967295}b=a.h[0];c=a.h[1];var g=a.h[2],h=a.h[3],l=a.h[4];for(e=0;80>e;e++){if(40>e)if(20>e){f=h^c&(g^h);var m=1518500249}else f=c^g^h,m=1859775393;else 60>e?(f=c&g|h&(c|g),m=2400959708):
(f=c^g^h,m=3395469782);f=(b<<5|b>>>27)+f+l+m+d[e]&4294967295;l=h;h=g;g=(c<<30|c>>>2)&4294967295;c=b;b=f}a.h[0]=a.h[0]+b&4294967295;a.h[1]=a.h[1]+c&4294967295;a.h[2]=a.h[2]+g&4294967295;a.h[3]=a.h[3]+h&4294967295;a.h[4]=a.h[4]+l&4294967295}
Di.prototype.update=function(a,b){if(null!=a){void 0===b&&(b=a.length);for(var c=b-this.blockSize,d=0,e=this.m,f=this.i;d<b;){if(0==f)for(;d<=c;)Ei(this,a,d),d+=this.blockSize;if("string"===typeof a)for(;d<b;){if(e[f]=a.charCodeAt(d),++f,++d,f==this.blockSize){Ei(this,e);f=0;break}}else for(;d<b;)if(e[f]=a[d],++f,++d,f==this.blockSize){Ei(this,e);f=0;break}}this.i=f;this.l+=b}};
Di.prototype.digest=function(){var a=[],b=8*this.l;56>this.i?this.update(this.j,56-this.i):this.update(this.j,this.blockSize-(this.i-56));for(var c=this.blockSize-1;56<=c;c--)this.m[c]=b&255,b/=256;Ei(this,this.m);for(c=b=0;5>c;c++)for(var d=24;0<=d;d-=8)a[b]=this.h[c]>>d&255,++b;return a};function Fi(a){return"string"==typeof a.className?a.className:a.getAttribute&&a.getAttribute("class")||""}
function Gi(a,b){"string"==typeof a.className?a.className=b:a.setAttribute&&a.setAttribute("class",b)}
function Hi(a,b){a.classList?b=a.classList.contains(b):(a=a.classList?a.classList:Fi(a).match(/\S+/g)||[],b=0<=eb(a,b));return b}
function Ii(){var a=document.body;a.classList?a.classList.remove("inverted-hdpi"):Hi(a,"inverted-hdpi")&&Gi(a,Array.prototype.filter.call(a.classList?a.classList:Fi(a).match(/\S+/g)||[],function(b){return"inverted-hdpi"!=b}).join(" "))}
;function Ji(){}
Ji.prototype.next=function(){return Ki};
var Ki={done:!0,value:void 0};function Li(a){return{value:a,done:!1}}
Ji.prototype.Aa=function(){return this};function Mi(a){if(a instanceof Ni||a instanceof Oi||a instanceof Pi)return a;if("function"==typeof a.next)return new Ni(function(){return a});
if("function"==typeof a[Symbol.iterator])return new Ni(function(){return a[Symbol.iterator]()});
if("function"==typeof a.Aa)return new Ni(function(){return a.Aa()});
throw Error("Not an iterator or iterable.");}
function Ni(a){this.i=a}
Ni.prototype.Aa=function(){return new Oi(this.i())};
Ni.prototype[Symbol.iterator]=function(){return new Pi(this.i())};
Ni.prototype.h=function(){return new Pi(this.i())};
function Oi(a){this.i=a}
v(Oi,Ji);Oi.prototype.next=function(){return this.i.next()};
Oi.prototype[Symbol.iterator]=function(){return new Pi(this.i)};
Oi.prototype.h=function(){return new Pi(this.i)};
function Pi(a){Ni.call(this,function(){return a});
this.j=a}
v(Pi,Ni);Pi.prototype.next=function(){return this.j.next()};function Qi(a,b){this.i={};this.h=[];this.Va=this.size=0;var c=arguments.length;if(1<c){if(c%2)throw Error("Uneven number of arguments");for(var d=0;d<c;d+=2)this.set(arguments[d],arguments[d+1])}else if(a)if(a instanceof Qi)for(c=a.Bc(),d=0;d<c.length;d++)this.set(c[d],a.get(c[d]));else for(d in a)this.set(d,a[d])}
k=Qi.prototype;k.Bc=function(){Ri(this);return this.h.concat()};
k.has=function(a){return Si(this.i,a)};
k.equals=function(a,b){if(this===a)return!0;if(this.size!=a.size)return!1;b=b||Ti;Ri(this);for(var c,d=0;c=this.h[d];d++)if(!b(this.get(c),a.get(c)))return!1;return!0};
function Ti(a,b){return a===b}
k.clear=function(){this.i={};this.Va=this.size=this.h.length=0};
k.remove=function(a){return this.delete(a)};
k.delete=function(a){return Si(this.i,a)?(delete this.i[a],--this.size,this.Va++,this.h.length>2*this.size&&Ri(this),!0):!1};
function Ri(a){if(a.size!=a.h.length){for(var b=0,c=0;b<a.h.length;){var d=a.h[b];Si(a.i,d)&&(a.h[c++]=d);b++}a.h.length=c}if(a.size!=a.h.length){var e={};for(c=b=0;b<a.h.length;)d=a.h[b],Si(e,d)||(a.h[c++]=d,e[d]=1),b++;a.h.length=c}}
k.get=function(a,b){return Si(this.i,a)?this.i[a]:b};
k.set=function(a,b){Si(this.i,a)||(this.size+=1,this.h.push(a),this.Va++);this.i[a]=b};
k.forEach=function(a,b){for(var c=this.Bc(),d=0;d<c.length;d++){var e=c[d],f=this.get(e);a.call(b,f,e,this)}};
k.clone=function(){return new Qi(this)};
k.keys=function(){return Mi(this.Aa(!0)).h()};
k.values=function(){return Mi(this.Aa(!1)).h()};
k.entries=function(){var a=this;return Bi(this.keys(),function(b){return[b,a.get(b)]})};
k.Aa=function(a){Ri(this);var b=0,c=this.Va,d=this,e=new Ji;e.next=function(){if(c!=d.Va)throw Error("The map has changed since the iterator was created");if(b>=d.h.length)return Ki;var f=d.h[b++];return Li(a?f:d.i[f])};
return e};
function Si(a,b){return Object.prototype.hasOwnProperty.call(a,b)}
;function Ui(a){Ge.call(this);this.s=1;this.l=[];this.m=0;this.i=[];this.j={};this.A=!!a}
Ya(Ui,Ge);k=Ui.prototype;k.subscribe=function(a,b,c){var d=this.j[a];d||(d=this.j[a]=[]);var e=this.s;this.i[e]=a;this.i[e+1]=b;this.i[e+2]=c;this.s=e+3;d.push(e);return e};
function Vi(a,b,c,d){if(b=a.j[b]){var e=a.i;(b=b.find(function(f){return e[f+1]==c&&e[f+2]==d}))&&a.Eb(b)}}
k.Eb=function(a){var b=this.i[a];if(b){var c=this.j[b];0!=this.m?(this.l.push(a),this.i[a+1]=function(){}):(c&&kb(c,a),delete this.i[a],delete this.i[a+1],delete this.i[a+2])}return!!b};
k.cb=function(a,b){var c=this.j[a];if(c){for(var d=Array(arguments.length-1),e=1,f=arguments.length;e<f;e++)d[e-1]=arguments[e];if(this.A)for(e=0;e<c.length;e++){var g=c[e];Wi(this.i[g+1],this.i[g+2],d)}else{this.m++;try{for(e=0,f=c.length;e<f&&!this.h();e++)g=c[e],this.i[g+1].apply(this.i[g+2],d)}finally{if(this.m--,0<this.l.length&&0==this.m)for(;c=this.l.pop();)this.Eb(c)}}return 0!=e}return!1};
function Wi(a,b,c){Jf(function(){a.apply(b,c)})}
k.clear=function(a){if(a){var b=this.j[a];b&&(b.forEach(this.Eb,this),delete this.j[a])}else this.i.length=0,this.j={}};
k.M=function(){Ui.ta.M.call(this);this.clear();this.l.length=0};function Xi(a){this.h=a}
Xi.prototype.set=function(a,b){void 0===b?this.h.remove(a):this.h.set(a,Sg(b))};
Xi.prototype.get=function(a){try{var b=this.h.get(a)}catch(c){return}if(null!==b)try{return JSON.parse(b)}catch(c){throw"Storage: Invalid value was encountered";}};
Xi.prototype.remove=function(a){this.h.remove(a)};function Yi(a){this.h=a}
Ya(Yi,Xi);function Zi(a){this.data=a}
function $i(a){return void 0===a||a instanceof Zi?a:new Zi(a)}
Yi.prototype.set=function(a,b){Yi.ta.set.call(this,a,$i(b))};
Yi.prototype.i=function(a){a=Yi.ta.get.call(this,a);if(void 0===a||a instanceof Object)return a;throw"Storage: Invalid value was encountered";};
Yi.prototype.get=function(a){if(a=this.i(a)){if(a=a.data,void 0===a)throw"Storage: Invalid value was encountered";}else a=void 0;return a};function aj(a){this.h=a}
Ya(aj,Yi);aj.prototype.set=function(a,b,c){if(b=$i(b)){if(c){if(c<Date.now()){aj.prototype.remove.call(this,a);return}b.expiration=c}b.creation=Date.now()}aj.ta.set.call(this,a,b)};
aj.prototype.i=function(a){var b=aj.ta.i.call(this,a);if(b){var c=b.creation,d=b.expiration;if(d&&d<Date.now()||c&&c>Date.now())aj.prototype.remove.call(this,a);else return b}};function bj(){}
;function cj(){}
Ya(cj,bj);cj.prototype[Symbol.iterator]=function(){return Mi(this.Aa(!0)).h()};
cj.prototype.clear=function(){var a=Array.from(this);a=r(a);for(var b=a.next();!b.done;b=a.next())this.remove(b.value)};function dj(a){this.h=a}
Ya(dj,cj);k=dj.prototype;k.isAvailable=function(){if(!this.h)return!1;try{return this.h.setItem("__sak","1"),this.h.removeItem("__sak"),!0}catch(a){return!1}};
k.set=function(a,b){try{this.h.setItem(a,b)}catch(c){if(0==this.h.length)throw"Storage mechanism: Storage disabled";throw"Storage mechanism: Quota exceeded";}};
k.get=function(a){a=this.h.getItem(a);if("string"!==typeof a&&null!==a)throw"Storage mechanism: Invalid value was encountered";return a};
k.remove=function(a){this.h.removeItem(a)};
k.Aa=function(a){var b=0,c=this.h,d=new Ji;d.next=function(){if(b>=c.length)return Ki;var e=c.key(b++);if(a)return Li(e);e=c.getItem(e);if("string"!==typeof e)throw"Storage mechanism: Invalid value was encountered";return Li(e)};
return d};
k.clear=function(){this.h.clear()};
k.key=function(a){return this.h.key(a)};function ej(){var a=null;try{a=window.localStorage||null}catch(b){}this.h=a}
Ya(ej,dj);function fj(a,b){this.i=a;this.h=null;var c;if(c=Wc)c=!(9<=Number(id));if(c){gj||(gj=new Qi);this.h=gj.get(a);this.h||(b?this.h=document.getElementById(b):(this.h=document.createElement("userdata"),this.h.addBehavior("#default#userData"),document.body.appendChild(this.h)),gj.set(a,this.h));try{this.h.load(this.i)}catch(d){this.h=null}}}
Ya(fj,cj);var hj={".":".2E","!":".21","~":".7E","*":".2A","'":".27","(":".28",")":".29","%":"."},gj=null;function ij(a){return"_"+encodeURIComponent(a).replace(/[.!~*'()%]/g,function(b){return hj[b]})}
k=fj.prototype;k.isAvailable=function(){return!!this.h};
k.set=function(a,b){this.h.setAttribute(ij(a),b);jj(this)};
k.get=function(a){a=this.h.getAttribute(ij(a));if("string"!==typeof a&&null!==a)throw"Storage mechanism: Invalid value was encountered";return a};
k.remove=function(a){this.h.removeAttribute(ij(a));jj(this)};
k.Aa=function(a){var b=0,c=this.h.XMLDocument.documentElement.attributes,d=new Ji;d.next=function(){if(b>=c.length)return Ki;var e=c[b++];if(a)return Li(decodeURIComponent(e.nodeName.replace(/\./g,"%")).slice(1));e=e.nodeValue;if("string"!==typeof e)throw"Storage mechanism: Invalid value was encountered";return Li(e)};
return d};
k.clear=function(){for(var a=this.h.XMLDocument.documentElement,b=a.attributes.length;0<b;b--)a.removeAttribute(a.attributes[b-1].nodeName);jj(this)};
function jj(a){try{a.h.save(a.i)}catch(b){throw"Storage mechanism: Quota exceeded";}}
;function kj(a,b){this.i=a;this.h=b+"::"}
Ya(kj,cj);kj.prototype.set=function(a,b){this.i.set(this.h+a,b)};
kj.prototype.get=function(a){return this.i.get(this.h+a)};
kj.prototype.remove=function(a){this.i.remove(this.h+a)};
kj.prototype.Aa=function(a){var b=this.i[Symbol.iterator](),c=this,d=new Ji;d.next=function(){var e=b.next();if(e.done)return e;for(e=e.value;e.slice(0,c.h.length)!=c.h;){e=b.next();if(e.done)return e;e=e.value}return Li(a?e.slice(c.h.length):c.i.get(e))};
return d};/*

 (The MIT License)

 Copyright (C) 2014 by Vitaly Puzrin

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.

 -----------------------------------------------------------------------------
 Ported from zlib, which is under the following license
 https://github.com/madler/zlib/blob/master/zlib.h

 zlib.h -- interface of the 'zlib' general purpose compression library
   version 1.2.8, April 28th, 2013
   Copyright (C) 1995-2013 Jean-loup Gailly and Mark Adler
   This software is provided 'as-is', without any express or implied
   warranty.  In no event will the authors be held liable for any damages
   arising from the use of this software.
   Permission is granted to anyone to use this software for any purpose,
   including commercial applications, and to alter it and redistribute it
   freely, subject to the following restrictions:
   1. The origin of this software must not be misrepresented; you must not
      claim that you wrote the original software. If you use this software
      in a product, an acknowledgment in the product documentation would be
      appreciated but is not required.
   2. Altered source versions must be plainly marked as such, and must not be
      misrepresented as being the original software.
   3. This notice may not be removed or altered from any source distribution.
   Jean-loup Gailly        Mark Adler
   jloup@gzip.org          madler@alumni.caltech.edu
   The data format used by the zlib library is described by RFCs (Request for
   Comments) 1950 to 1952 in the files http://tools.ietf.org/html/rfc1950
   (zlib format), rfc1951 (deflate format) and rfc1952 (gzip format).
*/
var K={},lj="undefined"!==typeof Uint8Array&&"undefined"!==typeof Uint16Array&&"undefined"!==typeof Int32Array;K.assign=function(a){for(var b=Array.prototype.slice.call(arguments,1);b.length;){var c=b.shift();if(c){if("object"!==typeof c)throw new TypeError(c+"must be non-object");for(var d in c)Object.prototype.hasOwnProperty.call(c,d)&&(a[d]=c[d])}}return a};
K.Rc=function(a,b){if(a.length===b)return a;if(a.subarray)return a.subarray(0,b);a.length=b;return a};
var mj={pb:function(a,b,c,d,e){if(b.subarray&&a.subarray)a.set(b.subarray(c,c+d),e);else for(var f=0;f<d;f++)a[e+f]=b[c+f]},
nd:function(a){var b,c;var d=c=0;for(b=a.length;d<b;d++)c+=a[d].length;var e=new Uint8Array(c);d=c=0;for(b=a.length;d<b;d++){var f=a[d];e.set(f,c);c+=f.length}return e}},nj={pb:function(a,b,c,d,e){for(var f=0;f<d;f++)a[e+f]=b[c+f]},
nd:function(a){return[].concat.apply([],a)}};
K.bf=function(){lj?(K.bb=Uint8Array,K.Ea=Uint16Array,K.Ud=Int32Array,K.assign(K,mj)):(K.bb=Array,K.Ea=Array,K.Ud=Array,K.assign(K,nj))};
K.bf();var oj=!0;try{new Uint8Array(1)}catch(a){oj=!1}for(var pj=new K.bb(256),qj=0;256>qj;qj++)pj[qj]=252<=qj?6:248<=qj?5:240<=qj?4:224<=qj?3:192<=qj?2:1;pj[254]=pj[254]=1;
function rj(a){var b,c,d=a.length,e=0;for(b=0;b<d;b++){var f=a.charCodeAt(b);if(55296===(f&64512)&&b+1<d){var g=a.charCodeAt(b+1);56320===(g&64512)&&(f=65536+(f-55296<<10)+(g-56320),b++)}e+=128>f?1:2048>f?2:65536>f?3:4}var h=new K.bb(e);for(b=c=0;c<e;b++)f=a.charCodeAt(b),55296===(f&64512)&&b+1<d&&(g=a.charCodeAt(b+1),56320===(g&64512)&&(f=65536+(f-55296<<10)+(g-56320),b++)),128>f?h[c++]=f:(2048>f?h[c++]=192|f>>>6:(65536>f?h[c++]=224|f>>>12:(h[c++]=240|f>>>18,h[c++]=128|f>>>12&63),h[c++]=128|f>>>
6&63),h[c++]=128|f&63);return h}
;var sj={};sj=function(a,b,c,d){var e=a&65535|0;a=a>>>16&65535|0;for(var f;0!==c;){f=2E3<c?2E3:c;c-=f;do e=e+b[d++]|0,a=a+e|0;while(--f);e%=65521;a%=65521}return e|a<<16|0};for(var tj={},uj,vj=[],wj=0;256>wj;wj++){uj=wj;for(var xj=0;8>xj;xj++)uj=uj&1?3988292384^uj>>>1:uj>>>1;vj[wj]=uj}tj=function(a,b,c,d){c=d+c;for(a^=-1;d<c;d++)a=a>>>8^vj[(a^b[d])&255];return a^-1};var yj={};yj={2:"need dictionary",1:"stream end",0:"","-1":"file error","-2":"stream error","-3":"data error","-4":"insufficient memory","-5":"buffer error","-6":"incompatible version"};function zj(a){for(var b=a.length;0<=--b;)a[b]=0}
var Aj=[0,0,0,0,0,0,0,0,1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,0],Bj=[0,0,0,0,1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10,11,11,12,12,13,13],Cj=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,7],Dj=[16,17,18,0,8,7,9,6,10,5,11,4,12,3,13,2,14,1,15],Ej=Array(576);zj(Ej);var Fj=Array(60);zj(Fj);var Gj=Array(512);zj(Gj);var Hj=Array(256);zj(Hj);var Ij=Array(29);zj(Ij);var Jj=Array(30);zj(Jj);function Kj(a,b,c,d,e){this.Md=a;this.oe=b;this.ne=c;this.je=d;this.Fe=e;this.rd=a&&a.length}
var Lj,Mj,Nj;function Oj(a,b){this.ld=a;this.wb=0;this.Ua=b}
function Pj(a,b){a.S[a.pending++]=b&255;a.S[a.pending++]=b>>>8&255}
function Qj(a,b,c){a.aa>16-c?(a.ga|=b<<a.aa&65535,Pj(a,a.ga),a.ga=b>>16-a.aa,a.aa+=c-16):(a.ga|=b<<a.aa&65535,a.aa+=c)}
function Rj(a,b,c){Qj(a,c[2*b],c[2*b+1])}
function Sj(a,b){var c=0;do c|=a&1,a>>>=1,c<<=1;while(0<--b);return c>>>1}
function Tj(a,b,c){var d=Array(16),e=0,f;for(f=1;15>=f;f++)d[f]=e=e+c[f-1]<<1;for(c=0;c<=b;c++)e=a[2*c+1],0!==e&&(a[2*c]=Sj(d[e]++,e))}
function Uj(a){var b;for(b=0;286>b;b++)a.ia[2*b]=0;for(b=0;30>b;b++)a.gb[2*b]=0;for(b=0;19>b;b++)a.ba[2*b]=0;a.ia[512]=1;a.La=a.zb=0;a.ra=a.matches=0}
function Vj(a){8<a.aa?Pj(a,a.ga):0<a.aa&&(a.S[a.pending++]=a.ga);a.ga=0;a.aa=0}
function Wj(a,b,c){Vj(a);Pj(a,c);Pj(a,~c);K.pb(a.S,a.window,b,c,a.pending);a.pending+=c}
function Xj(a,b,c,d){var e=2*b,f=2*c;return a[e]<a[f]||a[e]===a[f]&&d[b]<=d[c]}
function Yj(a,b,c){for(var d=a.T[c],e=c<<1;e<=a.Ia;){e<a.Ia&&Xj(b,a.T[e+1],a.T[e],a.depth)&&e++;if(Xj(b,d,a.T[e],a.depth))break;a.T[c]=a.T[e];c=e;e<<=1}a.T[c]=d}
function Zj(a,b,c){var d=0;if(0!==a.ra){do{var e=a.S[a.Hb+2*d]<<8|a.S[a.Hb+2*d+1];var f=a.S[a.Gc+d];d++;if(0===e)Rj(a,f,b);else{var g=Hj[f];Rj(a,g+256+1,b);var h=Aj[g];0!==h&&(f-=Ij[g],Qj(a,f,h));e--;g=256>e?Gj[e]:Gj[256+(e>>>7)];Rj(a,g,c);h=Bj[g];0!==h&&(e-=Jj[g],Qj(a,e,h))}}while(d<a.ra)}Rj(a,256,b)}
function ak(a,b){var c=b.ld,d=b.Ua.Md,e=b.Ua.rd,f=b.Ua.je,g,h=-1;a.Ia=0;a.tb=573;for(g=0;g<f;g++)0!==c[2*g]?(a.T[++a.Ia]=h=g,a.depth[g]=0):c[2*g+1]=0;for(;2>a.Ia;){var l=a.T[++a.Ia]=2>h?++h:0;c[2*l]=1;a.depth[l]=0;a.La--;e&&(a.zb-=d[2*l+1])}b.wb=h;for(g=a.Ia>>1;1<=g;g--)Yj(a,c,g);l=f;do g=a.T[1],a.T[1]=a.T[a.Ia--],Yj(a,c,1),d=a.T[1],a.T[--a.tb]=g,a.T[--a.tb]=d,c[2*l]=c[2*g]+c[2*d],a.depth[l]=(a.depth[g]>=a.depth[d]?a.depth[g]:a.depth[d])+1,c[2*g+1]=c[2*d+1]=l,a.T[1]=l++,Yj(a,c,1);while(2<=a.Ia);a.T[--a.tb]=
a.T[1];g=b.ld;l=b.wb;d=b.Ua.Md;e=b.Ua.rd;f=b.Ua.oe;var m=b.Ua.ne,n=b.Ua.Fe,q,u=0;for(q=0;15>=q;q++)a.Fa[q]=0;g[2*a.T[a.tb]+1]=0;for(b=a.tb+1;573>b;b++){var t=a.T[b];q=g[2*g[2*t+1]+1]+1;q>n&&(q=n,u++);g[2*t+1]=q;if(!(t>l)){a.Fa[q]++;var B=0;t>=m&&(B=f[t-m]);var C=g[2*t];a.La+=C*(q+B);e&&(a.zb+=C*(d[2*t+1]+B))}}if(0!==u){do{for(q=n-1;0===a.Fa[q];)q--;a.Fa[q]--;a.Fa[q+1]+=2;a.Fa[n]--;u-=2}while(0<u);for(q=n;0!==q;q--)for(t=a.Fa[q];0!==t;)d=a.T[--b],d>l||(g[2*d+1]!==q&&(a.La+=(q-g[2*d+1])*g[2*d],g[2*
d+1]=q),t--)}Tj(c,h,a.Fa)}
function bk(a,b,c){var d,e=-1,f=b[1],g=0,h=7,l=4;0===f&&(h=138,l=3);b[2*(c+1)+1]=65535;for(d=0;d<=c;d++){var m=f;f=b[2*(d+1)+1];++g<h&&m===f||(g<l?a.ba[2*m]+=g:0!==m?(m!==e&&a.ba[2*m]++,a.ba[32]++):10>=g?a.ba[34]++:a.ba[36]++,g=0,e=m,0===f?(h=138,l=3):m===f?(h=6,l=3):(h=7,l=4))}}
function ck(a,b,c){var d,e=-1,f=b[1],g=0,h=7,l=4;0===f&&(h=138,l=3);for(d=0;d<=c;d++){var m=f;f=b[2*(d+1)+1];if(!(++g<h&&m===f)){if(g<l){do Rj(a,m,a.ba);while(0!==--g)}else 0!==m?(m!==e&&(Rj(a,m,a.ba),g--),Rj(a,16,a.ba),Qj(a,g-3,2)):10>=g?(Rj(a,17,a.ba),Qj(a,g-3,3)):(Rj(a,18,a.ba),Qj(a,g-11,7));g=0;e=m;0===f?(h=138,l=3):m===f?(h=6,l=3):(h=7,l=4)}}}
function dk(a){var b=4093624447,c;for(c=0;31>=c;c++,b>>>=1)if(b&1&&0!==a.ia[2*c])return 0;if(0!==a.ia[18]||0!==a.ia[20]||0!==a.ia[26])return 1;for(c=32;256>c;c++)if(0!==a.ia[2*c])return 1;return 0}
var ek=!1;function fk(a,b,c){a.S[a.Hb+2*a.ra]=b>>>8&255;a.S[a.Hb+2*a.ra+1]=b&255;a.S[a.Gc+a.ra]=c&255;a.ra++;0===b?a.ia[2*c]++:(a.matches++,b--,a.ia[2*(Hj[c]+256+1)]++,a.gb[2*(256>b?Gj[b]:Gj[256+(b>>>7)])]++);return a.ra===a.Mb-1}
;function gk(a,b){a.msg=yj[b];return b}
function hk(a){for(var b=a.length;0<=--b;)a[b]=0}
function ik(a){var b=a.state,c=b.pending;c>a.I&&(c=a.I);0!==c&&(K.pb(a.Nb,b.S,b.Ob,c,a.xb),a.xb+=c,b.Ob+=c,a.Sc+=c,a.I-=c,b.pending-=c,0===b.pending&&(b.Ob=0))}
function jk(a,b){var c=0<=a.ka?a.ka:-1,d=a.o-a.ka,e=0;if(0<a.level){2===a.D.wc&&(a.D.wc=dk(a));ak(a,a.jc);ak(a,a.ec);bk(a,a.ia,a.jc.wb);bk(a,a.gb,a.ec.wb);ak(a,a.cd);for(e=18;3<=e&&0===a.ba[2*Dj[e]+1];e--);a.La+=3*(e+1)+14;var f=a.La+3+7>>>3;var g=a.zb+3+7>>>3;g<=f&&(f=g)}else f=g=d+5;if(d+4<=f&&-1!==c)Qj(a,b?1:0,3),Wj(a,c,d);else if(4===a.strategy||g===f)Qj(a,2+(b?1:0),3),Zj(a,Ej,Fj);else{Qj(a,4+(b?1:0),3);c=a.jc.wb+1;d=a.ec.wb+1;e+=1;Qj(a,c-257,5);Qj(a,d-1,5);Qj(a,e-4,4);for(f=0;f<e;f++)Qj(a,a.ba[2*
Dj[f]+1],3);ck(a,a.ia,c-1);ck(a,a.gb,d-1);Zj(a,a.ia,a.gb)}Uj(a);b&&Vj(a);a.ka=a.o;ik(a.D)}
function L(a,b){a.S[a.pending++]=b}
function kk(a,b){a.S[a.pending++]=b>>>8&255;a.S[a.pending++]=b&255}
function lk(a,b){var c=a.xd,d=a.o,e=a.ma,f=a.zd,g=a.o>a.da-262?a.o-(a.da-262):0,h=a.window,l=a.Wa,m=a.Da,n=a.o+258,q=h[d+e-1],u=h[d+e];a.ma>=a.qd&&(c>>=2);f>a.u&&(f=a.u);do{var t=b;if(h[t+e]===u&&h[t+e-1]===q&&h[t]===h[d]&&h[++t]===h[d+1]){d+=2;for(t++;h[++d]===h[++t]&&h[++d]===h[++t]&&h[++d]===h[++t]&&h[++d]===h[++t]&&h[++d]===h[++t]&&h[++d]===h[++t]&&h[++d]===h[++t]&&h[++d]===h[++t]&&d<n;);t=258-(n-d);d=n-258;if(t>e){a.vb=b;e=t;if(t>=f)break;q=h[d+e-1];u=h[d+e]}}}while((b=m[b&l])>g&&0!==--c);return e<=
a.u?e:a.u}
function mk(a){var b=a.da,c;do{var d=a.Sd-a.u-a.o;if(a.o>=b+(b-262)){K.pb(a.window,a.window,b,b,0);a.vb-=b;a.o-=b;a.ka-=b;var e=c=a.ic;do{var f=a.head[--e];a.head[e]=f>=b?f-b:0}while(--c);e=c=b;do f=a.Da[--e],a.Da[e]=f>=b?f-b:0;while(--c);d+=b}if(0===a.D.fa)break;e=a.D;c=a.window;f=a.o+a.u;var g=e.fa;g>d&&(g=d);0===g?c=0:(e.fa-=g,K.pb(c,e.input,e.jb,g,f),1===e.state.wrap?e.C=sj(e.C,c,g,f):2===e.state.wrap&&(e.C=tj(e.C,c,g,f)),e.jb+=g,e.mb+=g,c=g);a.u+=c;if(3<=a.u+a.ja)for(d=a.o-a.ja,a.G=a.window[d],
a.G=(a.G<<a.Ha^a.window[d+1])&a.Ga;a.ja&&!(a.G=(a.G<<a.Ha^a.window[d+3-1])&a.Ga,a.Da[d&a.Wa]=a.head[a.G],a.head[a.G]=d,d++,a.ja--,3>a.u+a.ja););}while(262>a.u&&0!==a.D.fa)}
function nk(a,b){for(var c;;){if(262>a.u){mk(a);if(262>a.u&&0===b)return 1;if(0===a.u)break}c=0;3<=a.u&&(a.G=(a.G<<a.Ha^a.window[a.o+3-1])&a.Ga,c=a.Da[a.o&a.Wa]=a.head[a.G],a.head[a.G]=a.o);0!==c&&a.o-c<=a.da-262&&(a.J=lk(a,c));if(3<=a.J)if(c=fk(a,a.o-a.vb,a.J-3),a.u-=a.J,a.J<=a.Hc&&3<=a.u){a.J--;do a.o++,a.G=(a.G<<a.Ha^a.window[a.o+3-1])&a.Ga,a.Da[a.o&a.Wa]=a.head[a.G],a.head[a.G]=a.o;while(0!==--a.J);a.o++}else a.o+=a.J,a.J=0,a.G=a.window[a.o],a.G=(a.G<<a.Ha^a.window[a.o+1])&a.Ga;else c=fk(a,0,
a.window[a.o]),a.u--,a.o++;if(c&&(jk(a,!1),0===a.D.I))return 1}a.ja=2>a.o?a.o:2;return 4===b?(jk(a,!0),0===a.D.I?3:4):a.ra&&(jk(a,!1),0===a.D.I)?1:2}
function ok(a,b){for(var c,d;;){if(262>a.u){mk(a);if(262>a.u&&0===b)return 1;if(0===a.u)break}c=0;3<=a.u&&(a.G=(a.G<<a.Ha^a.window[a.o+3-1])&a.Ga,c=a.Da[a.o&a.Wa]=a.head[a.G],a.head[a.G]=a.o);a.ma=a.J;a.Cd=a.vb;a.J=2;0!==c&&a.ma<a.Hc&&a.o-c<=a.da-262&&(a.J=lk(a,c),5>=a.J&&(1===a.strategy||3===a.J&&4096<a.o-a.vb)&&(a.J=2));if(3<=a.ma&&a.J<=a.ma){d=a.o+a.u-3;c=fk(a,a.o-1-a.Cd,a.ma-3);a.u-=a.ma-1;a.ma-=2;do++a.o<=d&&(a.G=(a.G<<a.Ha^a.window[a.o+3-1])&a.Ga,a.Da[a.o&a.Wa]=a.head[a.G],a.head[a.G]=a.o);
while(0!==--a.ma);a.hb=0;a.J=2;a.o++;if(c&&(jk(a,!1),0===a.D.I))return 1}else if(a.hb){if((c=fk(a,0,a.window[a.o-1]))&&jk(a,!1),a.o++,a.u--,0===a.D.I)return 1}else a.hb=1,a.o++,a.u--}a.hb&&(fk(a,0,a.window[a.o-1]),a.hb=0);a.ja=2>a.o?a.o:2;return 4===b?(jk(a,!0),0===a.D.I?3:4):a.ra&&(jk(a,!1),0===a.D.I)?1:2}
function pk(a,b){for(var c,d,e,f=a.window;;){if(258>=a.u){mk(a);if(258>=a.u&&0===b)return 1;if(0===a.u)break}a.J=0;if(3<=a.u&&0<a.o&&(d=a.o-1,c=f[d],c===f[++d]&&c===f[++d]&&c===f[++d])){for(e=a.o+258;c===f[++d]&&c===f[++d]&&c===f[++d]&&c===f[++d]&&c===f[++d]&&c===f[++d]&&c===f[++d]&&c===f[++d]&&d<e;);a.J=258-(e-d);a.J>a.u&&(a.J=a.u)}3<=a.J?(c=fk(a,1,a.J-3),a.u-=a.J,a.o+=a.J,a.J=0):(c=fk(a,0,a.window[a.o]),a.u--,a.o++);if(c&&(jk(a,!1),0===a.D.I))return 1}a.ja=0;return 4===b?(jk(a,!0),0===a.D.I?3:4):
a.ra&&(jk(a,!1),0===a.D.I)?1:2}
function qk(a,b){for(var c;;){if(0===a.u&&(mk(a),0===a.u)){if(0===b)return 1;break}a.J=0;c=fk(a,0,a.window[a.o]);a.u--;a.o++;if(c&&(jk(a,!1),0===a.D.I))return 1}a.ja=0;return 4===b?(jk(a,!0),0===a.D.I?3:4):a.ra&&(jk(a,!1),0===a.D.I)?1:2}
function rk(a,b,c,d,e){this.ue=a;this.Ee=b;this.Ie=c;this.De=d;this.qe=e}
var sk;sk=[new rk(0,0,0,0,function(a,b){var c=65535;for(c>a.sa-5&&(c=a.sa-5);;){if(1>=a.u){mk(a);if(0===a.u&&0===b)return 1;if(0===a.u)break}a.o+=a.u;a.u=0;var d=a.ka+c;if(0===a.o||a.o>=d)if(a.u=a.o-d,a.o=d,jk(a,!1),0===a.D.I)return 1;if(a.o-a.ka>=a.da-262&&(jk(a,!1),0===a.D.I))return 1}a.ja=0;if(4===b)return jk(a,!0),0===a.D.I?3:4;a.o>a.ka&&jk(a,!1);return 1}),
new rk(4,4,8,4,nk),new rk(4,5,16,8,nk),new rk(4,6,32,32,nk),new rk(4,4,16,16,ok),new rk(8,16,32,32,ok),new rk(8,16,128,128,ok),new rk(8,32,128,256,ok),new rk(32,128,258,1024,ok),new rk(32,258,258,4096,ok)];
function tk(){this.D=null;this.status=0;this.S=null;this.wrap=this.pending=this.Ob=this.sa=0;this.B=null;this.va=0;this.method=8;this.ub=-1;this.Wa=this.Uc=this.da=0;this.window=null;this.Sd=0;this.head=this.Da=null;this.zd=this.qd=this.strategy=this.level=this.Hc=this.xd=this.ma=this.u=this.vb=this.o=this.hb=this.Cd=this.J=this.ka=this.Ha=this.Ga=this.Cc=this.ic=this.G=0;this.ia=new K.Ea(1146);this.gb=new K.Ea(122);this.ba=new K.Ea(78);hk(this.ia);hk(this.gb);hk(this.ba);this.cd=this.ec=this.jc=
null;this.Fa=new K.Ea(16);this.T=new K.Ea(573);hk(this.T);this.tb=this.Ia=0;this.depth=new K.Ea(573);hk(this.depth);this.aa=this.ga=this.ja=this.matches=this.zb=this.La=this.Hb=this.ra=this.Mb=this.Gc=0}
function uk(a,b){if(!a||!a.state||5<b||0>b)return a?gk(a,-2):-2;var c=a.state;if(!a.Nb||!a.input&&0!==a.fa||666===c.status&&4!==b)return gk(a,0===a.I?-5:-2);c.D=a;var d=c.ub;c.ub=b;if(42===c.status)if(2===c.wrap)a.C=0,L(c,31),L(c,139),L(c,8),c.B?(L(c,(c.B.text?1:0)+(c.B.Ra?2:0)+(c.B.Qa?4:0)+(c.B.name?8:0)+(c.B.comment?16:0)),L(c,c.B.time&255),L(c,c.B.time>>8&255),L(c,c.B.time>>16&255),L(c,c.B.time>>24&255),L(c,9===c.level?2:2<=c.strategy||2>c.level?4:0),L(c,c.B.os&255),c.B.Qa&&c.B.Qa.length&&(L(c,
c.B.Qa.length&255),L(c,c.B.Qa.length>>8&255)),c.B.Ra&&(a.C=tj(a.C,c.S,c.pending,0)),c.va=0,c.status=69):(L(c,0),L(c,0),L(c,0),L(c,0),L(c,0),L(c,9===c.level?2:2<=c.strategy||2>c.level?4:0),L(c,3),c.status=113);else{var e=8+(c.Uc-8<<4)<<8;e|=(2<=c.strategy||2>c.level?0:6>c.level?1:6===c.level?2:3)<<6;0!==c.o&&(e|=32);c.status=113;kk(c,e+(31-e%31));0!==c.o&&(kk(c,a.C>>>16),kk(c,a.C&65535));a.C=1}if(69===c.status)if(c.B.Qa){for(e=c.pending;c.va<(c.B.Qa.length&65535)&&(c.pending!==c.sa||(c.B.Ra&&c.pending>
e&&(a.C=tj(a.C,c.S,c.pending-e,e)),ik(a),e=c.pending,c.pending!==c.sa));)L(c,c.B.Qa[c.va]&255),c.va++;c.B.Ra&&c.pending>e&&(a.C=tj(a.C,c.S,c.pending-e,e));c.va===c.B.Qa.length&&(c.va=0,c.status=73)}else c.status=73;if(73===c.status)if(c.B.name){e=c.pending;do{if(c.pending===c.sa&&(c.B.Ra&&c.pending>e&&(a.C=tj(a.C,c.S,c.pending-e,e)),ik(a),e=c.pending,c.pending===c.sa)){var f=1;break}f=c.va<c.B.name.length?c.B.name.charCodeAt(c.va++)&255:0;L(c,f)}while(0!==f);c.B.Ra&&c.pending>e&&(a.C=tj(a.C,c.S,c.pending-
e,e));0===f&&(c.va=0,c.status=91)}else c.status=91;if(91===c.status)if(c.B.comment){e=c.pending;do{if(c.pending===c.sa&&(c.B.Ra&&c.pending>e&&(a.C=tj(a.C,c.S,c.pending-e,e)),ik(a),e=c.pending,c.pending===c.sa)){f=1;break}f=c.va<c.B.comment.length?c.B.comment.charCodeAt(c.va++)&255:0;L(c,f)}while(0!==f);c.B.Ra&&c.pending>e&&(a.C=tj(a.C,c.S,c.pending-e,e));0===f&&(c.status=103)}else c.status=103;103===c.status&&(c.B.Ra?(c.pending+2>c.sa&&ik(a),c.pending+2<=c.sa&&(L(c,a.C&255),L(c,a.C>>8&255),a.C=0,
c.status=113)):c.status=113);if(0!==c.pending){if(ik(a),0===a.I)return c.ub=-1,0}else if(0===a.fa&&(b<<1)-(4<b?9:0)<=(d<<1)-(4<d?9:0)&&4!==b)return gk(a,-5);if(666===c.status&&0!==a.fa)return gk(a,-5);if(0!==a.fa||0!==c.u||0!==b&&666!==c.status){d=2===c.strategy?qk(c,b):3===c.strategy?pk(c,b):sk[c.level].qe(c,b);if(3===d||4===d)c.status=666;if(1===d||3===d)return 0===a.I&&(c.ub=-1),0;if(2===d&&(1===b?(Qj(c,2,3),Rj(c,256,Ej),16===c.aa?(Pj(c,c.ga),c.ga=0,c.aa=0):8<=c.aa&&(c.S[c.pending++]=c.ga&255,
c.ga>>=8,c.aa-=8)):5!==b&&(Qj(c,0,3),Wj(c,0,0),3===b&&(hk(c.head),0===c.u&&(c.o=0,c.ka=0,c.ja=0))),ik(a),0===a.I))return c.ub=-1,0}if(4!==b)return 0;if(0>=c.wrap)return 1;2===c.wrap?(L(c,a.C&255),L(c,a.C>>8&255),L(c,a.C>>16&255),L(c,a.C>>24&255),L(c,a.mb&255),L(c,a.mb>>8&255),L(c,a.mb>>16&255),L(c,a.mb>>24&255)):(kk(c,a.C>>>16),kk(c,a.C&65535));ik(a);0<c.wrap&&(c.wrap=-c.wrap);return 0!==c.pending?0:1}
;var vk={};vk=function(){this.input=null;this.mb=this.fa=this.jb=0;this.Nb=null;this.Sc=this.I=this.xb=0;this.msg="";this.state=null;this.wc=2;this.C=0};var wk=Object.prototype.toString;
function xk(a){if(!(this instanceof xk))return new xk(a);a=this.options=K.assign({level:-1,method:8,chunkSize:16384,Xa:15,Ge:8,strategy:0,K:""},a||{});a.raw&&0<a.Xa?a.Xa=-a.Xa:a.we&&0<a.Xa&&16>a.Xa&&(a.Xa+=16);this.err=0;this.msg="";this.ended=!1;this.chunks=[];this.D=new vk;this.D.I=0;var b=this.D;var c=a.level,d=a.method,e=a.Xa,f=a.Ge,g=a.strategy;if(b){var h=1;-1===c&&(c=6);0>e?(h=0,e=-e):15<e&&(h=2,e-=16);if(1>f||9<f||8!==d||8>e||15<e||0>c||9<c||0>g||4<g)b=gk(b,-2);else{8===e&&(e=9);var l=new tk;
b.state=l;l.D=b;l.wrap=h;l.B=null;l.Uc=e;l.da=1<<l.Uc;l.Wa=l.da-1;l.Cc=f+7;l.ic=1<<l.Cc;l.Ga=l.ic-1;l.Ha=~~((l.Cc+3-1)/3);l.window=new K.bb(2*l.da);l.head=new K.Ea(l.ic);l.Da=new K.Ea(l.da);l.Mb=1<<f+6;l.sa=4*l.Mb;l.S=new K.bb(l.sa);l.Hb=1*l.Mb;l.Gc=3*l.Mb;l.level=c;l.strategy=g;l.method=d;if(b&&b.state){b.mb=b.Sc=0;b.wc=2;c=b.state;c.pending=0;c.Ob=0;0>c.wrap&&(c.wrap=-c.wrap);c.status=c.wrap?42:113;b.C=2===c.wrap?0:1;c.ub=0;if(!ek){d=Array(16);for(f=g=0;28>f;f++)for(Ij[f]=g,e=0;e<1<<Aj[f];e++)Hj[g++]=
f;Hj[g-1]=f;for(f=g=0;16>f;f++)for(Jj[f]=g,e=0;e<1<<Bj[f];e++)Gj[g++]=f;for(g>>=7;30>f;f++)for(Jj[f]=g<<7,e=0;e<1<<Bj[f]-7;e++)Gj[256+g++]=f;for(e=0;15>=e;e++)d[e]=0;for(e=0;143>=e;)Ej[2*e+1]=8,e++,d[8]++;for(;255>=e;)Ej[2*e+1]=9,e++,d[9]++;for(;279>=e;)Ej[2*e+1]=7,e++,d[7]++;for(;287>=e;)Ej[2*e+1]=8,e++,d[8]++;Tj(Ej,287,d);for(e=0;30>e;e++)Fj[2*e+1]=5,Fj[2*e]=Sj(e,5);Lj=new Kj(Ej,Aj,257,286,15);Mj=new Kj(Fj,Bj,0,30,15);Nj=new Kj([],Cj,0,19,7);ek=!0}c.jc=new Oj(c.ia,Lj);c.ec=new Oj(c.gb,Mj);c.cd=
new Oj(c.ba,Nj);c.ga=0;c.aa=0;Uj(c);c=0}else c=gk(b,-2);0===c&&(b=b.state,b.Sd=2*b.da,hk(b.head),b.Hc=sk[b.level].Ee,b.qd=sk[b.level].ue,b.zd=sk[b.level].Ie,b.xd=sk[b.level].De,b.o=0,b.ka=0,b.u=0,b.ja=0,b.J=b.ma=2,b.hb=0,b.G=0);b=c}}else b=-2;if(0!==b)throw Error(yj[b]);a.header&&(b=this.D)&&b.state&&2===b.state.wrap&&(b.state.B=a.header);if(a.Ib){var m;"string"===typeof a.Ib?m=rj(a.Ib):"[object ArrayBuffer]"===wk.call(a.Ib)?m=new Uint8Array(a.Ib):m=a.Ib;a=this.D;f=m;g=f.length;if(a&&a.state)if(m=
a.state,b=m.wrap,2===b||1===b&&42!==m.status||m.u)b=-2;else{1===b&&(a.C=sj(a.C,f,g,0));m.wrap=0;g>=m.da&&(0===b&&(hk(m.head),m.o=0,m.ka=0,m.ja=0),c=new K.bb(m.da),K.pb(c,f,g-m.da,m.da,0),f=c,g=m.da);c=a.fa;d=a.jb;e=a.input;a.fa=g;a.jb=0;a.input=f;for(mk(m);3<=m.u;){f=m.o;g=m.u-2;do m.G=(m.G<<m.Ha^m.window[f+3-1])&m.Ga,m.Da[f&m.Wa]=m.head[m.G],m.head[m.G]=f,f++;while(--g);m.o=f;m.u=2;mk(m)}m.o+=m.u;m.ka=m.o;m.ja=m.u;m.u=0;m.J=m.ma=2;m.hb=0;a.jb=d;a.input=e;a.fa=c;m.wrap=b;b=0}else b=-2;if(0!==b)throw Error(yj[b]);
this.lg=!0}}
xk.prototype.push=function(a,b){var c=this.D,d=this.options.chunkSize;if(this.ended)return!1;var e=b===~~b?b:!0===b?4:0;"string"===typeof a?c.input=rj(a):"[object ArrayBuffer]"===wk.call(a)?c.input=new Uint8Array(a):c.input=a;c.jb=0;c.fa=c.input.length;do{0===c.I&&(c.Nb=new K.bb(d),c.xb=0,c.I=d);a=uk(c,e);if(1!==a&&0!==a)return yk(this,a),this.ended=!0,!1;if(0===c.I||0===c.fa&&(4===e||2===e))if("string"===this.options.K){var f=K.Rc(c.Nb,c.xb);b=f;f=f.length;if(65537>f&&(b.subarray&&oj||!b.subarray))b=
String.fromCharCode.apply(null,K.Rc(b,f));else{for(var g="",h=0;h<f;h++)g+=String.fromCharCode(b[h]);b=g}this.chunks.push(b)}else b=K.Rc(c.Nb,c.xb),this.chunks.push(b)}while((0<c.fa||0===c.I)&&1!==a);if(4===e)return(c=this.D)&&c.state?(d=c.state.status,42!==d&&69!==d&&73!==d&&91!==d&&103!==d&&113!==d&&666!==d?a=gk(c,-2):(c.state=null,a=113===d?gk(c,-3):0)):a=-2,yk(this,a),this.ended=!0,0===a;2===e&&(yk(this,0),c.I=0);return!0};
function yk(a,b){0===b&&(a.result="string"===a.options.K?a.chunks.join(""):K.nd(a.chunks));a.chunks=[];a.err=b;a.msg=a.D.msg}
function zk(a){var b=b||{};b.we=!0;b=new xk(b);b.push(a,!0);if(b.err)throw b.msg||yj[b.err];return b.result}
;function Ak(a){return Hb(null===a?"null":void 0===a?"undefined":a)}
;function Bk(a){this.name=a}
;var Ck=new Bk("rawColdConfigGroup");var Dk=new Bk("rawHotConfigGroup");function Ek(a){I.call(this,a)}
v(Ek,I);function Fk(a,b){return G(a,1,b)}
;function Gk(a){I.call(this,a,-1,Hk)}
v(Gk,I);var Hk=[1];function Ik(a){I.call(this,a)}
v(Ik,I);function Jk(a){I.call(this,a)}
v(Jk,I);function Kk(a){I.call(this,a)}
v(Kk,I);function Lk(a){I.call(this,a,-1,Mk)}
v(Lk,I);var Mk=[2];function Nk(a){I.call(this,a,-1,Ok)}
v(Nk,I);Nk.prototype.getPlayerType=function(){return Zd(this,36)};
Nk.prototype.setHomeGroupInfo=function(a){return H(this,Lk,81,a)};
Nk.prototype.clearLocationPlayabilityToken=function(){return G(this,89,void 0,!1)};
var Ok=[9,66,24,32,86,100,101];function Pk(a){I.call(this,a)}
v(Pk,I);Pk.prototype.getKey=function(){return me(this,1)};
Pk.prototype.getValue=function(){return me(this,2===ce(this,Qk)?2:-1)};
var Qk=[2,3,4,5,6];function Rk(a){I.call(this,a,-1,Sk)}
v(Rk,I);var Sk=[15,26,28];function Tk(a){I.call(this,a,-1,Uk)}
v(Tk,I);var Uk=[5];function Vk(a){I.call(this,a)}
v(Vk,I);function Wk(a){I.call(this,a,-1,Xk)}
v(Wk,I);Wk.prototype.setSafetyMode=function(a){return G(this,5,a)};
var Xk=[12];function Yk(a){I.call(this,a,-1,Zk)}
v(Yk,I);Yk.prototype.l=function(a){return H(this,Nk,1,a)};
var Zk=[12];var $k=new Bk("continuationCommand");var al=new Bk("webCommandMetadata");var bl=new Bk("signalServiceEndpoint");var cl={Gf:"EMBEDDED_PLAYER_MODE_UNKNOWN",Df:"EMBEDDED_PLAYER_MODE_DEFAULT",Ff:"EMBEDDED_PLAYER_MODE_PFP",Ef:"EMBEDDED_PLAYER_MODE_PFL"};var dl=new Bk("feedbackEndpoint");var vl={kg:"WEB_DISPLAY_MODE_UNKNOWN",gg:"WEB_DISPLAY_MODE_BROWSER",ig:"WEB_DISPLAY_MODE_MINIMAL_UI",jg:"WEB_DISPLAY_MODE_STANDALONE",hg:"WEB_DISPLAY_MODE_FULLSCREEN"};function wl(a){I.call(this,a)}
v(wl,I);wl.prototype.getKey=function(){return me(this,1)};
wl.prototype.getValue=function(){return me(this,2)};function xl(a){I.call(this,a,-1,yl)}
v(xl,I);var yl=[4,5];function zl(a){I.call(this,a)}
v(zl,I);function Al(a){I.call(this,a)}
v(Al,I);var Bl=[2,3,4];function Cl(a){I.call(this,a)}
v(Cl,I);Cl.prototype.getMessage=function(){return me(this,1)};function Dl(a){I.call(this,a)}
v(Dl,I);function El(a){I.call(this,a)}
v(El,I);function Fl(a){I.call(this,a,-1,Gl)}
v(Fl,I);var Gl=[10,17];function Hl(a){I.call(this,a)}
v(Hl,I);function Il(a){I.call(this,a)}
v(Il,I);function Jl(a){I.call(this,a)}
v(Jl,I);function Kl(a){I.call(this,a)}
v(Kl,I);function Ll(a){I.call(this,a)}
v(Ll,I);function Ml(a){I.call(this,a,-1,Nl)}
v(Ml,I);Ml.prototype.getVideoData=function(){return de(this,Ll,15)};
var Nl=[4];function Ol(a){I.call(this,a)}
v(Ol,I);function Pl(a,b){H(a,Jl,1,b)}
;function Ql(a){I.call(this,a)}
v(Ql,I);function Rl(a,b){return H(a,Jl,1,b)}
Ql.prototype.h=function(a){return G(this,2,a)};function Sl(a){I.call(this,a,-1,Tl)}
v(Sl,I);Sl.prototype.h=function(a){return G(this,1,a)};
function Ul(a,b){return H(a,Jl,2,b)}
var Tl=[3];function Vl(a){I.call(this,a)}
v(Vl,I);Vl.prototype.h=function(a){return G(this,1,a)};function Wl(a){I.call(this,a)}
v(Wl,I);Wl.prototype.h=function(a){return G(this,1,a)};function Xl(a){I.call(this,a)}
v(Xl,I);Xl.prototype.h=function(a){return G(this,1,a)};function Yl(a){I.call(this,a)}
v(Yl,I);Yl.prototype.h=function(a){return G(this,1,a)};function Zl(a){I.call(this,a)}
v(Zl,I);function $l(a){I.call(this,a)}
v($l,I);function am(a){var b=new $l;return G(b,1,a)}
$l.prototype.getId=function(){return me(this,2)};
function bm(a,b){return G(a,2,b)}
;function cm(a){I.call(this,a)}
v(cm,I);function dm(a){I.call(this,a,-1,em)}
v(dm,I);dm.prototype.getPlayerType=function(){return le(Zd(this,7),0)};
dm.prototype.setVideoId=function(a){return G(this,19,a)};
function fm(a,b){ie(a,68,$l,b)}
var em=[83,68];function gm(a){I.call(this,a)}
v(gm,I);function hm(a){I.call(this,a)}
v(hm,I);function im(a){I.call(this,a)}
v(im,I);function jm(a){I.call(this,a,459)}
v(jm,I);
var km=[2,3,5,6,7,11,13,20,21,22,23,24,28,32,37,45,59,72,73,74,76,78,79,80,85,91,97,100,102,105,111,117,119,126,127,136,146,148,151,156,157,158,159,163,164,168,176,177,178,179,184,188,189,190,191,193,194,195,196,197,198,199,200,201,202,203,204,205,206,208,209,215,219,222,225,226,227,229,232,233,234,240,241,244,247,248,249,251,254,255,256,257,258,259,260,261,266,270,272,278,288,291,293,300,304,308,309,310,311,313,314,319,320,321,323,324,327,328,330,331,332,334,337,338,340,344,348,350,351,352,353,354,
355,356,357,358,361,363,364,368,369,370,373,374,375,378,380,381,383,388,389,402,403,410,411,412,413,414,415,416,417,418,423,424,425,426,427,429,430,431,439,441,444,448,458];var lm={Yf:0,Hf:1,Nf:2,Of:4,Uf:8,Pf:16,Qf:32,Xf:64,Wf:128,Jf:256,Lf:512,Sf:1024,Kf:2048,Mf:4096,If:8192,Rf:16384,Vf:32768,Tf:65536};function mm(a){I.call(this,a)}
v(mm,I);function nm(a){I.call(this,a)}
v(nm,I);nm.prototype.setVideoId=function(a){return be(this,1,om,a)};
nm.prototype.getPlaylistId=function(){var a=2===ce(this,om)?2:-1;return Zd(this,a)};
var om=[1,2];function pm(a){I.call(this,a,-1,qm)}
v(pm,I);var qm=[3];var rm=new Bk("webPlayerShareEntityServiceEndpoint");var sm=new Bk("playlistEditEndpoint");var tm=new Bk("modifyChannelNotificationPreferenceEndpoint");var um=new Bk("unsubscribeEndpoint");var vm=new Bk("subscribeEndpoint");function wm(){var a=xm;A("yt.ads.biscotti.getId_")||z("yt.ads.biscotti.getId_",a)}
function ym(a){z("yt.ads.biscotti.lastId_",a)}
;function zm(a,b){1<b.length?a[b[0]]=b[1]:1===b.length&&Object.assign(a,b[0])}
;var Am=y.window,Bm,Cm,Dm=(null==Am?void 0:null==(Bm=Am.yt)?void 0:Bm.config_)||(null==Am?void 0:null==(Cm=Am.ytcfg)?void 0:Cm.data_)||{};z("yt.config_",Dm);function Em(){zm(Dm,arguments)}
function N(a,b){return a in Dm?Dm[a]:b}
function Fm(){var a=Dm.EXPERIMENT_FLAGS;return a?a.web_disable_gel_stp_ecatcher_killswitch:void 0}
;var Gm=[];function Hm(a){Gm.forEach(function(b){return b(a)})}
function Im(a){return a&&window.yterr?function(){try{return a.apply(this,arguments)}catch(b){Jm(b)}}:a}
function Jm(a,b,c,d,e){var f=A("yt.logging.errors.log");f?f(a,"ERROR",b,c,d,void 0,e):(f=N("ERRORS",[]),f.push([a,"ERROR",b,c,d,void 0,e]),Em("ERRORS",f));Hm(a)}
function Km(a,b,c,d,e){var f=A("yt.logging.errors.log");f?f(a,"WARNING",b,c,d,void 0,e):(f=N("ERRORS",[]),f.push([a,"WARNING",b,c,d,void 0,e]),Em("ERRORS",f))}
;var Lm=/^[\w.]*$/,Mm={q:!0,search_query:!0};function Nm(a,b){b=a.split(b);for(var c={},d=0,e=b.length;d<e;d++){var f=b[d].split("=");if(1==f.length&&f[0]||2==f.length)try{var g=Om(f[0]||""),h=Om(f[1]||"");g in c?Array.isArray(c[g])?lb(c[g],h):c[g]=[c[g],h]:c[g]=h}catch(q){var l=q,m=f[0],n=String(Nm);l.args=[{key:m,value:f[1],query:a,method:Pm==n?"unchanged":n}];Mm.hasOwnProperty(m)||Km(l)}}return c}
var Pm=String(Nm);function Qm(a){var b=[];mb(a,function(c,d){var e=encodeURIComponent(String(d)),f;Array.isArray(c)?f=c:f=[c];fb(f,function(g){""==g?b.push(e):b.push(e+"="+encodeURIComponent(String(g)))})});
return b.join("&")}
function Rm(a){"?"==a.charAt(0)&&(a=a.substr(1));return Nm(a,"&")}
function Sm(a){return-1!=a.indexOf("?")?(a=(a||"").split("#")[0],a=a.split("?",2),Rm(1<a.length?a[1]:a[0])):{}}
function Tm(a,b,c){var d=a.split("#",2);a=d[0];d=1<d.length?"#"+d[1]:"";var e=a.split("?",2);a=e[0];e=Rm(e[1]||"");for(var f in b)!c&&null!==e&&f in e||(e[f]=b[f]);return Dc(a,e)+d}
function Um(a){if(!b)var b=window.location.href;var c=vc(1,a),d=wc(a);c&&d?(a=a.match(tc),b=b.match(tc),a=a[3]==b[3]&&a[1]==b[1]&&a[4]==b[4]):a=d?wc(b)==d&&(Number(vc(4,b))||null)==(Number(vc(4,a))||null):!0;return a}
function Om(a){return a&&a.match(Lm)?a:decodeURIComponent(a.replace(/\+/g," "))}
;function Vm(a){var b=Wm;a=void 0===a?A("yt.ads.biscotti.lastId_")||"":a;var c=Object,d=c.assign,e={};e.dt=pi;e.flash="0";a:{try{var f=b.h.top.location.href}catch(J){f=2;break a}f=f?f===b.i.location.href?0:1:2}e=(e.frm=f,e);try{e.u_tz=-(new Date).getTimezoneOffset();var g=void 0===g?Wh:g;try{var h=g.history.length}catch(J){h=0}e.u_his=h;var l;e.u_h=null==(l=Wh.screen)?void 0:l.height;var m;e.u_w=null==(m=Wh.screen)?void 0:m.width;var n;e.u_ah=null==(n=Wh.screen)?void 0:n.availHeight;var q;e.u_aw=null==
(q=Wh.screen)?void 0:q.availWidth;var u;e.u_cd=null==(u=Wh.screen)?void 0:u.colorDepth}catch(J){}h=b.h;try{var t=h.screenX;var B=h.screenY}catch(J){}try{var C=h.outerWidth;var F=h.outerHeight}catch(J){}try{var M=h.innerWidth;var S=h.innerHeight}catch(J){}try{var R=h.screenLeft;var X=h.screenTop}catch(J){}try{M=h.innerWidth,S=h.innerHeight}catch(J){}try{var Y=h.screen.availWidth;var $a=h.screen.availTop}catch(J){}t=[R,X,t,B,Y,$a,C,F,M,S];try{var Oa=(b.h.top||window).document,Ba="CSS1Compat"==Oa.compatMode?
Oa.documentElement:Oa.body;var ra=(new xf(Ba.clientWidth,Ba.clientHeight)).round()}catch(J){ra=new xf(-12245933,-12245933)}Oa=ra;ra={};var ia=void 0===ia?y:ia;Ba=new yi;ia.SVGElement&&ia.document.createElementNS&&Ba.set(0);B=mi();B["allow-top-navigation-by-user-activation"]&&Ba.set(1);B["allow-popups-to-escape-sandbox"]&&Ba.set(2);ia.crypto&&ia.crypto.subtle&&Ba.set(3);ia.TextDecoder&&ia.TextEncoder&&Ba.set(4);ia=zi(Ba);ra.bc=ia;ra.bih=Oa.height;ra.biw=Oa.width;ra.brdim=t.join();b=b.i;b=(ra.vis=b.prerendering?
3:{visible:1,hidden:2,prerender:3,preview:4,unloaded:5}[b.visibilityState||b.webkitVisibilityState||b.mozVisibilityState||""]||0,ra.wgl=!!Wh.WebGLRenderingContext,ra);c=d.call(c,e,b);c.ca_type="image";a&&(c.bid=a);return c}
var Wm=new function(){var a=window.document;this.h=window;this.i=a};
z("yt.ads_.signals_.getAdSignalsString",function(a){return Qm(Vm(a))});Date.now();function O(a){a=Xm(a);return"string"===typeof a&&"false"===a?!1:!!a}
function Ym(a,b){a=Xm(a);return void 0===a&&void 0!==b?b:Number(a||0)}
function Zm(){return N("EXPERIMENTS_TOKEN","")}
function Xm(a){var b=N("EXPERIMENTS_FORCED_FLAGS",{})||{};return void 0!==b[a]?b[a]:N("EXPERIMENT_FLAGS",{})[a]}
function $m(){for(var a=[],b=N("EXPERIMENTS_FORCED_FLAGS",{}),c=r(Object.keys(b)),d=c.next();!d.done;d=c.next())d=d.value,a.push({key:d,value:String(b[d])});c=N("EXPERIMENT_FLAGS",{});var e=r(Object.keys(c));for(d=e.next();!d.done;d=e.next())d=d.value,d.startsWith("force_")&&void 0===b[d]&&a.push({key:d,value:String(c[d])});return a}
;var an="XMLHttpRequest"in y?function(){return new XMLHttpRequest}:null;
function bn(){if(!an)return null;var a=an();return"open"in a?a:null}
function cn(a){switch(a&&"status"in a?a.status:-1){case 200:case 201:case 202:case 203:case 204:case 205:case 206:case 304:return!0;default:return!1}}
;function dn(a,b){"function"===typeof a&&(a=Im(a));return window.setTimeout(a,b)}
;var en={Authorization:"AUTHORIZATION","X-Goog-EOM-Visitor-Id":"EOM_VISITOR_DATA","X-Goog-Visitor-Id":"SANDBOXED_VISITOR_ID","X-Youtube-Domain-Admin-State":"DOMAIN_ADMIN_STATE","X-Youtube-Chrome-Connected":"CHROME_CONNECTED_HEADER","X-YouTube-Client-Name":"INNERTUBE_CONTEXT_CLIENT_NAME","X-YouTube-Client-Version":"INNERTUBE_CONTEXT_CLIENT_VERSION","X-YouTube-Delegation-Context":"INNERTUBE_CONTEXT_SERIALIZED_DELEGATION_CONTEXT","X-YouTube-Device":"DEVICE","X-Youtube-Identity-Token":"ID_TOKEN","X-YouTube-Page-CL":"PAGE_CL",
"X-YouTube-Page-Label":"PAGE_BUILD_LABEL","X-YouTube-Variants-Checksum":"VARIANTS_CHECKSUM","X-Goog-AuthUser":"SESSION_INDEX","X-Goog-PageId":"DELEGATED_SESSION_ID"},fn="app debugcss debugjs expflag force_ad_params force_ad_encrypted force_viral_ad_response_params forced_experiments innertube_snapshots innertube_goldens internalcountrycode internalipoverride absolute_experiments conditional_experiments sbb sr_bns_address".split(" ").concat(ha(qi)),gn=!1;
function hn(a,b){b=void 0===b?{}:b;var c=Um(a),d=O("web_ajax_ignore_global_headers_if_set"),e;for(e in en){var f=N(en[e]);"X-Goog-Visitor-Id"!==e||f||(f=N("VISITOR_DATA"));!f||!c&&wc(a)||d&&void 0!==b[e]||!(O("move_vss_away_from_login_info_cookie")||"X-Goog-AuthUser"!==e&&"X-Goog-PageId"!==e)||(b[e]=f)}O("move_vss_away_from_login_info_cookie")&&(b["X-Yt-Auth-Test"]="test");"X-Goog-EOM-Visitor-Id"in b&&"X-Goog-Visitor-Id"in b&&delete b["X-Goog-Visitor-Id"];if(c||!wc(a))b["X-YouTube-Utc-Offset"]=String(-(new Date).getTimezoneOffset());
if(c||!wc(a)){try{var g=(new Intl.DateTimeFormat).resolvedOptions().timeZone}catch(h){}g&&(b["X-YouTube-Time-Zone"]=g)}document.location.hostname.endsWith("youtubeeducation.com")||!c&&wc(a)||(b["X-YouTube-Ad-Signals"]=Qm(Vm()));return b}
function jn(a){var b=window.location.search,c=wc(a);O("debug_handle_relative_url_for_query_forward_killswitch")||!c&&Um(a)&&(c=document.location.hostname);var d=uc(vc(5,a));d=(c=c&&(c.endsWith("youtube.com")||c.endsWith("youtube-nocookie.com")))&&d&&d.startsWith("/api/");if(!c||d)return a;var e=Rm(b),f={};fb(fn,function(g){e[g]&&(f[g]=e[g])});
return Tm(a,f||{},!1)}
function kn(a,b){var c=b.format||"JSON";a=ln(a,b);var d=mn(a,b),e=!1,f=nn(a,function(l){if(!e){e=!0;h&&window.clearTimeout(h);var m=cn(l),n=null,q=400<=l.status&&500>l.status,u=500<=l.status&&600>l.status;if(m||q||u)n=on(a,c,l,b.convertToSafeHtml);if(m)a:if(l&&204==l.status)m=!0;else{switch(c){case "XML":m=0==parseInt(n&&n.return_code,10);break a;case "RAW":m=!0;break a}m=!!n}n=n||{};q=b.context||y;m?b.onSuccess&&b.onSuccess.call(q,l,n):b.onError&&b.onError.call(q,l,n);b.onFinish&&b.onFinish.call(q,
l,n)}},b.method,d,b.headers,b.responseType,b.withCredentials);
d=b.timeout||0;if(b.onTimeout&&0<d){var g=b.onTimeout;var h=dn(function(){e||(e=!0,f.abort(),window.clearTimeout(h),g.call(b.context||y,f))},d)}return f}
function ln(a,b){b.includeDomain&&(a=document.location.protocol+"//"+document.location.hostname+(document.location.port?":"+document.location.port:"")+a);var c=N("XSRF_FIELD_NAME");if(b=b.urlParams)b[c]&&delete b[c],a=Tm(a,b||{},!0);return a}
function mn(a,b){var c=N("XSRF_FIELD_NAME"),d=N("XSRF_TOKEN"),e=b.postBody||"",f=b.postParams,g=N("XSRF_FIELD_NAME"),h;b.headers&&(h=b.headers["Content-Type"]);b.excludeXsrf||wc(a)&&!b.withCredentials&&wc(a)!=document.location.hostname||"POST"!=b.method||h&&"application/x-www-form-urlencoded"!=h||b.postParams&&b.postParams[g]||(f||(f={}),f[c]=d);(O("ajax_parse_query_data_only_when_filled")&&f&&0<Object.keys(f).length||f)&&"string"===typeof e&&(e=Rm(e),wb(e,f),e=b.postBodyFormat&&"JSON"==b.postBodyFormat?
JSON.stringify(e):Bc(e));f=e||f&&!pb(f);!gn&&f&&"POST"!=b.method&&(gn=!0,Jm(Error("AJAX request with postData should use POST")));return e}
function on(a,b,c,d){var e=null;switch(b){case "JSON":try{var f=c.responseText}catch(g){throw d=Error("Error reading responseText"),d.params=a,Km(d),g;}a=c.getResponseHeader("Content-Type")||"";f&&0<=a.indexOf("json")&&(")]}'\n"===f.substring(0,5)&&(f=f.substring(5)),e=JSON.parse(f));break;case "XML":if(a=(a=c.responseXML)?pn(a):null)e={},fb(a.getElementsByTagName("*"),function(g){e[g.tagName]=qn(g)})}d&&rn(e);
return e}
function rn(a){if(Qa(a))for(var b in a){var c;(c="html_content"==b)||(c=b.length-5,c=0<=c&&b.indexOf("_html",c)==c);if(c){c=b;var d=a[b],e=yb();d=e?e.createHTML(d):d;a[c]=new mc(d)}else rn(a[b])}}
function pn(a){return a?(a=("responseXML"in a?a.responseXML:a).getElementsByTagName("root"))&&0<a.length?a[0]:null:null}
function qn(a){var b="";fb(a.childNodes,function(c){b+=c.nodeValue});
return b}
function sn(a,b){b.method="POST";b.postParams||(b.postParams={});return kn(a,b)}
function nn(a,b,c,d,e,f,g){function h(){4==(l&&"readyState"in l?l.readyState:0)&&b&&Im(b)(l)}
c=void 0===c?"GET":c;d=void 0===d?"":d;var l=bn();if(!l)return null;"onloadend"in l?l.addEventListener("loadend",h,!1):l.onreadystatechange=h;O("debug_forward_web_query_parameters")&&(a=jn(a));l.open(c,a,!0);f&&(l.responseType=f);g&&(l.withCredentials=!0);c="POST"==c&&(void 0===window.FormData||!(d instanceof FormData));if(e=hn(a,e))for(var m in e)l.setRequestHeader(m,e[m]),"content-type"==m.toLowerCase()&&(c=!1);c&&l.setRequestHeader("Content-Type","application/x-www-form-urlencoded");l.send(d);
return l}
;var tn=jd||kd;function un(a){var b=Vb();return b?0<=b.toLowerCase().indexOf(a):!1}
;var vn=[{Ic:function(a){return"Cannot read property '"+a.key+"'"},
lc:{Error:[{regexp:/(Permission denied) to access property "([^']+)"/,groups:["reason","key"]}],TypeError:[{regexp:/Cannot read property '([^']+)' of (null|undefined)/,groups:["key","value"]},{regexp:/\u65e0\u6cd5\u83b7\u53d6\u672a\u5b9a\u4e49\u6216 (null|undefined) \u5f15\u7528\u7684\u5c5e\u6027\u201c([^\u201d]+)\u201d/,groups:["value","key"]},{regexp:/\uc815\uc758\ub418\uc9c0 \uc54a\uc74c \ub610\ub294 (null|undefined) \ucc38\uc870\uc778 '([^']+)' \uc18d\uc131\uc744 \uac00\uc838\uc62c \uc218 \uc5c6\uc2b5\ub2c8\ub2e4./,
groups:["value","key"]},{regexp:/No se puede obtener la propiedad '([^']+)' de referencia nula o sin definir/,groups:["key"]},{regexp:/Unable to get property '([^']+)' of (undefined or null) reference/,groups:["key","value"]},{regexp:/(null) is not an object \(evaluating '(?:([^.]+)\.)?([^']+)'\)/,groups:["value","base","key"]}]}},{Ic:function(a){return"Cannot call '"+a.key+"'"},
lc:{TypeError:[{regexp:/(?:([^ ]+)?\.)?([^ ]+) is not a function/,groups:["base","key"]},{regexp:/([^ ]+) called on (null or undefined)/,groups:["key","value"]},{regexp:/Object (.*) has no method '([^ ]+)'/,groups:["base","key"]},{regexp:/Object doesn't support property or method '([^ ]+)'/,groups:["key"]},{regexp:/\u30aa\u30d6\u30b8\u30a7\u30af\u30c8\u306f '([^']+)' \u30d7\u30ed\u30d1\u30c6\u30a3\u307e\u305f\u306f\u30e1\u30bd\u30c3\u30c9\u3092\u30b5\u30dd\u30fc\u30c8\u3057\u3066\u3044\u307e\u305b\u3093/,
groups:["key"]},{regexp:/\uac1c\uccb4\uac00 '([^']+)' \uc18d\uc131\uc774\ub098 \uba54\uc11c\ub4dc\ub97c \uc9c0\uc6d0\ud558\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4./,groups:["key"]}]}},{Ic:function(a){return a.key+" is not defined"},
lc:{ReferenceError:[{regexp:/(.*) is not defined/,groups:["key"]},{regexp:/Can't find variable: (.*)/,groups:["key"]}]}}];var xn={Ta:[],Pa:[{callback:wn,weight:500}]};function wn(a){if("JavaException"===a.name)return!0;a=a.stack;return a.includes("chrome://")||a.includes("chrome-extension://")||a.includes("moz-extension://")}
;function yn(){this.Pa=[];this.Ta=[]}
var zn;function An(){if(!zn){var a=zn=new yn;a.Ta.length=0;a.Pa.length=0;xn.Ta&&a.Ta.push.apply(a.Ta,xn.Ta);xn.Pa&&a.Pa.push.apply(a.Pa,xn.Pa)}return zn}
;var Bn=new Ui;function Cn(a){function b(){return a.charCodeAt(d++)}
var c=a.length,d=0;do{var e=Dn(b);if(Infinity===e)break;var f=e>>3;switch(e&7){case 0:e=Dn(b);if(2===f)return e;break;case 1:if(2===f)return;d+=8;break;case 2:e=Dn(b);if(2===f)return a.substr(d,e);d+=e;break;case 5:if(2===f)return;d+=4;break;default:return}}while(d<c)}
function Dn(a){var b=a(),c=b&127;if(128>b)return c;b=a();c|=(b&127)<<7;if(128>b)return c;b=a();c|=(b&127)<<14;if(128>b)return c;b=a();return 128>b?c|(b&127)<<21:Infinity}
;function En(a,b,c,d){if(a)if(Array.isArray(a)){var e=d;for(d=0;d<a.length&&!(a[d]&&(e+=Fn(d,a[d],b,c),500<e));d++);d=e}else if("object"===typeof a)for(e in a){if(a[e]){var f=a[e];var g=b;var h=c;g="string"!==typeof f||"clickTrackingParams"!==e&&"trackingParams"!==e?0:(f=Cn(atob(f.replace(/-/g,"+").replace(/_/g,"/"))))?Fn(e+".ve",f,g,h):0;d+=g;d+=Fn(e,a[e],b,c);if(500<d)break}}else c[b]=Gn(a),d+=c[b].length;else c[b]=Gn(a),d+=c[b].length;return d}
function Fn(a,b,c,d){c+="."+a;a=Gn(b);d[c]=a;return c.length+a.length}
function Gn(a){try{return("string"===typeof a?a:String(JSON.stringify(a))).substr(0,500)}catch(b){return"unable to serialize "+typeof a+" ("+b.message+")"}}
;function Hn(){this.ff=!0}
function In(){Hn.h||(Hn.h=new Hn);return Hn.h}
function Jn(a,b){a={};var c=Og([]);c&&(a.Authorization=c,c=b=null==b?void 0:b.sessionIndex,void 0===c&&(c=Number(N("SESSION_INDEX",0)),c=isNaN(c)?0:c),O("voice_search_auth_header_removal")||(a["X-Goog-AuthUser"]=c.toString()),"INNERTUBE_HOST_OVERRIDE"in Dm||(a["X-Origin"]=window.location.origin),void 0===b&&"DELEGATED_SESSION_ID"in Dm&&(a["X-Goog-PageId"]=N("DELEGATED_SESSION_ID")));return a}
;var Kn={identityType:"UNAUTHENTICATED_IDENTITY_TYPE_UNKNOWN"};function Ln(a){var b=this;this.i=void 0;this.h=!1;a.addEventListener("beforeinstallprompt",function(c){c.preventDefault();b.i=c});
a.addEventListener("appinstalled",function(){b.h=!0},{once:!0})}
function Mn(){if(!y.matchMedia)return"WEB_DISPLAY_MODE_UNKNOWN";try{return y.matchMedia("(display-mode: standalone)").matches?"WEB_DISPLAY_MODE_STANDALONE":y.matchMedia("(display-mode: minimal-ui)").matches?"WEB_DISPLAY_MODE_MINIMAL_UI":y.matchMedia("(display-mode: fullscreen)").matches?"WEB_DISPLAY_MODE_FULLSCREEN":y.matchMedia("(display-mode: browser)").matches?"WEB_DISPLAY_MODE_BROWSER":"WEB_DISPLAY_MODE_UNKNOWN"}catch(a){return"WEB_DISPLAY_MODE_UNKNOWN"}}
;function Nn(a,b,c,d,e){Kg.set(""+a,b,{kc:c,path:"/",domain:void 0===d?"youtube.com":d,secure:void 0===e?!1:e})}
function On(a,b,c){Kg.remove(""+a,void 0===b?"/":b,void 0===c?"youtube.com":c)}
function Pn(){if(!Kg.isEnabled())return!1;if(Kg.h.cookie)return!0;Kg.set("TESTCOOKIESENABLED","1",{kc:60});if("1"!==Kg.get("TESTCOOKIESENABLED"))return!1;Kg.remove("TESTCOOKIESENABLED");return!0}
;var Qn=A("ytglobal.prefsUserPrefsPrefs_")||{};z("ytglobal.prefsUserPrefsPrefs_",Qn);function Rn(){this.h=N("ALT_PREF_COOKIE_NAME","PREF");this.i=N("ALT_PREF_COOKIE_DOMAIN","youtube.com");var a=Kg.get(""+this.h,void 0);a&&this.parse(a)}
var Sn;function Tn(){Sn||(Sn=new Rn);return Sn}
k=Rn.prototype;k.get=function(a,b){Un(a);Vn(a);a=void 0!==Qn[a]?Qn[a].toString():null;return null!=a?a:b?b:""};
k.set=function(a,b){Un(a);Vn(a);if(null==b)throw Error("ExpectedNotNull");Qn[a]=b.toString()};
function Wn(a){return!!((Xn("f"+(Math.floor(a/31)+1))||0)&1<<a%31)}
k.remove=function(a){Un(a);Vn(a);delete Qn[a]};
k.clear=function(){for(var a in Qn)delete Qn[a]};
function Vn(a){if(/^f([1-9][0-9]*)$/.test(a))throw Error("ExpectedRegexMatch: "+a);}
function Un(a){if(!/^\w+$/.test(a))throw Error("ExpectedRegexMismatch: "+a);}
function Xn(a){a=void 0!==Qn[a]?Qn[a].toString():null;return null!=a&&/^[A-Fa-f0-9]+$/.test(a)?parseInt(a,16):null}
k.parse=function(a){a=decodeURIComponent(a).split("&");for(var b=0;b<a.length;b++){var c=a[b].split("="),d=c[0];(c=c[1])&&(Qn[d]=c.toString())}};var Yn={bluetooth:"CONN_DISCO",cellular:"CONN_CELLULAR_UNKNOWN",ethernet:"CONN_WIFI",none:"CONN_NONE",wifi:"CONN_WIFI",wimax:"CONN_CELLULAR_4G",other:"CONN_UNKNOWN",unknown:"CONN_UNKNOWN","slow-2g":"CONN_CELLULAR_2G","2g":"CONN_CELLULAR_2G","3g":"CONN_CELLULAR_3G","4g":"CONN_CELLULAR_4G"},Zn={CONN_DEFAULT:0,CONN_UNKNOWN:1,CONN_NONE:2,CONN_WIFI:3,CONN_CELLULAR_2G:4,CONN_CELLULAR_3G:5,CONN_CELLULAR_4G:6,CONN_CELLULAR_UNKNOWN:7,CONN_DISCO:8,CONN_CELLULAR_5G:9,CONN_WIFI_METERED:10,CONN_CELLULAR_5G_SA:11,
CONN_CELLULAR_5G_NSA:12,CONN_INVALID:31},$n={EFFECTIVE_CONNECTION_TYPE_UNKNOWN:0,EFFECTIVE_CONNECTION_TYPE_OFFLINE:1,EFFECTIVE_CONNECTION_TYPE_SLOW_2G:2,EFFECTIVE_CONNECTION_TYPE_2G:3,EFFECTIVE_CONNECTION_TYPE_3G:4,EFFECTIVE_CONNECTION_TYPE_4G:5},ao={"slow-2g":"EFFECTIVE_CONNECTION_TYPE_SLOW_2G","2g":"EFFECTIVE_CONNECTION_TYPE_2G","3g":"EFFECTIVE_CONNECTION_TYPE_3G","4g":"EFFECTIVE_CONNECTION_TYPE_4G"};function bo(){var a=y.navigator;return a?a.connection:void 0}
function co(){var a=bo();if(a){var b=Yn[a.type||"unknown"]||"CONN_UNKNOWN";a=Yn[a.effectiveType||"unknown"]||"CONN_UNKNOWN";"CONN_CELLULAR_UNKNOWN"===b&&"CONN_UNKNOWN"!==a&&(b=a);if("CONN_UNKNOWN"!==b)return b;if("CONN_UNKNOWN"!==a)return a}}
function eo(){var a=bo();if(null!=a&&a.effectiveType)return ao.hasOwnProperty(a.effectiveType)?ao[a.effectiveType]:"EFFECTIVE_CONNECTION_TYPE_UNKNOWN"}
;function P(a){var b=Ja.apply(1,arguments);var c=Error.call(this,a);this.message=c.message;"stack"in c&&(this.stack=c.stack);this.args=[].concat(ha(b))}
v(P,Error);function fo(){try{return go(),!0}catch(a){return!1}}
function go(a){if(void 0!==N("DATASYNC_ID"))return N("DATASYNC_ID");throw new P("Datasync ID not set",void 0===a?"unknown":a);}
;function ho(){}
function io(a,b){return jo(a,0,b)}
ho.prototype.ea=function(a,b){return jo(a,1,b)};
function ko(a){var b=A("yt.scheduler.instance.addImmediateJob");b?b(a):a()}
;function lo(){ho.apply(this,arguments)}
v(lo,ho);function mo(){lo.h||(lo.h=new lo);return lo.h}
function jo(a,b,c){void 0!==c&&Number.isNaN(Number(c))&&(c=void 0);var d=A("yt.scheduler.instance.addJob");return d?d(a,b,c):void 0===c?(a(),NaN):dn(a,c||0)}
lo.prototype.Ba=function(a){if(void 0===a||!Number.isNaN(Number(a))){var b=A("yt.scheduler.instance.cancelJob");b?b(a):window.clearTimeout(a)}};
lo.prototype.start=function(){var a=A("yt.scheduler.instance.start");a&&a()};
lo.prototype.pause=function(){var a=A("yt.scheduler.instance.pause");a&&a()};
var xi=mo();function no(a){var b=new ej;(b=b.isAvailable()?a?new kj(b,a):b:null)||(a=new fj(a||"UserDataSharedStore"),b=a.isAvailable()?a:null);this.h=(a=b)?new aj(a):null;this.i=document.domain||window.location.hostname}
no.prototype.set=function(a,b,c,d){c=c||31104E3;this.remove(a);if(this.h)try{this.h.set(a,b,Date.now()+1E3*c);return}catch(f){}var e="";if(d)try{e=escape(Sg(b))}catch(f){return}else e=escape(b);Nn(a,e,c,this.i)};
no.prototype.get=function(a,b){var c=void 0,d=!this.h;if(!d)try{c=this.h.get(a)}catch(e){d=!0}if(d&&(c=Kg.get(""+a,void 0))&&(c=unescape(c),b))try{c=JSON.parse(c)}catch(e){this.remove(a),c=void 0}return c};
no.prototype.remove=function(a){this.h&&this.h.remove(a);On(a,"/",this.i)};var oo=function(){var a;return function(){a||(a=new no("ytidb"));return a}}();
function po(){var a;return null==(a=oo())?void 0:a.get("LAST_RESULT_ENTRY_KEY",!0)}
;var qo=[],ro,so=!1;function to(){var a={};for(ro=new uo(void 0===a.handleError?vo:a.handleError,void 0===a.logEvent?wo:a.logEvent);0<qo.length;)switch(a=qo.shift(),a.type){case "ERROR":ro.handleError(a.payload);break;case "EVENT":ro.logEvent(a.eventType,a.payload)}}
function xo(a){so||(ro?ro.handleError(a):(qo.push({type:"ERROR",payload:a}),10<qo.length&&qo.shift()))}
function yo(a,b){so||(ro?ro.logEvent(a,b):(qo.push({type:"EVENT",eventType:a,payload:b}),10<qo.length&&qo.shift()))}
;function zo(a){if(0<=a.indexOf(":"))throw Error("Database name cannot contain ':'");}
function Ao(a){return a.substr(0,a.indexOf(":"))||a}
;var Bo={},Co=(Bo.AUTH_INVALID="No user identifier specified.",Bo.EXPLICIT_ABORT="Transaction was explicitly aborted.",Bo.IDB_NOT_SUPPORTED="IndexedDB is not supported.",Bo.MISSING_INDEX="Index not created.",Bo.MISSING_OBJECT_STORES="Object stores not created.",Bo.DB_DELETED_BY_MISSING_OBJECT_STORES="Database is deleted because expected object stores were not created.",Bo.DB_REOPENED_BY_MISSING_OBJECT_STORES="Database is reopened because expected object stores were not created.",Bo.UNKNOWN_ABORT="Transaction was aborted for unknown reasons.",
Bo.QUOTA_EXCEEDED="The current transaction exceeded its quota limitations.",Bo.QUOTA_MAYBE_EXCEEDED="The current transaction may have failed because of exceeding quota limitations.",Bo.EXECUTE_TRANSACTION_ON_CLOSED_DB="Can't start a transaction on a closed database",Bo.INCOMPATIBLE_DB_VERSION="The binary is incompatible with the database version",Bo),Do={},Eo=(Do.AUTH_INVALID="ERROR",Do.EXECUTE_TRANSACTION_ON_CLOSED_DB="WARNING",Do.EXPLICIT_ABORT="IGNORED",Do.IDB_NOT_SUPPORTED="ERROR",Do.MISSING_INDEX=
"WARNING",Do.MISSING_OBJECT_STORES="ERROR",Do.DB_DELETED_BY_MISSING_OBJECT_STORES="WARNING",Do.DB_REOPENED_BY_MISSING_OBJECT_STORES="WARNING",Do.QUOTA_EXCEEDED="WARNING",Do.QUOTA_MAYBE_EXCEEDED="WARNING",Do.UNKNOWN_ABORT="WARNING",Do.INCOMPATIBLE_DB_VERSION="WARNING",Do),Fo={},Go=(Fo.AUTH_INVALID=!1,Fo.EXECUTE_TRANSACTION_ON_CLOSED_DB=!1,Fo.EXPLICIT_ABORT=!1,Fo.IDB_NOT_SUPPORTED=!1,Fo.MISSING_INDEX=!1,Fo.MISSING_OBJECT_STORES=!1,Fo.DB_DELETED_BY_MISSING_OBJECT_STORES=!1,Fo.DB_REOPENED_BY_MISSING_OBJECT_STORES=
!1,Fo.QUOTA_EXCEEDED=!1,Fo.QUOTA_MAYBE_EXCEEDED=!0,Fo.UNKNOWN_ABORT=!0,Fo.INCOMPATIBLE_DB_VERSION=!1,Fo);function Ho(a,b,c,d,e){b=void 0===b?{}:b;c=void 0===c?Co[a]:c;d=void 0===d?Eo[a]:d;e=void 0===e?Go[a]:e;P.call(this,c,Object.assign({},{name:"YtIdbKnownError",isSw:void 0===self.document,isIframe:self!==self.top,type:a},b));this.type=a;this.message=c;this.level=d;this.h=e;Object.setPrototypeOf(this,Ho.prototype)}
v(Ho,P);function Io(a,b){Ho.call(this,"MISSING_OBJECT_STORES",{expectedObjectStores:b,foundObjectStores:a},Co.MISSING_OBJECT_STORES);Object.setPrototypeOf(this,Io.prototype)}
v(Io,Ho);function Jo(a,b){var c=Error.call(this);this.message=c.message;"stack"in c&&(this.stack=c.stack);this.index=a;this.objectStore=b;Object.setPrototypeOf(this,Jo.prototype)}
v(Jo,Error);var Ko=["The database connection is closing","Can't start a transaction on a closed database","A mutation operation was attempted on a database that did not allow mutations"];
function Lo(a,b,c,d){b=Ao(b);var e=a instanceof Error?a:Error("Unexpected error: "+a);if(e instanceof Ho)return e;a={objectStoreNames:c,dbName:b,dbVersion:d};if("QuotaExceededError"===e.name)return new Ho("QUOTA_EXCEEDED",a);if(ld&&"UnknownError"===e.name)return new Ho("QUOTA_MAYBE_EXCEEDED",a);if(e instanceof Jo)return new Ho("MISSING_INDEX",Object.assign({},a,{objectStore:e.objectStore,index:e.index}));if("InvalidStateError"===e.name&&Ko.some(function(f){return e.message.includes(f)}))return new Ho("EXECUTE_TRANSACTION_ON_CLOSED_DB",
a);
if("AbortError"===e.name)return new Ho("UNKNOWN_ABORT",a,e.message);e.args=[Object.assign({},a,{name:"IdbError",Bd:e.name})];e.level="WARNING";return e}
function Mo(a,b,c){var d=po();return new Ho("IDB_NOT_SUPPORTED",{context:{caller:a,publicName:b,version:c,hasSucceededOnce:null==d?void 0:d.hasSucceededOnce}})}
;function No(a){if(!a)throw Error();throw a;}
function Oo(a){return a}
function Po(a){this.h=a}
function Qo(a){function b(e){if("PENDING"===d.state.status){d.state={status:"REJECTED",reason:e};e=r(d.i);for(var f=e.next();!f.done;f=e.next())f=f.value,f()}}
function c(e){if("PENDING"===d.state.status){d.state={status:"FULFILLED",value:e};e=r(d.h);for(var f=e.next();!f.done;f=e.next())f=f.value,f()}}
var d=this;this.state={status:"PENDING"};this.h=[];this.i=[];a=a.h;try{a(c,b)}catch(e){b(e)}}
Qo.all=function(a){return new Qo(new Po(function(b,c){var d=[],e=a.length;0===e&&b(d);for(var f={nb:0};f.nb<a.length;f={nb:f.nb},++f.nb)Qo.resolve(a[f.nb]).then(function(g){return function(h){d[g.nb]=h;e--;0===e&&b(d)}}(f)).catch(function(g){c(g)})}))};
Qo.resolve=function(a){return new Qo(new Po(function(b,c){a instanceof Qo?a.then(b,c):b(a)}))};
Qo.reject=function(a){return new Qo(new Po(function(b,c){c(a)}))};
Qo.prototype.then=function(a,b){var c=this,d=null!=a?a:Oo,e=null!=b?b:No;return new Qo(new Po(function(f,g){"PENDING"===c.state.status?(c.h.push(function(){Ro(c,c,d,f,g)}),c.i.push(function(){So(c,c,e,f,g)})):"FULFILLED"===c.state.status?Ro(c,c,d,f,g):"REJECTED"===c.state.status&&So(c,c,e,f,g)}))};
Qo.prototype.catch=function(a){return this.then(void 0,a)};
function Ro(a,b,c,d,e){try{if("FULFILLED"!==a.state.status)throw Error("calling handleResolve before the promise is fulfilled.");var f=c(a.state.value);f instanceof Qo?To(a,b,f,d,e):d(f)}catch(g){e(g)}}
function So(a,b,c,d,e){try{if("REJECTED"!==a.state.status)throw Error("calling handleReject before the promise is rejected.");var f=c(a.state.reason);f instanceof Qo?To(a,b,f,d,e):d(f)}catch(g){e(g)}}
function To(a,b,c,d,e){b===c?e(new TypeError("Circular promise chain detected.")):c.then(function(f){f instanceof Qo?To(a,b,f,d,e):d(f)},function(f){e(f)})}
;function Uo(a,b,c){function d(){c(a.error);f()}
function e(){b(a.result);f()}
function f(){try{a.removeEventListener("success",e),a.removeEventListener("error",d)}catch(g){}}
a.addEventListener("success",e);a.addEventListener("error",d)}
function Vo(a){return new Promise(function(b,c){Uo(a,b,c)})}
function Wo(a){return new Qo(new Po(function(b,c){Uo(a,b,c)}))}
;function Xo(a,b){return new Qo(new Po(function(c,d){function e(){var f=a?b(a):null;f?f.then(function(g){a=g;e()},d):c()}
e()}))}
;var Yo=window,Q=Yo.ytcsi&&Yo.ytcsi.now?Yo.ytcsi.now:Yo.performance&&Yo.performance.timing&&Yo.performance.now&&Yo.performance.timing.navigationStart?function(){return Yo.performance.timing.navigationStart+Yo.performance.now()}:function(){return(new Date).getTime()};function Zo(a,b){this.h=a;this.options=b;this.transactionCount=0;this.j=Math.round(Q());this.i=!1}
k=Zo.prototype;k.add=function(a,b,c){return $o(this,[a],{mode:"readwrite",ca:!0},function(d){return d.objectStore(a).add(b,c)})};
k.clear=function(a){return $o(this,[a],{mode:"readwrite",ca:!0},function(b){return b.objectStore(a).clear()})};
k.close=function(){this.h.close();var a;(null==(a=this.options)?0:a.closed)&&this.options.closed()};
k.count=function(a,b){return $o(this,[a],{mode:"readonly",ca:!0},function(c){return c.objectStore(a).count(b)})};
function ap(a,b,c){a=a.h.createObjectStore(b,c);return new bp(a)}
k.delete=function(a,b){return $o(this,[a],{mode:"readwrite",ca:!0},function(c){return c.objectStore(a).delete(b)})};
k.get=function(a,b){return $o(this,[a],{mode:"readonly",ca:!0},function(c){return c.objectStore(a).get(b)})};
function cp(a,b,c){return $o(a,[b],{mode:"readwrite",ca:!0},function(d){d=d.objectStore(b);return Wo(d.h.put(c,void 0))})}
k.objectStoreNames=function(){return Array.from(this.h.objectStoreNames)};
function $o(a,b,c,d){var e,f,g,h,l,m,n,q,u,t,B,C;return x(function(F){switch(F.h){case 1:var M={mode:"readonly",ca:!1,tag:"IDB_TRANSACTION_TAG_UNKNOWN"};"string"===typeof c?M.mode=c:Object.assign(M,c);e=M;a.transactionCount++;f=e.ca?3:1;g=0;case 2:if(h){F.v(3);break}g++;l=Math.round(Q());xa(F,4);m=a.h.transaction(b,e.mode);M=new dp(m);M=ep(M,d);return w(F,M,6);case 6:return n=F.i,q=Math.round(Q()),fp(a,l,q,g,void 0,b.join(),e),F.return(n);case 4:u=za(F);t=Math.round(Q());B=Lo(u,a.h.name,b.join(),
a.h.version);if((C=B instanceof Ho&&!B.h)||g>=f)fp(a,l,t,g,B,b.join(),e),h=B;F.v(2);break;case 3:return F.return(Promise.reject(h))}})}
function fp(a,b,c,d,e,f,g){b=c-b;e?(e instanceof Ho&&("QUOTA_EXCEEDED"===e.type||"QUOTA_MAYBE_EXCEEDED"===e.type)&&yo("QUOTA_EXCEEDED",{dbName:Ao(a.h.name),objectStoreNames:f,transactionCount:a.transactionCount,transactionMode:g.mode}),e instanceof Ho&&"UNKNOWN_ABORT"===e.type&&(c-=a.j,0>c&&c>=Math.pow(2,31)&&(c=0),yo("TRANSACTION_UNEXPECTEDLY_ABORTED",{objectStoreNames:f,transactionDuration:b,transactionCount:a.transactionCount,dbDuration:c}),a.i=!0),gp(a,!1,d,f,b,g.tag),xo(e)):gp(a,!0,d,f,b,g.tag)}
function gp(a,b,c,d,e,f){yo("TRANSACTION_ENDED",{objectStoreNames:d,connectionHasUnknownAbortedTransaction:a.i,duration:e,isSuccessful:b,tryCount:c,tag:void 0===f?"IDB_TRANSACTION_TAG_UNKNOWN":f})}
k.getName=function(){return this.h.name};
function bp(a){this.h=a}
k=bp.prototype;k.add=function(a,b){return Wo(this.h.add(a,b))};
k.autoIncrement=function(){return this.h.autoIncrement};
k.clear=function(){return Wo(this.h.clear()).then(function(){})};
function hp(a,b,c){a.h.createIndex(b,c,{unique:!1})}
k.count=function(a){return Wo(this.h.count(a))};
function ip(a,b){return jp(a,{query:b},function(c){return c.delete().then(function(){return c.continue()})}).then(function(){})}
k.delete=function(a){return a instanceof IDBKeyRange?ip(this,a):Wo(this.h.delete(a))};
k.get=function(a){return Wo(this.h.get(a))};
k.index=function(a){try{return new kp(this.h.index(a))}catch(b){if(b instanceof Error&&"NotFoundError"===b.name)throw new Jo(a,this.h.name);throw b;}};
k.getName=function(){return this.h.name};
k.keyPath=function(){return this.h.keyPath};
function jp(a,b,c){a=a.h.openCursor(b.query,b.direction);return lp(a).then(function(d){return Xo(d,c)})}
function dp(a){var b=this;this.h=a;this.j=new Map;this.i=!1;this.done=new Promise(function(c,d){b.h.addEventListener("complete",function(){c()});
b.h.addEventListener("error",function(e){e.currentTarget===e.target&&d(b.h.error)});
b.h.addEventListener("abort",function(){var e=b.h.error;if(e)d(e);else if(!b.i){e=Ho;for(var f=b.h.objectStoreNames,g=[],h=0;h<f.length;h++){var l=f.item(h);if(null===l)throw Error("Invariant: item in DOMStringList is null");g.push(l)}e=new e("UNKNOWN_ABORT",{objectStoreNames:g.join(),dbName:b.h.db.name,mode:b.h.mode});d(e)}})})}
function ep(a,b){var c=new Promise(function(d,e){try{b(a).then(function(f){d(f)}).catch(e)}catch(f){e(f),a.abort()}});
return Promise.all([c,a.done]).then(function(d){return r(d).next().value})}
dp.prototype.abort=function(){this.h.abort();this.i=!0;throw new Ho("EXPLICIT_ABORT");};
dp.prototype.objectStore=function(a){a=this.h.objectStore(a);var b=this.j.get(a);b||(b=new bp(a),this.j.set(a,b));return b};
function kp(a){this.h=a}
k=kp.prototype;k.count=function(a){return Wo(this.h.count(a))};
k.delete=function(a){return mp(this,{query:a},function(b){return b.delete().then(function(){return b.continue()})})};
k.get=function(a){return Wo(this.h.get(a))};
k.getKey=function(a){return Wo(this.h.getKey(a))};
k.keyPath=function(){return this.h.keyPath};
k.unique=function(){return this.h.unique};
function mp(a,b,c){a=a.h.openCursor(void 0===b.query?null:b.query,void 0===b.direction?"next":b.direction);return lp(a).then(function(d){return Xo(d,c)})}
function np(a,b){this.request=a;this.cursor=b}
function lp(a){return Wo(a).then(function(b){return b?new np(a,b):null})}
k=np.prototype;k.advance=function(a){this.cursor.advance(a);return lp(this.request)};
k.continue=function(a){this.cursor.continue(a);return lp(this.request)};
k.delete=function(){return Wo(this.cursor.delete()).then(function(){})};
k.getKey=function(){return this.cursor.key};
k.getValue=function(){return this.cursor.value};
k.update=function(a){return Wo(this.cursor.update(a))};function op(a,b,c){return new Promise(function(d,e){function f(){u||(u=new Zo(g.result,{closed:q}));return u}
var g=void 0!==b?self.indexedDB.open(a,b):self.indexedDB.open(a);var h=c.ce,l=c.blocking,m=c.gf,n=c.upgrade,q=c.closed,u;g.addEventListener("upgradeneeded",function(t){try{if(null===t.newVersion)throw Error("Invariant: newVersion on IDbVersionChangeEvent is null");if(null===g.transaction)throw Error("Invariant: transaction on IDbOpenDbRequest is null");t.dataLoss&&"none"!==t.dataLoss&&yo("IDB_DATA_CORRUPTED",{reason:t.dataLossMessage||"unknown reason",dbName:Ao(a)});var B=f(),C=new dp(g.transaction);
n&&n(B,function(F){return t.oldVersion<F&&t.newVersion>=F},C);
C.done.catch(function(F){e(F)})}catch(F){e(F)}});
g.addEventListener("success",function(){var t=g.result;l&&t.addEventListener("versionchange",function(){l(f())});
t.addEventListener("close",function(){yo("IDB_UNEXPECTEDLY_CLOSED",{dbName:Ao(a),dbVersion:t.version});m&&m()});
d(f())});
g.addEventListener("error",function(){e(g.error)});
h&&g.addEventListener("blocked",function(){h()})})}
function pp(a,b,c){c=void 0===c?{}:c;return op(a,b,c)}
function qp(a,b){b=void 0===b?{}:b;var c,d,e,f;return x(function(g){if(1==g.h)return xa(g,2),c=self.indexedDB.deleteDatabase(a),d=b,(e=d.ce)&&c.addEventListener("blocked",function(){e()}),w(g,Vo(c),4);
if(2!=g.h)return ya(g,0);f=za(g);throw Lo(f,a,"",-1);})}
;function rp(a,b){this.name=a;this.options=b;this.j=!0;this.m=this.l=0}
rp.prototype.i=function(a,b,c){c=void 0===c?{}:c;return pp(a,b,c)};
rp.prototype.delete=function(a){a=void 0===a?{}:a;return qp(this.name,a)};
function sp(a,b){return new Ho("INCOMPATIBLE_DB_VERSION",{dbName:a.name,oldVersion:a.options.version,newVersion:b})}
function tp(a,b){if(!b)throw Mo("openWithToken",Ao(a.name));return up(a)}
function up(a){function b(){var f,g,h,l,m,n,q,u,t,B;return x(function(C){switch(C.h){case 1:return g=null!=(f=Error().stack)?f:"",xa(C,2),w(C,a.i(a.name,a.options.version,d),4);case 4:h=C.i;for(var F=a.options,M=[],S=r(Object.keys(F.yb)),R=S.next();!R.done;R=S.next()){R=R.value;var X=F.yb[R],Y=void 0===X.Oe?Number.MAX_VALUE:X.Oe;!(h.h.version>=X.Gb)||h.h.version>=Y||h.h.objectStoreNames.contains(R)||M.push(R)}l=M;if(0===l.length){C.v(5);break}m=Object.keys(a.options.yb);n=h.objectStoreNames();if(a.m<
Ym("ytidb_reopen_db_retries",0))return a.m++,h.close(),xo(new Ho("DB_REOPENED_BY_MISSING_OBJECT_STORES",{dbName:a.name,expectedObjectStores:m,foundObjectStores:n})),C.return(b());if(!(a.l<Ym("ytidb_remake_db_retries",1))){C.v(6);break}a.l++;return w(C,a.delete(),7);case 7:return xo(new Ho("DB_DELETED_BY_MISSING_OBJECT_STORES",{dbName:a.name,expectedObjectStores:m,foundObjectStores:n})),C.return(b());case 6:throw new Io(n,m);case 5:return C.return(h);case 2:q=za(C);if(q instanceof DOMException?"VersionError"!==
q.name:"DOMError"in self&&q instanceof DOMError?"VersionError"!==q.name:!(q instanceof Object&&"message"in q)||"An attempt was made to open a database using a lower version than the existing version."!==q.message){C.v(8);break}return w(C,a.i(a.name,void 0,Object.assign({},d,{upgrade:void 0})),9);case 9:u=C.i;t=u.h.version;if(void 0!==a.options.version&&t>a.options.version+1)throw u.close(),a.j=!1,sp(a,t);return C.return(u);case 8:throw c(),q instanceof Error&&!O("ytidb_async_stack_killswitch")&&(q.stack=
q.stack+"\n"+g.substring(g.indexOf("\n")+1)),Lo(q,a.name,"",null!=(B=a.options.version)?B:-1);}})}
function c(){a.h===e&&(a.h=void 0)}
if(!a.j)throw sp(a);if(a.h)return a.h;var d={blocking:function(f){f.close()},
closed:c,gf:c,upgrade:a.options.upgrade};var e=b();a.h=e;return a.h}
;var vp=new rp("YtIdbMeta",{yb:{databases:{Gb:1}},upgrade:function(a,b){b(1)&&ap(a,"databases",{keyPath:"actualName"})}});
function wp(a,b){var c;return x(function(d){if(1==d.h)return w(d,tp(vp,b),2);c=d.i;return d.return($o(c,["databases"],{ca:!0,mode:"readwrite"},function(e){var f=e.objectStore("databases");return f.get(a.actualName).then(function(g){if(g?a.actualName!==g.actualName||a.publicName!==g.publicName||a.userIdentifier!==g.userIdentifier:1)return Wo(f.h.put(a,void 0)).then(function(){})})}))})}
function xp(a,b){var c;return x(function(d){if(1==d.h)return a?w(d,tp(vp,b),2):d.return();c=d.i;return d.return(c.delete("databases",a))})}
function yp(a,b){var c,d;return x(function(e){return 1==e.h?(c=[],w(e,tp(vp,b),2)):3!=e.h?(d=e.i,w(e,$o(d,["databases"],{ca:!0,mode:"readonly"},function(f){c.length=0;return jp(f.objectStore("databases"),{},function(g){a(g.getValue())&&c.push(g.getValue());return g.continue()})}),3)):e.return(c)})}
function zp(a){return yp(function(b){return"LogsDatabaseV2"===b.publicName&&void 0!==b.userIdentifier},a)}
function Ap(a,b,c){return yp(function(d){return c?void 0!==d.userIdentifier&&!a.includes(d.userIdentifier)&&c.includes(d.publicName):void 0!==d.userIdentifier&&!a.includes(d.userIdentifier)},b)}
function Bp(a){var b,c;return x(function(d){if(1==d.h)return b=go("YtIdbMeta hasAnyMeta other"),w(d,yp(function(e){return void 0!==e.userIdentifier&&e.userIdentifier!==b},a),2);
c=d.i;return d.return(0<c.length)})}
;var Cp,Dp=new function(){}(new function(){});
function Ep(){var a,b,c,d;return x(function(e){switch(e.h){case 1:a=po();if(null==(b=a)?0:b.hasSucceededOnce)return e.return(!0);var f;if(f=tn)f=/WebKit\/([0-9]+)/.exec(Vb()),f=!!(f&&600<=parseInt(f[1],10));f&&(f=/WebKit\/([0-9]+)/.exec(Vb()),f=!(f&&602<=parseInt(f[1],10)));if(f||Xc)return e.return(!1);try{if(c=self,!(c.indexedDB&&c.IDBIndex&&c.IDBKeyRange&&c.IDBObjectStore))return e.return(!1)}catch(g){return e.return(!1)}if(!("IDBTransaction"in self&&"objectStoreNames"in IDBTransaction.prototype))return e.return(!1);
xa(e,2);d={actualName:"yt-idb-test-do-not-use",publicName:"yt-idb-test-do-not-use",userIdentifier:void 0};return w(e,wp(d,Dp),4);case 4:return w(e,xp("yt-idb-test-do-not-use",Dp),5);case 5:return e.return(!0);case 2:return za(e),e.return(!1)}})}
function Fp(){if(void 0!==Cp)return Cp;so=!0;return Cp=Ep().then(function(a){so=!1;var b;if(null!=(b=oo())&&b.h){var c;b={hasSucceededOnce:(null==(c=po())?void 0:c.hasSucceededOnce)||a};var d;null==(d=oo())||d.set("LAST_RESULT_ENTRY_KEY",b,2592E3,!0)}return a})}
function Gp(){return A("ytglobal.idbToken_")||void 0}
function Hp(){var a=Gp();return a?Promise.resolve(a):Fp().then(function(b){(b=b?Dp:void 0)&&z("ytglobal.idbToken_",b);return b})}
;var Ip=0;function Jp(a,b){Ip||(Ip=xi.ea(function(){var c,d,e,f,g;return x(function(h){switch(h.h){case 1:return w(h,Hp(),2);case 2:c=h.i;if(!c)return h.return();d=!0;xa(h,3);return w(h,Ap(a,c,b),5);case 5:e=h.i;if(!e.length){d=!1;h.v(6);break}f=e[0];return w(h,qp(f.actualName),7);case 7:return w(h,xp(f.actualName,c),6);case 6:ya(h,4);break;case 3:g=za(h),xo(g),d=!1;case 4:xi.Ba(Ip),Ip=0,d&&Jp(a,b),h.h=0}})}))}
function Kp(){var a;return x(function(b){return 1==b.h?w(b,Hp(),2):(a=b.i)?b.return(Bp(a)):b.return(!1)})}
new Uh;function Lp(a){if(!fo())throw a=new Ho("AUTH_INVALID",{dbName:a}),xo(a),a;var b=go();return{actualName:a+":"+b,publicName:a,userIdentifier:b}}
function Mp(a,b,c,d){var e,f,g,h,l,m;return x(function(n){switch(n.h){case 1:return f=null!=(e=Error().stack)?e:"",w(n,Hp(),2);case 2:g=n.i;if(!g)throw h=Mo("openDbImpl",a,b),O("ytidb_async_stack_killswitch")||(h.stack=h.stack+"\n"+f.substring(f.indexOf("\n")+1)),xo(h),h;zo(a);l=c?{actualName:a,publicName:a,userIdentifier:void 0}:Lp(a);xa(n,3);return w(n,wp(l,g),5);case 5:return w(n,pp(l.actualName,b,d),6);case 6:return n.return(n.i);case 3:return m=za(n),xa(n,7),w(n,xp(l.actualName,g),9);case 9:ya(n,
8);break;case 7:za(n);case 8:throw m;}})}
function Np(a,b,c){c=void 0===c?{}:c;return Mp(a,b,!1,c)}
function Op(a,b,c){c=void 0===c?{}:c;return Mp(a,b,!0,c)}
function Pp(a,b){b=void 0===b?{}:b;var c,d;return x(function(e){if(1==e.h)return w(e,Hp(),2);if(3!=e.h){c=e.i;if(!c)return e.return();zo(a);d=Lp(a);return w(e,qp(d.actualName,b),3)}return w(e,xp(d.actualName,c),0)})}
function Qp(a,b,c){a=a.map(function(d){return x(function(e){return 1==e.h?w(e,qp(d.actualName,b),2):w(e,xp(d.actualName,c),0)})});
return Promise.all(a).then(function(){})}
function Rp(){var a=void 0===a?{}:a;var b,c;return x(function(d){if(1==d.h)return w(d,Hp(),2);if(3!=d.h){b=d.i;if(!b)return d.return();zo("LogsDatabaseV2");return w(d,zp(b),3)}c=d.i;return w(d,Qp(c,a,b),0)})}
function Sp(a,b){b=void 0===b?{}:b;var c;return x(function(d){if(1==d.h)return w(d,Hp(),2);if(3!=d.h){c=d.i;if(!c)return d.return();zo(a);return w(d,qp(a,b),3)}return w(d,xp(a,c),0)})}
;function Tp(a,b){rp.call(this,a,b);this.options=b;zo(a)}
v(Tp,rp);function Up(a,b){var c;return function(){c||(c=new Tp(a,b));return c}}
Tp.prototype.i=function(a,b,c){c=void 0===c?{}:c;return(this.options.qc?Op:Np)(a,b,Object.assign({},c))};
Tp.prototype.delete=function(a){a=void 0===a?{}:a;return(this.options.qc?Sp:Pp)(this.name,a)};
function Vp(a,b){return Up(a,b)}
;var Wp={},Xp=Vp("ytGcfConfig",{yb:(Wp.coldConfigStore={Gb:1},Wp.hotConfigStore={Gb:1},Wp),qc:!1,upgrade:function(a,b){b(1)&&(hp(ap(a,"hotConfigStore",{keyPath:"key",autoIncrement:!0}),"hotTimestampIndex","timestamp"),hp(ap(a,"coldConfigStore",{keyPath:"key",autoIncrement:!0}),"coldTimestampIndex","timestamp"))},
version:1});function Yp(a){return tp(Xp(),a)}
function Zp(a,b,c){var d,e,f;return x(function(g){switch(g.h){case 1:return d={config:a,hashData:b,timestamp:Q()},w(g,Yp(c),2);case 2:return e=g.i,w(g,e.clear("hotConfigStore"),3);case 3:return w(g,cp(e,"hotConfigStore",d),4);case 4:return f=g.i,g.return(f)}})}
function $p(a,b,c,d){var e,f,g;return x(function(h){switch(h.h){case 1:return e={config:a,hashData:b,configData:c,timestamp:Q()},w(h,Yp(d),2);case 2:return f=h.i,w(h,f.clear("coldConfigStore"),3);case 3:return w(h,cp(f,"coldConfigStore",e),4);case 4:return g=h.i,h.return(g)}})}
function aq(a){var b,c;return x(function(d){return 1==d.h?w(d,Yp(a),2):3!=d.h?(b=d.i,c=void 0,w(d,$o(b,["coldConfigStore"],{mode:"readwrite",ca:!0},function(e){return mp(e.objectStore("coldConfigStore").index("coldTimestampIndex"),{direction:"prev"},function(f){c=f.getValue()})}),3)):d.return(c)})}
function bq(a){var b,c;return x(function(d){return 1==d.h?w(d,Yp(a),2):3!=d.h?(b=d.i,c=void 0,w(d,$o(b,["hotConfigStore"],{mode:"readwrite",ca:!0},function(e){return mp(e.objectStore("hotConfigStore").index("hotTimestampIndex"),{direction:"prev"},function(f){c=f.getValue()})}),3)):d.return(c)})}
;function cq(){this.h=0}
function dq(a,b,c){var d,e,f;return x(function(g){if(1==g.h){if(!O("update_log_event_config"))return g.v(0);c&&(a.i=c,z("yt.gcf.config.hotConfigGroup",a.i));a.hotHashData=b;z("yt.gcf.config.hotHashData",a.hotHashData);return(d=Gp())?c?g.v(4):w(g,bq(d),5):g.v(0)}4!=g.h&&(e=g.i,c=null==(f=e)?void 0:f.config);return w(g,Zp(c,b,d),0)})}
function eq(a,b,c){var d,e,f,g;return x(function(h){if(1==h.h){if(!O("update_log_event_config"))return h.v(0);a.coldHashData=b;z("yt.gcf.config.coldHashData",a.coldHashData);return(d=Gp())?c?h.v(4):w(h,aq(d),5):h.v(0)}4!=h.h&&(e=h.i,c=null==(f=e)?void 0:f.config);if(!c)return h.v(0);g=c.configData;return w(h,$p(c,b,g,d),0)})}
;function fq(){return"INNERTUBE_API_KEY"in Dm&&"INNERTUBE_API_VERSION"in Dm}
function gq(){return{innertubeApiKey:N("INNERTUBE_API_KEY"),innertubeApiVersion:N("INNERTUBE_API_VERSION"),Dc:N("INNERTUBE_CONTEXT_CLIENT_CONFIG_INFO"),sd:N("INNERTUBE_CONTEXT_CLIENT_NAME","WEB"),xe:N("INNERTUBE_CONTEXT_CLIENT_NAME",1),innertubeContextClientVersion:N("INNERTUBE_CONTEXT_CLIENT_VERSION"),ud:N("INNERTUBE_CONTEXT_HL"),td:N("INNERTUBE_CONTEXT_GL"),ye:N("INNERTUBE_HOST_OVERRIDE")||"",Ae:!!N("INNERTUBE_USE_THIRD_PARTY_AUTH",!1),ze:!!N("INNERTUBE_OMIT_API_KEY_WHEN_AUTH_HEADER_IS_PRESENT",
!1),appInstallData:N("SERIALIZED_CLIENT_CONFIG_DATA")}}
function hq(a){var b={client:{hl:a.ud,gl:a.td,clientName:a.sd,clientVersion:a.innertubeContextClientVersion,configInfo:a.Dc}};navigator.userAgent&&(b.client.userAgent=String(navigator.userAgent));var c=y.devicePixelRatio;c&&1!=c&&(b.client.screenDensityFloat=String(c));c=Zm();""!==c&&(b.client.experimentsToken=c);c=$m();0<c.length&&(b.request={internalExperimentFlags:c});iq(a,void 0,b);jq(void 0,b);kq(void 0,b);lq(a,void 0,b);mq(void 0,b);O("start_sending_config_hash")&&nq(void 0,b);N("DELEGATED_SESSION_ID")&&
!O("pageid_as_header_web")&&(b.user={onBehalfOfUser:N("DELEGATED_SESSION_ID")});a=Object;c=a.assign;for(var d=b.client,e={},f=r(Object.entries(Rm(N("DEVICE","")))),g=f.next();!g.done;g=f.next()){var h=r(g.value);g=h.next().value;h=h.next().value;"cbrand"===g?e.deviceMake=h:"cmodel"===g?e.deviceModel=h:"cbr"===g?e.browserName=h:"cbrver"===g?e.browserVersion=h:"cos"===g?e.osName=h:"cosver"===g?e.osVersion=h:"cplatform"===g&&(e.platform=h)}b.client=c.call(a,d,e);return b}
function oq(a){var b=new Yk,c=new Nk;G(c,1,a.ud);G(c,2,a.td);G(c,16,a.xe);G(c,17,a.innertubeContextClientVersion);if(a.Dc){var d=a.Dc,e=new Jk;d.coldConfigData&&G(e,1,d.coldConfigData);d.appInstallData&&G(e,6,d.appInstallData);d.coldHashData&&G(e,3,d.coldHashData);d.hotHashData&&G(e,5,d.hotHashData);H(c,Jk,62,e)}(d=y.devicePixelRatio)&&1!=d&&G(c,65,Ud(d));d=Zm();""!==d&&G(c,54,d);d=$m();if(0<d.length){e=new Rk;for(var f=0;f<d.length;f++){var g=new Pk;G(g,1,d[f].key);be(g,2,Qk,d[f].value);ie(e,15,
Pk,g)}H(b,Rk,5,e)}iq(a,c);jq(b);kq(c);lq(a,c);mq(c);O("start_sending_config_hash")&&nq(c);N("DELEGATED_SESSION_ID")&&!O("pageid_as_header_web")&&(a=new Wk,G(a,3,N("DELEGATED_SESSION_ID")));a=r(Object.entries(Rm(N("DEVICE",""))));for(d=a.next();!d.done;d=a.next())e=r(d.value),d=e.next().value,e=e.next().value,"cbrand"===d?G(c,12,e):"cmodel"===d?G(c,13,e):"cbr"===d?G(c,87,e):"cbrver"===d?G(c,88,e):"cos"===d?G(c,18,e):"cosver"===d?G(c,19,e):"cplatform"===d&&G(c,42,e);b.l(c);return b}
function iq(a,b,c){a=a.sd;if("WEB"===a||"MWEB"===a||1===a||2===a)if(b){c=de(b,Kk,96)||new Kk;var d=Mn();d=Object.keys(vl).indexOf(d);d=-1===d?null:d;null!==d&&G(c,3,d);H(b,Kk,96,c)}else c&&(c.client.mainAppWebInfo=null!=(d=c.client.mainAppWebInfo)?d:{},c.client.mainAppWebInfo.webDisplayMode=Mn())}
function jq(a,b){var c=A("yt.embedded_player.embed_url");c&&(a?(b=de(a,Tk,7)||new Tk,G(b,4,c),H(a,Tk,7,b)):b&&(b.thirdParty={embedUrl:c}))}
function kq(a,b){var c;if(O("web_log_memory_total_kbytes")&&(null==(c=y.navigator)?0:c.deviceMemory)){var d;c=null==(d=y.navigator)?void 0:d.deviceMemory;a?G(a,95,1E6*c):b&&(b.client.memoryTotalKbytes=""+1E6*c)}}
function lq(a,b,c){if(a.appInstallData)if(b){var d;c=null!=(d=de(b,Jk,62))?d:new Jk;G(c,6,a.appInstallData);H(b,Jk,62,c)}else c&&(c.client.configInfo=c.client.configInfo||{},c.client.configInfo.appInstallData=a.appInstallData)}
function mq(a,b){var c=co();c&&(a?G(a,61,Zn[c]):b&&(b.client.connectionType=c));O("web_log_effective_connection_type")&&(c=eo())&&(a?G(a,94,$n[c]):b&&(b.client.effectiveConnectionType=c))}
function pq(a,b,c){c=void 0===c?{}:c;var d={};N("EOM_VISITOR_DATA")?d={"X-Goog-EOM-Visitor-Id":N("EOM_VISITOR_DATA")}:d={"X-Goog-Visitor-Id":c.visitorData||N("VISITOR_DATA","")};if(b&&b.includes("www.youtube-nocookie.com"))return d;b=c.ng||N("AUTHORIZATION");b||(a?b="Bearer "+A("gapi.auth.getToken")().mg:(a=Jn(In()),O("pageid_as_header_web")||delete a["X-Goog-PageId"],d=Object.assign({},d,a)));b&&(d.Authorization=b);return d}
function nq(a,b){cq.h||(cq.h=new cq);var c=cq.h;var d=Q()-c.h;if(0!==c.h&&d<Ym("send_config_hash_timer"))c=void 0;else{d=A("yt.gcf.config.coldConfigData");var e=A("yt.gcf.config.hotHashData"),f=A("yt.gcf.config.coldHashData");d&&e&&f&&(c.h=Q());c={coldConfigData:d,hotHashData:e,coldHashData:f}}if(e=c)if(c=e.coldConfigData,d=e.coldHashData,e=e.hotHashData,c&&d&&e)if(a){var g;b=null!=(g=de(a,Jk,62))?g:new Jk;G(b,1,c);G(b,3,d);G(b,5,e);H(a,Jk,62,b)}else b&&(b.client.configInfo=b.client.configInfo||{},
b.client.configInfo.coldConfigData=c,b.client.configInfo.coldHashData=d,b.client.configInfo.hotHashData=e)}
;function qq(a,b){this.version=a;this.args=b}
;function rq(a,b){this.topic=a;this.h=b}
rq.prototype.toString=function(){return this.topic};var sq=A("ytPubsub2Pubsub2Instance")||new Ui;Ui.prototype.subscribe=Ui.prototype.subscribe;Ui.prototype.unsubscribeByKey=Ui.prototype.Eb;Ui.prototype.publish=Ui.prototype.cb;Ui.prototype.clear=Ui.prototype.clear;z("ytPubsub2Pubsub2Instance",sq);var tq=A("ytPubsub2Pubsub2SubscribedKeys")||{};z("ytPubsub2Pubsub2SubscribedKeys",tq);var uq=A("ytPubsub2Pubsub2TopicToKeys")||{};z("ytPubsub2Pubsub2TopicToKeys",uq);var vq=A("ytPubsub2Pubsub2IsAsync")||{};z("ytPubsub2Pubsub2IsAsync",vq);
z("ytPubsub2Pubsub2SkipSubKey",null);function wq(a,b){var c=xq();c&&c.publish.call(c,a.toString(),a,b)}
function yq(a){var b=zq,c=xq();if(!c)return 0;var d=c.subscribe(b.toString(),function(e,f){var g=A("ytPubsub2Pubsub2SkipSubKey");g&&g==d||(g=function(){if(tq[d])try{if(f&&b instanceof rq&&b!=e)try{var h=b.h,l=f;if(!l.args||!l.version)throw Error("yt.pubsub2.Data.deserialize(): serializedData is incomplete.");try{if(!h.Va){var m=new h;h.Va=m.version}var n=h.Va}catch(F){}if(!n||l.version!=n)throw Error("yt.pubsub2.Data.deserialize(): serializedData version is incompatible.");try{n=Reflect;var q=n.construct;
var u=l.args,t=u.length;if(0<t){var B=Array(t);for(l=0;l<t;l++)B[l]=u[l];var C=B}else C=[];f=q.call(n,h,C)}catch(F){throw F.message="yt.pubsub2.Data.deserialize(): "+F.message,F;}}catch(F){throw F.message="yt.pubsub2.pubsub2 cross-binary conversion error for "+b.toString()+": "+F.message,F;}a.call(window,f)}catch(F){Jm(F)}},vq[b.toString()]?A("yt.scheduler.instance")?xi.ea(g):dn(g,0):g())});
tq[d]=!0;uq[b.toString()]||(uq[b.toString()]=[]);uq[b.toString()].push(d);return d}
function Aq(){var a=Bq,b=yq(function(c){a.apply(void 0,arguments);Cq(b)});
return b}
function Cq(a){var b=xq();b&&("number"===typeof a&&(a=[a]),fb(a,function(c){b.unsubscribeByKey(c);delete tq[c]}))}
function xq(){return A("ytPubsub2Pubsub2Instance")}
;function Dq(a,b){var c={sampleRate:1};c=void 0===c?{sampleRate:.1}:c;Math.random()<Math.min(.02,c.sampleRate/100)&&wq("meta_logging_csi_event",{timerName:a,Mg:b})}
;var Eq=Ym("max_body_size_to_compress",5E5),Fq=Ym("min_body_size_to_compress",500),Gq=!0,Hq=0,Iq=0,Jq=Ym("compression_performance_threshold",250),Kq=Ym("slow_compressions_before_abandon_count",10);
function Lq(a,b,c,d){var e=Q(),f={startTime:e},g={startTime:e,ticks:{},infos:{}};if(Gq)try{var h=Mq(b);if(!(h>Eq||h<Fq)){var l=zk(si(b)),m=Q();f.endTime=m;g.ticks.gelc=m;Iq++;O("disable_compression_due_to_performance_degredation")&&m-e>=Jq&&(Hq++,O("abandon_compression_after_N_slow_zips")?Iq===Ym("compression_disable_point")&&Hq>Kq&&(Gq=!1):Gq=!1);O("gel_compression_csi_killswitch")||!O("log_gel_compression_latency")&&!O("log_gel_compression_latency_lr")||(O("use_new_cml")?Dq("gel_compression",g):
.01>=Math.random()&&wq("gel_compression_latency_payload",f));if(Nq(l,b)||!O("only_compress_gel_if_smaller"))c.headers||(c.headers={}),c.headers["Content-Encoding"]="gzip",c.postBody=l,c.postParams=void 0}d(a,c)}catch(n){Km(n),d(a,c)}else d(a,c)}
function Oq(a){if(!a.body)return a;try{var b="string"===typeof a.body?a.body:JSON.stringify(a.body),c=Mq(b);if(c>Eq||c<Fq)return a;var d=zk(si(b));if(!Nq(d,b)&&O("only_compress_gel_if_smaller"))return a;a.headers=Object.assign({},{"Content-Encoding":"gzip"},a.headers||{});a.body=d;return a}catch(e){return Km(e),a}}
function Nq(a,b){if(!window.Blob)return!0;var c=a.length<Mq(b);c||Jm(new P("Compressed req body is larger than uncompressed","original size: "+Mq(b),"compressed size: "+a.length));return c}
function Mq(a){return(new Blob(a.split(""))).size}
;function Pq(a){a=Object.assign({},a);delete a.Authorization;var b=Og();if(b){var c=new Di;c.update(N("INNERTUBE_API_KEY"));c.update(b);a.hash=od(c.digest(),3)}return a}
;var Qq;function Rq(){Qq||(Qq=new no("yt.innertube"));return Qq}
function Sq(a,b,c,d){if(d)return null;d=Rq().get("nextId",!0)||1;var e=Rq().get("requests",!0)||{};e[d]={method:a,request:b,authState:Pq(c),requestTime:Math.round(Q())};Rq().set("nextId",d+1,86400,!0);Rq().set("requests",e,86400,!0);return d}
function Tq(a){var b=Rq().get("requests",!0)||{};delete b[a];Rq().set("requests",b,86400,!0)}
function Uq(a){var b=Rq().get("requests",!0);if(b){for(var c in b){var d=b[c];if(!(6E4>Math.round(Q())-d.requestTime)){var e=d.authState,f=Pq(pq(!1));sb(e,f)&&(e=d.request,"requestTimeMs"in e&&(e.requestTimeMs=Math.round(Q())),Vq(a,d.method,e,{}));delete b[c]}}Rq().set("requests",b,86400,!0)}}
;function Wq(a){this.Zb=this.h=!1;this.potentialEsfErrorCounter=this.i=0;this.handleError=function(){};
this.sb=function(){};
this.now=Date.now;this.Jb=!1;var b;this.Nd=null!=(b=a.Nd)?b:100;var c;this.Hd=null!=(c=a.Hd)?c:1;var d;this.Fd=null!=(d=a.Fd)?d:2592E6;var e;this.Dd=null!=(e=a.Dd)?e:12E4;var f;this.Gd=null!=(f=a.Gd)?f:5E3;var g;this.N=null!=(g=a.N)?g:void 0;this.fc=!!a.fc;var h;this.dc=null!=(h=a.dc)?h:.1;var l;this.mc=null!=(l=a.mc)?l:10;a.handleError&&(this.handleError=a.handleError);a.sb&&(this.sb=a.sb);a.Jb&&(this.Jb=a.Jb);a.Zb&&(this.Zb=a.Zb);this.O=a.O;this.xa=a.xa;this.X=a.X;this.V=a.V;this.Na=a.Na;this.Lc=
a.Lc;this.Kc=a.Kc;Xq(this)&&(!this.O||this.O("networkless_logging"))&&Yq(this)}
function Yq(a){Xq(a)&&!a.Jb&&(a.h=!0,a.fc&&Math.random()<=a.dc&&a.X.ee(a.N),Zq(a),a.V.la()&&a.Rb(),a.V.Ka(a.Lc,a.Rb.bind(a)),a.V.Ka(a.Kc,a.dd.bind(a)))}
k=Wq.prototype;k.writeThenSend=function(a,b){var c=this;b=void 0===b?{}:b;if(Xq(this)&&this.h){var d={url:a,options:b,timestamp:this.now(),status:"NEW",sendCount:0};this.X.set(d,this.N).then(function(e){d.id=e;c.V.la()&&$q(c,d)}).catch(function(e){$q(c,d);
ar(c,e)})}else this.Na(a,b)};
k.sendThenWrite=function(a,b,c){var d=this;b=void 0===b?{}:b;if(Xq(this)&&this.h){var e={url:a,options:b,timestamp:this.now(),status:"NEW",sendCount:0};this.O&&this.O("nwl_skip_retry")&&(e.skipRetry=c);if(this.V.la()||this.O&&this.O("nwl_aggressive_send_then_write")&&!e.skipRetry){if(!e.skipRetry){var f=b.onError?b.onError:function(){};
b.onError=function(g,h){return x(function(l){if(1==l.h)return w(l,d.X.set(e,d.N).catch(function(m){ar(d,m)}),2);
f(g,h);l.h=0})}}this.Na(a,b,e.skipRetry)}else this.X.set(e,this.N).catch(function(g){d.Na(a,b,e.skipRetry);
ar(d,g)})}else this.Na(a,b,this.O&&this.O("nwl_skip_retry")&&c)};
k.sendAndWrite=function(a,b){var c=this;b=void 0===b?{}:b;if(Xq(this)&&this.h){var d={url:a,options:b,timestamp:this.now(),status:"NEW",sendCount:0},e=!1,f=b.onSuccess?b.onSuccess:function(){};
d.options.onSuccess=function(g,h){void 0!==d.id?c.X.rb(d.id,c.N):e=!0;c.V.ib&&c.O&&c.O("vss_network_hint")&&c.V.ib(!0);f(g,h)};
this.Na(d.url,d.options);this.X.set(d,this.N).then(function(g){d.id=g;e&&c.X.rb(d.id,c.N)}).catch(function(g){ar(c,g)})}else this.Na(a,b)};
k.Rb=function(){var a=this;if(!Xq(this))throw Mo("throttleSend");this.i||(this.i=this.xa.ea(function(){var b;return x(function(c){if(1==c.h)return w(c,a.X.pd("NEW",a.N),2);if(3!=c.h)return b=c.i,b?w(c,$q(a,b),3):(a.dd(),c.return());a.i&&(a.i=0,a.Rb());c.h=0})},this.Nd))};
k.dd=function(){this.xa.Ba(this.i);this.i=0};
function $q(a,b){var c,d;return x(function(e){switch(e.h){case 1:if(!Xq(a))throw c=Mo("immediateSend"),c;if(void 0===b.id){e.v(2);break}return w(e,a.X.Ce(b.id,a.N),3);case 3:(d=e.i)||a.sb(Error("The request cannot be found in the database."));case 2:if(br(a,b,a.Fd)){e.v(4);break}a.sb(Error("Networkless Logging: Stored logs request expired age limit"));if(void 0===b.id){e.v(5);break}return w(e,a.X.rb(b.id,a.N),5);case 5:return e.return();case 4:b.skipRetry||(b=cr(a,b));if(!b){e.v(0);break}if(!b.skipRetry||
void 0===b.id){e.v(8);break}return w(e,a.X.rb(b.id,a.N),8);case 8:a.Na(b.url,b.options,!!b.skipRetry),e.h=0}})}
function cr(a,b){if(!Xq(a))throw Mo("updateRequestHandlers");var c=b.options.onError?b.options.onError:function(){};
b.options.onError=function(e,f){var g,h,l,m;return x(function(n){switch(n.h){case 1:g=dr(f);(h=er(f))&&a.O&&a.O("web_enable_error_204")&&a.handleError(Error("Request failed due to compression"),b.url,f);if(!(a.O&&a.O("nwl_consider_error_code")&&g||a.O&&!a.O("nwl_consider_error_code")&&a.potentialEsfErrorCounter<=a.mc)){n.v(2);break}if(!a.V.pc){n.v(3);break}return w(n,a.V.pc(),3);case 3:if(a.V.la()){n.v(2);break}c(e,f);if(!a.O||!a.O("nwl_consider_error_code")||void 0===(null==(l=b)?void 0:l.id)){n.v(6);
break}return w(n,a.X.Pc(b.id,a.N,!1),6);case 6:return n.return();case 2:if(a.O&&a.O("nwl_consider_error_code")&&!g&&a.potentialEsfErrorCounter>a.mc)return n.return();a.potentialEsfErrorCounter++;if(void 0===(null==(m=b)?void 0:m.id)){n.v(8);break}return b.sendCount<a.Hd?w(n,a.X.Pc(b.id,a.N,!0,h?!1:void 0),12):w(n,a.X.rb(b.id,a.N),8);case 12:a.xa.ea(function(){a.V.la()&&a.Rb()},a.Gd);
case 8:c(e,f),n.h=0}})};
var d=b.options.onSuccess?b.options.onSuccess:function(){};
b.options.onSuccess=function(e,f){var g;return x(function(h){if(1==h.h)return void 0===(null==(g=b)?void 0:g.id)?h.v(2):w(h,a.X.rb(b.id,a.N),2);a.V.ib&&a.O&&a.O("vss_network_hint")&&a.V.ib(!0);d(e,f);h.h=0})};
return b}
function br(a,b,c){b=b.timestamp;return a.now()-b>=c?!1:!0}
function Zq(a){if(!Xq(a))throw Mo("retryQueuedRequests");a.X.pd("QUEUED",a.N).then(function(b){b&&!br(a,b,a.Dd)?a.xa.ea(function(){return x(function(c){if(1==c.h)return void 0===b.id?c.v(2):w(c,a.X.Pc(b.id,a.N),2);Zq(a);c.h=0})}):a.V.la()&&a.Rb()})}
function ar(a,b){a.Td&&!a.V.la()?a.Td(b):a.handleError(b)}
function Xq(a){return!!a.N||a.Zb}
function dr(a){var b;return(a=null==a?void 0:null==(b=a.error)?void 0:b.code)&&400<=a&&599>=a?!1:!0}
function er(a){var b;a=null==a?void 0:null==(b=a.error)?void 0:b.code;return!(400!==a&&415!==a)}
;var fr;
function gr(){if(fr)return fr();var a={};fr=Vp("LogsDatabaseV2",{yb:(a.LogsRequestsStore={Gb:2},a),qc:!1,upgrade:function(b,c,d){c(2)&&ap(b,"LogsRequestsStore",{keyPath:"id",autoIncrement:!0});c(3);c(5)&&(d=d.objectStore("LogsRequestsStore"),d.h.indexNames.contains("newRequest")&&d.h.deleteIndex("newRequest"),hp(d,"newRequestV2",["status","interface","timestamp"]));c(7)&&b.h.objectStoreNames.contains("sapisid")&&b.h.deleteObjectStore("sapisid");c(9)&&b.h.objectStoreNames.contains("SWHealthLog")&&b.h.deleteObjectStore("SWHealthLog")},
version:9});return fr()}
;function hr(a){return tp(gr(),a)}
function ir(a,b){var c,d,e,f,g;return x(function(h){if(1==h.h)return c={startTime:Q(),transactionType:"YT_IDB_TRANSACTION_TYPE_WRITE"},d={startTime:Q(),infos:{transactionType:"YT_IDB_TRANSACTION_TYPE_WRITE"},ticks:{}},w(h,hr(b),2);if(3!=h.h)return e=h.i,f=Object.assign({},a,{options:JSON.parse(JSON.stringify(a.options)),interface:N("INNERTUBE_CONTEXT_CLIENT_NAME",0)}),w(h,cp(e,"LogsRequestsStore",f),3);g=h.i;c.jf=Q();d.ticks.tc=Q();jr(d,c);return h.return(g)})}
function sr(a,b){var c,d,e,f,g,h,l,m;return x(function(n){if(1==n.h)return c={startTime:Q(),transactionType:"YT_IDB_TRANSACTION_TYPE_READ"},d={startTime:Q(),infos:{transactionType:"YT_IDB_TRANSACTION_TYPE_READ"},ticks:{}},w(n,hr(b),2);if(3!=n.h)return e=n.i,f=N("INNERTUBE_CONTEXT_CLIENT_NAME",0),g=[a,f,0],h=[a,f,Q()],l=IDBKeyRange.bound(g,h),m=void 0,w(n,$o(e,["LogsRequestsStore"],{mode:"readwrite",ca:!0},function(q){return mp(q.objectStore("LogsRequestsStore").index("newRequestV2"),{query:l,direction:"prev"},
function(u){u.getValue()&&(m=u.getValue(),"NEW"===a&&(m.status="QUEUED",u.update(m)))})}),3);
c.jf=Q();d.ticks.tc=Q();jr(d,c);return n.return(m)})}
function wr(a,b){var c;return x(function(d){if(1==d.h)return w(d,hr(b),2);c=d.i;return d.return($o(c,["LogsRequestsStore"],{mode:"readwrite",ca:!0},function(e){var f=e.objectStore("LogsRequestsStore");return f.get(a).then(function(g){if(g)return g.status="QUEUED",Wo(f.h.put(g,void 0)).then(function(){return g})})}))})}
function Pr(a,b,c,d){c=void 0===c?!0:c;var e;return x(function(f){if(1==f.h)return w(f,hr(b),2);e=f.i;return f.return($o(e,["LogsRequestsStore"],{mode:"readwrite",ca:!0},function(g){var h=g.objectStore("LogsRequestsStore");return h.get(a).then(function(l){return l?(l.status="NEW",c&&(l.sendCount+=1),void 0!==d&&(l.options.compress=d),Wo(h.h.put(l,void 0)).then(function(){return l})):Qo.resolve(void 0)})}))})}
function Qr(a,b){var c;return x(function(d){if(1==d.h)return w(d,hr(b),2);c=d.i;return d.return(c.delete("LogsRequestsStore",a))})}
function Rr(a){var b,c;return x(function(d){if(1==d.h)return w(d,hr(a),2);b=d.i;c=Q()-2592E6;return w(d,$o(b,["LogsRequestsStore"],{mode:"readwrite",ca:!0},function(e){return jp(e.objectStore("LogsRequestsStore"),{},function(f){if(f.getValue().timestamp<=c)return f.delete().then(function(){return f.continue()})})}),0)})}
function Sr(){x(function(a){return w(a,Rp(),0)})}
function jr(a,b){O("nwl_csi_killswitch")||(O("use_new_cml")?Dq("networkless_performance",a):.01>=Math.random()&&wq("nwl_transaction_latency_payload",b))}
;var Tr={},Ur=Vp("ServiceWorkerLogsDatabase",{yb:(Tr.SWHealthLog={Gb:1},Tr),qc:!0,upgrade:function(a,b){b(1)&&hp(ap(a,"SWHealthLog",{keyPath:"id",autoIncrement:!0}),"swHealthNewRequest",["interface","timestamp"])},
version:1});function Vr(a){return tp(Ur(),a)}
function Wr(a){var b,c;x(function(d){if(1==d.h)return w(d,Vr(a),2);b=d.i;c=Q()-2592E6;return w(d,$o(b,["SWHealthLog"],{mode:"readwrite",ca:!0},function(e){return jp(e.objectStore("SWHealthLog"),{},function(f){if(f.getValue().timestamp<=c)return f.delete().then(function(){return f.continue()})})}),0)})}
function Xr(a){var b;return x(function(c){if(1==c.h)return w(c,Vr(a),2);b=c.i;return w(c,b.clear("SWHealthLog"),0)})}
;var Yr={},Zr=0;function $r(a){var b=new Image,c=""+Zr++;Yr[c]=b;b.onload=b.onerror=function(){delete Yr[c]};
b.src=a}
;function as(){this.h=new Map;this.i=!1}
function bs(){if(!as.h){var a=A("yt.networkRequestMonitor.instance")||new as;z("yt.networkRequestMonitor.instance",a);as.h=a}return as.h}
as.prototype.requestComplete=function(a,b){b&&(this.i=!0);a=this.removeParams(a);this.h.get(a)||this.h.set(a,b)};
as.prototype.isEndpointCFR=function(a){a=this.removeParams(a);return(a=this.h.get(a))?!1:!1===a&&this.i?!0:null};
as.prototype.removeParams=function(a){return a.split("?")[0]};
as.prototype.removeParams=as.prototype.removeParams;as.prototype.isEndpointCFR=as.prototype.isEndpointCFR;as.prototype.requestComplete=as.prototype.requestComplete;as.getInstance=bs;var cs;function ds(){cs||(cs=new no("yt.offline"));return cs}
function es(a){if(O("offline_error_handling")){var b=ds().get("errors",!0)||{};b[a.message]={name:a.name,stack:a.stack};a.level&&(b[a.message].level=a.level);ds().set("errors",b,2592E3,!0)}}
;function fs(){qf.call(this);var a=this;this.j=!1;this.i=wi();this.i.Ka("networkstatus-online",function(){if(a.j&&O("offline_error_handling")){var b=ds().get("errors",!0);if(b){for(var c in b)if(b[c]){var d=new P(c,"sent via offline_errors");d.name=b[c].name;d.stack=b[c].stack;d.level=b[c].level;Jm(d)}ds().set("errors",{},2592E3,!0)}}})}
v(fs,qf);function gs(){if(!fs.h){var a=A("yt.networkStatusManager.instance")||new fs;z("yt.networkStatusManager.instance",a);fs.h=a}return fs.h}
k=fs.prototype;k.la=function(){return this.i.la()};
k.ib=function(a){this.i.i=a};
k.se=function(){var a=window.navigator.onLine;return void 0===a?!0:a};
k.ke=function(){this.j=!0};
k.Ka=function(a,b){return this.i.Ka(a,b)};
k.pc=function(a){a=ui(this.i,a);a.then(function(b){O("use_cfr_monitor")&&bs().requestComplete("generate_204",b)});
return a};
fs.prototype.sendNetworkCheckRequest=fs.prototype.pc;fs.prototype.listen=fs.prototype.Ka;fs.prototype.enableErrorFlushing=fs.prototype.ke;fs.prototype.getWindowStatus=fs.prototype.se;fs.prototype.networkStatusHint=fs.prototype.ib;fs.prototype.isNetworkAvailable=fs.prototype.la;fs.getInstance=gs;function hs(a){a=void 0===a?{}:a;qf.call(this);var b=this;this.i=this.s=0;this.j=gs();var c=A("yt.networkStatusManager.instance.listen").bind(this.j);c&&(a.oc?(this.oc=a.oc,c("networkstatus-online",function(){is(b,"publicytnetworkstatus-online")}),c("networkstatus-offline",function(){is(b,"publicytnetworkstatus-offline")})):(c("networkstatus-online",function(){rf(b,"publicytnetworkstatus-online")}),c("networkstatus-offline",function(){rf(b,"publicytnetworkstatus-offline")})))}
v(hs,qf);hs.prototype.la=function(){var a=A("yt.networkStatusManager.instance.isNetworkAvailable");return a?a.bind(this.j)():!0};
hs.prototype.ib=function(a){var b=A("yt.networkStatusManager.instance.networkStatusHint").bind(this.j);b&&b(a)};
hs.prototype.pc=function(a){var b=this,c;return x(function(d){c=A("yt.networkStatusManager.instance.sendNetworkCheckRequest").bind(b.j);return O("skip_network_check_if_cfr")&&bs().isEndpointCFR("generate_204")?d.return(new Promise(function(e){var f;b.ib((null==(f=window.navigator)?void 0:f.onLine)||!0);e(b.la())})):c?d.return(c(a)):d.return(!0)})};
function is(a,b){a.oc?a.i?(xi.Ba(a.s),a.s=xi.ea(function(){a.m!==b&&(rf(a,b),a.m=b,a.i=Q())},a.oc-(Q()-a.i))):(rf(a,b),a.m=b,a.i=Q()):rf(a,b)}
;var js;function ks(){var a=Wq.call;js||(js=new hs({zg:!0,tg:!0}));a.call(Wq,this,{X:{ee:Rr,rb:Qr,pd:sr,Ce:wr,Pc:Pr,set:ir},V:js,handleError:function(b,c,d){var e,f=null==d?void 0:null==(e=d.error)?void 0:e.code;if(400===f||415===f){var g;Jm(new P(b.message,c,null==d?void 0:null==(g=d.error)?void 0:g.code),void 0,void 0,void 0,!0)}else Jm(b)},
sb:Km,Na:ls,now:Q,Td:es,xa:mo(),Lc:"publicytnetworkstatus-online",Kc:"publicytnetworkstatus-offline",fc:!0,dc:.1,mc:Ym("potential_esf_error_limit",10),O:O,Jb:!(fo()&&ms())});this.j=new Uh;O("networkless_immediately_drop_all_requests")&&Sr();Sp("LogsDatabaseV2")}
v(ks,Wq);function ns(){var a=A("yt.networklessRequestController.instance");a||(a=new ks,z("yt.networklessRequestController.instance",a),O("networkless_logging")&&Hp().then(function(b){a.N=b;Yq(a);a.j.resolve();a.fc&&Math.random()<=a.dc&&a.N&&Wr(a.N);O("networkless_immediately_drop_sw_health_store")&&os(a)}));
return a}
ks.prototype.writeThenSend=function(a,b){b||(b={});fo()||(this.h=!1);Wq.prototype.writeThenSend.call(this,a,b)};
ks.prototype.sendThenWrite=function(a,b,c){b||(b={});fo()||(this.h=!1);Wq.prototype.sendThenWrite.call(this,a,b,c)};
ks.prototype.sendAndWrite=function(a,b){b||(b={});fo()||(this.h=!1);Wq.prototype.sendAndWrite.call(this,a,b)};
ks.prototype.awaitInitialization=function(){return this.j.promise};
function os(a){var b;x(function(c){if(!a.N)throw b=Mo("clearSWHealthLogsDb"),b;return c.return(Xr(a.N).catch(function(d){a.handleError(d)}))})}
function ls(a,b,c){O("use_cfr_monitor")&&ps(a,b);if(O("use_request_time_ms_header"))b.headers&&(b.headers["X-Goog-Request-Time"]=JSON.stringify(Math.round(Q())));else{var d;if(null==(d=b.postParams)?0:d.requestTimeMs)b.postParams.requestTimeMs=Math.round(Q())}if(c&&0===Object.keys(b).length){var e=void 0===e?"":e;var f=void 0===f?!1:f;if(a)if(e)nn(a,void 0,"POST",e);else if(N("USE_NET_AJAX_FOR_PING_TRANSPORT",!1))nn(a,void 0,"GET","",void 0,void 0,f);else{b:{try{var g=new bb({url:a});if(g.j&&g.i||
g.l){var h=uc(vc(5,a)),l;if(!(l=!h||!h.endsWith("/aclk"))){var m=a.search(Gc),n=Fc(a,0,"ri",m);if(0>n)var q=null;else{var u=a.indexOf("&",n);if(0>u||u>m)u=m;q=decodeURIComponent(a.slice(n+3,-1!==u?u:0).replace(/\+/g," "))}l="1"!==q}var t=!l;break b}}catch(C){}t=!1}if(t){b:{try{if(window.navigator&&window.navigator.sendBeacon&&window.navigator.sendBeacon(a,"")){var B=!0;break b}}catch(C){}B=!1}c=B?!0:!1}else c=!1;c||$r(a)}}else b.compress?b.postBody?("string"!==typeof b.postBody&&(b.postBody=JSON.stringify(b.postBody)),
Lq(a,b.postBody,b,kn)):Lq(a,JSON.stringify(b.postParams),b,sn):kn(a,b)}
function ps(a,b){var c=b.onError?b.onError:function(){};
b.onError=function(e,f){bs().requestComplete(a,!1);c(e,f)};
var d=b.onSuccess?b.onSuccess:function(){};
b.onSuccess=function(e,f){bs().requestComplete(a,!0);d(e,f)}}
function ms(){return"www.youtube-nocookie.com"!==wc(document.location.toString())}
;var qs=!1,rs=y.ytNetworklessLoggingInitializationOptions||{isNwlInitialized:qs};z("ytNetworklessLoggingInitializationOptions",rs);function ss(){var a;x(function(b){if(1==b.h)return w(b,Hp(),2);a=b.i;if(!a||!fo()&&!O("nwl_init_require_datasync_id_killswitch")||!ms())return b.v(0);qs=!0;rs.isNwlInitialized=qs;return w(b,ns().awaitInitialization(),0)})}
;function ts(a){var b=this;this.config_=null;a?this.config_=a:fq()&&(this.config_=gq());io(function(){Uq(b)},5E3)}
ts.prototype.isReady=function(){!this.config_&&fq()&&(this.config_=gq());return!!this.config_};
function Vq(a,b,c,d){function e(B){B=void 0===B?!1:B;var C;if(d.retry&&"www.youtube-nocookie.com"!=h&&(B||O("skip_ls_gel_retry")||"application/json"!==g.headers["Content-Type"]||(C=Sq(b,c,m,l)),C)){var F=g.onSuccess,M=g.onFetchSuccess;g.onSuccess=function(R,X){Tq(C);F(R,X)};
c.onFetchSuccess=function(R,X){Tq(C);M(R,X)}}try{if(B&&d.retry&&!d.yd.bypassNetworkless)g.method="POST",d.yd.writeThenSend?ns().writeThenSend(t,g):ns().sendAndWrite(t,g);
else if(d.compress)if(g.postBody){var S=g.postBody;"string"!==typeof S&&(S=JSON.stringify(g.postBody));Lq(t,S,g,kn)}else Lq(t,JSON.stringify(g.postParams),g,sn);else O("web_all_payloads_via_jspb")?kn(t,g):sn(t,g)}catch(R){if("InvalidAccessError"==R.name)C&&(Tq(C),C=0),Km(Error("An extension is blocking network request."));else throw R;}C&&io(function(){Uq(a)},5E3)}
!N("VISITOR_DATA")&&"visitor_id"!==b&&.01>Math.random()&&Km(new P("Missing VISITOR_DATA when sending innertube request.",b,c,d));if(!a.isReady()){var f=new P("innertube xhrclient not ready",b,c,d);Jm(f);throw f;}var g={headers:d.headers||{},method:"POST",postParams:c,postBody:d.postBody,postBodyFormat:d.postBodyFormat||"JSON",onTimeout:function(){d.onTimeout()},
onFetchTimeout:d.onTimeout,onSuccess:function(B,C){if(d.onSuccess)d.onSuccess(C)},
onFetchSuccess:function(B){if(d.onSuccess)d.onSuccess(B)},
onError:function(B,C){if(d.onError)d.onError(C)},
onFetchError:function(B){if(d.onError)d.onError(B)},
timeout:d.timeout,withCredentials:!0,compress:d.compress};g.headers["Content-Type"]||(g.headers["Content-Type"]="application/json");var h="";(f=a.config_.ye)&&(h=f);var l=a.config_.Ae||!1,m=pq(l,h,d);Object.assign(g.headers,m);(f=g.headers.Authorization)&&!h&&l&&(g.headers["x-origin"]=window.location.origin);var n="/youtubei/"+a.config_.innertubeApiVersion+"/"+b,q={alt:"json"},u=a.config_.ze&&f;u=u&&f.startsWith("Bearer");u||(q.key=a.config_.innertubeApiKey);var t=Tm(""+h+n,q||{},!0);(A("ytNetworklessLoggingInitializationOptions")?
rs.isNwlInitialized:qs)?Fp().then(function(B){e(B)}):e(!1)}
;var us=0,vs=Zc?"webkit":Yc?"moz":Wc?"ms":Vc?"o":"";z("ytDomDomGetNextId",A("ytDomDomGetNextId")||function(){return++us});var ws={stopImmediatePropagation:1,stopPropagation:1,preventMouseEvent:1,preventManipulation:1,preventDefault:1,layerX:1,layerY:1,screenX:1,screenY:1,scale:1,rotation:1,webkitMovementX:1,webkitMovementY:1};
function xs(a){this.type="";this.state=this.source=this.data=this.currentTarget=this.relatedTarget=this.target=null;this.charCode=this.keyCode=0;this.metaKey=this.shiftKey=this.ctrlKey=this.altKey=!1;this.rotation=this.clientY=this.clientX=0;this.scale=1;this.changedTouches=this.touches=null;try{if(a=a||window.event){this.event=a;for(var b in a)b in ws||(this[b]=a[b]);this.scale=a.scale;this.rotation=a.rotation;var c=a.target||a.srcElement;c&&3==c.nodeType&&(c=c.parentNode);this.target=c;var d=a.relatedTarget;
if(d)try{d=d.nodeName?d:null}catch(e){d=null}else"mouseover"==this.type?d=a.fromElement:"mouseout"==this.type&&(d=a.toElement);this.relatedTarget=d;this.clientX=void 0!=a.clientX?a.clientX:a.pageX;this.clientY=void 0!=a.clientY?a.clientY:a.pageY;this.keyCode=a.keyCode?a.keyCode:a.which;this.charCode=a.charCode||("keypress"==this.type?this.keyCode:0);this.altKey=a.altKey;this.ctrlKey=a.ctrlKey;this.shiftKey=a.shiftKey;this.metaKey=a.metaKey;this.h=a.pageX;this.i=a.pageY}}catch(e){}}
function ys(a){if(document.body&&document.documentElement){var b=document.body.scrollTop+document.documentElement.scrollTop;a.h=a.clientX+(document.body.scrollLeft+document.documentElement.scrollLeft);a.i=a.clientY+b}}
xs.prototype.preventDefault=function(){this.event&&(this.event.returnValue=!1,this.event.preventDefault&&this.event.preventDefault())};
xs.prototype.stopPropagation=function(){this.event&&(this.event.cancelBubble=!0,this.event.stopPropagation&&this.event.stopPropagation())};
xs.prototype.stopImmediatePropagation=function(){this.event&&(this.event.cancelBubble=!0,this.event.stopImmediatePropagation&&this.event.stopImmediatePropagation())};var ob=y.ytEventsEventsListeners||{};z("ytEventsEventsListeners",ob);var zs=y.ytEventsEventsCounter||{count:0};z("ytEventsEventsCounter",zs);
function As(a,b,c,d){d=void 0===d?{}:d;a.addEventListener&&("mouseenter"!=b||"onmouseenter"in document?"mouseleave"!=b||"onmouseenter"in document?"mousewheel"==b&&"MozBoxSizing"in document.documentElement.style&&(b="MozMousePixelScroll"):b="mouseout":b="mouseover");return nb(function(e){var f="boolean"===typeof e[4]&&e[4]==!!d,g=Qa(e[4])&&Qa(d)&&sb(e[4],d);return!!e.length&&e[0]==a&&e[1]==b&&e[2]==c&&(f||g)})}
var Bs=db(function(){var a=!1;try{var b=Object.defineProperty({},"capture",{get:function(){a=!0}});
window.addEventListener("test",null,b)}catch(c){}return a});
function Cs(a,b,c,d){d=void 0===d?{}:d;if(!a||!a.addEventListener&&!a.attachEvent)return"";var e=As(a,b,c,d);if(e)return e;e=++zs.count+"";var f=!("mouseenter"!=b&&"mouseleave"!=b||!a.addEventListener||"onmouseenter"in document);var g=f?function(h){h=new xs(h);if(!Af(h.relatedTarget,function(l){return l==a}))return h.currentTarget=a,h.type=b,c.call(a,h)}:function(h){h=new xs(h);
h.currentTarget=a;return c.call(a,h)};
g=Im(g);a.addEventListener?("mouseenter"==b&&f?b="mouseover":"mouseleave"==b&&f?b="mouseout":"mousewheel"==b&&"MozBoxSizing"in document.documentElement.style&&(b="MozMousePixelScroll"),Bs()||"boolean"===typeof d?a.addEventListener(b,g,d):a.addEventListener(b,g,!!d.capture)):a.attachEvent("on"+b,g);ob[e]=[a,b,c,g,d];return e}
function Ds(a){a&&("string"==typeof a&&(a=[a]),fb(a,function(b){if(b in ob){var c=ob[b],d=c[0],e=c[1],f=c[3];c=c[4];d.removeEventListener?Bs()||"boolean"===typeof c?d.removeEventListener(e,f,c):d.removeEventListener(e,f,!!c.capture):d.detachEvent&&d.detachEvent("on"+e,f);delete ob[b]}}))}
;function Es(a){this.L=a;this.i=null;this.m=0;this.A=null;this.s=0;this.j=[];for(a=0;4>a;a++)this.j.push(0);this.l=0;this.U=Cs(window,"mousemove",Wa(this.Y,this));a=Wa(this.R,this);"function"===typeof a&&(a=Im(a));this.Z=window.setInterval(a,25)}
Ya(Es,Ge);Es.prototype.Y=function(a){void 0===a.h&&ys(a);var b=a.h;void 0===a.i&&ys(a);this.i=new wf(b,a.i)};
Es.prototype.R=function(){if(this.i){var a=Q();if(0!=this.m){var b=this.A,c=this.i,d=b.x-c.x;b=b.y-c.y;d=Math.sqrt(d*d+b*b)/(a-this.m);this.j[this.l]=.5<Math.abs((d-this.s)/this.s)?1:0;for(c=b=0;4>c;c++)b+=this.j[c]||0;3<=b&&this.L();this.s=d}this.m=a;this.A=this.i;this.l=(this.l+1)%4}};
Es.prototype.M=function(){window.clearInterval(this.Z);Ds(this.U)};var Fs={};
function Gs(a){var b=void 0===a?{}:a;a=void 0===b.Le?!1:b.Le;b=void 0===b.le?!0:b.le;if(null==A("_lact",window)){var c=parseInt(N("LACT"),10);c=isFinite(c)?Date.now()-Math.max(c,0):-1;z("_lact",c,window);z("_fact",c,window);-1==c&&Hs();Cs(document,"keydown",Hs);Cs(document,"keyup",Hs);Cs(document,"mousedown",Hs);Cs(document,"mouseup",Hs);a?Cs(window,"touchmove",function(){Is("touchmove",200)},{passive:!0}):(Cs(window,"resize",function(){Is("resize",200)}),b&&Cs(window,"scroll",function(){Is("scroll",200)}));
new Es(function(){Is("mouse",100)});
Cs(document,"touchstart",Hs,{passive:!0});Cs(document,"touchend",Hs,{passive:!0})}}
function Is(a,b){Fs[a]||(Fs[a]=!0,xi.ea(function(){Hs();Fs[a]=!1},b))}
function Hs(){null==A("_lact",window)&&Gs();var a=Date.now();z("_lact",a,window);-1==A("_fact",window)&&z("_fact",a,window);(a=A("ytglobal.ytUtilActivityCallback_"))&&a()}
function Js(){var a=A("_lact",window);return null==a?-1:Math.max(Date.now()-a,0)}
;var Ks=y.ytPubsubPubsubInstance||new Ui,Ls=y.ytPubsubPubsubSubscribedKeys||{},Ms=y.ytPubsubPubsubTopicToKeys||{},Ns=y.ytPubsubPubsubIsSynchronous||{};function Os(a,b){var c=Ps();if(c&&b){var d=c.subscribe(a,function(){var e=arguments;var f=function(){Ls[d]&&b.apply&&"function"==typeof b.apply&&b.apply(window,e)};
try{Ns[a]?f():dn(f,0)}catch(g){Jm(g)}},void 0);
Ls[d]=!0;Ms[a]||(Ms[a]=[]);Ms[a].push(d);return d}return 0}
function Qs(a){var b=Ps();b&&("number"===typeof a?a=[a]:"string"===typeof a&&(a=[parseInt(a,10)]),fb(a,function(c){b.unsubscribeByKey(c);delete Ls[c]}))}
function Rs(a,b){var c=Ps();c&&c.publish.apply(c,arguments)}
function Ss(a){var b=Ps();if(b)if(b.clear(a),a)Ts(a);else for(var c in Ms)Ts(c)}
function Ps(){return y.ytPubsubPubsubInstance}
function Ts(a){Ms[a]&&(a=Ms[a],fb(a,function(b){Ls[b]&&delete Ls[b]}),a.length=0)}
Ui.prototype.subscribe=Ui.prototype.subscribe;Ui.prototype.unsubscribeByKey=Ui.prototype.Eb;Ui.prototype.publish=Ui.prototype.cb;Ui.prototype.clear=Ui.prototype.clear;z("ytPubsubPubsubInstance",Ks);z("ytPubsubPubsubTopicToKeys",Ms);z("ytPubsubPubsubIsSynchronous",Ns);z("ytPubsubPubsubSubscribedKeys",Ls);var Us=Symbol("injectionDeps");function Vs(a){this.name=a}
Vs.prototype.toString=function(){return"InjectionToken("+this.name+")"};
function Ws(a){this.key=a}
function Xs(){this.h=new Map;this.i=new Map}
Xs.prototype.resolve=function(a){return a instanceof Ws?Ys(this,a.key,[],!0):Ys(this,a,[])};
function Ys(a,b,c,d){d=void 0===d?!1:d;if(-1<c.indexOf(b))throw Error("Deps cycle for: "+b);if(a.i.has(b))return a.i.get(b);if(!a.h.has(b)){if(d)return;throw Error("No provider for: "+b);}d=a.h.get(b);c.push(b);if(d.Qd)var e=d.Qd;else if(d.mf)e=d[Us]?Zs(a,d[Us],c):[],e=d.mf.apply(d,ha(e));else if(d.Pd){e=d.Pd;var f=e[Us]?Zs(a,e[Us],c):[];e=new (Function.prototype.bind.apply(e,[null].concat(ha(f))))}else throw Error("Could not resolve providers for: "+b);c.pop();d.Kg||a.i.set(b,e);return e}
function Zs(a,b,c){return b?b.map(function(d){return d instanceof Ws?Ys(a,d.key,c,!0):Ys(a,d,c)}):[]}
;var $s;function at(){$s||($s=new Xs);return $s}
;function bt(){this.store={};this.h={}}
bt.prototype.storePayload=function(a,b){a=ct(a);this.store[a]?this.store[a].push(b):(this.h={},this.store[a]=[b]);return a};
bt.prototype.extractMatchingEntries=function(a){a=dt(this,a);for(var b=[],c=0;c<a.length;c++)this.store[a[c]]&&(b.push.apply(b,ha(this.store[a[c]])),delete this.store[a[c]]);return b};
bt.prototype.getSequenceCount=function(a){a=dt(this,a);for(var b=0,c=0;c<a.length;c++)b+=this.store[a[c]].length||0;return b};
function dt(a,b){var c=ct(b);if(a.h[c])return a.h[c];var d=Object.keys(a.store)||[];if(1>=d.length&&ct(b)===d[0])return d;for(var e=[],f=0;f<d.length;f++){var g=d[f].split("/");if(et(b.auth,g[0])){var h=b.isJspb;et(void 0===h?"undefined":h?"true":"false",g[1])&&et(b.cttAuthInfo,g[2])&&e.push(d[f])}}return a.h[c]=e}
function et(a,b){return void 0===a||"undefined"===a?!0:a===b}
bt.prototype.getSequenceCount=bt.prototype.getSequenceCount;bt.prototype.extractMatchingEntries=bt.prototype.extractMatchingEntries;bt.prototype.storePayload=bt.prototype.storePayload;function ct(a){return[void 0===a.auth?"undefined":a.auth,void 0===a.isJspb?"undefined":a.isJspb,void 0===a.cttAuthInfo?"undefined":a.cttAuthInfo].join("/")}
;function ft(a,b){if(a)return a[b.name]}
;var gt=Ym("initial_gel_batch_timeout",2E3),ht=Ym("gel_queue_timeout_max_ms",6E4),jt=Math.pow(2,16)-1,kt=void 0;function lt(){this.j=this.h=this.i=0}
var mt=new lt,nt=new lt,ot,pt=!0,qt=y.ytLoggingTransportTokensToCttTargetIds_||{};z("ytLoggingTransportTokensToCttTargetIds_",qt);var rt=y.ytLoggingTransportTokensToJspbCttTargetIds_||{};z("ytLoggingTransportTokensToJspbCttTargetIds_",rt);var st={};function tt(){var a=A("yt.logging.ims");a||(a=new bt,z("yt.logging.ims",a));return a}
function ut(a,b){O("web_all_payloads_via_jspb")&&Km(new P("transport.log called for JSON in JSPB only experiment"));if("log_event"===a.endpoint){vt(a);var c=wt(a);st[c]=!0;var d={cttAuthInfo:c,isJspb:!1};tt().storePayload(d,a.payload);xt(b,c,!1,d)}}
function zt(a,b){if("log_event"===a.endpoint){vt(void 0,a);var c=wt(a,!0);st[c]=!0;var d={cttAuthInfo:c,isJspb:!0};tt().storePayload(d,a.payload.toJSON());xt(b,c,!0,d)}}
function xt(a,b,c,d){c=void 0===c?!1:c;a&&(kt=new a);a=Ym("tvhtml5_logging_max_batch_ads_fork")||Ym("tvhtml5_logging_max_batch")||Ym("web_logging_max_batch")||100;var e=Q(),f=c?nt.j:mt.j,g=0;d&&(g=tt().getSequenceCount(d));g>=a?ot||(ot=At(function(){Bt({writeThenSend:!0},O("flush_only_full_queue")?b:void 0,c);ot=void 0},0)):10<=e-f&&(Ct(c),c?nt.j=e:mt.j=e)}
function Dt(a,b){O("web_all_payloads_via_jspb")&&Km(new P("transport.logIsolatedGelPayload called in JSPB only experiment"));if("log_event"===a.endpoint){vt(a);var c=wt(a),d=new Map;d.set(c,[a.payload]);b&&(kt=new b);return new Mf(function(e,f){kt&&kt.isReady()?Et(d,kt,e,f,{bypassNetworkless:!0},!0):e()})}}
function Ft(a,b){if("log_event"===a.endpoint){vt(void 0,a);var c=wt(a,!0),d=new Map;d.set(c,[a.payload.toJSON()]);b&&(kt=new b);return new Mf(function(e){kt&&kt.isReady()?Gt(d,kt,e,{bypassNetworkless:!0},!0):e()})}}
function wt(a,b){var c="";if(a.dangerousLogToVisitorSession)c="visitorOnlyApprovedKey";else if(a.cttAuthInfo){if(void 0===b?0:b){b=a.cttAuthInfo.token;c=a.cttAuthInfo;var d=new nm;c.videoId?d.setVideoId(c.videoId):c.playlistId&&be(d,2,om,c.playlistId);rt[b]=d}else b=a.cttAuthInfo,c={},b.videoId?c.videoId=b.videoId:b.playlistId&&(c.playlistId=b.playlistId),qt[a.cttAuthInfo.token]=c;c=a.cttAuthInfo.token}return c}
function Bt(a,b,c){a=void 0===a?{}:a;c=void 0===c?!1:c;!c&&O("web_all_payloads_via_jspb")&&Km(new P("transport.flushLogs called for JSON in JSPB only experiment"));new Mf(function(d,e){c?(Ht(nt.i),Ht(nt.h),nt.h=0):(Ht(mt.i),Ht(mt.h),mt.h=0);if(kt&&kt.isReady()){var f=a,g=c,h=kt;f=void 0===f?{}:f;g=void 0===g?!1:g;var l=new Map,m=new Map;if(void 0!==b)g?(e=tt().extractMatchingEntries({isJspb:g,cttAuthInfo:b}),l.set(b,e),Gt(l,h,d,f)):(l=tt().extractMatchingEntries({isJspb:g,cttAuthInfo:b}),m.set(b,
l),Et(m,h,d,e,f));else if(g){e=r(Object.keys(st));for(g=e.next();!g.done;g=e.next())m=g.value,g=tt().extractMatchingEntries({isJspb:!0,cttAuthInfo:m}),0<g.length&&l.set(m,g),delete st[m];Gt(l,h,d,f)}else{l=r(Object.keys(st));for(g=l.next();!g.done;g=l.next()){g=g.value;var n=tt().extractMatchingEntries({isJspb:!1,cttAuthInfo:g});0<n.length&&m.set(g,n);delete st[g]}Et(m,h,d,e,f)}}else Ct(c),d()})}
function Ct(a){a=void 0===a?!1:a;if(O("web_gel_timeout_cap")&&(!a&&!mt.h||a&&!nt.h)){var b=At(function(){Bt({writeThenSend:!0},void 0,a)},ht);
a?nt.h=b:mt.h=b}Ht(a?nt.i:mt.i);b=N("LOGGING_BATCH_TIMEOUT",Ym("web_gel_debounce_ms",1E4));O("shorten_initial_gel_batch_timeout")&&pt&&(b=gt);b=At(function(){Bt({writeThenSend:!0},void 0,a)},b);
a?nt.i=b:mt.i=b}
function Et(a,b,c,d,e,f){e=void 0===e?{}:e;var g=Math.round(Q()),h=a.size,l={};a=r(a);for(var m=a.next();!m.done;l={Sb:l.Sb,Ya:l.Ya,Bb:l.Bb,Ub:l.Ub,Tb:l.Tb},m=a.next()){var n=r(m.value);m=n.next().value;n=n.next().value;l.Ya=ub({context:hq(b.config_||gq())});if(!Pa(n)&&!O("throw_err_when_logevent_malformed_killswitch")){d();break}l.Ya.events=n;(n=qt[m])&&It(l.Ya,m,n);delete qt[m];l.Bb="visitorOnlyApprovedKey"===m;Jt(l.Ya,g,l.Bb);Kt(e);l.Ub=function(q){O("update_log_event_config")&&xi.ea(function(){return x(function(u){return w(u,
Lt(q),0)})});
h--;h||c()};
l.Sb=0;l.Tb=function(q){return function(){q.Sb++;if(e.bypassNetworkless&&1===q.Sb)try{Vq(b,"log_event",q.Ya,Mt({writeThenSend:!0},q.Bb,q.Ub,q.Tb,f)),pt=!1}catch(u){Jm(u),d()}h--;h||c()}}(l);
try{Vq(b,"log_event",l.Ya,Mt(e,l.Bb,l.Ub,l.Tb,f)),pt=!1}catch(q){Jm(q),d()}}}
function Gt(a,b,c,d,e){d=void 0===d?{}:d;var f=Math.round(Q()),g=a.size,h=new Map([].concat(ha(a)));h=r(h);for(var l=h.next();!l.done;l=h.next()){var m=r(l.value).next().value,n=a.get(m);l=new pm;var q=oq(b.config_||gq());H(l,Yk,1,q);n=n?Nt(n):[];n=r(n);for(q=n.next();!q.done;q=n.next())ie(l,3,jm,q.value);(n=rt[m])&&Ot(l,m,n);delete rt[m];m="visitorOnlyApprovedKey"===m;Pt(l,f,m);Kt(d);l=ye(l);m=Mt(d,m,function(u){O("update_log_event_config")&&xi.ea(function(){return x(function(t){return w(t,Lt(u),
0)})});
g--;g||c()},function(){g--;
g||c()},e);
m.headers["Content-Type"]="application/json+protobuf";m.postBodyFormat="JSPB";m.postBody=l;Vq(b,"log_event","",m);pt=!1}}
function Kt(a){O("always_send_and_write")&&(a.writeThenSend=!1)}
function Mt(a,b,c,d,e){a={retry:!0,onSuccess:c,onError:d,yd:a,dangerousLogToVisitorSession:b,pg:!!e,headers:{},postBodyFormat:"",postBody:"",compress:O("compress_gel")||O("compress_gel_lr")};Qt()&&(a.headers["X-Goog-Request-Time"]=JSON.stringify(Math.round(Q())));return a}
function Jt(a,b,c){Qt()||(a.requestTimeMs=String(b));O("unsplit_gel_payloads_in_logs")&&(a.unsplitGelPayloadsInLogs=!0);!c&&(b=N("EVENT_ID"))&&(c=Rt(),a.serializedClientEventId={serializedEventId:b,clientCounter:String(c)})}
function Pt(a,b,c){Qt()||G(a,2,b);if(!c&&(b=N("EVENT_ID"))){c=Rt();var d=new mm;G(d,1,b);G(d,2,c);H(a,mm,5,d)}}
function Rt(){var a=N("BATCH_CLIENT_COUNTER")||0;a||(a=Math.floor(Math.random()*jt/2));a++;a>jt&&(a=1);Em("BATCH_CLIENT_COUNTER",a);return a}
function It(a,b,c){if(c.videoId)var d="VIDEO";else if(c.playlistId)d="PLAYLIST";else return;a.credentialTransferTokenTargetId=c;a.context=a.context||{};a.context.user=a.context.user||{};a.context.user.credentialTransferTokens=[{token:b,scope:d}]}
function Ot(a,b,c){var d=1===ce(c,om)?1:-1;if(Zd(c,d))d=1;else if(c.getPlaylistId())d=2;else return;H(a,nm,4,c);a=de(a,Yk,1)||new Yk;c=de(a,Wk,3)||new Wk;var e=new Vk;G(e,2,b);G(e,1,d);ie(c,12,Vk,e);H(a,Wk,3,c)}
function Nt(a){for(var b=[],c=0;c<a.length;c++)try{b.push(new jm(a[c]))}catch(d){Jm(new P("Transport failed to deserialize "+String(a[c])))}return b}
function vt(a,b){if(A("yt.logging.transport.enableScrapingForTest")){var c=A("yt.logging.transport.scrapedPayloadsForTesting"),d=A("yt.logging.transport.payloadToScrape");b&&(b=A("yt.logging.transport.getScrapedPayloadFromClientEventsFunction").bind(b.payload)())&&c.push(b);if(d&&1<=d.length)for(b=0;b<d.length;b++)if(a&&a.payload[d[b]]){var e=void 0;c.push((null==(e=a)?void 0:e.payload)[d[b]])}z("yt.logging.transport.scrapedPayloadsForTesting",c)}}
function Qt(){return O("use_request_time_ms_header")||O("lr_use_request_time_ms_header")}
function At(a,b){return O("transport_use_scheduler")?io(a,b):dn(a,b)}
function Ht(a){O("transport_use_scheduler")?xi.Ba(a):window.clearTimeout(a)}
function Lt(a){var b,c,d,e,f,g,h,l,m,n;return x(function(q){return 1==q.h?(d=null==(b=a)?void 0:null==(c=b.responseContext)?void 0:c.globalConfigGroup,e=ft(d,Dk),g=null==(f=d)?void 0:f.hotHashData,h=ft(d,Ck),m=null==(l=d)?void 0:l.coldHashData,(n=at().resolve(new Ws(cq)))?g?e?w(q,dq(n,g,e),2):w(q,dq(n,g),2):q.v(2):q.return()):m?h?w(q,eq(n,m,h),0):w(q,eq(n,m),0):q.v(0)})}
;var St=y.ytLoggingGelSequenceIdObj_||{};z("ytLoggingGelSequenceIdObj_",St);
function Tt(a,b,c,d){d=void 0===d?{}:d;var e={},f=Math.round(d.timestamp||Q());e.eventTimeMs=f<Number.MAX_SAFE_INTEGER?f:0;e[a]=b;O("enable_unknown_lact_fix_on_html5")&&Gs();a=Js();e.context={lastActivityMs:String(d.timestamp||!isFinite(a)?-1:a)};O("log_sequence_info_on_gel_web")&&d.sequenceGroup&&(a=e.context,b=d.sequenceGroup,b={index:Ut(b),groupKey:b},a.sequence=b,d.endOfSequence&&delete St[d.sequenceGroup]);(d.sendIsolatedPayload?Dt:ut)({endpoint:"log_event",payload:e,cttAuthInfo:d.cttAuthInfo,
dangerousLogToVisitorSession:d.dangerousLogToVisitorSession},c)}
function Vt(a){Bt(void 0,void 0,void 0===a?!1:a)}
function Ut(a){St[a]=a in St?St[a]+1:0;return St[a]}
;var Wt=[];function wo(a,b,c){c=void 0===c?{}:c;var d=ts;N("ytLoggingEventsDefaultDisabled",!1)&&ts===ts&&(d=null);O("web_all_payloads_via_jspb")?(c.timestamp||(c.timestamp=Q()),Wt.push({Mc:a,payload:b,options:c})):Tt(a,b,d,c)}
;var Xt=y.ytLoggingGelSequenceIdObj_||{};z("ytLoggingGelSequenceIdObj_",Xt);
function Yt(a,b,c){c=void 0===c?{}:c;var d=Math.round(c.timestamp||Q());G(a,1,d<Number.MAX_SAFE_INTEGER?d:0);var e=Js();d=new im;G(d,1,c.timestamp||!isFinite(e)?-1:e);if(O("log_sequence_info_on_gel_web")&&c.sequenceGroup){e=c.sequenceGroup;var f=Ut(e),g=new hm;G(g,2,f);G(g,1,e);H(d,hm,3,g);c.endOfSequence&&delete Xt[c.sequenceGroup]}H(a,im,33,d);(c.sendIsolatedPayload?Ft:zt)({endpoint:"log_event",payload:a,cttAuthInfo:c.cttAuthInfo,dangerousLogToVisitorSession:c.dangerousLogToVisitorSession},b)}
;function Zt(a,b){b=void 0===b?{}:b;var c=!1;N("ytLoggingEventsDefaultDisabled",!1)&&(c=!0);Yt(a,c?null:ts,b)}
;function $t(a,b,c){var d=new jm;ge(d,Xl,72,km,a);c?Yt(d,c,b):Zt(d,b)}
function au(a,b,c){var d=new jm;ge(d,Wl,73,km,a);c?Yt(d,c,b):Zt(d,b)}
function bu(a,b,c){var d=new jm;ge(d,Vl,78,km,a);c?Yt(d,c,b):Zt(d,b)}
function cu(a,b,c){var d=new jm;ge(d,Yl,208,km,a);c?Yt(d,c,b):Zt(d,b)}
function du(a,b,c){var d=new jm;ge(d,Ql,156,km,a);c?Yt(d,c,b):Zt(d,b)}
function eu(a,b,c){var d=new jm;ge(d,Sl,215,km,a);c?Yt(d,c,b):Zt(d,b)}
;var fu=new Set,gu=0,hu=0,iu=0,ju=[],ku=["PhantomJS","Googlebot","TO STOP THIS SECURITY SCAN go/scan"];function vo(a){lu(a)}
function mu(a){lu(a,"WARNING")}
function lu(a,b,c,d,e,f,g){f=void 0===f?{}:f;f.name=c||N("INNERTUBE_CONTEXT_CLIENT_NAME",1);f.version=d||N("INNERTUBE_CONTEXT_CLIENT_VERSION");var h=f,l=void 0===b?"ERROR":b,m=void 0===g?!1:g;l=void 0===l?"ERROR":l;m=void 0===m?!1:m;if(a){a.hasOwnProperty("level")&&a.level&&(l=a.level);if(O("console_log_js_exceptions")){var n=[];n.push("Name: "+a.name);n.push("Message: "+a.message);a.hasOwnProperty("params")&&n.push("Error Params: "+JSON.stringify(a.params));a.hasOwnProperty("args")&&n.push("Error args: "+
JSON.stringify(a.args));n.push("File name: "+a.fileName);n.push("Stacktrace: "+a.stack);window.console.log(n.join("\n"),a)}if(!(5<=gu)){var q=ju,u=Ke(a),t=u.message||"Unknown Error",B=u.name||"UnknownError",C=u.stack||a.i||"Not available";if(C.startsWith(B+": "+t)){var F=C.split("\n");F.shift();C=F.join("\n")}var M=u.lineNumber||"Not available",S=u.fileName||"Not available",R=C,X=0;if(a.hasOwnProperty("args")&&a.args&&a.args.length)for(var Y=0;Y<a.args.length&&!(X=En(a.args[Y],"params."+Y,h,X),500<=
X);Y++);else if(a.hasOwnProperty("params")&&a.params){var $a=a.params;if("object"===typeof a.params)for(var Oa in $a){if($a[Oa]){var Ba="params."+Oa,ra=Gn($a[Oa]);h[Ba]=ra;X+=Ba.length+ra.length;if(500<X)break}}else h.params=Gn($a)}if(q.length)for(var ia=0;ia<q.length&&!(X=En(q[ia],"params.context."+ia,h,X),500<=X);ia++);navigator.vendor&&!h.hasOwnProperty("vendor")&&(h["device.vendor"]=navigator.vendor);var J={message:t,name:B,lineNumber:M,fileName:S,stack:R,params:h,sampleWeight:1},cf=Number(a.columnNumber);
isNaN(cf)||(J.lineNumber=J.lineNumber+":"+cf);if("IGNORED"===a.level)var Lc=0;else a:{for(var df=An(),va=r(df.Ta),el=va.next();!el.done;el=va.next()){var kr=el.value;if(J.message&&J.message.match(kr.Ag)){Lc=kr.weight;break a}}for(var lr=r(df.Pa),fl=lr.next();!fl.done;fl=lr.next()){var mr=fl.value;if(mr.callback(J)){Lc=mr.weight;break a}}Lc=1}J.sampleWeight=Lc;for(var nr=r(vn),gl=nr.next();!gl.done;gl=nr.next()){var hl=gl.value;if(hl.lc[J.name])for(var or=r(hl.lc[J.name]),il=or.next();!il.done;il=
or.next()){var pr=il.value,Ah=J.message.match(pr.regexp);if(Ah){J.params["params.error.original"]=Ah[0];for(var jl=pr.groups,qr={},Ld=0;Ld<jl.length;Ld++)qr[jl[Ld]]=Ah[Ld+1],J.params["params.error."+jl[Ld]]=Ah[Ld+1];J.message=hl.Ic(qr);break}}}J.params||(J.params={});var rr=An();J.params["params.errorServiceSignature"]="msg="+rr.Ta.length+"&cb="+rr.Pa.length;J.params["params.serviceWorker"]="false";y.document&&y.document.querySelectorAll&&(J.params["params.fscripts"]=String(document.querySelectorAll("script:not([nonce])").length));
Bb("sample").constructor!==zb&&(J.params["params.fconst"]="true");window.yterr&&"function"===typeof window.yterr&&window.yterr(J);if(0!==J.sampleWeight&&!fu.has(J.message)){if(m&&O("web_enable_error_204"))nu(void 0===l?"ERROR":l,J);else{var Mc=l;Mc=void 0===Mc?"ERROR":Mc;if("ERROR"===Mc){Bn.cb("handleError",J);if(O("record_app_crashed_web")&&0===iu&&1===J.sampleWeight)if(iu++,O("errors_via_jspb")){var ky=new Hl;var tr=G(ky,1,1);if(!O("report_client_error_with_app_crash_ks")){var ly=new Fl,my=new El,
ny=new Dl,oy=new Cl;var py=G(oy,1,J.message);var qy=H(ny,Cl,3,py);var ry=H(my,Dl,5,qy);var sy=H(ly,El,9,ry);H(tr,Fl,4,sy)}var ur=new jm;ge(ur,Hl,20,km,tr);Zt(ur)}else{var vr={appCrashType:"APP_CRASH_TYPE_BREAKPAD"};O("report_client_error_with_app_crash_ks")||(vr.systemHealth={crashData:{clientError:{logMessage:{message:J.message}}}});wo("appCrashed",vr)}hu++}else"WARNING"===Mc&&Bn.cb("handleWarning",J);if(O("kevlar_gel_error_routing"))a:{var ef=Mc;if(O("errors_via_jspb")){if(ou())var xr=void 0;else{var Md=
new zl;G(Md,1,J.stack);J.fileName&&G(Md,4,J.fileName);var Pb=J.lineNumber&&J.lineNumber.split?J.lineNumber.split(":"):[];0!==Pb.length&&(1!==Pb.length||isNaN(Number(Pb[0]))?2!==Pb.length||isNaN(Number(Pb[0]))||isNaN(Number(Pb[1]))||(G(Md,2,Number(Pb[0])),G(Md,3,Number(Pb[1]))):G(Md,2,Number(Pb[0])));var Nc=new Cl;G(Nc,1,J.message);G(Nc,3,J.name);G(Nc,6,J.sampleWeight);"ERROR"===ef?G(Nc,2,2):"WARNING"===ef?G(Nc,2,1):G(Nc,2,0);var kl=new Al;G(kl,1,!0);ge(kl,zl,3,Bl,Md);var lc=new xl;G(lc,3,window.location.href);
for(var yr=N("FEXP_EXPERIMENTS",[]),ll=0;ll<yr.length;ll++){var ty=yr[ll];Sd(lc);ae(lc,5,2,!1,!1).push(ty)}var ml=N("LATEST_ECATCHER_SERVICE_TRACKING_PARAMS");if(!Fm()&&ml)for(var zr=r(Object.keys(ml)),Oc=zr.next();!Oc.done;Oc=zr.next()){var Ar=Oc.value,nl=new wl;G(nl,1,Ar);G(nl,2,String(ml[Ar]));ie(lc,4,wl,nl)}var ol=J.params;if(ol){var Br=r(Object.keys(ol));for(Oc=Br.next();!Oc.done;Oc=Br.next()){var Cr=Oc.value,pl=new wl;G(pl,1,"client."+Cr);G(pl,2,String(ol[Cr]));ie(lc,4,wl,pl)}}var Dr=N("SERVER_NAME"),
Er=N("SERVER_VERSION");if(Dr&&Er){var ql=new wl;G(ql,1,"server.name");G(ql,2,Dr);ie(lc,4,wl,ql);var rl=new wl;G(rl,1,"server.version");G(rl,2,Er);ie(lc,4,wl,rl)}var Bh=new Dl;H(Bh,xl,1,lc);H(Bh,Al,2,kl);H(Bh,Cl,3,Nc);xr=Bh}var Fr=xr;if(!Fr)break a;var Gr=new jm;ge(Gr,Dl,163,km,Fr);Zt(Gr)}else{if(ou())var Hr=void 0;else{var ff={stackTrace:J.stack};J.fileName&&(ff.filename=J.fileName);var Qb=J.lineNumber&&J.lineNumber.split?J.lineNumber.split(":"):[];0!==Qb.length&&(1!==Qb.length||isNaN(Number(Qb[0]))?
2!==Qb.length||isNaN(Number(Qb[0]))||isNaN(Number(Qb[1]))||(ff.lineNumber=Number(Qb[0]),ff.columnNumber=Number(Qb[1])):ff.lineNumber=Number(Qb[0]));var sl={level:"ERROR_LEVEL_UNKNOWN",message:J.message,errorClassName:J.name,sampleWeight:J.sampleWeight};"ERROR"===ef?sl.level="ERROR_LEVEL_ERROR":"WARNING"===ef&&(sl.level="ERROR_LEVEL_WARNNING");var uy={isObfuscated:!0,browserStackInfo:ff},Nd={pageUrl:window.location.href,kvPairs:[]};N("FEXP_EXPERIMENTS")&&(Nd.experimentIds=N("FEXP_EXPERIMENTS"));var tl=
N("LATEST_ECATCHER_SERVICE_TRACKING_PARAMS");if(!Fm()&&tl)for(var Ir=r(Object.keys(tl)),Pc=Ir.next();!Pc.done;Pc=Ir.next()){var Jr=Pc.value;Nd.kvPairs.push({key:Jr,value:String(tl[Jr])})}var ul=J.params;if(ul){var Kr=r(Object.keys(ul));for(Pc=Kr.next();!Pc.done;Pc=Kr.next()){var Lr=Pc.value;Nd.kvPairs.push({key:"client."+Lr,value:String(ul[Lr])})}}var Mr=N("SERVER_NAME"),Nr=N("SERVER_VERSION");Mr&&Nr&&(Nd.kvPairs.push({key:"server.name",value:Mr}),Nd.kvPairs.push({key:"server.version",value:Nr}));
Hr={errorMetadata:Nd,stackTrace:uy,logMessage:sl}}var Or=Hr;if(!Or)break a;wo("clientError",Or)}if("ERROR"===ef||O("errors_flush_gel_always_killswitch"))b:{if(O("web_fp_via_jspb")&&(Vt(!0),!O("web_fp_via_jspb_and_json")))break b;Vt()}}O("suppress_error_204_logging")||nu(Mc,J)}try{fu.add(J.message)}catch(gA){}gu++}}}}
function ou(){for(var a=r(ku),b=a.next();!b.done;b=a.next())if(un(b.value.toLowerCase()))return!0;return!1}
function nu(a,b){var c=b.params||{};a={urlParams:{a:"logerror",t:"jserror",type:b.name,msg:b.message.substr(0,250),line:b.lineNumber,level:a,"client.name":c.name},postParams:{url:N("PAGE_NAME",window.location.href),file:b.fileName},method:"POST"};c.version&&(a["client.version"]=c.version);if(a.postParams){b.stack&&(a.postParams.stack=b.stack);b=r(Object.keys(c));for(var d=b.next();!d.done;d=b.next())d=d.value,a.postParams["client."+d]=c[d];if(c=N("LATEST_ECATCHER_SERVICE_TRACKING_PARAMS"))for(b=r(Object.keys(c)),
d=b.next();!d.done;d=b.next())d=d.value,a.postParams[d]=c[d];c=N("SERVER_NAME");b=N("SERVER_VERSION");c&&b&&(a.postParams["server.name"]=c,a.postParams["server.version"]=b)}kn(N("ECATCHER_REPORT_HOST","")+"/error_204",a)}
function pu(a){var b=Ja.apply(1,arguments);a.args||(a.args=[]);a.args.push.apply(a.args,ha(b))}
;function qu(){this.register=new Map}
function ru(a){a=r(a.register.values());for(var b=a.next();!b.done;b=a.next())b.value.Eg("ABORTED")}
qu.prototype.clear=function(){ru(this);this.register.clear()};
var su=new qu;var tu=Date.now().toString();function uu(){for(var a=Array(16),b=0;16>b;b++){for(var c=Date.now(),d=0;d<c%23;d++)a[b]=Math.random();a[b]=Math.floor(256*Math.random())}if(tu)for(b=1,c=0;c<tu.length;c++)a[b%16]=a[b%16]^a[(b-1)%16]/4^tu.charCodeAt(c),b++;return a}
function vu(){if(window.crypto&&window.crypto.getRandomValues)try{var a=Array(16),b=new Uint8Array(16);window.crypto.getRandomValues(b);for(var c=0;c<a.length;c++)a[c]=b[c];return a}catch(d){}return uu()}
function wu(){for(var a=vu(),b=[],c=0;c<a.length;c++)b.push("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_".charAt(a[c]&63));return b.join("")}
;var xu=y.ytLoggingDocDocumentNonce_;xu||(xu=wu(),z("ytLoggingDocDocumentNonce_",xu));var yu=xu;var zu={Bf:0,zf:1,Af:2,Zf:3,Cf:4,fg:5,ag:6,eg:7,cg:8,dg:9,0:"DEFAULT",1:"CHAT",2:"CONVERSATIONS",3:"MINIPLAYER",4:"DIALOG",5:"VOZ",6:"MUSIC_WATCH_TABS",7:"SHARE",8:"PUSH_NOTIFICATIONS",9:"RICH_GRID_WATCH"};function Au(a){this.h=a}
function Bu(a){return new Au({trackingParams:a})}
Au.prototype.getAsJson=function(){var a={};void 0!==this.h.trackingParams?a.trackingParams=this.h.trackingParams:(a.veType=this.h.veType,void 0!==this.h.veCounter&&(a.veCounter=this.h.veCounter),void 0!==this.h.elementIndex&&(a.elementIndex=this.h.elementIndex));void 0!==this.h.dataElement&&(a.dataElement=this.h.dataElement.getAsJson());void 0!==this.h.youtubeData&&(a.youtubeData=this.h.youtubeData);return a};
Au.prototype.getAsJspb=function(){var a=new Jl;if(void 0!==this.h.trackingParams){var b=this.h.trackingParams;if(null!=b)if("string"===typeof b)b=b?new Cd(b,zd):Ad||(Ad=new Cd(null,zd));else if(b.constructor!==Cd)if(yd(b))b=b.length?new Cd(new Uint8Array(b),zd):Ad||(Ad=new Cd(null,zd));else throw Error();G(a,1,b)}else void 0!==this.h.veType&&G(a,2,this.h.veType),void 0!==this.h.veCounter&&G(a,6,this.h.veCounter),void 0!==this.h.elementIndex&&G(a,3,this.h.elementIndex);void 0!==this.h.dataElement&&
(b=this.h.dataElement.getAsJspb(),H(a,Jl,7,b));void 0!==this.h.youtubeData&&H(a,Ik,8,this.h.jspbYoutubeData);return a};
Au.prototype.toString=function(){return JSON.stringify(this.getAsJson())};
Au.prototype.isClientVe=function(){return!this.h.trackingParams&&!!this.h.veType};function Cu(a){a=void 0===a?0:a;return 0===a?"client-screen-nonce":"client-screen-nonce."+a}
function Du(a){a=void 0===a?0:a;return 0===a?"ROOT_VE_TYPE":"ROOT_VE_TYPE."+a}
function Eu(a){return N(Du(void 0===a?0:a))}
z("yt_logging_screen.getRootVeType",Eu);function Fu(a){return(a=Eu(void 0===a?0:a))?new Au({veType:a,youtubeData:void 0,jspbYoutubeData:void 0}):null}
function Gu(){var a=N("csn-to-ctt-auth-info");a||(a={},Em("csn-to-ctt-auth-info",a));return a}
function Hu(a){a=N(Cu(void 0===a?0:a));if(!a&&!N("USE_CSN_FALLBACK",!0))return null;a||(a="UNDEFINED_CSN");return a?a:null}
z("yt_logging_screen.getCurrentCsn",Hu);function Iu(a){for(var b=r(Object.values(zu)),c=b.next();!c.done;c=b.next())if(Hu(c.value)===a)return!0;return!1}
function Ju(a,b,c){var d=Gu();(c=Hu(c))&&delete d[c];b&&(d[a]=b)}
function Ku(a){return Gu()[a]}
z("yt_logging_screen.getCttAuthInfo",Ku);function Lu(a,b,c,d){c=void 0===c?0:c;if(a!==N(Cu(c))||b!==N(Du(c)))if(Ju(a,d,c),Em(Cu(c),a),Em(Du(c),b),b=function(){setTimeout(function(){if(a)if(O("web_time_via_jspb")){var e=new Kl;G(e,1,yu);G(e,2,a);var f=new jm;ge(f,Kl,111,km,e);Zt(f)}else wo("foregroundHeartbeatScreenAssociated",{clientDocumentNonce:yu,clientScreenNonce:a})},0)},"requestAnimationFrame"in window)try{window.requestAnimationFrame(b)}catch(e){b()}else b()}
z("yt_logging_screen.setCurrentScreen",Lu);var Mu=window.yt&&window.yt.msgs_||window.ytcfg&&window.ytcfg.msgs||{};z("yt.msgs_",Mu);function Nu(a){zm(Mu,arguments)}
;var Ou=[3611,27686,85013,23462,157557,42016,26926,51236,79148,50160,77504,153587,87907,18630,54445,80935,152172,105675,150723,37521,147285,47786,98349,168271,168954,168277,168273,168270,123695,6827,29434,171388,7282,124448,32276,76278,147868,147869,93911,106531,27259,27262,27263,21759,160866,171243,160789,171244,171241,171245,171242,175492,175493,175494,175495,175496,175497,38408,175498,175503,175504,175505,175506,175507,175508,80637,68727,68728,80353,80356,74610,45707,83962,83970,46713,166591,89711,
74612,155792,93265,74611,131380,128979,139311,128978,131391,105350,139312,134800,131392,113533,93252,99357,94521,114252,113532,94522,94583,88E3,139580,93253,93254,94387,94388,93255,97424,72502,110111,76019,117092,117093,89431,110466,77240,60508,148123,148124,137401,137402,137046,73393,113534,92098,131381,84517,83759,162711,162712,80357,86113,72598,168413,72733,107349,124275,118203,133275,160157,152569,156651,133274,160159,160158,133272,133273,133276,144507,143247,156652,143248,143249,143250,143251,
156653,144401,117431,133797,153964,128572,133405,117429,117430,174734,117432,173996,173995,174953,173994,173997,120080,117259,156655,156654,121692,145656,156656,145655,145653,145654,145657,132972,133051,133658,132971,97615,143359,143356,143361,143358,143360,143357,142303,143353,172859,143354,144479,143355,31402,133624,146477,133623,133622,133621,84774,160801,95117,172721,150497,98930,98931,98932,153320,153321,43347,129889,149123,45474,100352,98443,117985,74613,155911,74614,64502,136032,74615,74616,
122224,74617,77820,74618,93278,93274,93275,93276,22110,29433,133798,132295,120541,82047,113550,75836,75837,42352,84512,76065,75989,51879,16623,32594,27240,32633,74858,156999,3945,16989,45520,25488,25492,25494,55760,14057,18451,57204,57203,17897,18198,17898,17909,43980,46220,11721,147994,49954,96369,3854,151633,56251,159108,25624,152036,16906,99999,68172,47973,72773,26970,26971,96805,17752,73233,109512,22256,14115,22696,89278,89277,109513,43278,43459,43464,89279,43717,55764,22255,147912,89281,40963,
43277,43442,91824,120137,96367,36850,72694,37414,36851,124863,121343,73491,54473,166861,43375,46674,143815,139095,144402,149968,149969,32473,72901,72906,50612,50613,50942,84938,84943,84939,84941,84944,84940,84942,35585,51926,79983,18921,57893,41182,135732,33424,22207,36229,22206,22205,44763,33427,67793,22182,37091,34650,50617,22287,25144,97917,62397,150871,150874,125598,137935,36961,108035,27426,27857,27846,27854,69692,61411,39299,38696,62520,36382,108701,50663,36387,14908,37533,105443,61635,62274,
161670,133818,65702,65703,65701,76256,166382,37671,49953,36216,28237,173718,39553,29222,26107,38050,26108,120745,26109,26110,66881,28236,14586,160598,57929,74723,44098,173689,44099,23528,61699,134104,134103,59149,173191,173192,173193,101951,171502,97346,118051,95102,64882,119505,63595,63349,95101,75240,27039,68823,21537,83464,75707,170215,83113,101952,101953,79610,125755,24402,24400,32925,57173,156421,122502,145268,138480,64423,64424,33986,100828,129089,21409,135155,135156,135157,135158,158225,135159,
135160,167651,135161,135162,135163,158226,158227,135164,135165,135166,11070,11074,17880,30709,30707,30711,30710,30708,146143,63648,63649,111059,5754,20445,151308,151152,130975,130976,167637,110386,113746,66557,17310,28631,21589,164817,168011,154946,68012,162617,60480,138664,141121,164502,31571,141978,150105,150106,150107,150108,76980,41577,45469,38669,13768,13777,141842,62985,4724,59369,43927,43928,12924,100355,56219,27669,10337,47896,122629,139723,139722,121258,107598,127991,96639,107536,130169,
96661,145188,96658,116646,159428,168611,168612,121122,96660,127738,127083,155281,162959,163566,147842,104443,96659,147595,106442,162776,134840,63667,63668,63669,130686,147036,78314,147799,174049,148649,55761,127098,134841,96368,67374,48992,146176,49956,31961,26388,23811,5E4,126250,96370,47355,47356,37935,45521,21760,83769,49977,49974,93497,93498,34325,140759,115803,123707,100081,35309,68314,25602,100339,170873,143516,59018,18248,50625,9729,37168,37169,21667,16749,18635,39305,18046,53969,8213,93926,
102852,110099,22678,69076,137575,139224,100856,154430,17736,3832,147111,55759,64031,93044,93045,170701,170702,34388,167841,170419,17657,17655,39579,39578,170412,77448,8196,11357,69877,8197,168501,156512,161613,156509,161612,161614,82039];function Pu(){var a=tb(Qu),b;return(new Mf(function(c,d){a.onSuccess=function(e){cn(e)?c(new Ru(e)):d(new Su("Request failed, status="+(e&&"status"in e?e.status:-1),"net.badstatus",e))};
a.onError=function(e){d(new Su("Unknown request error","net.unknown",e))};
a.onTimeout=function(e){d(new Su("Request timed out","net.timeout",e))};
b=kn("//googleads.g.doubleclick.net/pagead/id",a)})).sc(function(c){c instanceof Tf&&b.abort();
return Rf(c)})}
function Su(a,b,c){ab.call(this,a+", errorCode="+b);this.errorCode=b;this.xhr=c;this.name="PromiseAjaxError"}
v(Su,ab);function Ru(a){this.xhr=a}
;function Tu(){this.i=0;this.h=null}
Tu.prototype.then=function(a,b,c){return 1===this.i&&a?(a=a.call(c,this.h))&&"function"===typeof a.then?a:Uu(a):2===this.i&&b?(a=b.call(c,this.h))&&"function"===typeof a.then?a:Vu(a):this};
Tu.prototype.getValue=function(){return this.h};
Tu.prototype.$goog_Thenable=!0;function Vu(a){var b=new Tu;a=void 0===a?null:a;b.i=2;b.h=void 0===a?null:a;return b}
function Uu(a){var b=new Tu;a=void 0===a?null:a;b.i=1;b.h=void 0===a?null:a;return b}
;function Wu(a,b){var c=void 0===c?{}:c;a={method:void 0===b?"POST":b,mode:Um(a)?"same-origin":"cors",credentials:Um(a)?"same-origin":"include"};b={};for(var d=r(Object.keys(c)),e=d.next();!e.done;e=d.next())e=e.value,c[e]&&(b[e]=c[e]);0<Object.keys(b).length&&(a.headers=b);return a}
;function Xu(){return Mg()||(jd||kd)&&un("applewebkit")&&!un("version")&&(!un("safari")||un("gsa/"))||$c&&un("version/")?!0:N("EOM_VISITOR_DATA")?!1:!0}
;function Yu(a){a:{var b=a.raw_embedded_player_response;if(!b&&(a=a.embedded_player_response))try{b=JSON.parse(a)}catch(d){b="EMBEDDED_PLAYER_MODE_UNKNOWN";break a}if(b)b:{for(var c in cl)if(cl[c]==b.embeddedPlayerMode){b=cl[c];break b}b="EMBEDDED_PLAYER_MODE_UNKNOWN"}else b="EMBEDDED_PLAYER_MODE_UNKNOWN"}return"EMBEDDED_PLAYER_MODE_PFL"===b}
;function Zu(a){ab.call(this,a.message||a.description||a.name);this.isMissing=a instanceof $u;this.isTimeout=a instanceof Su&&"net.timeout"==a.errorCode;this.isCanceled=a instanceof Tf}
v(Zu,ab);Zu.prototype.name="BiscottiError";function $u(){ab.call(this,"Biscotti ID is missing from server")}
v($u,ab);$u.prototype.name="BiscottiMissingError";var Qu={format:"RAW",method:"GET",timeout:5E3,withCredentials:!0},av=null;function bv(){if(O("disable_biscotti_fetch_entirely_for_all_web_clients"))return Error("Biscotti id fetching has been disabled entirely.");if(!Xu())return Error("User has not consented - not fetching biscotti id.");var a=N("PLAYER_VARS",{});if("1"==rb(a))return Error("Biscotti ID is not available in private embed mode");if(Yu(a))return Error("Biscotti id fetching has been disabled for pfl.")}
function xm(){var a=bv();if(void 0!==a)return Rf(a);av||(av=Pu().then(cv).sc(function(b){return dv(2,b)}));
return av}
function cv(a){a=a.xhr.responseText;if(0!=a.lastIndexOf(")]}'",0))throw new $u;a=JSON.parse(a.substr(4));if(1<(a.type||1))throw new $u;a=a.id;ym(a);av=Uu(a);ev(18E5,2);return a}
function dv(a,b){b=new Zu(b);ym("");av=Vu(b);0<a&&ev(12E4,a-1);throw b;}
function ev(a,b){dn(function(){Pu().then(cv,function(c){return dv(b,c)}).sc(cb)},a)}
function fv(){try{var a=A("yt.ads.biscotti.getId_");return a?a():xm()}catch(b){return Rf(b)}}
;function gv(a){if("1"!=rb(N("PLAYER_VARS",{}))){a&&wm();try{fv().then(function(){},function(){}),dn(gv,18E5)}catch(b){Jm(b)}}}
;function hv(){var a=Tn(),b=Wn(119),c=1<window.devicePixelRatio;if(document.body&&Hi(document.body,"exp-invert-logo"))if(c&&!Hi(document.body,"inverted-hdpi")){var d=document.body;if(d.classList)d.classList.add("inverted-hdpi");else if(!Hi(d,"inverted-hdpi")){var e=Fi(d);Gi(d,e+(0<e.length?" inverted-hdpi":"inverted-hdpi"))}}else!c&&Hi(document.body,"inverted-hdpi")&&Ii();if(b!=c){b="f"+(Math.floor(119/31)+1);d=Xn(b)||0;d=c?d|67108864:d&-67108865;0===d?delete Qn[b]:(c=d.toString(16),Qn[b]=c.toString());
c=!0;O("web_secure_pref_cookie_killswitch")&&(c=!1);b=a.h;d=[];for(var f in Qn)Qn.hasOwnProperty(f)&&d.push(f+"="+encodeURIComponent(String(Qn[f])));Nn(b,d.join("&"),63072E3,a.i,c)}}
;var iv=new Map([["dark","USER_INTERFACE_THEME_DARK"],["light","USER_INTERFACE_THEME_LIGHT"]]);function jv(){var a=void 0===a?window.location.href:a;if(O("kevlar_disable_theme_param"))return null;uc(vc(5,a));try{var b=Sm(a).theme;return iv.get(b)||null}catch(c){}return null}
;function kv(){this.h={};if(this.i=Pn()){var a=Kg.get("CONSISTENCY",void 0);a&&lv(this,{encryptedTokenJarContents:a})}}
kv.prototype.handleResponse=function(a,b){if(!b)throw Error("request needs to be passed into ConsistencyService");var c,d;b=(null==(c=b.Ja.context)?void 0:null==(d=c.request)?void 0:d.consistencyTokenJars)||[];var e;if(a=null==(e=a.responseContext)?void 0:e.consistencyTokenJar){e=r(b);for(c=e.next();!c.done;c=e.next())delete this.h[c.value.encryptedTokenJarContents];lv(this,a)}};
function lv(a,b){if(b.encryptedTokenJarContents&&(a.h[b.encryptedTokenJarContents]=b,"string"===typeof b.expirationSeconds)){var c=Number(b.expirationSeconds);setTimeout(function(){delete a.h[b.encryptedTokenJarContents]},1E3*c);
a.i&&Nn("CONSISTENCY",b.encryptedTokenJarContents,c,void 0,!0)}}
;var mv=window.location.hostname.split(".").slice(-2).join(".");function nv(){var a=N("LOCATION_PLAYABILITY_TOKEN");"TVHTML5"===N("INNERTUBE_CLIENT_NAME")&&(this.h=ov(this))&&(a=this.h.get("yt-location-playability-token"));a&&(this.locationPlayabilityToken=a,this.i=void 0)}
var pv;function qv(){pv=A("yt.clientLocationService.instance");pv||(pv=new nv,z("yt.clientLocationService.instance",pv));return pv}
k=nv.prototype;k.setLocationOnInnerTubeContext=function(a){a.client||(a.client={});this.i?(a.client.locationInfo||(a.client.locationInfo={}),a.client.locationInfo.latitudeE7=Math.floor(1E7*this.i.coords.latitude),a.client.locationInfo.longitudeE7=Math.floor(1E7*this.i.coords.longitude),a.client.locationInfo.horizontalAccuracyMeters=Math.round(this.i.coords.accuracy),a.client.locationInfo.forceLocationPlayabilityTokenRefresh=!0):this.locationPlayabilityToken&&(a.client.locationPlayabilityToken=this.locationPlayabilityToken)};
k.handleResponse=function(a){var b;a=null==(b=a.responseContext)?void 0:b.locationPlayabilityToken;void 0!==a&&(this.locationPlayabilityToken=a,this.i=void 0,"TVHTML5"===N("INNERTUBE_CLIENT_NAME")?(this.h=ov(this))&&this.h.set("yt-location-playability-token",a,15552E3):Nn("YT_CL",JSON.stringify({loctok:a}),15552E3,mv,!0))};
function ov(a){return void 0===a.h?new no("yt-client-location"):a.h}
k.clearLocationPlayabilityToken=function(a){"TVHTML5"===a?(this.h=ov(this))&&this.h.remove("yt-location-playability-token"):On("YT_CL")};
k.getCurrentPositionFromGeolocation=function(){var a=this;if(!(navigator&&navigator.geolocation&&navigator.geolocation.getCurrentPosition))return Promise.reject(Error("Geolocation unsupported"));var b=!1,c=1E4;"MWEB"===N("INNERTUBE_CLIENT_NAME")&&(b=!0,c=15E3);return new Promise(function(d,e){navigator.geolocation.getCurrentPosition(function(f){a.i=f;d(f)},function(f){e(f)},{enableHighAccuracy:b,
maximumAge:0,timeout:c})})};
k.createUnpluggedLocationInfo=function(a){var b={};a=a.coords;if(null==a?0:a.latitude)b.latitudeE7=Math.floor(1E7*a.latitude);if(null==a?0:a.longitude)b.longitudeE7=Math.floor(1E7*a.longitude);if(null==a?0:a.accuracy)b.locationRadiusMeters=Math.round(a.accuracy);return b};function rv(a,b){var c,d=null==(c=ft(a,bl))?void 0:c.signal;if(d&&b.Qb&&(c=b.Qb[d]))return c();var e;if((c=null==(e=ft(a,$k))?void 0:e.request)&&b.he&&(e=b.he[c]))return e();for(var f in a)if(b.gd[f]&&(a=b.gd[f]))return a()}
;function sv(a){return function(){return new a}}
;var tv={},uv=(tv.WEB_UNPLUGGED="^unplugged/",tv.WEB_UNPLUGGED_ONBOARDING="^unplugged/",tv.WEB_UNPLUGGED_OPS="^unplugged/",tv.WEB_UNPLUGGED_PUBLIC="^unplugged/",tv.WEB_CREATOR="^creator/",tv.WEB_KIDS="^kids/",tv.WEB_EXPERIMENTS="^experiments/",tv.WEB_MUSIC="^music/",tv.WEB_REMIX="^music/",tv.WEB_MUSIC_EMBEDDED_PLAYER="^music/",tv.WEB_MUSIC_EMBEDDED_PLAYER="^main_app/|^sfv/",tv);
function vv(a){var b=void 0===b?"UNKNOWN_INTERFACE":b;if(1===a.length)return a[0];var c=uv[b];if(c){var d=new RegExp(c),e=r(a);for(c=e.next();!c.done;c=e.next())if(c=c.value,d.exec(c))return c}var f=[];Object.entries(uv).forEach(function(g){var h=r(g);g=h.next().value;h=h.next().value;b!==g&&f.push(h)});
d=new RegExp(f.join("|"));a.sort(function(g,h){return g.length-h.length});
e=r(a);for(c=e.next();!c.done;c=e.next())if(c=c.value,!d.exec(c))return c;return a[0]}
;function wv(){}
wv.prototype.m=function(a,b,c){b=void 0===b?{}:b;c=void 0===c?Kn:c;var d=a.clickTrackingParams,e=this.l,f=!1;f=void 0===f?!1:f;e=void 0===e?!1:e;var g=N("INNERTUBE_CONTEXT");if(g){g=ub(g);O("web_no_tracking_params_in_shell_killswitch")||delete g.clickTracking;g.client||(g.client={});var h=g.client;"MWEB"===h.clientName&&(h.clientFormFactor=N("IS_TABLET")?"LARGE_FORM_FACTOR":"SMALL_FORM_FACTOR");h.screenWidthPoints=window.innerWidth;h.screenHeightPoints=window.innerHeight;h.screenPixelDensity=Math.round(window.devicePixelRatio||
1);h.screenDensityFloat=window.devicePixelRatio||1;h.utcOffsetMinutes=-Math.floor((new Date).getTimezoneOffset());var l=void 0===l?!1:l;Tn();var m="USER_INTERFACE_THEME_LIGHT";Wn(165)?m="USER_INTERFACE_THEME_DARK":Wn(174)?m="USER_INTERFACE_THEME_LIGHT":!O("kevlar_legacy_browsers")&&window.matchMedia&&window.matchMedia("(prefers-color-scheme)").matches&&window.matchMedia("(prefers-color-scheme: dark)").matches&&(m="USER_INTERFACE_THEME_DARK");l=l?m:jv()||m;h.userInterfaceTheme=l;if(!f){if(l=co())h.connectionType=
l;O("web_log_effective_connection_type")&&(l=eo())&&(g.client.effectiveConnectionType=l)}var n;if(O("web_log_memory_total_kbytes")&&(null==(n=y.navigator)?0:n.deviceMemory)){var q;n=null==(q=y.navigator)?void 0:q.deviceMemory;g.client.memoryTotalKbytes=""+1E6*n}q=Sm(y.location.href);!O("web_populate_internal_geo_killswitch")&&q.internalcountrycode&&(h.internalGeo=q.internalcountrycode);"MWEB"===h.clientName||"WEB"===h.clientName?(h.mainAppWebInfo={graftUrl:y.location.href},O("kevlar_woffle")&&Ln.h&&
(q=Ln.h,h.mainAppWebInfo.pwaInstallabilityStatus=!q.h&&q.i?"PWA_INSTALLABILITY_STATUS_CAN_BE_INSTALLED":"PWA_INSTALLABILITY_STATUS_UNKNOWN"),h.mainAppWebInfo.webDisplayMode=Mn(),h.mainAppWebInfo.isWebNativeShareAvailable=navigator&&void 0!==navigator.share):"TVHTML5"===h.clientName&&(!O("web_lr_app_quality_killswitch")&&(q=N("LIVING_ROOM_APP_QUALITY"))&&(h.tvAppInfo=Object.assign(h.tvAppInfo||{},{appQuality:q})),q=N("LIVING_ROOM_CERTIFICATION_SCOPE"))&&(h.tvAppInfo=Object.assign(h.tvAppInfo||{},{certificationScope:q}));
if(!O("web_populate_time_zone_itc_killswitch")){b:{if("undefined"!==typeof Intl)try{var u=(new Intl.DateTimeFormat).resolvedOptions().timeZone;break b}catch($a){}u=void 0}u&&(h.timeZone=u)}(u=Zm())?h.experimentsToken=u:delete h.experimentsToken;u=$m();kv.h||(kv.h=new kv);h=kv.h.h;q=[];n=0;for(var t in h)q[n++]=h[t];g.request=Object.assign({},g.request,{internalExperimentFlags:u,consistencyTokenJars:q});!O("web_prequest_context_killswitch")&&(t=N("INNERTUBE_CONTEXT_PREQUEST_CONTEXT"))&&(g.request.externalPrequestContext=
t);u=Tn();t=Wn(58);u=u.get("gsml","");g.user=Object.assign({},g.user);t&&(g.user.enableSafetyMode=t);u&&(g.user.lockedSafetyMode=!0);O("warm_op_csn_cleanup")?e&&(f=Hu())&&(g.clientScreenNonce=f):!f&&(f=Hu())&&(g.clientScreenNonce=f);d&&(g.clickTracking={clickTrackingParams:d});if(d=A("yt.mdx.remote.remoteClient_"))g.remoteClient=d;qv().setLocationOnInnerTubeContext(g);try{var B=Vm(),C=B.bid;delete B.bid;g.adSignalsInfo={params:[],bid:C};var F=r(Object.entries(B));for(var M=F.next();!M.done;M=F.next()){var S=
r(M.value),R=S.next().value,X=S.next().value;B=R;C=X;d=void 0;null==(d=g.adSignalsInfo.params)||d.push({key:B,value:""+C})}}catch($a){lu($a)}F=g}else lu(Error("Error: No InnerTubeContext shell provided in ytconfig.")),F={};F={context:F};if(M=this.h(a)){this.i(F,M,b);var Y;b="/youtubei/v1/"+vv(this.j());(M=null==(Y=ft(a.commandMetadata,al))?void 0:Y.apiUrl)&&(b=M);Y=b;(b=N("INNERTUBE_HOST_OVERRIDE"))&&(Y=String(b)+String(xc(Y)));b={};b.key=N("INNERTUBE_API_KEY");O("json_condensed_response")&&(b.prettyPrint=
"false");Y=Tm(Y,b||{},!1);a=Object.assign({},{command:a},void 0);a={input:Y,kb:Wu(Y),Ja:F,config:a};a.config.Yb?a.config.Yb.identity=c:a.config.Yb={identity:c};return a}lu(new P("Error: Failed to create Request from Command.",a))};
da.Object.defineProperties(wv.prototype,{l:{configurable:!0,enumerable:!0,get:function(){return!1}}});function xv(){}
v(xv,wv);xv.prototype.m=function(){return{input:"/getDatasyncIdsEndpoint",kb:Wu("/getDatasyncIdsEndpoint","GET"),Ja:{}}};
xv.prototype.j=function(){return[]};
xv.prototype.h=function(){};
xv.prototype.i=function(){};var yv={},zv=(yv.GET_DATASYNC_IDS=sv(xv),yv);function Av(a){var b=Ja.apply(1,arguments);if(!Bv(a)||b.some(function(d){return!Bv(d)}))throw Error("Only objects may be merged.");
b=r(b);for(var c=b.next();!c.done;c=b.next())Cv(a,c.value);return a}
function Cv(a,b){for(var c in b)if(Bv(b[c])){if(c in a&&!Bv(a[c]))throw Error("Cannot merge an object into a non-object.");c in a||(a[c]={});Cv(a[c],b[c])}else if(Dv(b[c])){if(c in a&&!Dv(a[c]))throw Error("Cannot merge an array into a non-array.");c in a||(a[c]=[]);Ev(a[c],b[c])}else a[c]=b[c];return a}
function Ev(a,b){b=r(b);for(var c=b.next();!c.done;c=b.next())c=c.value,Bv(c)?a.push(Cv({},c)):Dv(c)?a.push(Ev([],c)):a.push(c);return a}
function Bv(a){return"object"===typeof a&&!Array.isArray(a)}
function Dv(a){return"object"===typeof a&&Array.isArray(a)}
;function Fv(a){var b;(b=A("ytcsi."+(a||"")+"data_"))||(b={tick:{},info:{}},z("ytcsi."+(a||"")+"data_",b));return b}
function Gv(){var a=Fv();a.info||(a.info={});return a.info}
function Hv(a){a=Fv(a);a.metadata||(a.metadata={});return a.metadata}
function Iv(a){a=Fv(a);a.tick||(a.tick={});return a.tick}
function Jv(a){a=Fv(a);if(a.gel){var b=a.gel;b.gelInfos||(b.gelInfos={});b.gelTicks||(b.gelTicks={})}else a.gel={gelTicks:{},gelInfos:{}};return a.gel}
function Kv(a){a=Jv(a);a.gelInfos||(a.gelInfos={});return a.gelInfos}
function Lv(a){var b=Fv(a).nonce;b||(b=wu(),Fv(a).nonce=b);return b}
;function Mv(){var a=A("ytcsi.debug");a||(a=[],z("ytcsi.debug",a),z("ytcsi.reference",{}));return a}
function Nv(a){a=a||"";var b=A("ytcsi.reference");b||(Mv(),b=A("ytcsi.reference"));if(b[a])return b[a];var c=Mv(),d={timerName:a,info:{},tick:{},span:{},jspbInfo:[]};c.push(d);return b[a]=d}
;var T={},Ov=(T.auto_search="LATENCY_ACTION_AUTO_SEARCH",T.ad_to_ad="LATENCY_ACTION_AD_TO_AD",T.ad_to_video="LATENCY_ACTION_AD_TO_VIDEO",T["analytics.explore"]="LATENCY_ACTION_CREATOR_ANALYTICS_EXPLORE",T.app_startup="LATENCY_ACTION_APP_STARTUP",T["artist.analytics"]="LATENCY_ACTION_CREATOR_ARTIST_ANALYTICS",T["artist.events"]="LATENCY_ACTION_CREATOR_ARTIST_CONCERTS",T["artist.presskit"]="LATENCY_ACTION_CREATOR_ARTIST_PROFILE",T["asset.claimed_videos"]="LATENCY_ACTION_CREATOR_CMS_ASSET_CLAIMED_VIDEOS",
T["asset.composition"]="LATENCY_ACTION_CREATOR_CMS_ASSET_COMPOSITION",T["asset.embeds"]="LATENCY_ACTION_CREATOR_CMS_ASSET_EMBEDS",T["asset.issues"]="LATENCY_ACTION_CREATOR_CMS_ASSET_ISSUES",T["asset.licenses"]="LATENCY_ACTION_CREATOR_CMS_ASSET_LICENSES",T["asset.metadata"]="LATENCY_ACTION_CREATOR_CMS_ASSET_METADATA",T["asset.ownership"]="LATENCY_ACTION_CREATOR_CMS_ASSET_OWNERSHIP",T["asset.policy"]="LATENCY_ACTION_CREATOR_CMS_ASSET_POLICY",T["asset.references"]="LATENCY_ACTION_CREATOR_CMS_ASSET_REFERENCES",
T["asset.sound_recordings"]="LATENCY_ACTION_CREATOR_CMS_ASSET_SOUND_RECORDINGS",T["song.analytics"]="LATENCY_ACTION_CREATOR_SONG_ANALYTICS",T.browse="LATENCY_ACTION_BROWSE",T.cast_splash="LATENCY_ACTION_CAST_SPLASH",T.channels="LATENCY_ACTION_CHANNELS",T.creator_channel_dashboard="LATENCY_ACTION_CREATOR_CHANNEL_DASHBOARD",T["channel.analytics"]="LATENCY_ACTION_CREATOR_CHANNEL_ANALYTICS",T["channel.comments"]="LATENCY_ACTION_CREATOR_CHANNEL_COMMENTS",T["channel.content"]="LATENCY_ACTION_CREATOR_POST_LIST",
T["channel.content.promotions"]="LATENCY_ACTION_CREATOR_PROMOTION_LIST",T["channel.copyright"]="LATENCY_ACTION_CREATOR_CHANNEL_COPYRIGHT",T["channel.editing"]="LATENCY_ACTION_CREATOR_CHANNEL_EDITING",T["channel.monetization"]="LATENCY_ACTION_CREATOR_CHANNEL_MONETIZATION",T["channel.music"]="LATENCY_ACTION_CREATOR_CHANNEL_MUSIC",T["channel.music_storefront"]="LATENCY_ACTION_CREATOR_CHANNEL_MUSIC_STOREFRONT",T["channel.playlists"]="LATENCY_ACTION_CREATOR_CHANNEL_PLAYLISTS",T["channel.translations"]=
"LATENCY_ACTION_CREATOR_CHANNEL_TRANSLATIONS",T["channel.videos"]="LATENCY_ACTION_CREATOR_CHANNEL_VIDEOS",T["channel.live_streaming"]="LATENCY_ACTION_CREATOR_LIVE_STREAMING",T.chips="LATENCY_ACTION_CHIPS",T["dialog.copyright_strikes"]="LATENCY_ACTION_CREATOR_DIALOG_COPYRIGHT_STRIKES",T["dialog.video_copyright"]="LATENCY_ACTION_CREATOR_DIALOG_VIDEO_COPYRIGHT",T["dialog.uploads"]="LATENCY_ACTION_CREATOR_DIALOG_UPLOADS",T.direct_playback="LATENCY_ACTION_DIRECT_PLAYBACK",T.embed="LATENCY_ACTION_EMBED",
T.entity_key_serialization_perf="LATENCY_ACTION_ENTITY_KEY_SERIALIZATION_PERF",T.entity_key_deserialization_perf="LATENCY_ACTION_ENTITY_KEY_DESERIALIZATION_PERF",T.explore="LATENCY_ACTION_EXPLORE",T.home="LATENCY_ACTION_HOME",T.library="LATENCY_ACTION_LIBRARY",T.live="LATENCY_ACTION_LIVE",T.live_pagination="LATENCY_ACTION_LIVE_PAGINATION",T.onboarding="LATENCY_ACTION_ONBOARDING",T.owner="LATENCY_ACTION_CREATOR_CMS_DASHBOARD",T["owner.allowlist"]="LATENCY_ACTION_CREATOR_CMS_ALLOWLIST",T["owner.analytics"]=
"LATENCY_ACTION_CREATOR_CMS_ANALYTICS",T["owner.art_tracks"]="LATENCY_ACTION_CREATOR_CMS_ART_TRACKS",T["owner.assets"]="LATENCY_ACTION_CREATOR_CMS_ASSETS",T["owner.asset_groups"]="LATENCY_ACTION_CREATOR_CMS_ASSET_GROUPS",T["owner.campaigns"]="LATENCY_ACTION_CREATOR_CMS_CAMPAIGNS",T["owner.channels"]="LATENCY_ACTION_CREATOR_CMS_CHANNELS",T["owner.claimed_videos"]="LATENCY_ACTION_CREATOR_CMS_CLAIMED_VIDEOS",T["owner.claims"]="LATENCY_ACTION_CREATOR_CMS_MANUAL_CLAIMING",T["owner.claims.manual"]="LATENCY_ACTION_CREATOR_CMS_MANUAL_CLAIMING",
T["owner.delivery"]="LATENCY_ACTION_CREATOR_CMS_CONTENT_DELIVERY",T["owner.issues"]="LATENCY_ACTION_CREATOR_CMS_ISSUES",T["owner.licenses"]="LATENCY_ACTION_CREATOR_CMS_LICENSES",T["owner.pitch_music"]="LATENCY_ACTION_CREATOR_CMS_PITCH_MUSIC",T["owner.policies"]="LATENCY_ACTION_CREATOR_CMS_POLICIES",T["owner.releases"]="LATENCY_ACTION_CREATOR_CMS_RELEASES",T["owner.reports"]="LATENCY_ACTION_CREATOR_CMS_REPORTS",T["owner.videos"]="LATENCY_ACTION_CREATOR_CMS_VIDEOS",T.parent_profile_settings="LATENCY_ACTION_KIDS_PARENT_PROFILE_SETTINGS",
T.parent_tools_collection="LATENCY_ACTION_PARENT_TOOLS_COLLECTION",T.parent_tools_dashboard="LATENCY_ACTION_PARENT_TOOLS_DASHBOARD",T.player_att="LATENCY_ACTION_PLAYER_ATTESTATION",T["post.comments"]="LATENCY_ACTION_CREATOR_POST_COMMENTS",T["post.edit"]="LATENCY_ACTION_CREATOR_POST_EDIT",T.prebuffer="LATENCY_ACTION_PREBUFFER",T.prefetch="LATENCY_ACTION_PREFETCH",T.profile_settings="LATENCY_ACTION_KIDS_PROFILE_SETTINGS",T.profile_switcher="LATENCY_ACTION_LOGIN",T.reel_watch="LATENCY_ACTION_REEL_WATCH",
T.results="LATENCY_ACTION_RESULTS",T["promotion.edit"]="LATENCY_ACTION_CREATOR_PROMOTION_EDIT",T.search_ui="LATENCY_ACTION_SEARCH_UI",T.search_suggest="LATENCY_ACTION_SUGGEST",T.search_zero_state="LATENCY_ACTION_SEARCH_ZERO_STATE",T.secret_code="LATENCY_ACTION_KIDS_SECRET_CODE",T.seek="LATENCY_ACTION_PLAYER_SEEK",T.settings="LATENCY_ACTION_SETTINGS",T.store="LATENCY_ACTION_STORE",T.tenx="LATENCY_ACTION_TENX",T.video_to_ad="LATENCY_ACTION_VIDEO_TO_AD",T.watch="LATENCY_ACTION_WATCH",T.watch_it_again=
"LATENCY_ACTION_KIDS_WATCH_IT_AGAIN",T["watch,watch7"]="LATENCY_ACTION_WATCH",T["watch,watch7_html5"]="LATENCY_ACTION_WATCH",T["watch,watch7ad"]="LATENCY_ACTION_WATCH",T["watch,watch7ad_html5"]="LATENCY_ACTION_WATCH",T.wn_comments="LATENCY_ACTION_LOAD_COMMENTS",T.ww_rqs="LATENCY_ACTION_WHO_IS_WATCHING",T["video.analytics"]="LATENCY_ACTION_CREATOR_VIDEO_ANALYTICS",T["video.claims"]="LATENCY_ACTION_CREATOR_VIDEO_CLAIMS",T["video.comments"]="LATENCY_ACTION_CREATOR_VIDEO_COMMENTS",T["video.copyright"]=
"LATENCY_ACTION_CREATOR_VIDEO_COPYRIGHT",T["video.edit"]="LATENCY_ACTION_CREATOR_VIDEO_EDIT",T["video.editor"]="LATENCY_ACTION_CREATOR_VIDEO_VIDEO_EDITOR",T["video.editor_async"]="LATENCY_ACTION_CREATOR_VIDEO_VIDEO_EDITOR_ASYNC",T["video.live_settings"]="LATENCY_ACTION_CREATOR_VIDEO_LIVE_SETTINGS",T["video.live_streaming"]="LATENCY_ACTION_CREATOR_VIDEO_LIVE_STREAMING",T["video.monetization"]="LATENCY_ACTION_CREATOR_VIDEO_MONETIZATION",T["video.policy"]="LATENCY_ACTION_CREATOR_VIDEO_POLICY",T["video.rights_management"]=
"LATENCY_ACTION_CREATOR_VIDEO_RIGHTS_MANAGEMENT",T["video.translations"]="LATENCY_ACTION_CREATOR_VIDEO_TRANSLATIONS",T.voice_assistant="LATENCY_ACTION_VOICE_ASSISTANT",T.cast_load_by_entity_to_watch="LATENCY_ACTION_CAST_LOAD_BY_ENTITY_TO_WATCH",T.networkless_performance="LATENCY_ACTION_NETWORKLESS_PERFORMANCE",T.gel_compression="LATENCY_ACTION_GEL_COMPRESSION",T),U={},Pv=(U.ad_allowed="adTypesAllowed",U.yt_abt="adBreakType",U.ad_cpn="adClientPlaybackNonce",U.ad_docid="adVideoId",U.yt_ad_an="adNetworks",
U.ad_at="adType",U.aida="appInstallDataAgeMs",U.browse_id="browseId",U.p="httpProtocol",U.t="transportProtocol",U.cs="commandSource",U.cpn="clientPlaybackNonce",U.ccs="creatorInfo.creatorCanaryState",U.ctop="creatorInfo.topEntityType",U.csn="clientScreenNonce",U.docid="videoId",U.GetHome_rid="requestIds",U.GetSearch_rid="requestIds",U.GetPlayer_rid="requestIds",U.GetWatchNext_rid="requestIds",U.GetBrowse_rid="requestIds",U.GetLibrary_rid="requestIds",U.is_continuation="isContinuation",U.is_nav="isNavigation",
U.b_p="kabukiInfo.browseParams",U.is_prefetch="kabukiInfo.isPrefetch",U.is_secondary_nav="kabukiInfo.isSecondaryNav",U.nav_type="kabukiInfo.navigationType",U.prev_browse_id="kabukiInfo.prevBrowseId",U.query_source="kabukiInfo.querySource",U.voz_type="kabukiInfo.vozType",U.yt_lt="loadType",U.mver="creatorInfo.measurementVersion",U.yt_ad="isMonetized",U.nr="webInfo.navigationReason",U.nrsu="navigationRequestedSameUrl",U.pnt="performanceNavigationTiming",U.prt="playbackRequiresTap",U.plt="playerInfo.playbackType",
U.pis="playerInfo.playerInitializedState",U.paused="playerInfo.isPausedOnLoad",U.yt_pt="playerType",U.fmt="playerInfo.itag",U.yt_pl="watchInfo.isPlaylist",U.yt_pre="playerInfo.preloadType",U.yt_ad_pr="prerollAllowed",U.pa="previousAction",U.yt_red="isRedSubscriber",U.rce="mwebInfo.responseContentEncoding",U.rc="resourceInfo.resourceCache",U.scrh="screenHeight",U.scrw="screenWidth",U.st="serverTimeMs",U.ssdm="shellStartupDurationMs",U.br_trs="tvInfo.bedrockTriggerState",U.kebqat="kabukiInfo.earlyBrowseRequestInfo.abandonmentType",
U.kebqa="kabukiInfo.earlyBrowseRequestInfo.adopted",U.label="tvInfo.label",U.is_mdx="tvInfo.isMdx",U.preloaded="tvInfo.isPreloaded",U.aac_type="tvInfo.authAccessCredentialType",U.upg_player_vis="playerInfo.visibilityState",U.query="unpluggedInfo.query",U.upg_chip_ids_string="unpluggedInfo.upgChipIdsString",U.yt_vst="videoStreamType",U.vph="viewportHeight",U.vpw="viewportWidth",U.yt_vis="isVisible",U.rcl="mwebInfo.responseContentLength",U.GetSettings_rid="requestIds",U.GetTrending_rid="requestIds",
U.GetMusicSearchSuggestions_rid="requestIds",U.REQUEST_ID="requestIds",U),Qv="isContinuation isNavigation kabukiInfo.earlyBrowseRequestInfo.adopted kabukiInfo.isPrefetch kabukiInfo.isSecondaryNav isMonetized navigationRequestedSameUrl performanceNavigationTiming playerInfo.isPausedOnLoad prerollAllowed isRedSubscriber tvInfo.isMdx tvInfo.isPreloaded isVisible watchInfo.isPlaylist playbackRequiresTap".split(" "),Rv={},Sv=(Rv.ccs="CANARY_STATE_",Rv.mver="MEASUREMENT_VERSION_",Rv.pis="PLAYER_INITIALIZED_STATE_",
Rv.yt_pt="LATENCY_PLAYER_",Rv.pa="LATENCY_ACTION_",Rv.ctop="TOP_ENTITY_TYPE_",Rv.yt_vst="VIDEO_STREAM_TYPE_",Rv),Tv="all_vc ap aq c cbr cbrand cbrver cmodel cos cosver cplatform ctheme cver ei l_an l_mm plid srt yt_fss yt_li vpst vpni2 vpil2 icrc icrt pa GetAccountOverview_rid GetHistory_rid cmt d_vpct d_vpnfi d_vpni nsru pc pfa pfeh pftr pnc prerender psc rc start tcrt tcrc ssr vpr vps yt_abt yt_fn yt_fs yt_pft yt_pre yt_pt yt_pvis ytu_pvis yt_ref yt_sts tds".split(" ");
function Uv(a){return Ov[a]||"LATENCY_ACTION_UNKNOWN"}
function Vv(a,b,c){c=Jv(c);if(c.gelInfos)c.gelInfos[a]=!0;else{var d={};c.gelInfos=(d[a]=!0,d)}if(a.match("_rid")){var e=a.split("_rid")[0];a="REQUEST_ID"}if(a in Pv){c=Pv[a];0<=eb(Qv,c)&&(b=!!b);a in Sv&&"string"===typeof b&&(b=Sv[a]+b.toUpperCase());a=b;b=c.split(".");for(var f=d={},g=0;g<b.length-1;g++){var h=b[g];f[h]={};f=f[h]}f[b[b.length-1]]="requestIds"===c?[{id:a,endpoint:e}]:a;return Av({},d)}0<=eb(Tv,a)||mu(new P("Unknown label logged with GEL CSI",a))}
;var V={LATENCY_ACTION_SHORTS_VIDEO_INGESTION_TRANSCODING:179,LATENCY_ACTION_KIDS_PROFILE_SWITCHER:90,LATENCY_ACTION_OFFLINE_THUMBNAIL_TRANSFER:100,LATENCY_ACTION_CREATOR_VIDEO_VIDEO_EDITOR_ASYNC:46,LATENCY_ACTION_CREATOR_VIDEO_VIDEO_EDITOR:37,LATENCY_ACTION_SPINNER_DISPLAYED:14,LATENCY_ACTION_PLAYABILITY_CHECK:10,LATENCY_ACTION_PROCESS:9,LATENCY_ACTION_APP_STARTUP:5,LATENCY_ACTION_GEL_COMPRESSION:215,LATENCY_ACTION_PREMIUM_PAGE_GET_BROWSE:204,LATENCY_ACTION_COMMERCE_ACTION_COMMAND_RPC:203,LATENCY_ACTION_COMMERCE_TRANSACTION:184,
LATENCY_ACTION_LOG_PAYMENT_SERVER_ANALYTICS_RPC:173,LATENCY_ACTION_GET_PAYMENT_INSTRUMENTS_PARAMS_RPC:172,LATENCY_ACTION_GET_FIX_INSTRUMENT_PARAMS_RPC:171,LATENCY_ACTION_RESUME_SUBSCRIPTION_RPC:170,LATENCY_ACTION_PAUSE_SUBSCRIPTION_RPC:169,LATENCY_ACTION_GET_OFFLINE_UPSELL_RPC:168,LATENCY_ACTION_GET_OFFERS_RPC:167,LATENCY_ACTION_GET_CANCELLATION_YT_FLOW_RPC:166,LATENCY_ACTION_GET_CANCELLATION_FLOW_RPC:165,LATENCY_ACTION_UPDATE_CROSS_DEVICE_OFFLINE_STATE_RPC:164,LATENCY_ACTION_GET_OFFER_DETAILS_RPC:163,
LATENCY_ACTION_CANCEL_RECURRENCE_TRANSACTION_RPC:162,LATENCY_ACTION_GET_TIP_MODULE_RPC:161,LATENCY_ACTION_HANDLE_TRANSACTION_RPC:160,LATENCY_ACTION_COMPLETE_TRANSACTION_RPC:159,LATENCY_ACTION_GET_CART_RPC:158,LATENCY_ACTION_THUMBNAIL_FETCH:156,LATENCY_ACTION_ABANDONED_DIRECT_PLAYBACK:154,LATENCY_ACTION_SHARE_VIDEO:153,LATENCY_ACTION_AD_TO_VIDEO_INT:152,LATENCY_ACTION_ABANDONED_BROWSE:151,LATENCY_ACTION_PLAYER_ROTATION:150,LATENCY_ACTION_GENERIC_WEB_VIEW:183,LATENCY_ACTION_SHOPPING_IN_APP:124,LATENCY_ACTION_PLAYER_ATTESTATION:121,
LATENCY_ACTION_PLAYER_SEEK:119,LATENCY_ACTION_SUPER_STICKER_BUY_FLOW:114,LATENCY_ACTION_DOWNLOADS_DATA_ACCESS:180,LATENCY_ACTION_BLOCKS_PERFORMANCE:148,LATENCY_ACTION_ASSISTANT_QUERY:138,LATENCY_ACTION_ASSISTANT_SETTINGS:137,LATENCY_ACTION_ENTITY_KEY_DESERIALIZATION_PERF:129,LATENCY_ACTION_ENTITY_KEY_SERIALIZATION_PERF:128,LATENCY_ACTION_PROOF_OF_ORIGIN_TOKEN_CREATE:127,LATENCY_ACTION_EMBEDS_SDK_INITIALIZATION:123,LATENCY_ACTION_NETWORKLESS_PERFORMANCE:122,LATENCY_ACTION_DOWNLOADS_EXPANSION:133,LATENCY_ACTION_ENTITY_TRANSFORM:131,
LATENCY_ACTION_DOWNLOADS_COMPATIBILITY_LAYER:96,LATENCY_ACTION_EMBEDS_SET_VIDEO:95,LATENCY_ACTION_SETTINGS:93,LATENCY_ACTION_ABANDONED_STARTUP:81,LATENCY_ACTION_MEDIA_BROWSER_ALARM_PLAY:80,LATENCY_ACTION_MEDIA_BROWSER_SEARCH:79,LATENCY_ACTION_MEDIA_BROWSER_LOAD_TREE:78,LATENCY_ACTION_WHO_IS_WATCHING:77,LATENCY_ACTION_CAST_LOAD_BY_ENTITY_TO_WATCH:76,LATENCY_ACTION_LITE_SWITCH_ACCOUNT:73,LATENCY_ACTION_ELEMENTS_PERFORMANCE:70,LATENCY_ACTION_LOCATION_SIGNAL_COLLECTION:69,LATENCY_ACTION_MODIFY_CHANNEL_NOTIFICATION:65,
LATENCY_ACTION_OFFLINE_STORE_START:61,LATENCY_ACTION_REEL_EDITOR:58,LATENCY_ACTION_CHANNEL_SUBSCRIBE:56,LATENCY_ACTION_CHANNEL_PREVIEW:55,LATENCY_ACTION_PREFETCH:52,LATENCY_ACTION_ABANDONED_WATCH:45,LATENCY_ACTION_LOAD_COMMENT_REPLIES:26,LATENCY_ACTION_LOAD_COMMENTS:25,LATENCY_ACTION_EDIT_COMMENT:24,LATENCY_ACTION_NEW_COMMENT:23,LATENCY_ACTION_OFFLINE_SHARING_RECEIVER_PAIRING:19,LATENCY_ACTION_EMBED:18,LATENCY_ACTION_MDX_LAUNCH:15,LATENCY_ACTION_RESOLVE_URL:13,LATENCY_ACTION_CAST_SPLASH:149,LATENCY_ACTION_MDX_CONNECT_TO_SESSION:190,
LATENCY_ACTION_MDX_STREAM_TRANSFER:178,LATENCY_ACTION_MDX_CAST:120,LATENCY_ACTION_MDX_COMMAND:12,LATENCY_ACTION_MOBILE_LIVE_NAV_MDE:231,LATENCY_ACTION_REEL_SELECT_SEGMENT:136,LATENCY_ACTION_ACCELERATED_EFFECTS:145,LATENCY_ACTION_SHORTS_LOAD_PROJECT:234,LATENCY_ACTION_SHORTS_TRIM_TO_EDITOR_TRANSCODING:229,LATENCY_ACTION_EDIT_AUDIO_GEN:182,LATENCY_ACTION_UPLOAD_AUDIO_MIXER:147,LATENCY_ACTION_SHORTS_CLIENT_SIDE_RENDERING:157,LATENCY_ACTION_SHORTS_SEG_IMP_TRANSCODING:146,LATENCY_ACTION_SHORTS_AUDIO_PICKER_PLAYBACK:130,
LATENCY_ACTION_SHORTS_WAVEFORM_DOWNLOAD:125,LATENCY_ACTION_SHORTS_VIDEO_INGESTION:155,LATENCY_ACTION_SHORTS_GALLERY:107,LATENCY_ACTION_SHORTS_TRIM:105,LATENCY_ACTION_SHORTS_EDIT:104,LATENCY_ACTION_SHORTS_CAMERA:103,LATENCY_ACTION_CREATION_MODES_MODE_SWITCH:236,LATENCY_ACTION_CREATION_MODES_GLOBAL_ENTRYPOINT:235,LATENCY_ACTION_PRODUCER_IMPORT_LOCAL_MEDIA:233,LATENCY_ACTION_PRODUCER_EXPORT_PROJECT:193,LATENCY_ACTION_PRODUCER_EDITOR:192,LATENCY_ACTION_PARENT_TOOLS_DASHBOARD:102,LATENCY_ACTION_PARENT_TOOLS_COLLECTION:101,
LATENCY_ACTION_MUSIC_OFFLINE_PLAYLIST_DETAIL:238,LATENCY_ACTION_MUSIC_OFFLINE_ALBUM_DETAIL:237,LATENCY_ACTION_MUSIC_LOAD_RECOMMENDED_MEDIA_ITEMS:116,LATENCY_ACTION_MUSIC_LOAD_MEDIA_ITEMS:115,LATENCY_ACTION_MUSIC_ALBUM_DETAIL:72,LATENCY_ACTION_MUSIC_PLAYLIST_DETAIL:71,LATENCY_ACTION_STORE:175,LATENCY_ACTION_CHIPS:68,LATENCY_ACTION_SEARCH_ZERO_STATE:67,LATENCY_ACTION_LIVE_PAGINATION:117,LATENCY_ACTION_LIVE:20,LATENCY_ACTION_PREBUFFER:40,LATENCY_ACTION_TENX:39,LATENCY_ACTION_KIDS_PROFILE_SETTINGS:94,
LATENCY_ACTION_KIDS_WATCH_IT_AGAIN:92,LATENCY_ACTION_KIDS_SECRET_CODE:91,LATENCY_ACTION_KIDS_PARENT_PROFILE_SETTINGS:89,LATENCY_ACTION_KIDS_ONBOARDING:88,LATENCY_ACTION_KIDS_VOICE_SEARCH:82,LATENCY_ACTION_KIDS_CURATED_COLLECTION:62,LATENCY_ACTION_KIDS_LIBRARY:53,LATENCY_ACTION_CREATOR_VIDEO_TRANSLATIONS:38,LATENCY_ACTION_CREATOR_VIDEO_RIGHTS_MANAGEMENT:219,LATENCY_ACTION_CREATOR_VIDEO_POLICY:217,LATENCY_ACTION_CREATOR_VIDEO_MONETIZATION:74,LATENCY_ACTION_CREATOR_VIDEO_LIVE_STREAMING:141,LATENCY_ACTION_CREATOR_VIDEO_LIVE_SETTINGS:142,
LATENCY_ACTION_CREATOR_VIDEO_EDITOR_ASYNC:51,LATENCY_ACTION_CREATOR_VIDEO_EDITOR:50,LATENCY_ACTION_CREATOR_VIDEO_EDIT:36,LATENCY_ACTION_CREATOR_VIDEO_COPYRIGHT:218,LATENCY_ACTION_CREATOR_VIDEO_COMMENTS:34,LATENCY_ACTION_CREATOR_VIDEO_CLAIMS:216,LATENCY_ACTION_CREATOR_VIDEO_ANALYTICS:33,LATENCY_ACTION_CREATOR_SONG_ANALYTICS:176,LATENCY_ACTION_CREATOR_PROMOTION_LIST:186,LATENCY_ACTION_CREATOR_PROMOTION_EDIT:185,LATENCY_ACTION_CREATOR_POST_LIST:112,LATENCY_ACTION_CREATOR_POST_EDIT:110,LATENCY_ACTION_CREATOR_POST_COMMENTS:111,
LATENCY_ACTION_CREATOR_LIVE_STREAMING:108,LATENCY_ACTION_CREATOR_DIALOG_VIDEO_COPYRIGHT:174,LATENCY_ACTION_CREATOR_DIALOG_UPLOADS:86,LATENCY_ACTION_CREATOR_DIALOG_COPYRIGHT_STRIKES:87,LATENCY_ACTION_CREATOR_CMS_VIDEOS:202,LATENCY_ACTION_CREATOR_CMS_REPORTS:201,LATENCY_ACTION_CREATOR_CMS_RELEASES:226,LATENCY_ACTION_CREATOR_CMS_POLICIES:225,LATENCY_ACTION_CREATOR_CMS_PITCH_MUSIC:224,LATENCY_ACTION_CREATOR_CMS_MANUAL_CLAIMING:200,LATENCY_ACTION_CREATOR_CMS_LICENSES:223,LATENCY_ACTION_CREATOR_CMS_ISSUES:191,
LATENCY_ACTION_CREATOR_CMS_DASHBOARD:199,LATENCY_ACTION_CREATOR_CMS_CONTENT_DELIVERY:198,LATENCY_ACTION_CREATOR_CMS_CLAIMED_VIDEOS:197,LATENCY_ACTION_CREATOR_CMS_CHANNELS:196,LATENCY_ACTION_CREATOR_CMS_CAMPAIGNS:222,LATENCY_ACTION_CREATOR_CMS_ASSET_SOUND_RECORDINGS:214,LATENCY_ACTION_CREATOR_CMS_ASSET_REFERENCES:209,LATENCY_ACTION_CREATOR_CMS_ASSET_POLICY:208,LATENCY_ACTION_CREATOR_CMS_ASSET_OWNERSHIP:207,LATENCY_ACTION_CREATOR_CMS_ASSET_METADATA:205,LATENCY_ACTION_CREATOR_CMS_ASSET_LICENSES:212,
LATENCY_ACTION_CREATOR_CMS_ASSET_ISSUES:206,LATENCY_ACTION_CREATOR_CMS_ASSET_GROUPS:221,LATENCY_ACTION_CREATOR_CMS_ASSET_EMBEDS:210,LATENCY_ACTION_CREATOR_CMS_ASSET_COMPOSITION:213,LATENCY_ACTION_CREATOR_CMS_ASSET_CLAIMED_VIDEOS:211,LATENCY_ACTION_CREATOR_CMS_ASSETS:195,LATENCY_ACTION_CREATOR_CMS_ART_TRACKS:220,LATENCY_ACTION_CREATOR_CMS_ANALYTICS:194,LATENCY_ACTION_CREATOR_CMS_ALLOWLIST:227,LATENCY_ACTION_CREATOR_CHANNEL_VIDEOS:32,LATENCY_ACTION_CREATOR_CHANNEL_TRANSLATIONS:48,LATENCY_ACTION_CREATOR_CHANNEL_PLAYLISTS:139,
LATENCY_ACTION_CREATOR_CHANNEL_MUSIC_STOREFRONT:177,LATENCY_ACTION_CREATOR_CHANNEL_MUSIC:99,LATENCY_ACTION_CREATOR_CHANNEL_MONETIZATION:43,LATENCY_ACTION_CREATOR_CHANNEL_EDITING:113,LATENCY_ACTION_CREATOR_CHANNEL_DASHBOARD:49,LATENCY_ACTION_CREATOR_CHANNEL_COPYRIGHT:44,LATENCY_ACTION_CREATOR_CHANNEL_COMMENTS:66,LATENCY_ACTION_CREATOR_CHANNEL_ANALYTICS:31,LATENCY_ACTION_CREATOR_ARTIST_PROFILE:85,LATENCY_ACTION_CREATOR_ARTIST_CONCERTS:84,LATENCY_ACTION_CREATOR_ARTIST_ANALYTICS:83,LATENCY_ACTION_CREATOR_ANALYTICS_EXPLORE:140,
LATENCY_ACTION_EXPERIMENTAL_WATCH_UI:181,LATENCY_ACTION_FINE_SCRUBBING_THUMBNAILS:228,LATENCY_ACTION_STORYBOARD_THUMBNAILS:118,LATENCY_ACTION_SEARCH_THUMBNAILS:59,LATENCY_ACTION_ON_DEVICE_MODEL_DOWNLOAD:54,LATENCY_ACTION_VOICE_ASSISTANT:47,LATENCY_ACTION_SEARCH_UI:35,LATENCY_ACTION_SUGGEST:30,LATENCY_ACTION_AUTO_SEARCH:126,LATENCY_ACTION_DOWNLOADS:98,LATENCY_ACTION_EXPLORE:75,LATENCY_ACTION_VIDEO_LIST:63,LATENCY_ACTION_HOME_RESUME:60,LATENCY_ACTION_SUBSCRIPTIONS_LIST:57,LATENCY_ACTION_THUMBNAIL_LOAD:42,
LATENCY_ACTION_FIRST_THUMBNAIL_LOAD:29,LATENCY_ACTION_SUBSCRIPTIONS_FEED:109,LATENCY_ACTION_SUBSCRIPTIONS:28,LATENCY_ACTION_TRENDING:27,LATENCY_ACTION_LIBRARY:21,LATENCY_ACTION_VIDEO_THUMBNAIL:8,LATENCY_ACTION_SHOW_MORE:7,LATENCY_ACTION_VIDEO_PREVIEW:6,LATENCY_ACTION_AD_TO_AD:22,LATENCY_ACTION_VIDEO_TO_AD:17,LATENCY_ACTION_AD_TO_VIDEO:16,LATENCY_ACTION_DIRECT_PLAYBACK:132,LATENCY_ACTION_PREBUFFER_VIDEO:144,LATENCY_ACTION_PREFETCH_VIDEO:143,LATENCY_ACTION_STARTUP:106,LATENCY_ACTION_INLINE_TO_WATCH:232,
LATENCY_ACTION_MUSIC_IMMERSIVE_WATCH:230,LATENCY_ACTION_ONBOARDING:135,LATENCY_ACTION_LOGIN:97,LATENCY_ACTION_REEL_WATCH:41,LATENCY_ACTION_WATCH:3,LATENCY_ACTION_RESULTS:2,LATENCY_ACTION_CHANNELS:4,LATENCY_ACTION_HOME:1,LATENCY_ACTION_BROWSE:11,LATENCY_ACTION_USER_ACTION:189,LATENCY_ACTION_INFRASTRUCTURE:188,LATENCY_ACTION_PAGE_NAVIGATION:187,LATENCY_ACTION_UNKNOWN:0};V[V.LATENCY_ACTION_SHORTS_VIDEO_INGESTION_TRANSCODING]="LATENCY_ACTION_SHORTS_VIDEO_INGESTION_TRANSCODING";
V[V.LATENCY_ACTION_KIDS_PROFILE_SWITCHER]="LATENCY_ACTION_KIDS_PROFILE_SWITCHER";V[V.LATENCY_ACTION_OFFLINE_THUMBNAIL_TRANSFER]="LATENCY_ACTION_OFFLINE_THUMBNAIL_TRANSFER";V[V.LATENCY_ACTION_CREATOR_VIDEO_VIDEO_EDITOR_ASYNC]="LATENCY_ACTION_CREATOR_VIDEO_VIDEO_EDITOR_ASYNC";V[V.LATENCY_ACTION_CREATOR_VIDEO_VIDEO_EDITOR]="LATENCY_ACTION_CREATOR_VIDEO_VIDEO_EDITOR";V[V.LATENCY_ACTION_SPINNER_DISPLAYED]="LATENCY_ACTION_SPINNER_DISPLAYED";V[V.LATENCY_ACTION_PLAYABILITY_CHECK]="LATENCY_ACTION_PLAYABILITY_CHECK";
V[V.LATENCY_ACTION_PROCESS]="LATENCY_ACTION_PROCESS";V[V.LATENCY_ACTION_APP_STARTUP]="LATENCY_ACTION_APP_STARTUP";V[V.LATENCY_ACTION_GEL_COMPRESSION]="LATENCY_ACTION_GEL_COMPRESSION";V[V.LATENCY_ACTION_PREMIUM_PAGE_GET_BROWSE]="LATENCY_ACTION_PREMIUM_PAGE_GET_BROWSE";V[V.LATENCY_ACTION_COMMERCE_ACTION_COMMAND_RPC]="LATENCY_ACTION_COMMERCE_ACTION_COMMAND_RPC";V[V.LATENCY_ACTION_COMMERCE_TRANSACTION]="LATENCY_ACTION_COMMERCE_TRANSACTION";V[V.LATENCY_ACTION_LOG_PAYMENT_SERVER_ANALYTICS_RPC]="LATENCY_ACTION_LOG_PAYMENT_SERVER_ANALYTICS_RPC";
V[V.LATENCY_ACTION_GET_PAYMENT_INSTRUMENTS_PARAMS_RPC]="LATENCY_ACTION_GET_PAYMENT_INSTRUMENTS_PARAMS_RPC";V[V.LATENCY_ACTION_GET_FIX_INSTRUMENT_PARAMS_RPC]="LATENCY_ACTION_GET_FIX_INSTRUMENT_PARAMS_RPC";V[V.LATENCY_ACTION_RESUME_SUBSCRIPTION_RPC]="LATENCY_ACTION_RESUME_SUBSCRIPTION_RPC";V[V.LATENCY_ACTION_PAUSE_SUBSCRIPTION_RPC]="LATENCY_ACTION_PAUSE_SUBSCRIPTION_RPC";V[V.LATENCY_ACTION_GET_OFFLINE_UPSELL_RPC]="LATENCY_ACTION_GET_OFFLINE_UPSELL_RPC";V[V.LATENCY_ACTION_GET_OFFERS_RPC]="LATENCY_ACTION_GET_OFFERS_RPC";
V[V.LATENCY_ACTION_GET_CANCELLATION_YT_FLOW_RPC]="LATENCY_ACTION_GET_CANCELLATION_YT_FLOW_RPC";V[V.LATENCY_ACTION_GET_CANCELLATION_FLOW_RPC]="LATENCY_ACTION_GET_CANCELLATION_FLOW_RPC";V[V.LATENCY_ACTION_UPDATE_CROSS_DEVICE_OFFLINE_STATE_RPC]="LATENCY_ACTION_UPDATE_CROSS_DEVICE_OFFLINE_STATE_RPC";V[V.LATENCY_ACTION_GET_OFFER_DETAILS_RPC]="LATENCY_ACTION_GET_OFFER_DETAILS_RPC";V[V.LATENCY_ACTION_CANCEL_RECURRENCE_TRANSACTION_RPC]="LATENCY_ACTION_CANCEL_RECURRENCE_TRANSACTION_RPC";
V[V.LATENCY_ACTION_GET_TIP_MODULE_RPC]="LATENCY_ACTION_GET_TIP_MODULE_RPC";V[V.LATENCY_ACTION_HANDLE_TRANSACTION_RPC]="LATENCY_ACTION_HANDLE_TRANSACTION_RPC";V[V.LATENCY_ACTION_COMPLETE_TRANSACTION_RPC]="LATENCY_ACTION_COMPLETE_TRANSACTION_RPC";V[V.LATENCY_ACTION_GET_CART_RPC]="LATENCY_ACTION_GET_CART_RPC";V[V.LATENCY_ACTION_THUMBNAIL_FETCH]="LATENCY_ACTION_THUMBNAIL_FETCH";V[V.LATENCY_ACTION_ABANDONED_DIRECT_PLAYBACK]="LATENCY_ACTION_ABANDONED_DIRECT_PLAYBACK";V[V.LATENCY_ACTION_SHARE_VIDEO]="LATENCY_ACTION_SHARE_VIDEO";
V[V.LATENCY_ACTION_AD_TO_VIDEO_INT]="LATENCY_ACTION_AD_TO_VIDEO_INT";V[V.LATENCY_ACTION_ABANDONED_BROWSE]="LATENCY_ACTION_ABANDONED_BROWSE";V[V.LATENCY_ACTION_PLAYER_ROTATION]="LATENCY_ACTION_PLAYER_ROTATION";V[V.LATENCY_ACTION_GENERIC_WEB_VIEW]="LATENCY_ACTION_GENERIC_WEB_VIEW";V[V.LATENCY_ACTION_SHOPPING_IN_APP]="LATENCY_ACTION_SHOPPING_IN_APP";V[V.LATENCY_ACTION_PLAYER_ATTESTATION]="LATENCY_ACTION_PLAYER_ATTESTATION";V[V.LATENCY_ACTION_PLAYER_SEEK]="LATENCY_ACTION_PLAYER_SEEK";
V[V.LATENCY_ACTION_SUPER_STICKER_BUY_FLOW]="LATENCY_ACTION_SUPER_STICKER_BUY_FLOW";V[V.LATENCY_ACTION_DOWNLOADS_DATA_ACCESS]="LATENCY_ACTION_DOWNLOADS_DATA_ACCESS";V[V.LATENCY_ACTION_BLOCKS_PERFORMANCE]="LATENCY_ACTION_BLOCKS_PERFORMANCE";V[V.LATENCY_ACTION_ASSISTANT_QUERY]="LATENCY_ACTION_ASSISTANT_QUERY";V[V.LATENCY_ACTION_ASSISTANT_SETTINGS]="LATENCY_ACTION_ASSISTANT_SETTINGS";V[V.LATENCY_ACTION_ENTITY_KEY_DESERIALIZATION_PERF]="LATENCY_ACTION_ENTITY_KEY_DESERIALIZATION_PERF";
V[V.LATENCY_ACTION_ENTITY_KEY_SERIALIZATION_PERF]="LATENCY_ACTION_ENTITY_KEY_SERIALIZATION_PERF";V[V.LATENCY_ACTION_PROOF_OF_ORIGIN_TOKEN_CREATE]="LATENCY_ACTION_PROOF_OF_ORIGIN_TOKEN_CREATE";V[V.LATENCY_ACTION_EMBEDS_SDK_INITIALIZATION]="LATENCY_ACTION_EMBEDS_SDK_INITIALIZATION";V[V.LATENCY_ACTION_NETWORKLESS_PERFORMANCE]="LATENCY_ACTION_NETWORKLESS_PERFORMANCE";V[V.LATENCY_ACTION_DOWNLOADS_EXPANSION]="LATENCY_ACTION_DOWNLOADS_EXPANSION";V[V.LATENCY_ACTION_ENTITY_TRANSFORM]="LATENCY_ACTION_ENTITY_TRANSFORM";
V[V.LATENCY_ACTION_DOWNLOADS_COMPATIBILITY_LAYER]="LATENCY_ACTION_DOWNLOADS_COMPATIBILITY_LAYER";V[V.LATENCY_ACTION_EMBEDS_SET_VIDEO]="LATENCY_ACTION_EMBEDS_SET_VIDEO";V[V.LATENCY_ACTION_SETTINGS]="LATENCY_ACTION_SETTINGS";V[V.LATENCY_ACTION_ABANDONED_STARTUP]="LATENCY_ACTION_ABANDONED_STARTUP";V[V.LATENCY_ACTION_MEDIA_BROWSER_ALARM_PLAY]="LATENCY_ACTION_MEDIA_BROWSER_ALARM_PLAY";V[V.LATENCY_ACTION_MEDIA_BROWSER_SEARCH]="LATENCY_ACTION_MEDIA_BROWSER_SEARCH";
V[V.LATENCY_ACTION_MEDIA_BROWSER_LOAD_TREE]="LATENCY_ACTION_MEDIA_BROWSER_LOAD_TREE";V[V.LATENCY_ACTION_WHO_IS_WATCHING]="LATENCY_ACTION_WHO_IS_WATCHING";V[V.LATENCY_ACTION_CAST_LOAD_BY_ENTITY_TO_WATCH]="LATENCY_ACTION_CAST_LOAD_BY_ENTITY_TO_WATCH";V[V.LATENCY_ACTION_LITE_SWITCH_ACCOUNT]="LATENCY_ACTION_LITE_SWITCH_ACCOUNT";V[V.LATENCY_ACTION_ELEMENTS_PERFORMANCE]="LATENCY_ACTION_ELEMENTS_PERFORMANCE";V[V.LATENCY_ACTION_LOCATION_SIGNAL_COLLECTION]="LATENCY_ACTION_LOCATION_SIGNAL_COLLECTION";
V[V.LATENCY_ACTION_MODIFY_CHANNEL_NOTIFICATION]="LATENCY_ACTION_MODIFY_CHANNEL_NOTIFICATION";V[V.LATENCY_ACTION_OFFLINE_STORE_START]="LATENCY_ACTION_OFFLINE_STORE_START";V[V.LATENCY_ACTION_REEL_EDITOR]="LATENCY_ACTION_REEL_EDITOR";V[V.LATENCY_ACTION_CHANNEL_SUBSCRIBE]="LATENCY_ACTION_CHANNEL_SUBSCRIBE";V[V.LATENCY_ACTION_CHANNEL_PREVIEW]="LATENCY_ACTION_CHANNEL_PREVIEW";V[V.LATENCY_ACTION_PREFETCH]="LATENCY_ACTION_PREFETCH";V[V.LATENCY_ACTION_ABANDONED_WATCH]="LATENCY_ACTION_ABANDONED_WATCH";
V[V.LATENCY_ACTION_LOAD_COMMENT_REPLIES]="LATENCY_ACTION_LOAD_COMMENT_REPLIES";V[V.LATENCY_ACTION_LOAD_COMMENTS]="LATENCY_ACTION_LOAD_COMMENTS";V[V.LATENCY_ACTION_EDIT_COMMENT]="LATENCY_ACTION_EDIT_COMMENT";V[V.LATENCY_ACTION_NEW_COMMENT]="LATENCY_ACTION_NEW_COMMENT";V[V.LATENCY_ACTION_OFFLINE_SHARING_RECEIVER_PAIRING]="LATENCY_ACTION_OFFLINE_SHARING_RECEIVER_PAIRING";V[V.LATENCY_ACTION_EMBED]="LATENCY_ACTION_EMBED";V[V.LATENCY_ACTION_MDX_LAUNCH]="LATENCY_ACTION_MDX_LAUNCH";
V[V.LATENCY_ACTION_RESOLVE_URL]="LATENCY_ACTION_RESOLVE_URL";V[V.LATENCY_ACTION_CAST_SPLASH]="LATENCY_ACTION_CAST_SPLASH";V[V.LATENCY_ACTION_MDX_CONNECT_TO_SESSION]="LATENCY_ACTION_MDX_CONNECT_TO_SESSION";V[V.LATENCY_ACTION_MDX_STREAM_TRANSFER]="LATENCY_ACTION_MDX_STREAM_TRANSFER";V[V.LATENCY_ACTION_MDX_CAST]="LATENCY_ACTION_MDX_CAST";V[V.LATENCY_ACTION_MDX_COMMAND]="LATENCY_ACTION_MDX_COMMAND";V[V.LATENCY_ACTION_MOBILE_LIVE_NAV_MDE]="LATENCY_ACTION_MOBILE_LIVE_NAV_MDE";
V[V.LATENCY_ACTION_REEL_SELECT_SEGMENT]="LATENCY_ACTION_REEL_SELECT_SEGMENT";V[V.LATENCY_ACTION_ACCELERATED_EFFECTS]="LATENCY_ACTION_ACCELERATED_EFFECTS";V[V.LATENCY_ACTION_SHORTS_LOAD_PROJECT]="LATENCY_ACTION_SHORTS_LOAD_PROJECT";V[V.LATENCY_ACTION_SHORTS_TRIM_TO_EDITOR_TRANSCODING]="LATENCY_ACTION_SHORTS_TRIM_TO_EDITOR_TRANSCODING";V[V.LATENCY_ACTION_EDIT_AUDIO_GEN]="LATENCY_ACTION_EDIT_AUDIO_GEN";V[V.LATENCY_ACTION_UPLOAD_AUDIO_MIXER]="LATENCY_ACTION_UPLOAD_AUDIO_MIXER";
V[V.LATENCY_ACTION_SHORTS_CLIENT_SIDE_RENDERING]="LATENCY_ACTION_SHORTS_CLIENT_SIDE_RENDERING";V[V.LATENCY_ACTION_SHORTS_SEG_IMP_TRANSCODING]="LATENCY_ACTION_SHORTS_SEG_IMP_TRANSCODING";V[V.LATENCY_ACTION_SHORTS_AUDIO_PICKER_PLAYBACK]="LATENCY_ACTION_SHORTS_AUDIO_PICKER_PLAYBACK";V[V.LATENCY_ACTION_SHORTS_WAVEFORM_DOWNLOAD]="LATENCY_ACTION_SHORTS_WAVEFORM_DOWNLOAD";V[V.LATENCY_ACTION_SHORTS_VIDEO_INGESTION]="LATENCY_ACTION_SHORTS_VIDEO_INGESTION";V[V.LATENCY_ACTION_SHORTS_GALLERY]="LATENCY_ACTION_SHORTS_GALLERY";
V[V.LATENCY_ACTION_SHORTS_TRIM]="LATENCY_ACTION_SHORTS_TRIM";V[V.LATENCY_ACTION_SHORTS_EDIT]="LATENCY_ACTION_SHORTS_EDIT";V[V.LATENCY_ACTION_SHORTS_CAMERA]="LATENCY_ACTION_SHORTS_CAMERA";V[V.LATENCY_ACTION_CREATION_MODES_MODE_SWITCH]="LATENCY_ACTION_CREATION_MODES_MODE_SWITCH";V[V.LATENCY_ACTION_CREATION_MODES_GLOBAL_ENTRYPOINT]="LATENCY_ACTION_CREATION_MODES_GLOBAL_ENTRYPOINT";V[V.LATENCY_ACTION_PRODUCER_IMPORT_LOCAL_MEDIA]="LATENCY_ACTION_PRODUCER_IMPORT_LOCAL_MEDIA";
V[V.LATENCY_ACTION_PRODUCER_EXPORT_PROJECT]="LATENCY_ACTION_PRODUCER_EXPORT_PROJECT";V[V.LATENCY_ACTION_PRODUCER_EDITOR]="LATENCY_ACTION_PRODUCER_EDITOR";V[V.LATENCY_ACTION_PARENT_TOOLS_DASHBOARD]="LATENCY_ACTION_PARENT_TOOLS_DASHBOARD";V[V.LATENCY_ACTION_PARENT_TOOLS_COLLECTION]="LATENCY_ACTION_PARENT_TOOLS_COLLECTION";V[V.LATENCY_ACTION_MUSIC_OFFLINE_PLAYLIST_DETAIL]="LATENCY_ACTION_MUSIC_OFFLINE_PLAYLIST_DETAIL";V[V.LATENCY_ACTION_MUSIC_OFFLINE_ALBUM_DETAIL]="LATENCY_ACTION_MUSIC_OFFLINE_ALBUM_DETAIL";
V[V.LATENCY_ACTION_MUSIC_LOAD_RECOMMENDED_MEDIA_ITEMS]="LATENCY_ACTION_MUSIC_LOAD_RECOMMENDED_MEDIA_ITEMS";V[V.LATENCY_ACTION_MUSIC_LOAD_MEDIA_ITEMS]="LATENCY_ACTION_MUSIC_LOAD_MEDIA_ITEMS";V[V.LATENCY_ACTION_MUSIC_ALBUM_DETAIL]="LATENCY_ACTION_MUSIC_ALBUM_DETAIL";V[V.LATENCY_ACTION_MUSIC_PLAYLIST_DETAIL]="LATENCY_ACTION_MUSIC_PLAYLIST_DETAIL";V[V.LATENCY_ACTION_STORE]="LATENCY_ACTION_STORE";V[V.LATENCY_ACTION_CHIPS]="LATENCY_ACTION_CHIPS";V[V.LATENCY_ACTION_SEARCH_ZERO_STATE]="LATENCY_ACTION_SEARCH_ZERO_STATE";
V[V.LATENCY_ACTION_LIVE_PAGINATION]="LATENCY_ACTION_LIVE_PAGINATION";V[V.LATENCY_ACTION_LIVE]="LATENCY_ACTION_LIVE";V[V.LATENCY_ACTION_PREBUFFER]="LATENCY_ACTION_PREBUFFER";V[V.LATENCY_ACTION_TENX]="LATENCY_ACTION_TENX";V[V.LATENCY_ACTION_KIDS_PROFILE_SETTINGS]="LATENCY_ACTION_KIDS_PROFILE_SETTINGS";V[V.LATENCY_ACTION_KIDS_WATCH_IT_AGAIN]="LATENCY_ACTION_KIDS_WATCH_IT_AGAIN";V[V.LATENCY_ACTION_KIDS_SECRET_CODE]="LATENCY_ACTION_KIDS_SECRET_CODE";V[V.LATENCY_ACTION_KIDS_PARENT_PROFILE_SETTINGS]="LATENCY_ACTION_KIDS_PARENT_PROFILE_SETTINGS";
V[V.LATENCY_ACTION_KIDS_ONBOARDING]="LATENCY_ACTION_KIDS_ONBOARDING";V[V.LATENCY_ACTION_KIDS_VOICE_SEARCH]="LATENCY_ACTION_KIDS_VOICE_SEARCH";V[V.LATENCY_ACTION_KIDS_CURATED_COLLECTION]="LATENCY_ACTION_KIDS_CURATED_COLLECTION";V[V.LATENCY_ACTION_KIDS_LIBRARY]="LATENCY_ACTION_KIDS_LIBRARY";V[V.LATENCY_ACTION_CREATOR_VIDEO_TRANSLATIONS]="LATENCY_ACTION_CREATOR_VIDEO_TRANSLATIONS";V[V.LATENCY_ACTION_CREATOR_VIDEO_RIGHTS_MANAGEMENT]="LATENCY_ACTION_CREATOR_VIDEO_RIGHTS_MANAGEMENT";
V[V.LATENCY_ACTION_CREATOR_VIDEO_POLICY]="LATENCY_ACTION_CREATOR_VIDEO_POLICY";V[V.LATENCY_ACTION_CREATOR_VIDEO_MONETIZATION]="LATENCY_ACTION_CREATOR_VIDEO_MONETIZATION";V[V.LATENCY_ACTION_CREATOR_VIDEO_LIVE_STREAMING]="LATENCY_ACTION_CREATOR_VIDEO_LIVE_STREAMING";V[V.LATENCY_ACTION_CREATOR_VIDEO_LIVE_SETTINGS]="LATENCY_ACTION_CREATOR_VIDEO_LIVE_SETTINGS";V[V.LATENCY_ACTION_CREATOR_VIDEO_EDITOR_ASYNC]="LATENCY_ACTION_CREATOR_VIDEO_EDITOR_ASYNC";V[V.LATENCY_ACTION_CREATOR_VIDEO_EDITOR]="LATENCY_ACTION_CREATOR_VIDEO_EDITOR";
V[V.LATENCY_ACTION_CREATOR_VIDEO_EDIT]="LATENCY_ACTION_CREATOR_VIDEO_EDIT";V[V.LATENCY_ACTION_CREATOR_VIDEO_COPYRIGHT]="LATENCY_ACTION_CREATOR_VIDEO_COPYRIGHT";V[V.LATENCY_ACTION_CREATOR_VIDEO_COMMENTS]="LATENCY_ACTION_CREATOR_VIDEO_COMMENTS";V[V.LATENCY_ACTION_CREATOR_VIDEO_CLAIMS]="LATENCY_ACTION_CREATOR_VIDEO_CLAIMS";V[V.LATENCY_ACTION_CREATOR_VIDEO_ANALYTICS]="LATENCY_ACTION_CREATOR_VIDEO_ANALYTICS";V[V.LATENCY_ACTION_CREATOR_SONG_ANALYTICS]="LATENCY_ACTION_CREATOR_SONG_ANALYTICS";
V[V.LATENCY_ACTION_CREATOR_PROMOTION_LIST]="LATENCY_ACTION_CREATOR_PROMOTION_LIST";V[V.LATENCY_ACTION_CREATOR_PROMOTION_EDIT]="LATENCY_ACTION_CREATOR_PROMOTION_EDIT";V[V.LATENCY_ACTION_CREATOR_POST_LIST]="LATENCY_ACTION_CREATOR_POST_LIST";V[V.LATENCY_ACTION_CREATOR_POST_EDIT]="LATENCY_ACTION_CREATOR_POST_EDIT";V[V.LATENCY_ACTION_CREATOR_POST_COMMENTS]="LATENCY_ACTION_CREATOR_POST_COMMENTS";V[V.LATENCY_ACTION_CREATOR_LIVE_STREAMING]="LATENCY_ACTION_CREATOR_LIVE_STREAMING";
V[V.LATENCY_ACTION_CREATOR_DIALOG_VIDEO_COPYRIGHT]="LATENCY_ACTION_CREATOR_DIALOG_VIDEO_COPYRIGHT";V[V.LATENCY_ACTION_CREATOR_DIALOG_UPLOADS]="LATENCY_ACTION_CREATOR_DIALOG_UPLOADS";V[V.LATENCY_ACTION_CREATOR_DIALOG_COPYRIGHT_STRIKES]="LATENCY_ACTION_CREATOR_DIALOG_COPYRIGHT_STRIKES";V[V.LATENCY_ACTION_CREATOR_CMS_VIDEOS]="LATENCY_ACTION_CREATOR_CMS_VIDEOS";V[V.LATENCY_ACTION_CREATOR_CMS_REPORTS]="LATENCY_ACTION_CREATOR_CMS_REPORTS";V[V.LATENCY_ACTION_CREATOR_CMS_RELEASES]="LATENCY_ACTION_CREATOR_CMS_RELEASES";
V[V.LATENCY_ACTION_CREATOR_CMS_POLICIES]="LATENCY_ACTION_CREATOR_CMS_POLICIES";V[V.LATENCY_ACTION_CREATOR_CMS_PITCH_MUSIC]="LATENCY_ACTION_CREATOR_CMS_PITCH_MUSIC";V[V.LATENCY_ACTION_CREATOR_CMS_MANUAL_CLAIMING]="LATENCY_ACTION_CREATOR_CMS_MANUAL_CLAIMING";V[V.LATENCY_ACTION_CREATOR_CMS_LICENSES]="LATENCY_ACTION_CREATOR_CMS_LICENSES";V[V.LATENCY_ACTION_CREATOR_CMS_ISSUES]="LATENCY_ACTION_CREATOR_CMS_ISSUES";V[V.LATENCY_ACTION_CREATOR_CMS_DASHBOARD]="LATENCY_ACTION_CREATOR_CMS_DASHBOARD";
V[V.LATENCY_ACTION_CREATOR_CMS_CONTENT_DELIVERY]="LATENCY_ACTION_CREATOR_CMS_CONTENT_DELIVERY";V[V.LATENCY_ACTION_CREATOR_CMS_CLAIMED_VIDEOS]="LATENCY_ACTION_CREATOR_CMS_CLAIMED_VIDEOS";V[V.LATENCY_ACTION_CREATOR_CMS_CHANNELS]="LATENCY_ACTION_CREATOR_CMS_CHANNELS";V[V.LATENCY_ACTION_CREATOR_CMS_CAMPAIGNS]="LATENCY_ACTION_CREATOR_CMS_CAMPAIGNS";V[V.LATENCY_ACTION_CREATOR_CMS_ASSET_SOUND_RECORDINGS]="LATENCY_ACTION_CREATOR_CMS_ASSET_SOUND_RECORDINGS";
V[V.LATENCY_ACTION_CREATOR_CMS_ASSET_REFERENCES]="LATENCY_ACTION_CREATOR_CMS_ASSET_REFERENCES";V[V.LATENCY_ACTION_CREATOR_CMS_ASSET_POLICY]="LATENCY_ACTION_CREATOR_CMS_ASSET_POLICY";V[V.LATENCY_ACTION_CREATOR_CMS_ASSET_OWNERSHIP]="LATENCY_ACTION_CREATOR_CMS_ASSET_OWNERSHIP";V[V.LATENCY_ACTION_CREATOR_CMS_ASSET_METADATA]="LATENCY_ACTION_CREATOR_CMS_ASSET_METADATA";V[V.LATENCY_ACTION_CREATOR_CMS_ASSET_LICENSES]="LATENCY_ACTION_CREATOR_CMS_ASSET_LICENSES";
V[V.LATENCY_ACTION_CREATOR_CMS_ASSET_ISSUES]="LATENCY_ACTION_CREATOR_CMS_ASSET_ISSUES";V[V.LATENCY_ACTION_CREATOR_CMS_ASSET_GROUPS]="LATENCY_ACTION_CREATOR_CMS_ASSET_GROUPS";V[V.LATENCY_ACTION_CREATOR_CMS_ASSET_EMBEDS]="LATENCY_ACTION_CREATOR_CMS_ASSET_EMBEDS";V[V.LATENCY_ACTION_CREATOR_CMS_ASSET_COMPOSITION]="LATENCY_ACTION_CREATOR_CMS_ASSET_COMPOSITION";V[V.LATENCY_ACTION_CREATOR_CMS_ASSET_CLAIMED_VIDEOS]="LATENCY_ACTION_CREATOR_CMS_ASSET_CLAIMED_VIDEOS";V[V.LATENCY_ACTION_CREATOR_CMS_ASSETS]="LATENCY_ACTION_CREATOR_CMS_ASSETS";
V[V.LATENCY_ACTION_CREATOR_CMS_ART_TRACKS]="LATENCY_ACTION_CREATOR_CMS_ART_TRACKS";V[V.LATENCY_ACTION_CREATOR_CMS_ANALYTICS]="LATENCY_ACTION_CREATOR_CMS_ANALYTICS";V[V.LATENCY_ACTION_CREATOR_CMS_ALLOWLIST]="LATENCY_ACTION_CREATOR_CMS_ALLOWLIST";V[V.LATENCY_ACTION_CREATOR_CHANNEL_VIDEOS]="LATENCY_ACTION_CREATOR_CHANNEL_VIDEOS";V[V.LATENCY_ACTION_CREATOR_CHANNEL_TRANSLATIONS]="LATENCY_ACTION_CREATOR_CHANNEL_TRANSLATIONS";V[V.LATENCY_ACTION_CREATOR_CHANNEL_PLAYLISTS]="LATENCY_ACTION_CREATOR_CHANNEL_PLAYLISTS";
V[V.LATENCY_ACTION_CREATOR_CHANNEL_MUSIC_STOREFRONT]="LATENCY_ACTION_CREATOR_CHANNEL_MUSIC_STOREFRONT";V[V.LATENCY_ACTION_CREATOR_CHANNEL_MUSIC]="LATENCY_ACTION_CREATOR_CHANNEL_MUSIC";V[V.LATENCY_ACTION_CREATOR_CHANNEL_MONETIZATION]="LATENCY_ACTION_CREATOR_CHANNEL_MONETIZATION";V[V.LATENCY_ACTION_CREATOR_CHANNEL_EDITING]="LATENCY_ACTION_CREATOR_CHANNEL_EDITING";V[V.LATENCY_ACTION_CREATOR_CHANNEL_DASHBOARD]="LATENCY_ACTION_CREATOR_CHANNEL_DASHBOARD";V[V.LATENCY_ACTION_CREATOR_CHANNEL_COPYRIGHT]="LATENCY_ACTION_CREATOR_CHANNEL_COPYRIGHT";
V[V.LATENCY_ACTION_CREATOR_CHANNEL_COMMENTS]="LATENCY_ACTION_CREATOR_CHANNEL_COMMENTS";V[V.LATENCY_ACTION_CREATOR_CHANNEL_ANALYTICS]="LATENCY_ACTION_CREATOR_CHANNEL_ANALYTICS";V[V.LATENCY_ACTION_CREATOR_ARTIST_PROFILE]="LATENCY_ACTION_CREATOR_ARTIST_PROFILE";V[V.LATENCY_ACTION_CREATOR_ARTIST_CONCERTS]="LATENCY_ACTION_CREATOR_ARTIST_CONCERTS";V[V.LATENCY_ACTION_CREATOR_ARTIST_ANALYTICS]="LATENCY_ACTION_CREATOR_ARTIST_ANALYTICS";V[V.LATENCY_ACTION_CREATOR_ANALYTICS_EXPLORE]="LATENCY_ACTION_CREATOR_ANALYTICS_EXPLORE";
V[V.LATENCY_ACTION_EXPERIMENTAL_WATCH_UI]="LATENCY_ACTION_EXPERIMENTAL_WATCH_UI";V[V.LATENCY_ACTION_FINE_SCRUBBING_THUMBNAILS]="LATENCY_ACTION_FINE_SCRUBBING_THUMBNAILS";V[V.LATENCY_ACTION_STORYBOARD_THUMBNAILS]="LATENCY_ACTION_STORYBOARD_THUMBNAILS";V[V.LATENCY_ACTION_SEARCH_THUMBNAILS]="LATENCY_ACTION_SEARCH_THUMBNAILS";V[V.LATENCY_ACTION_ON_DEVICE_MODEL_DOWNLOAD]="LATENCY_ACTION_ON_DEVICE_MODEL_DOWNLOAD";V[V.LATENCY_ACTION_VOICE_ASSISTANT]="LATENCY_ACTION_VOICE_ASSISTANT";
V[V.LATENCY_ACTION_SEARCH_UI]="LATENCY_ACTION_SEARCH_UI";V[V.LATENCY_ACTION_SUGGEST]="LATENCY_ACTION_SUGGEST";V[V.LATENCY_ACTION_AUTO_SEARCH]="LATENCY_ACTION_AUTO_SEARCH";V[V.LATENCY_ACTION_DOWNLOADS]="LATENCY_ACTION_DOWNLOADS";V[V.LATENCY_ACTION_EXPLORE]="LATENCY_ACTION_EXPLORE";V[V.LATENCY_ACTION_VIDEO_LIST]="LATENCY_ACTION_VIDEO_LIST";V[V.LATENCY_ACTION_HOME_RESUME]="LATENCY_ACTION_HOME_RESUME";V[V.LATENCY_ACTION_SUBSCRIPTIONS_LIST]="LATENCY_ACTION_SUBSCRIPTIONS_LIST";
V[V.LATENCY_ACTION_THUMBNAIL_LOAD]="LATENCY_ACTION_THUMBNAIL_LOAD";V[V.LATENCY_ACTION_FIRST_THUMBNAIL_LOAD]="LATENCY_ACTION_FIRST_THUMBNAIL_LOAD";V[V.LATENCY_ACTION_SUBSCRIPTIONS_FEED]="LATENCY_ACTION_SUBSCRIPTIONS_FEED";V[V.LATENCY_ACTION_SUBSCRIPTIONS]="LATENCY_ACTION_SUBSCRIPTIONS";V[V.LATENCY_ACTION_TRENDING]="LATENCY_ACTION_TRENDING";V[V.LATENCY_ACTION_LIBRARY]="LATENCY_ACTION_LIBRARY";V[V.LATENCY_ACTION_VIDEO_THUMBNAIL]="LATENCY_ACTION_VIDEO_THUMBNAIL";V[V.LATENCY_ACTION_SHOW_MORE]="LATENCY_ACTION_SHOW_MORE";
V[V.LATENCY_ACTION_VIDEO_PREVIEW]="LATENCY_ACTION_VIDEO_PREVIEW";V[V.LATENCY_ACTION_AD_TO_AD]="LATENCY_ACTION_AD_TO_AD";V[V.LATENCY_ACTION_VIDEO_TO_AD]="LATENCY_ACTION_VIDEO_TO_AD";V[V.LATENCY_ACTION_AD_TO_VIDEO]="LATENCY_ACTION_AD_TO_VIDEO";V[V.LATENCY_ACTION_DIRECT_PLAYBACK]="LATENCY_ACTION_DIRECT_PLAYBACK";V[V.LATENCY_ACTION_PREBUFFER_VIDEO]="LATENCY_ACTION_PREBUFFER_VIDEO";V[V.LATENCY_ACTION_PREFETCH_VIDEO]="LATENCY_ACTION_PREFETCH_VIDEO";V[V.LATENCY_ACTION_STARTUP]="LATENCY_ACTION_STARTUP";
V[V.LATENCY_ACTION_INLINE_TO_WATCH]="LATENCY_ACTION_INLINE_TO_WATCH";V[V.LATENCY_ACTION_MUSIC_IMMERSIVE_WATCH]="LATENCY_ACTION_MUSIC_IMMERSIVE_WATCH";V[V.LATENCY_ACTION_ONBOARDING]="LATENCY_ACTION_ONBOARDING";V[V.LATENCY_ACTION_LOGIN]="LATENCY_ACTION_LOGIN";V[V.LATENCY_ACTION_REEL_WATCH]="LATENCY_ACTION_REEL_WATCH";V[V.LATENCY_ACTION_WATCH]="LATENCY_ACTION_WATCH";V[V.LATENCY_ACTION_RESULTS]="LATENCY_ACTION_RESULTS";V[V.LATENCY_ACTION_CHANNELS]="LATENCY_ACTION_CHANNELS";V[V.LATENCY_ACTION_HOME]="LATENCY_ACTION_HOME";
V[V.LATENCY_ACTION_BROWSE]="LATENCY_ACTION_BROWSE";V[V.LATENCY_ACTION_USER_ACTION]="LATENCY_ACTION_USER_ACTION";V[V.LATENCY_ACTION_INFRASTRUCTURE]="LATENCY_ACTION_INFRASTRUCTURE";V[V.LATENCY_ACTION_PAGE_NAVIGATION]="LATENCY_ACTION_PAGE_NAVIGATION";V[V.LATENCY_ACTION_UNKNOWN]="LATENCY_ACTION_UNKNOWN";var Wv={LATENCY_NETWORK_MOBILE:2,LATENCY_NETWORK_WIFI:1,LATENCY_NETWORK_UNKNOWN:0};Wv[Wv.LATENCY_NETWORK_MOBILE]="LATENCY_NETWORK_MOBILE";Wv[Wv.LATENCY_NETWORK_WIFI]="LATENCY_NETWORK_WIFI";
Wv[Wv.LATENCY_NETWORK_UNKNOWN]="LATENCY_NETWORK_UNKNOWN";var W={CONN_INVALID:31,CONN_CELLULAR_5G_NSA:12,CONN_CELLULAR_5G_SA:11,CONN_WIFI_METERED:10,CONN_CELLULAR_5G:9,CONN_DISCO:8,CONN_CELLULAR_UNKNOWN:7,CONN_CELLULAR_4G:6,CONN_CELLULAR_3G:5,CONN_CELLULAR_2G:4,CONN_WIFI:3,CONN_NONE:2,CONN_UNKNOWN:1,CONN_DEFAULT:0};W[W.CONN_INVALID]="CONN_INVALID";W[W.CONN_CELLULAR_5G_NSA]="CONN_CELLULAR_5G_NSA";W[W.CONN_CELLULAR_5G_SA]="CONN_CELLULAR_5G_SA";W[W.CONN_WIFI_METERED]="CONN_WIFI_METERED";
W[W.CONN_CELLULAR_5G]="CONN_CELLULAR_5G";W[W.CONN_DISCO]="CONN_DISCO";W[W.CONN_CELLULAR_UNKNOWN]="CONN_CELLULAR_UNKNOWN";W[W.CONN_CELLULAR_4G]="CONN_CELLULAR_4G";W[W.CONN_CELLULAR_3G]="CONN_CELLULAR_3G";W[W.CONN_CELLULAR_2G]="CONN_CELLULAR_2G";W[W.CONN_WIFI]="CONN_WIFI";W[W.CONN_NONE]="CONN_NONE";W[W.CONN_UNKNOWN]="CONN_UNKNOWN";W[W.CONN_DEFAULT]="CONN_DEFAULT";
var Z={DETAILED_NETWORK_TYPE_NR_NSA:126,DETAILED_NETWORK_TYPE_NR_SA:125,DETAILED_NETWORK_TYPE_INTERNAL_WIFI_IMPAIRED:124,DETAILED_NETWORK_TYPE_APP_WIFI_HOTSPOT:123,DETAILED_NETWORK_TYPE_DISCONNECTED:122,DETAILED_NETWORK_TYPE_NON_MOBILE_UNKNOWN:121,DETAILED_NETWORK_TYPE_MOBILE_UNKNOWN:120,DETAILED_NETWORK_TYPE_WIMAX:119,DETAILED_NETWORK_TYPE_ETHERNET:118,DETAILED_NETWORK_TYPE_BLUETOOTH:117,DETAILED_NETWORK_TYPE_WIFI:116,DETAILED_NETWORK_TYPE_LTE:115,DETAILED_NETWORK_TYPE_HSPAP:114,DETAILED_NETWORK_TYPE_EHRPD:113,
DETAILED_NETWORK_TYPE_EVDO_B:112,DETAILED_NETWORK_TYPE_UMTS:111,DETAILED_NETWORK_TYPE_IDEN:110,DETAILED_NETWORK_TYPE_HSUPA:109,DETAILED_NETWORK_TYPE_HSPA:108,DETAILED_NETWORK_TYPE_HSDPA:107,DETAILED_NETWORK_TYPE_EVDO_A:106,DETAILED_NETWORK_TYPE_EVDO_0:105,DETAILED_NETWORK_TYPE_CDMA:104,DETAILED_NETWORK_TYPE_1_X_RTT:103,DETAILED_NETWORK_TYPE_GPRS:102,DETAILED_NETWORK_TYPE_EDGE:101,DETAILED_NETWORK_TYPE_UNKNOWN:0};Z[Z.DETAILED_NETWORK_TYPE_NR_NSA]="DETAILED_NETWORK_TYPE_NR_NSA";
Z[Z.DETAILED_NETWORK_TYPE_NR_SA]="DETAILED_NETWORK_TYPE_NR_SA";Z[Z.DETAILED_NETWORK_TYPE_INTERNAL_WIFI_IMPAIRED]="DETAILED_NETWORK_TYPE_INTERNAL_WIFI_IMPAIRED";Z[Z.DETAILED_NETWORK_TYPE_APP_WIFI_HOTSPOT]="DETAILED_NETWORK_TYPE_APP_WIFI_HOTSPOT";Z[Z.DETAILED_NETWORK_TYPE_DISCONNECTED]="DETAILED_NETWORK_TYPE_DISCONNECTED";Z[Z.DETAILED_NETWORK_TYPE_NON_MOBILE_UNKNOWN]="DETAILED_NETWORK_TYPE_NON_MOBILE_UNKNOWN";Z[Z.DETAILED_NETWORK_TYPE_MOBILE_UNKNOWN]="DETAILED_NETWORK_TYPE_MOBILE_UNKNOWN";
Z[Z.DETAILED_NETWORK_TYPE_WIMAX]="DETAILED_NETWORK_TYPE_WIMAX";Z[Z.DETAILED_NETWORK_TYPE_ETHERNET]="DETAILED_NETWORK_TYPE_ETHERNET";Z[Z.DETAILED_NETWORK_TYPE_BLUETOOTH]="DETAILED_NETWORK_TYPE_BLUETOOTH";Z[Z.DETAILED_NETWORK_TYPE_WIFI]="DETAILED_NETWORK_TYPE_WIFI";Z[Z.DETAILED_NETWORK_TYPE_LTE]="DETAILED_NETWORK_TYPE_LTE";Z[Z.DETAILED_NETWORK_TYPE_HSPAP]="DETAILED_NETWORK_TYPE_HSPAP";Z[Z.DETAILED_NETWORK_TYPE_EHRPD]="DETAILED_NETWORK_TYPE_EHRPD";Z[Z.DETAILED_NETWORK_TYPE_EVDO_B]="DETAILED_NETWORK_TYPE_EVDO_B";
Z[Z.DETAILED_NETWORK_TYPE_UMTS]="DETAILED_NETWORK_TYPE_UMTS";Z[Z.DETAILED_NETWORK_TYPE_IDEN]="DETAILED_NETWORK_TYPE_IDEN";Z[Z.DETAILED_NETWORK_TYPE_HSUPA]="DETAILED_NETWORK_TYPE_HSUPA";Z[Z.DETAILED_NETWORK_TYPE_HSPA]="DETAILED_NETWORK_TYPE_HSPA";Z[Z.DETAILED_NETWORK_TYPE_HSDPA]="DETAILED_NETWORK_TYPE_HSDPA";Z[Z.DETAILED_NETWORK_TYPE_EVDO_A]="DETAILED_NETWORK_TYPE_EVDO_A";Z[Z.DETAILED_NETWORK_TYPE_EVDO_0]="DETAILED_NETWORK_TYPE_EVDO_0";Z[Z.DETAILED_NETWORK_TYPE_CDMA]="DETAILED_NETWORK_TYPE_CDMA";
Z[Z.DETAILED_NETWORK_TYPE_1_X_RTT]="DETAILED_NETWORK_TYPE_1_X_RTT";Z[Z.DETAILED_NETWORK_TYPE_GPRS]="DETAILED_NETWORK_TYPE_GPRS";Z[Z.DETAILED_NETWORK_TYPE_EDGE]="DETAILED_NETWORK_TYPE_EDGE";Z[Z.DETAILED_NETWORK_TYPE_UNKNOWN]="DETAILED_NETWORK_TYPE_UNKNOWN";var Xv={LATENCY_PLAYER_RTSP:7,LATENCY_PLAYER_HTML5_INLINE:6,LATENCY_PLAYER_HTML5_FULLSCREEN:5,LATENCY_PLAYER_HTML5:4,LATENCY_PLAYER_FRAMEWORK:3,LATENCY_PLAYER_FLASH:2,LATENCY_PLAYER_EXO:1,LATENCY_PLAYER_UNKNOWN:0};Xv[Xv.LATENCY_PLAYER_RTSP]="LATENCY_PLAYER_RTSP";
Xv[Xv.LATENCY_PLAYER_HTML5_INLINE]="LATENCY_PLAYER_HTML5_INLINE";Xv[Xv.LATENCY_PLAYER_HTML5_FULLSCREEN]="LATENCY_PLAYER_HTML5_FULLSCREEN";Xv[Xv.LATENCY_PLAYER_HTML5]="LATENCY_PLAYER_HTML5";Xv[Xv.LATENCY_PLAYER_FRAMEWORK]="LATENCY_PLAYER_FRAMEWORK";Xv[Xv.LATENCY_PLAYER_FLASH]="LATENCY_PLAYER_FLASH";Xv[Xv.LATENCY_PLAYER_EXO]="LATENCY_PLAYER_EXO";Xv[Xv.LATENCY_PLAYER_UNKNOWN]="LATENCY_PLAYER_UNKNOWN";
var Yv={LATENCY_AD_BREAK_TYPE_POSTROLL:3,LATENCY_AD_BREAK_TYPE_MIDROLL:2,LATENCY_AD_BREAK_TYPE_PREROLL:1,LATENCY_AD_BREAK_TYPE_UNKNOWN:0};Yv[Yv.LATENCY_AD_BREAK_TYPE_POSTROLL]="LATENCY_AD_BREAK_TYPE_POSTROLL";Yv[Yv.LATENCY_AD_BREAK_TYPE_MIDROLL]="LATENCY_AD_BREAK_TYPE_MIDROLL";Yv[Yv.LATENCY_AD_BREAK_TYPE_PREROLL]="LATENCY_AD_BREAK_TYPE_PREROLL";Yv[Yv.LATENCY_AD_BREAK_TYPE_UNKNOWN]="LATENCY_AD_BREAK_TYPE_UNKNOWN";var Zv={LATENCY_ACTION_ERROR_STARTUP_TIMEOUT:1,LATENCY_ACTION_ERROR_UNSPECIFIED:0};
Zv[Zv.LATENCY_ACTION_ERROR_STARTUP_TIMEOUT]="LATENCY_ACTION_ERROR_STARTUP_TIMEOUT";Zv[Zv.LATENCY_ACTION_ERROR_UNSPECIFIED]="LATENCY_ACTION_ERROR_UNSPECIFIED";var $v={LIVE_STREAM_MODE_WINDOW:5,LIVE_STREAM_MODE_POST:4,LIVE_STREAM_MODE_LP:3,LIVE_STREAM_MODE_LIVE:2,LIVE_STREAM_MODE_DVR:1,LIVE_STREAM_MODE_UNKNOWN:0};$v[$v.LIVE_STREAM_MODE_WINDOW]="LIVE_STREAM_MODE_WINDOW";$v[$v.LIVE_STREAM_MODE_POST]="LIVE_STREAM_MODE_POST";$v[$v.LIVE_STREAM_MODE_LP]="LIVE_STREAM_MODE_LP";
$v[$v.LIVE_STREAM_MODE_LIVE]="LIVE_STREAM_MODE_LIVE";$v[$v.LIVE_STREAM_MODE_DVR]="LIVE_STREAM_MODE_DVR";$v[$v.LIVE_STREAM_MODE_UNKNOWN]="LIVE_STREAM_MODE_UNKNOWN";var aw={VIDEO_STREAM_TYPE_VOD:3,VIDEO_STREAM_TYPE_DVR:2,VIDEO_STREAM_TYPE_LIVE:1,VIDEO_STREAM_TYPE_UNSPECIFIED:0};aw[aw.VIDEO_STREAM_TYPE_VOD]="VIDEO_STREAM_TYPE_VOD";aw[aw.VIDEO_STREAM_TYPE_DVR]="VIDEO_STREAM_TYPE_DVR";aw[aw.VIDEO_STREAM_TYPE_LIVE]="VIDEO_STREAM_TYPE_LIVE";aw[aw.VIDEO_STREAM_TYPE_UNSPECIFIED]="VIDEO_STREAM_TYPE_UNSPECIFIED";
var bw={YT_IDB_TRANSACTION_TYPE_READ:2,YT_IDB_TRANSACTION_TYPE_WRITE:1,YT_IDB_TRANSACTION_TYPE_UNKNOWN:0};bw[bw.YT_IDB_TRANSACTION_TYPE_READ]="YT_IDB_TRANSACTION_TYPE_READ";bw[bw.YT_IDB_TRANSACTION_TYPE_WRITE]="YT_IDB_TRANSACTION_TYPE_WRITE";bw[bw.YT_IDB_TRANSACTION_TYPE_UNKNOWN]="YT_IDB_TRANSACTION_TYPE_UNKNOWN";var cw={PLAYER_ROTATION_TYPE_PORTRAIT_TO_FULLSCREEN:2,PLAYER_ROTATION_TYPE_FULLSCREEN_TO_PORTRAIT:1,PLAYER_ROTATION_TYPE_UNKNOWN:0};cw[cw.PLAYER_ROTATION_TYPE_PORTRAIT_TO_FULLSCREEN]="PLAYER_ROTATION_TYPE_PORTRAIT_TO_FULLSCREEN";
cw[cw.PLAYER_ROTATION_TYPE_FULLSCREEN_TO_PORTRAIT]="PLAYER_ROTATION_TYPE_FULLSCREEN_TO_PORTRAIT";cw[cw.PLAYER_ROTATION_TYPE_UNKNOWN]="PLAYER_ROTATION_TYPE_UNKNOWN";var dw="actionVisualElement spinnerInfo resourceInfo playerInfo commentInfo mdxInfo watchInfo thumbnailLoadInfo creatorInfo unpluggedInfo reelInfo subscriptionsFeedInfo requestIds mediaBrowserActionInfo musicLoadActionInfo shoppingInfo webViewInfo prefetchInfo accelerationSession commerceInfo inlineToWatchInfo webInfo tvInfo kabukiInfo mwebInfo musicInfo transcodingContext".split(" ");function ew(a,b){qq.call(this,1,arguments);this.timer=b}
v(ew,qq);var fw=new rq("aft-recorded",ew);var gw=y.ytLoggingLatencyUsageStats_||{};z("ytLoggingLatencyUsageStats_",gw);function hw(){this.h=0}
function iw(){hw.h||(hw.h=new hw);return hw.h}
hw.prototype.tick=function(a,b,c,d){jw(this,"tick_"+a+"_"+b)||(c={timestamp:c,cttAuthInfo:d},O("web_csi_via_jspb")?(d=new gm,G(d,1,a),G(d,2,b),a=new jm,ge(a,gm,5,km,d),Zt(a,c)):wo("latencyActionTicked",{tickName:a,clientActionNonce:b},c))};
hw.prototype.info=function(a,b,c){var d=Object.keys(a).join("");jw(this,"info_"+d+"_"+b)||(a=Object.assign({},a),a.clientActionNonce=b,wo("latencyActionInfo",a,{cttAuthInfo:c}))};
hw.prototype.jspbInfo=function(a,b,c){for(var d="",e=0;e<a.toJSON().length;e++)void 0!==a.toJSON()[e]&&(d=0===e?d.concat(""+e):d.concat("_"+e));jw(this,"info_"+d+"_"+b)||(G(a,2,b),b={cttAuthInfo:c},c=new jm,ge(c,dm,7,km,a),Zt(c,b))};
hw.prototype.span=function(a,b,c){var d=Object.keys(a).join("");jw(this,"span_"+d+"_"+b)||(a.clientActionNonce=b,wo("latencyActionSpan",a,{cttAuthInfo:c}))};
function jw(a,b){gw[b]=gw[b]||{count:0};var c=gw[b];c.count++;c.time=Q();a.h||(a.h=io(function(){var d=Q(),e;for(e in gw)gw[e]&&6E4<d-gw[e].time&&delete gw[e];a&&(a.h=0)},5E3));
return 5<c.count?(6===c.count&&1>1E5*Math.random()&&(c=new P("CSI data exceeded logging limit with key",b.split("_")),0<=b.indexOf("plev")||mu(c)),!0):!1}
;var kw=window;function lw(){this.timing={};this.clearResourceTimings=function(){};
this.webkitClearResourceTimings=function(){};
this.mozClearResourceTimings=function(){};
this.msClearResourceTimings=function(){};
this.oClearResourceTimings=function(){}}
function mw(){var a;if(O("csi_use_performance_navigation_timing")||O("csi_use_performance_navigation_timing_tvhtml5")){var b,c,d,e=null==nw?void 0:null==(a=nw.getEntriesByType)?void 0:null==(b=a.call(nw,"navigation"))?void 0:null==(c=b[0])?void 0:null==(d=c.toJSON)?void 0:d.call(c);e?(e.requestStart=ow(e.requestStart),e.responseEnd=ow(e.responseEnd),e.redirectStart=ow(e.redirectStart),e.redirectEnd=ow(e.redirectEnd),e.domainLookupEnd=ow(e.domainLookupEnd),e.connectStart=ow(e.connectStart),e.connectEnd=
ow(e.connectEnd),e.responseStart=ow(e.responseStart),e.secureConnectionStart=ow(e.secureConnectionStart),e.domainLookupStart=ow(e.domainLookupStart),e.isPerformanceNavigationTiming=!0,a=e):a=nw.timing}else a=nw.timing;return a}
function ow(a){return Math.round(pw()+a)}
function pw(){return(O("csi_use_time_origin")||O("csi_use_time_origin_tvhtml5"))&&nw.timeOrigin?Math.floor(nw.timeOrigin):nw.timing.navigationStart}
var nw=kw.performance||kw.mozPerformance||kw.msPerformance||kw.webkitPerformance||new lw;var qw=!1,rw={'script[name="scheduler/scheduler"]':"sj",'script[name="player/base"]':"pj",'link[rel="stylesheet"][name="www-player"]':"pc",'link[rel="stylesheet"][name="player/www-player"]':"pc",'script[name="desktop_polymer/desktop_polymer"]':"dpj",'link[rel="import"][name="desktop_polymer"]':"dph",'script[name="mobile-c3"]':"mcj",'link[rel="stylesheet"][name="mobile-c3"]':"mcc",'script[name="player-plasma-ias-phone/base"]':"mcppj",'script[name="player-plasma-ias-tablet/base"]':"mcptj",'link[rel="stylesheet"][name="mobile-polymer-player-ias"]':"mcpc",
'link[rel="stylesheet"][name="mobile-polymer-player-svg-ias"]':"mcpsc",'script[name="mobile_blazer_core_mod"]':"mbcj",'link[rel="stylesheet"][name="mobile_blazer_css"]':"mbc",'script[name="mobile_blazer_logged_in_users_mod"]':"mbliuj",'script[name="mobile_blazer_logged_out_users_mod"]':"mblouj",'script[name="mobile_blazer_noncore_mod"]':"mbnj","#player_css":"mbpc",'script[name="mobile_blazer_desktopplayer_mod"]':"mbpj",'link[rel="stylesheet"][name="mobile_blazer_tablet_css"]':"mbtc",'script[name="mobile_blazer_watch_mod"]':"mbwj"};
Wa(nw.clearResourceTimings||nw.webkitClearResourceTimings||nw.mozClearResourceTimings||nw.msClearResourceTimings||nw.oClearResourceTimings||cb,nw);function sw(a,b,c,d){if(null!==b){if("yt_lt"===a){var e="string"===typeof b?b:""+b;Hv(c).loadType=e}(a=Vv(a,b,c))&&tw(a,c,d)}}
function tw(a,b,c){if(!O("web_csi_via_jspb")||(void 0===c?0:c))c=Nv(b||""),Av(c.info,a),a.loadType&&(c=a.loadType,Hv(b).loadType=c),Av(Kv(b),a),c=Lv(b),b=Fv(b).cttAuthInfo,iw().info(a,c,b);else{c=new dm;var d=Object.keys(a);a=Object.values(a);for(var e=0;e<d.length;e++){var f=d[e];try{switch(f){case "actionType":G(c,1,V[a[e]]);break;case "clientActionNonce":G(c,2,a[e]);break;case "clientScreenNonce":G(c,4,a[e]);break;case "loadType":G(c,3,a[e]);break;case "isPrewarmedLaunch":G(c,92,a[e]);break;case "isFirstInstall":G(c,
55,a[e]);break;case "networkType":G(c,5,Wv[a[e]]);break;case "connectionType":G(c,26,W[a[e]]);break;case "detailedConnectionType":G(c,27,Z[a[e]]);break;case "isVisible":G(c,6,a[e]);break;case "playerType":G(c,7,Xv[a[e]]);break;case "clientPlaybackNonce":G(c,8,a[e]);break;case "adClientPlaybackNonce":G(c,28,a[e]);break;case "previousCpn":G(c,77,a[e]);break;case "targetCpn":G(c,76,a[e]);break;case "isMonetized":G(c,9,a[e]);break;case "isPrerollAllowed":G(c,16,a[e]);break;case "isPrerollShown":G(c,17,
a[e]);break;case "adType":G(c,12,a[e]);break;case "adTypesAllowed":G(c,36,a[e]);break;case "adNetworks":G(c,37,a[e]);break;case "previousAction":G(c,13,V[a[e]]);break;case "isRedSubscriber":G(c,14,a[e]);break;case "serverTimeMs":G(c,15,a[e]);break;case "videoId":c.setVideoId(a[e]);break;case "adVideoId":G(c,20,a[e]);break;case "targetVideoId":G(c,78,a[e]);break;case "adBreakType":G(c,21,Yv[a[e]]);break;case "isNavigation":G(c,25,a[e]);break;case "viewportHeight":G(c,29,a[e]);break;case "viewportWidth":G(c,
30,a[e]);break;case "screenHeight":G(c,84,a[e]);break;case "screenWidth":G(c,85,a[e]);break;case "browseId":G(c,31,a[e]);break;case "isCacheHit":G(c,32,a[e]);break;case "httpProtocol":G(c,33,a[e]);break;case "transportProtocol":G(c,34,a[e]);break;case "searchQuery":G(c,41,a[e]);break;case "isContinuation":G(c,42,a[e]);break;case "availableProcessors":G(c,43,a[e]);break;case "sdk":G(c,44,a[e]);break;case "isLocalStream":G(c,45,a[e]);break;case "navigationRequestedSameUrl":G(c,64,a[e]);break;case "shellStartupDurationMs":G(c,
70,a[e]);break;case "appInstallDataAgeMs":G(c,73,a[e]);break;case "latencyActionError":G(c,71,Zv[a[e]]);break;case "actionStep":G(c,79,a[e]);break;case "jsHeapSizeLimit":G(c,80,a[e]);break;case "totalJsHeapSize":G(c,81,a[e]);break;case "usedJsHeapSize":G(c,82,a[e]);break;case "sourceVideoDurationMs":G(c,90,a[e]);break;case "videoOutputFrames":G(c,93,a[e]);break;case "isResume":G(c,104,a[e]);break;case "debugTicksExcluded":G(c,105,a[e]);break;case "adPrebufferedTimeSecs":G(c,39,a[e]);break;case "isLivestream":G(c,
47,a[e]);break;case "liveStreamMode":G(c,91,$v[a[e]]);break;case "adCpn2":G(c,48,a[e]);break;case "adDaiDriftMillis":G(c,49,a[e]);break;case "videoStreamType":G(c,53,aw[a[e]]);break;case "playbackRequiresTap":G(c,56,a[e]);break;case "performanceNavigationTiming":G(c,67,a[e]);break;case "transactionType":G(c,74,bw[a[e]]);break;case "playerRotationType":G(c,101,cw[a[e]]);break;case "allowedPreroll":G(c,10,a[e]);break;case "shownPreroll":G(c,11,a[e]);break;case "getHomeRequestId":G(c,57,a[e]);break;
case "getSearchRequestId":G(c,60,a[e]);break;case "getPlayerRequestId":G(c,61,a[e]);break;case "getWatchNextRequestId":G(c,62,a[e]);break;case "getBrowseRequestId":G(c,63,a[e]);break;case "getLibraryRequestId":G(c,66,a[e]);break;case "isTransformerEnabledForFeature":G(c,106,a[e]);break;case "sourceVideoFrameCount":G(c,109,a[e]);break;default:dw.includes(f)&&Jm(new P("Codegen laipb translator asked to translate message field",""+f))}}catch(g){Jm(Error("Codegen laipb translator failed to set "+f))}}uw(c,
b)}}
function uw(a,b){var c=me(a,3);c&&(Hv(b).loadType=c);Nv(b||"").jspbInfo.push(a);c=Lv(b);b=Fv(b).cttAuthInfo;iw().jspbInfo(a,c,b)}
function vw(a,b,c){if(!b&&"_"!==a[0]){var d=a;nw.mark&&(0==d.lastIndexOf("mark_",0)||(d="mark_"+d),c&&(d+=" ("+c+")"),nw.mark(d))}d=Nv(c||"");d.tick[a]=b||Q();if(d.callback&&d.callback[a]){d=r(d.callback[a]);for(var e=d.next();!e.done;e=d.next())e=e.value,e()}d=Jv(c);d.gelTicks&&(d.gelTicks[a]=!0);e=Iv(c);d=b||Q();O("log_repeated_ytcsi_ticks")?a in e||(e[a]=d):e[a]=d;e=Lv(c);var f=Fv(c).cttAuthInfo;"_start"===a?(a=iw(),jw(a,"baseline_"+e)||(b={timestamp:b,cttAuthInfo:f},O("web_csi_via_jspb")?(a=new Zl,
G(a,1,e),e=new jm,ge(e,Zl,6,km,a),Zt(e,b)):wo("latencyActionBaselined",{clientActionNonce:e},b))):iw().tick(a,e,b,f);ww(c);return d}
function xw(){var a=document;if("visibilityState"in a)a=a.visibilityState;else{var b=vs+"VisibilityState";a=b in a?a[b]:void 0}switch(a){case "hidden":return 0;case "visible":return 1;case "prerender":return 2;case "unloaded":return 3;default:return-1}}
function yw(a){var b=mw(),c=pw(),d=N("CSI_START_TIMESTAMP_MILLIS",0);0<d&&!O("embeds_web_enable_csi_start_override_killswitch")&&(c=d);c&&(vw("srt",b.responseStart),1!==a.prerender&&vw("_start",c,void 0));a=zw();0<a&&vw("fpt",a);a=mw();a.isPerformanceNavigationTiming&&tw({performanceNavigationTiming:!0},void 0);vw("nreqs",a.requestStart,void 0);vw("nress",a.responseStart,void 0);vw("nrese",a.responseEnd,void 0);0<a.redirectEnd-a.redirectStart&&(vw("nrs",a.redirectStart,void 0),vw("nre",a.redirectEnd,
void 0));0<a.domainLookupEnd-a.domainLookupStart&&(vw("ndnss",a.domainLookupStart,void 0),vw("ndnse",a.domainLookupEnd,void 0));0<a.connectEnd-a.connectStart&&(vw("ntcps",a.connectStart,void 0),vw("ntcpe",a.connectEnd,void 0));a.secureConnectionStart>=pw()&&0<a.connectEnd-a.secureConnectionStart&&(vw("nstcps",a.secureConnectionStart,void 0),vw("ntcpe",a.connectEnd,void 0));nw&&"getEntriesByType"in nw&&Aw()}
function Bw(a,b){a=document.querySelector(a);if(!a)return!1;var c="",d=a.nodeName;"SCRIPT"===d?(c=a.src,c||(c=a.getAttribute("data-timing-href"))&&(c=window.location.protocol+c)):"LINK"===d&&(c=a.href);qc()&&a.setAttribute("nonce",qc());return c?(a=nw.getEntriesByName(c))&&a[0]&&(a=a[0],c=pw(),vw("rsf_"+b,c+Math.round(a.fetchStart)),vw("rse_"+b,c+Math.round(a.responseEnd)),void 0!==a.transferSize&&0===a.transferSize)?!0:!1:!1}
function Cw(){var a=[];if(document.querySelector&&nw&&nw.getEntriesByName)for(var b in rw)if(rw.hasOwnProperty(b)){var c=rw[b];Bw(b,c)&&a.push(c)}return a}
function Aw(){var a=window.location.protocol,b=nw.getEntriesByType("resource");b=gb(b,function(c){return 0===c.name.indexOf(a+"//fonts.gstatic.com/s/")});
(b=ib(b,function(c,d){return d.duration>c.duration?d:c},{duration:0}))&&0<b.startTime&&0<b.responseEnd&&(vw("wffs",ow(b.startTime)),vw("wffe",ow(b.responseEnd)))}
function Dw(a){var b=Ew("aft",a);if(b)return b;b=N((a||"")+"TIMING_AFT_KEYS",["ol"]);for(var c=b.length,d=0;d<c;d++){var e=Ew(b[d],a);if(e)return e}return NaN}
function Ew(a,b){if(a=Iv(b)[a])return"number"===typeof a?a:a[a.length-1]}
function ww(a){var b=Ew("_start",a),c=Dw(a);b&&c&&!qw&&(wq(fw,new ew(Math.round(c-b),a)),qw=!0)}
function Fw(a,b){for(var c=r(Object.keys(b)),d=c.next();!d.done;d=c.next())if(d=d.value,!Object.keys(a).includes(d)||"object"===typeof b[d]&&!Fw(a[d],b[d]))return!1;return!0}
function zw(){if(nw.getEntriesByType){var a=nw.getEntriesByType("paint");if(a=jb(a,function(b){return"first-paint"===b.name}))return ow(a.startTime)}a=nw.timing;
return a.He?Math.max(0,a.He):0}
;function Gw(a,b){Im(function(){Nv("").info.actionType=a;b&&Em("TIMING_AFT_KEYS",b);Em("TIMING_ACTION",a);if(O("web_csi_via_jspb")){var c=N("TIMING_INFO",{}),d=new dm;c=r(Object.entries(c));for(var e=c.next();!e.done;e=c.next()){var f=r(e.value);e=f.next().value;f=f.next().value;switch(e){case "GetBrowse_rid":fm(d,bm(am(e),String(f)));break;case "GetGuide_rid":fm(d,bm(am(e),String(f)));break;case "GetHome_rid":fm(d,bm(am(e),String(f)));break;case "GetPlayer_rid":fm(d,bm(am(e),String(f)));break;case "GetSearch_rid":fm(d,
bm(am(e),String(f)));break;case "GetSettings_rid":fm(d,bm(am(e),String(f)));break;case "GetTrending_rid":fm(d,bm(am(e),String(f)));break;case "GetWatchNext_rid":fm(d,bm(am(e),String(f)));break;case "yt_red":G(d,14,!!f);break;case "yt_ad":G(d,9,!!f)}}uw(d);d=new dm;d=G(d,25,!0);d=G(d,1,V[Uv(N("TIMING_ACTION"))]);(c=N("PREVIOUS_ACTION"))&&G(d,13,V[Uv(c)]);(c=N("CLIENT_PROTOCOL"))&&G(d,33,c);(c=N("CLIENT_TRANSPORT"))&&G(d,34,c);(c=Hu())&&"UNDEFINED_CSN"!==c&&G(d,4,c);c=xw();1!==c&&-1!==c||G(d,6,!0);
c=Gv();Hv();G(d,3,"cold");yw(c);c=Cw();if(0<c.length)for(c=r(c),e=c.next();!e.done;e=c.next())e=e.value,f=new cm,G(f,1,e),ie(d,83,cm,f);uw(d)}else{d=N("TIMING_INFO",{});for(c in d)d.hasOwnProperty(c)&&sw(c,d[c]);d={isNavigation:!0,actionType:Uv(N("TIMING_ACTION"))};if(c=N("PREVIOUS_ACTION"))d.previousAction=Uv(c);if(c=N("CLIENT_PROTOCOL"))d.httpProtocol=c;if(c=N("CLIENT_TRANSPORT"))d.transportProtocol=c;(c=Hu())&&"UNDEFINED_CSN"!==c&&(d.clientScreenNonce=c);c=xw();if(1===c||-1===c)d.isVisible=!0;
Hv();Gv();d.loadType="cold";yw(Gv());c=Cw();if(0<c.length)for(d.resourceInfo=[],c=r(c),e=c.next();!e.done;e=c.next())d.resourceInfo.push({resourceCache:e.value});tw(d)}d=Gv();c=Kv();if("cold"===Hv().loadType&&("cold"===d.yt_lt||"cold"===c.loadType)){e=Iv();f=Jv();f=f.gelTicks?f.gelTicks:f.gelTicks={};for(var g in e)if(!(g in f))if("number"===typeof e[g])vw(g,Ew(g));else if(O("log_repeated_ytcsi_ticks"))for(var h=r(e[g]),l=h.next();!l.done;l=h.next())vw(g.slice(1),l.value);g={};e=!1;f=r(Object.keys(d));
for(h=f.next();!h.done;h=f.next())h=h.value,(h=Vv(h,d[h]))&&!Fw(Kv(),h)&&(Av(c,h),Av(g,h),e=!0);e&&tw(g)}z("ytglobal.timingready_",!0);g=N("TIMING_ACTION");A("ytglobal.timingready_")&&g&&Hw()&&Dw()&&ww()})()}
function Iw(a,b,c,d){Im(sw)(a,b,c,d)}
function Jw(a,b,c){return Im(vw)(a,b,c)}
function Hw(){return Im(function(){return"_start"in Iv()})()}
function Kw(){Im(function(){var a=Lv();requestAnimationFrame(function(){setTimeout(function(){a===Lv()&&Jw("ol",void 0,void 0)},0)})})()}
var Lw=window;Lw.ytcsi&&(Lw.ytcsi.info=Iw,Lw.ytcsi.tick=Jw);var Mw="tokens consistency mss client_location entities response_received_commands store PLAYER_PRELOAD".split(" "),Nw=["type.googleapis.com/youtube.api.pfiinnertube.YoutubeApiInnertube.BrowseResponse"];function Ow(a,b,c,d){this.m=a;this.V=b;this.l=c;this.j=d;this.i=void 0;this.h=new Map;a.Qb||(a.Qb={});a.Qb=Object.assign({},zv,a.Qb)}
function Pw(a,b,c,d){if(void 0!==Ow.h){if(d=Ow.h,a=[a!==d.m,b!==d.V,c!==d.l,!1,!1,void 0!==d.i],a.some(function(e){return e}))throw new P("InnerTubeTransportService is already initialized",a);
}else Ow.h=new Ow(a,b,c,d)}
function Qw(a){var b={signalServiceEndpoint:{signal:"GET_DATASYNC_IDS"}};var c=void 0===c?Kn:c;var d=rv(b,a.m);if(!d)return Rf(new P("Error: No request builder found for command.",b));var e=d.m(b,void 0,c);return e?new Mf(function(f){var g,h,l;return x(function(m){if(1==m.h){h="cors"===(null==(g=e.kb)?void 0:g.mode)?"cors":void 0;if(a.l.ff){var n=e.config,q;n=null==n?void 0:null==(q=n.Yb)?void 0:q.sessionIndex;q=Jn(0,{sessionIndex:n});l=Object.assign({},Rw(h),q);return m.v(2)}return w(m,Sw(e.config,
h),3)}2!=m.h&&(l=m.i);f(Tw(a,e,l));m.h=0})}):Rf(new P("Error: Failed to build request for command.",b))}
function Uw(a,b,c){var d;if(b&&!(null==b?0:null==(d=b.Hg)?0:d.Lg)&&a.j){d=r(Mw);for(var e=d.next();!e.done;e=d.next())e=e.value,a.j[e]&&a.j[e].handleResponse(b,c)}}
function Tw(a,b,c){var d,e,f,g,h,l,m,n,q,u,t,B,C,F,M,S,R,X,Y,$a,Oa,Ba,ra,ia,J,cf,Lc,df;return x(function(va){switch(va.h){case 1:va.v(2);break;case 3:if((d=va.i)&&!d.isExpired())return va.return(Promise.resolve(d.h()));case 2:if(null==(e=b)?0:null==(f=e.Ja)?0:f.context)for(g=r([]),h=g.next();!h.done;h=g.next())l=h.value,l.Dg(b.Ja.context);if(null==(m=a.i)||!m.Ig(b.input,b.Ja)){va.v(4);break}return w(va,a.i.yg(b.input,b.Ja),5);case 5:return n=va.i,O("kevlar_process_local_innertube_responses_killswitch")||
Uw(a,n,b),va.return(n);case 4:return(t=null==(u=b.config)?void 0:u.Ma)&&a.h.has(t)&&O("web_memoize_inflight_requests")?q=a.h.get(t):(B=JSON.stringify(b.Ja),M=null!=(F=null==(C=b.kb)?void 0:C.headers)?F:{},b.kb=Object.assign({},b.kb,{headers:Object.assign({},M,c)}),S=Object.assign({},b.kb),"POST"===b.kb.method&&(S=Object.assign({},S,{body:B})),(null==(R=b.config)?0:R.Pe)&&Jw(b.config.Pe),X=function(){return a.V.fetch(b.input,S,b.config)},q=X(),t&&a.h.set(t,q)),w(va,q,6);
case 6:if((Y=va.i)&&"error"in Y&&(null==($a=Y)?0:null==(Oa=$a.error)?0:Oa.details))for(Ba=Y.error.details,ra=r(Ba),ia=ra.next();!ia.done;ia=ra.next())J=ia.value,(cf=J["@type"])&&-1<Nw.indexOf(cf)&&(delete J["@type"],Y=J);t&&a.h.has(t)&&a.h.delete(t);(null==(Lc=b.config)?0:Lc.Qe)&&Jw(b.config.Qe);if(Y||null==(df=a.i)||!df.qg(b.input,b.Ja)){va.v(7);break}return w(va,a.i.xg(b.input,b.Ja),8);case 8:Y=va.i;case 7:return Uw(a,Y,b),va.return(Y||void 0)}})}
function Sw(a,b){var c,d,e,f;return x(function(g){if(1==g.h){e=null==(c=a)?void 0:null==(d=c.Yb)?void 0:d.sessionIndex;var h=Jn(0,{sessionIndex:e});if(!(h instanceof Mf)){var l=new Mf(cb);Nf(l,2,h);h=l}return w(g,h,2)}f=g.i;return g.return(Promise.resolve(Object.assign({},Rw(b),f)))})}
function Rw(a){var b={"Content-Type":"application/json"};N("EOM_VISITOR_DATA")?b["X-Goog-EOM-Visitor-Id"]=N("EOM_VISITOR_DATA"):N("VISITOR_DATA")&&(b["X-Goog-Visitor-Id"]=N("VISITOR_DATA"));b["X-Youtube-Bootstrap-Logged-In"]=N("LOGGED_IN",!1);"cors"!==a&&((a=N("INNERTUBE_CONTEXT_CLIENT_NAME"))&&(b["X-Youtube-Client-Name"]=a),(a=N("INNERTUBE_CONTEXT_CLIENT_VERSION"))&&(b["X-Youtube-Client-Version"]=a),(a=N("CHROME_CONNECTED_HEADER"))&&(b["X-Youtube-Chrome-Connected"]=a),(a=N("DOMAIN_ADMIN_STATE"))&&
(b["X-Youtube-Domain-Admin-State"]=a));return b}
;var Vw=new Vs("INNERTUBE_TRANSPORT_TOKEN");var Ww=["share/get_web_player_share_panel"],Xw=["feedback"],Yw=["notification/modify_channel_preference"],Zw=["browse/edit_playlist"],$w=["subscription/subscribe"],ax=["subscription/unsubscribe"];function bx(){}
v(bx,wv);bx.prototype.j=function(){return $w};
bx.prototype.h=function(a){return ft(a,vm)||void 0};
bx.prototype.i=function(a,b,c){c=void 0===c?{}:c;b.channelIds&&(a.channelIds=b.channelIds);b.siloName&&(a.siloName=b.siloName);b.params&&(a.params=b.params);c.botguardResponse&&(a.botguardResponse=c.botguardResponse);c.feature&&(a.clientFeature=c.feature)};
da.Object.defineProperties(bx.prototype,{l:{configurable:!0,enumerable:!0,get:function(){return!0}}});function cx(){}
v(cx,wv);cx.prototype.j=function(){return ax};
cx.prototype.h=function(a){return ft(a,um)||void 0};
cx.prototype.i=function(a,b){b.channelIds&&(a.channelIds=b.channelIds);b.siloName&&(a.siloName=b.siloName);b.params&&(a.params=b.params)};
da.Object.defineProperties(cx.prototype,{l:{configurable:!0,enumerable:!0,get:function(){return!0}}});function dx(){}
v(dx,wv);dx.prototype.j=function(){return Xw};
dx.prototype.h=function(a){return ft(a,dl)||void 0};
dx.prototype.i=function(a,b,c){a.feedbackTokens=[];b.feedbackToken&&a.feedbackTokens.push(b.feedbackToken);if(b=b.cpn||c.cpn)a.feedbackContext={cpn:b};a.isFeedbackTokenUnencrypted=!!c.is_feedback_token_unencrypted;a.shouldMerge=!1;c.extra_feedback_tokens&&(a.shouldMerge=!0,a.feedbackTokens=a.feedbackTokens.concat(c.extra_feedback_tokens))};
da.Object.defineProperties(dx.prototype,{l:{configurable:!0,enumerable:!0,get:function(){return!0}}});function ex(){}
v(ex,wv);ex.prototype.j=function(){return Yw};
ex.prototype.h=function(a){return ft(a,tm)||void 0};
ex.prototype.i=function(a,b){b.params&&(a.params=b.params);b.secondaryParams&&(a.secondaryParams=b.secondaryParams)};function fx(){}
v(fx,wv);fx.prototype.j=function(){return Zw};
fx.prototype.h=function(a){return ft(a,sm)||void 0};
fx.prototype.i=function(a,b){b.actions&&(a.actions=b.actions);b.params&&(a.params=b.params);b.playlistId&&(a.playlistId=b.playlistId)};function gx(){}
v(gx,wv);gx.prototype.j=function(){return Ww};
gx.prototype.h=function(a){return ft(a,rm)};
gx.prototype.i=function(a,b,c){c=void 0===c?{}:c;b.serializedShareEntity&&(a.serializedSharedEntity=b.serializedShareEntity);c.includeListId&&(a.includeListId=!0)};var hx=new Vs("NETWORK_SLI_TOKEN");function ix(a){this.h=a}
ix.prototype.fetch=function(a,b){var c=this,d,e,f;return x(function(g){c.h&&(d=uc(vc(5,Ic(a,"key")))||"/UNKNOWN_PATH",c.h.start(d));e=b;O("wug_networking_gzip_request")&&(e=Oq(b));f=new window.Request(a,e);return O("web_fetch_promise_cleanup_killswitch")?g.return(Promise.resolve(fetch(f).then(function(h){return c.handleResponse(h)}).catch(function(h){mu(h)}))):g.return(fetch(f).then(function(h){return c.handleResponse(h)}).catch(function(h){mu(h)}))})};
ix.prototype.handleResponse=function(a){var b=a.text().then(function(c){return JSON.parse(c.replace(")]}'",""))});
a.redirected||a.ok?this.h&&this.h.success():(this.h&&this.h.ug(),b=b.then(function(c){mu(new P("Error: API fetch failed",a.status,a.url,c));return Object.assign({},c,{errorMetadata:{status:a.status}})}));
return b};
ix[Us]=[new Ws(hx)];var jx=new Vs("NETWORK_MANAGER_TOKEN");var kx;function lx(a){a=void 0===a||a?vu():uu();for(var b=[],c=0;c<a.length;c++)b.push("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_".charAt(a[c]&63));return b.join("")}
;function mx(a){qq.call(this,1,arguments);this.csn=a}
v(mx,qq);var zq=new rq("screen-created",mx),nx=[],px=ox,qx=0;function rx(a,b,c,d,e,f,g,h){function l(){mu(new P("newScreen() parent element does not have a VE - rootVe",b))}
var m=px(),n=new Au({veType:b,youtubeData:f,jspbYoutubeData:void 0});f={sequenceGroup:m};e&&(f.cttAuthInfo=e);if(O("il_via_jspb")){e=Rl((new Ql).h(m),n.getAsJspb());c&&c.visualElement?(n=new Ol,c.clientScreenNonce&&G(n,2,c.clientScreenNonce),Pl(n,c.visualElement.getAsJspb()),g&&G(n,4,lm[g]),H(e,Ol,5,n)):c&&l();d&&G(e,3,d);if(O("expectation_logging")&&h&&h.screenCreatedLoggingExpectations){c=new Gk;h=r(h.screenCreatedLoggingExpectations.expectedParentScreens||[]);for(d=h.next();!d.done;d=h.next())d=
d.value,d.screenVeType&&(d=Fk(new Ek,d.screenVeType),ie(c,1,Ek,d));H(e,Gk,7,c)}du(e,f,a)}else e={csn:m,pageVe:n.getAsJson()},O("expectation_logging")&&h&&h.screenCreatedLoggingExpectations&&(e.screenCreatedLoggingExpectations=h.screenCreatedLoggingExpectations),c&&c.visualElement?(e.implicitGesture={parentCsn:c.clientScreenNonce,gesturedVe:c.visualElement.getAsJson()},g&&(e.implicitGesture.gestureType=g)):c&&l(),d&&(e.cloneCsn=d),a?Tt("screenCreated",e,a,f):wo("screenCreated",e,f);wq(zq,new mx(m));
return m}
function sx(a,b,c,d){var e=d.filter(function(l){l.csn!==b?(l.csn=b,l=!0):l=!1;return l}),f={cttAuthInfo:Ku(b)||void 0,
sequenceGroup:b};d=r(d);for(var g=d.next();!g.done;g=d.next())g=g.value.getAsJson(),(pb(g)||!g.trackingParams&&!g.veType)&&mu(Error("Child VE logged with no data"));if(O("il_via_jspb")){var h=Ul((new Sl).h(b),c.getAsJspb());hb(e,function(l){l=l.getAsJspb();ie(h,3,Jl,l)});
"UNDEFINED_CSN"===b?tx("visualElementAttached",f,void 0,h):eu(h,f,a)}else c={csn:b,parentVe:c.getAsJson(),childVes:hb(e,function(l){return l.getAsJson()})},"UNDEFINED_CSN"===b?tx("visualElementAttached",f,c):a?Tt("visualElementAttached",c,a,f):wo("visualElementAttached",c,f)}
function ux(a,b,c,d,e,f){d={cttAuthInfo:Ku(b)||void 0,sequenceGroup:b};O("il_via_jspb")?(e=(new Xl).h(b),c=c.getAsJspb(),c=H(e,Jl,2,c),c=G(c,4,1),f&&H(c,Ml,3,f),"UNDEFINED_CSN"===b?tx("visualElementShown",d,void 0,c):$t(c,d,a)):(f={csn:b,ve:c.getAsJson(),eventType:1},e&&(f.clientData=e),"UNDEFINED_CSN"===b?tx("visualElementShown",d,f):a?Tt("visualElementShown",f,a,d):wo("visualElementShown",f,d))}
function vx(a,b,c){var d=!0,e=(d=void 0===d?!1:d)?16:8,f={cttAuthInfo:Ku(b)||void 0,sequenceGroup:b,endOfSequence:d};O("il_via_jspb")?(e=(new Wl).h(b),c=c.getAsJspb(),c=H(e,Jl,2,c),G(c,4,d?16:8),"UNDEFINED_CSN"===b?tx("visualElementHidden",f,void 0,c):au(c,f,a)):(d={csn:b,ve:c.getAsJson(),eventType:e},"UNDEFINED_CSN"===b?tx("visualElementHidden",f,d):a?Tt("visualElementHidden",d,a,f):wo("visualElementHidden",d,f))}
function ox(){var a;O("enable_web_96_bit_csn")?a=lx():O("enable_web_96_bit_csn_no_crypto")?a=lx(!1):a=od(Kc(Math.random()+""),3);return a}
function tx(a,b,c,d){nx.push({Mc:a,payload:c,Sa:d,options:b});qx||(qx=Aq())}
function Bq(a){if(nx){for(var b=r(nx),c=b.next();!c.done;c=b.next())if(c=c.value,O("il_via_jspb")&&c.Sa)switch(c.Sa.h(a.csn),c.Mc){case "screenCreated":du(c.Sa,c.options);break;case "visualElementAttached":eu(c.Sa,c.options);break;case "visualElementShown":$t(c.Sa,c.options);break;case "visualElementHidden":au(c.Sa,c.options);break;case "visualElementGestured":bu(c.Sa,c.options);break;case "visualElementStateChanged":cu(c.Sa,c.options);break;default:mu(new P("flushQueue unable to map payloadName to JSPB setter"))}else c.payload&&
(c.payload.csn=a.csn,wo(c.Mc,c.payload,c.options));nx.length=0}qx=0}
;function wx(){this.j=new Set;this.i=new Set;this.m=new Map;this.client=void 0;this.csn=null}
function xx(){wx.h||(wx.h=new wx);return wx.h}
wx.prototype.l=function(a){this.client=a};
wx.prototype.h=function(){this.clear();this.csn=Hu()};
wx.prototype.clear=function(){this.j.clear();this.i.clear();this.m.clear();this.csn=null};function yx(){}
yx.prototype.l=function(a){Im(xx().l).bind(xx())(a)};
yx.prototype.clear=function(){Im(xx().clear).bind(xx())()};function zx(){this.s=[];this.H=[];this.h=[];this.A=[];this.m=[];this.W=[];this.i=new Set;this.L=new Map}
zx.prototype.l=function(a){this.client=a};
function Ax(){zx.h||(zx.h=new zx);var a=zx.h;var b=16623;var c=void 0===c?{}:c;Im(function(){Ou.includes(b)||(mu(new P("createClientScreen() called with a non-page VE",b)),b=83769);c.isHistoryNavigation||(a.A=[],a.h.push({rootVe:b,key:c.key||""}));a.s=[];a.H=[];c.kd?Bx(a,b,c):Cx(a,b,c)})()}
function Dx(a,b,c){c=void 0===c?0:c;Im(function(){b.then(function(d){a.i.has(c)&&a.j&&a.j();var e=Hu(c),f=Fu(c);if(e&&f){var g;(null==d?0:null==(g=d.response)?0:g.trackingParams)&&sx(a.client,e,f,[Bu(d.response.trackingParams)]);var h;(null==d?0:null==(h=d.playerResponse)?0:h.trackingParams)&&sx(a.client,e,f,[Bu(d.playerResponse.trackingParams)])}})})()}
function Ex(a,b,c,d){d=void 0===d?0:d;Im(function(){if(a.i.has(d))return a.s.push([b,c]),!0;var e=Hu(d),f=c||Fu(d);return e&&f?(sx(a.client,e,f,[b]),!0):!1})()}
zx.prototype.clickCommand=function(a,b,c){var d=a.clickTrackingParams;c=void 0===c?0:c;if(d)if(c=Hu(void 0===c?0:c)){a=this.client;var e=Bu(d);d={cttAuthInfo:Ku(c)||void 0,sequenceGroup:c};O("il_via_jspb")?(b=(new Vl).h(c),e=e.getAsJspb(),b=H(b,Jl,2,e),G(b,4,lm.INTERACTION_LOGGING_GESTURE_TYPE_GENERIC_CLICK),"UNDEFINED_CSN"===c?tx("visualElementGestured",d,void 0,b):bu(b,d,a)):(e={csn:c,ve:e.getAsJson(),gestureType:"INTERACTION_LOGGING_GESTURE_TYPE_GENERIC_CLICK"},b&&(e.clientData=b),"UNDEFINED_CSN"===
c?tx("visualElementGestured",d,e):a?Tt("visualElementGestured",e,a,d):wo("visualElementGestured",e,d));b=!0}else b=!1;else b=!1;return b};
zx.prototype.visualElementStateChanged=function(a,b,c){c=void 0===c?0:c;0===c&&this.i.has(c)?this.H.push([a,b]):Fx(this,a,b,c)};
function Fx(a,b,c,d){d=void 0===d?0:d;var e=Hu(d);d=b||Fu(d);e&&d&&(a=a.client,b={cttAuthInfo:Ku(e)||void 0,sequenceGroup:e},O("il_via_jspb")?(c=new Yl,c.h(e),d=d.getAsJspb(),H(c,Jl,2,d),"UNDEFINED_CSN"===e?tx("visualElementStateChanged",b,void 0,c):cu(c,b,a)):(c={csn:e,ve:d.getAsJson(),clientData:c},"UNDEFINED_CSN"===e?tx("visualElementStateChanged",b,c):a?Tt("visualElementStateChanged",c,a,b):wo("visualElementStateChanged",c,b)))}
function Bx(a,b,c){c=void 0===c?{}:c;a.i.add(c.layer||0);a.j=function(){Cx(a,b,c);var f=Fu(c.layer);if(f){for(var g=r(a.s),h=g.next();!h.done;h=g.next())h=h.value,Ex(a,h[0],h[1]||f,c.layer);f=r(a.H);for(g=f.next();!g.done;g=f.next())g=g.value,Fx(a,g[0],g[1])}};
Hu(c.layer)||a.j();if(c.kd)for(var d=r(c.kd),e=d.next();!e.done;e=d.next())Dx(a,e.value,c.layer);else lu(Error("Delayed screen needs a data promise."))}
function Cx(a,b,c){c=void 0===c?{}:c;var d=void 0;c.layer||(c.layer=0);d=void 0!==c.Ke?c.Ke:c.layer;var e=Hu(d);d=Fu(d);var f;d&&(void 0!==c.parentCsn?f={clientScreenNonce:c.parentCsn,visualElement:d}:e&&"UNDEFINED_CSN"!==e&&(f={clientScreenNonce:e,visualElement:d}));var g,h=N("EVENT_ID");"UNDEFINED_CSN"===e&&h&&(g={servletData:{serializedServletEventId:h}});try{var l=rx(a.client,b,f,c.jd,c.cttAuthInfo,g,c.vg,c.loggingExpectations)}catch(q){pu(q,{Fg:b,rootVe:d,Cg:void 0,rg:e,Bg:f,jd:c.jd});lu(q);
return}Lu(l,b,c.layer,c.cttAuthInfo);e&&"UNDEFINED_CSN"!==e&&d&&!Iu(e)&&vx(a.client,e,d);a.h[a.h.length-1]&&!a.h[a.h.length-1].csn&&(a.h[a.h.length-1].csn=l||"");Im(tw)({clientScreenNonce:l},void 0,!1);yx.h||(yx.h=new yx);Im(xx().h).bind(xx())();var m=Fu(c.layer);e&&"UNDEFINED_CSN"!==e&&m&&(O("web_mark_root_visible")||O("music_web_mark_root_visible"))&&Im(ux)(void 0,l,m,void 0,void 0,void 0);a.i.delete(c.layer||0);a.j=void 0;var n;null==(n=a.L.get(c.layer))||n.forEach(function(q,u){q?Ex(a,u,q,c.layer):
m&&Ex(a,u,m,c.layer)});
Gx(a)}
function Gx(a){for(var b=0;b<a.m.length;b++){var c=a.m[b];try{c()}catch(d){lu(d)}}for(b=a.m.length=0;b<a.W.length;b++){c=a.W[b];try{c()}catch(d){lu(d)}}}
;function Hx(){var a,b,c;return x(function(d){if(1==d.h)return a=at().resolve(Vw),a?w(d,Qw(a),2):(mu(Error("InnertubeTransportService unavailable in fetchDatasyncIds")),d.return(void 0));if(b=d.i){if(b.errorMetadata)return mu(Error("Datasync IDs fetch responded with "+b.errorMetadata.status+": "+b.error)),d.return(void 0);c=b.sg;return d.return(c)}mu(Error("Network request to get Datasync IDs failed."));return d.return(void 0)})}
;var Ix=y.caches,Jx;function Kx(a){var b=a.indexOf(":");return-1===b?{Bd:a}:{Bd:a.substring(0,b),datasyncId:a.substring(b+1)}}
function Lx(){return x(function(a){if(void 0!==Jx)return a.return(Jx);Jx=new Promise(function(b){var c;return x(function(d){switch(d.h){case 1:return xa(d,2),w(d,Ix.open("test-only"),4);case 4:return w(d,Ix.delete("test-only"),5);case 5:ya(d,3);break;case 2:if(c=za(d),c instanceof Error&&"SecurityError"===c.name)return b(!1),d.return();case 3:b("caches"in window),d.h=0}})});
return a.return(Jx)})}
function Mx(a){var b,c,d,e,f,g,h;x(function(l){if(1==l.h)return w(l,Lx(),2);if(3!=l.h){if(!l.i)return l.return(!1);b=[];return w(l,Ix.keys(),3)}c=l.i;d=r(c);for(e=d.next();!e.done;e=d.next())f=e.value,g=Kx(f),h=g.datasyncId,!h||a.includes(h)||b.push(Ix.delete(f));return l.return(Promise.all(b).then(function(m){return m.some(function(n){return n})}))})}
function Nx(){var a,b,c,d,e,f,g;return x(function(h){if(1==h.h)return w(h,Lx(),2);if(3!=h.h){if(!h.i)return h.return(!1);a=go("cache contains other");return w(h,Ix.keys(),3)}b=h.i;c=r(b);for(d=c.next();!d.done;d=c.next())if(e=d.value,f=Kx(e),(g=f.datasyncId)&&g!==a)return h.return(!0);return h.return(!1)})}
;function Ox(){try{return!!self.localStorage}catch(a){return!1}}
;function Px(a){a=a.match(/(.*)::.*::.*/);if(null!==a)return a[1]}
function Qx(a){if(Ox()){var b=Object.keys(window.localStorage);b=r(b);for(var c=b.next();!c.done;c=b.next()){c=c.value;var d=Px(c);void 0===d||a.includes(d)||self.localStorage.removeItem(c)}}}
function Rx(){if(!Ox())return!1;var a=go(),b=Object.keys(window.localStorage);b=r(b);for(var c=b.next();!c.done;c=b.next())if(c=Px(c.value),void 0!==c&&c!==a)return!0;return!1}
;function Sx(){Hx().then(function(a){a&&(Jp(a),Mx(a),Qx(a))})}
function Tx(){var a=new hs;xi.ea(function(){var b,c,d,e;return x(function(f){switch(f.h){case 1:if(O("ytidb_clear_optimizations_killswitch")){f.v(2);break}b=go("clear");if(b.startsWith("V")){var g=[b];Jp(g);Mx(g);Qx(g);return f.return()}c=Rx();return w(f,Nx(),3);case 3:return d=f.i,w(f,Kp(),4);case 4:if(e=f.i,!c&&!d&&!e)return f.return();case 2:a.la()?Sx():a.l.add("publicytnetworkstatus-online",Sx,!0,void 0,void 0),f.h=0}})})}
;var ci=fa(["data-"]);function Ux(a){a&&(a.dataset?a.dataset[Vx("loaded")]="true":bi(a))}
function Wx(a,b){return a?a.dataset?a.dataset[Vx(b)]:a.getAttribute("data-"+b):null}
var Xx={};function Vx(a){return Xx[a]||(Xx[a]=String(a).replace(/\-([a-z])/g,function(b,c){return c.toUpperCase()}))}
;var Yx=/\.vflset|-vfl[a-zA-Z0-9_+=-]+/,Zx=/-[a-zA-Z]{2,3}_[a-zA-Z]{2,3}(?=(\/|$))/;function $x(a,b,c){c=void 0===c?null:c;if(window.spf&&spf.script){c="";if(a){var d=a.indexOf("jsbin/"),e=a.lastIndexOf(".js"),f=d+6;-1<d&&-1<e&&e>f&&(c=a.substring(f,e),c=c.replace(Yx,""),c=c.replace(Zx,""),c=c.replace("debug-",""),c=c.replace("tracing-",""))}spf.script.load(a,c,b)}else ay(a,b,c)}
function ay(a,b,c){c=void 0===c?null:c;var d=by(a),e=document.getElementById(d),f=e&&Wx(e,"loaded"),g=e&&!f;f?b&&b():(b&&(f=Os(d,b),b=""+Ra(b),cy[b]=f),g||(e=dy(a,d,function(){Wx(e,"loaded")||(Ux(e),Rs(d),dn(Xa(Ss,d),0))},c)))}
function dy(a,b,c,d){d=void 0===d?null:d;var e=zf("SCRIPT");e.id=b;e.onload=function(){c&&setTimeout(c,0)};
e.onreadystatechange=function(){switch(e.readyState){case "loaded":case "complete":e.onload()}};
d&&e.setAttribute("nonce",d);ei(e,Ak(a));a=document.getElementsByTagName("head")[0]||document.body;a.insertBefore(e,a.firstChild);return e}
function ey(a){a=by(a);var b=document.getElementById(a);b&&(Ss(a),b.parentNode.removeChild(b))}
function fy(a,b){a&&b&&(a=""+Ra(b),(a=cy[a])&&Qs(a))}
function by(a){var b=document.createElement("a");nc(b,a);a=b.href.replace(/^[a-zA-Z]+:\/\//,"//");return"js-"+sc(a)}
var cy={};var gy=[],hy=!1;function iy(){if(!O("disable_biscotti_fetch_for_ad_blocker_detection")&&!O("disable_biscotti_fetch_entirely_for_all_web_clients")&&Xu()){var a=N("PLAYER_VARS",{});if("1"!=rb(a)&&!Yu(a)){var b=function(){hy=!0;"google_ad_status"in window?Em("DCLKSTAT",1):Em("DCLKSTAT",2)};
try{$x("//static.doubleclick.net/instream/ad_status.js",b)}catch(c){}gy.push(xi.ea(function(){if(!(hy||"google_ad_status"in window)){try{fy("//static.doubleclick.net/instream/ad_status.js",b)}catch(c){}hy=!0;Em("DCLKSTAT",3)}},5E3))}}}
function jy(){var a=Number(N("DCLKSTAT",0));return isNaN(a)?0:a}
;var vy=window,wy,xy=O("web_enable_lifecycle_monitoring")&&(null==(wy=vy.performance)?void 0:wy.measure);function yy(a){var b=this;var c=void 0===c?0:c;var d=void 0===d?mo():d;this.l=c;this.j=d;this.i=new Uh;this.h=a;for(a={Za:0};a.Za<this.h.length;a={Cb:a.Cb,Za:a.Za},a.Za++)a.Cb=this.h[a.Za],c=function(e){return function(){e.Cb.Fc();b.h[e.Za].nc=!0;b.h.every(function(f){return!0===f.nc})&&b.i.resolve()}}(a),d=jo(c,zy(this,a.Cb)),this.h[a.Za]=Object.assign({},a.Cb,{Fc:c,
jobId:d})}
function Ay(a){var b=Array.from(a.h.keys()).sort(function(d,e){return zy(a,a.h[e])-zy(a,a.h[d])});
b=r(b);for(var c=b.next();!c.done;c=b.next())c=a.h[c.value],void 0===c.jobId||c.nc||(a.j.Ba(c.jobId),jo(c.Fc,10))}
yy.prototype.cancel=function(){for(var a=r(this.h),b=a.next();!b.done;b=a.next())b=b.value,void 0===b.jobId||b.nc||this.j.Ba(b.jobId),b.nc=!0;this.i.resolve()};
function zy(a,b){var c;return null!=(c=b.priority)?c:a.l}
;function By(a){this.state=a;this.plugins=[];this.s=void 0;this.H={};xy&&window.performance.mark(this.state+"-start")}
k=By.prototype;k.install=function(a){this.plugins.push(a);return this};
k.uninstall=function(){var a=this;Ja.apply(0,arguments).forEach(function(b){b=a.plugins.indexOf(b);-1<b&&a.plugins.splice(b,1)})};
k.transition=function(a,b){var c=this;Cy(this);var d=this.transitions.find(function(f){return Array.isArray(f.from)?f.from.find(function(g){return g===c.state&&f.K===a}):f.from===c.state&&f.K===a});
if(d){this.j&&(Ay(this.j),this.j=void 0);Dy(this,a,b);this.state=a;xy&&window.performance.mark(this.state+"-start");d=d.action.bind(this);var e=this.plugins.filter(function(f){return f[a]}).map(function(f){return f[a]});
d(Ey(this,e),b)}else throw Error("no transition specified from "+this.state+" to "+a);};
function Ey(a,b){var c=b.filter(function(e){return 10===Fy(a,e)}),d=b.filter(function(e){return 10!==Fy(a,e)});
return a.H.Jg?function(){var e=Ja.apply(0,arguments);return x(function(f){if(1==f.h)return w(f,a.Re.apply(a,[c].concat(ha(e))),2);a.Kd.apply(a,[d].concat(ha(e)));f.h=0})}:function(){var e=Ja.apply(0,arguments);
a.Se.apply(a,[c].concat(ha(e)));a.Kd.apply(a,[d].concat(ha(e)))}}
k.Se=function(a){var b=Ja.apply(1,arguments);mo();for(var c={},d=r(a),e=d.next();!e.done;c={ob:c.ob},e=d.next())c.ob=e.value,ko(function(f){return function(){Gy(f.ob.name);f.ob.callback.apply(f.ob,ha(b));Hy(f.ob.name)}}(c))};
k.Re=function(a){var b=Ja.apply(1,arguments),c,d,e,f;return x(function(g){1==g.h&&(mo(),c={},d=r(a),e=d.next());if(3!=g.h){if(e.done)return g.v(0);c.ab=e.value;c.Ab=void 0;f=function(h){return function(){Gy(h.ab.name);var l=h.ab.callback.apply(h.ab,ha(b));l&&(l instanceof Mf||l instanceof Promise)?h.Ab=l.then(function(){Hy(h.ab.name)}):Hy(h.ab.name)}}(c);
ko(f);return c.Ab?w(g,c.Ab,3):g.v(3)}c={ab:c.ab,Ab:c.Ab};e=d.next();return g.v(2)})};
k.Kd=function(a){var b=Ja.apply(1,arguments),c=this,d=a.map(function(e){return{Fc:function(){Gy(e.name);e.callback.apply(e,ha(b));Hy(e.name)},
priority:Fy(c,e)}});
d.length&&(this.j=new yy(d))};
function Fy(a,b){var c,d;return null!=(d=null!=(c=a.s)?c:b.priority)?d:0}
function Cy(a){if(xy){var b=a.state+"-start",c=a.state+"-end";window.performance.mark(c);window.performance.measure(a.state,b,c)}}
function Gy(a){xy&&a&&window.performance.mark(a+"-start")}
function Hy(a){if(xy&&a){var b=a+"-start",c=a+"-end";window.performance.mark(c);window.performance.measure(a,b,c)}}
function Dy(a,b,c){xy&&(console.groupCollapsed("["+a.constructor.name+"] '"+a.state+"' to '"+b+"'"),console.log("with message: ",c),console.groupEnd())}
da.Object.defineProperties(By.prototype,{currentState:{configurable:!0,enumerable:!0,get:function(){return this.state}}});function Iy(a){By.call(this,void 0===a?"document_active":a);var b=this;this.s=10;this.h=new Map;this.transitions=[{from:"document_active",K:"document_disposed_preventable",action:this.W},{from:"document_active",K:"document_disposed",action:this.l},{from:"document_disposed_preventable",K:"document_disposed",action:this.l},{from:"document_disposed_preventable",K:"flush_logs",action:this.m},{from:"document_disposed_preventable",K:"document_active",action:this.i},{from:"document_disposed",K:"flush_logs",
action:this.m},{from:"document_disposed",K:"document_active",action:this.i},{from:"document_disposed",K:"document_disposed",action:function(){}},
{from:"flush_logs",K:"document_active",action:this.i}];window.addEventListener("pagehide",function(c){b.transition("document_disposed",{event:c})});
window.addEventListener("beforeunload",function(c){b.transition("document_disposed_preventable",{event:c})})}
v(Iy,By);Iy.prototype.W=function(a,b){if(!this.h.get("document_disposed_preventable")){a(null==b?void 0:b.event);var c,d;if((null==b?0:null==(c=b.event)?0:c.defaultPrevented)||(null==b?0:null==(d=b.event)?0:d.returnValue)){b.event.returnValue||(b.event.returnValue=!0);b.event.defaultPrevented||b.event.preventDefault();this.h=new Map;this.transition("document_active");return}}this.h.set("document_disposed_preventable",!0);this.h.get("document_disposed")?this.transition("flush_logs"):this.transition("document_disposed")};
Iy.prototype.l=function(a,b){this.h.get("document_disposed")?this.transition("document_active"):(a(null==b?void 0:b.event),this.h.set("document_disposed",!0),this.transition("flush_logs"))};
Iy.prototype.m=function(a,b){a(null==b?void 0:b.event);this.transition("document_active")};
Iy.prototype.i=function(){this.h=new Map};function Jy(a){By.call(this,void 0===a?"document_visibility_unknown":a);var b=this;this.transitions=[{from:"document_visibility_unknown",K:"document_visible",action:this.i},{from:"document_visibility_unknown",K:"document_hidden",action:this.h},{from:"document_visibility_unknown",K:"document_foregrounded",action:this.m},{from:"document_visibility_unknown",K:"document_backgrounded",action:this.l},{from:"document_visible",K:"document_hidden",action:this.h},{from:"document_visible",K:"document_foregrounded",
action:this.m},{from:"document_visible",K:"document_visible",action:this.i},{from:"document_foregrounded",K:"document_visible",action:this.i},{from:"document_foregrounded",K:"document_hidden",action:this.h},{from:"document_foregrounded",K:"document_foregrounded",action:this.m},{from:"document_hidden",K:"document_visible",action:this.i},{from:"document_hidden",K:"document_backgrounded",action:this.l},{from:"document_hidden",K:"document_hidden",action:this.h},{from:"document_backgrounded",K:"document_hidden",
action:this.h},{from:"document_backgrounded",K:"document_backgrounded",action:this.l},{from:"document_backgrounded",K:"document_visible",action:this.i}];document.addEventListener("visibilitychange",function(c){"visible"===document.visibilityState?b.transition("document_visible",{event:c}):b.transition("document_hidden",{event:c})});
O("visibility_lifecycles_dynamic_backgrounding")&&(window.addEventListener("blur",function(c){b.transition("document_backgrounded",{event:c})}),window.addEventListener("focus",function(c){b.transition("document_foregrounded",{event:c})}))}
v(Jy,By);Jy.prototype.i=function(a,b){a(null==b?void 0:b.event);O("visibility_lifecycles_dynamic_backgrounding")&&this.transition("document_foregrounded")};
Jy.prototype.h=function(a,b){a(null==b?void 0:b.event);O("visibility_lifecycles_dynamic_backgrounding")&&this.transition("document_backgrounded")};
Jy.prototype.l=function(a,b){a(null==b?void 0:b.event)};
Jy.prototype.m=function(a,b){a(null==b?void 0:b.event)};function Ky(){this.j=new Iy;this.l=new Jy}
Ky.prototype.install=function(){var a=Ja.apply(0,arguments),b=this;a.forEach(function(c){b.j.install(c)});
a.forEach(function(c){b.l.install(c)})};function Ly(){Ky.call(this);var a={};this.install((a.document_disposed={callback:this.h},a));a={};this.install((a.flush_logs={callback:this.i},a))}
v(Ly,Ky);Ly.prototype.i=function(){if(O("web_fp_via_jspb")){var a=new Il,b=Hu();b&&G(a,1,b);b=new jm;ge(b,Il,380,km,a);Zt(b);O("web_fp_via_jspb_and_json")&&wo("finalPayload",{csn:Hu()})}else wo("finalPayload",{csn:Hu()})};
Ly.prototype.h=function(){ru(su)};function My(){}
function Ny(){var a=A("ytglobal.storage_");a||(a=new My,z("ytglobal.storage_",a));return a}
My.prototype.estimate=function(){var a,b,c;return x(function(d){a=navigator;return(null==(b=a.storage)?0:b.estimate)?d.return(a.storage.estimate()):(null==(c=a.webkitTemporaryStorage)?0:c.queryUsageAndQuota)?d.return(Oy()):d.return()})};
function Oy(){var a=navigator;return new Promise(function(b,c){var d;null!=(d=a.webkitTemporaryStorage)&&d.queryUsageAndQuota?a.webkitTemporaryStorage.queryUsageAndQuota(function(e,f){b({usage:e,quota:f})},function(e){c(e)}):c(Error("webkitTemporaryStorage is not supported."))})}
z("ytglobal.storageClass_",My);function uo(a,b){var c=this;this.handleError=a;this.h=b;this.i=!1;void 0===self.document||self.addEventListener("beforeunload",function(){c.i=!0});
this.j=Math.random()<=Ym("ytidb_transaction_ended_event_rate_limit_session",.2)}
uo.prototype.logEvent=function(a,b){switch(a){case "IDB_DATA_CORRUPTED":O("idb_data_corrupted_killswitch")||this.h("idbDataCorrupted",b);break;case "IDB_UNEXPECTEDLY_CLOSED":this.h("idbUnexpectedlyClosed",b);break;case "IS_SUPPORTED_COMPLETED":O("idb_is_supported_completed_killswitch")||this.h("idbIsSupportedCompleted",b);break;case "QUOTA_EXCEEDED":Py(this,b);break;case "TRANSACTION_ENDED":this.j&&Math.random()<=Ym("ytidb_transaction_ended_event_rate_limit_transaction",.1)&&this.h("idbTransactionEnded",
b);break;case "TRANSACTION_UNEXPECTEDLY_ABORTED":a=Object.assign({},b,{hasWindowUnloaded:this.i}),this.h("idbTransactionAborted",a)}};
function Py(a,b){Ny().estimate().then(function(c){c=Object.assign({},b,{isSw:void 0===self.document,isIframe:self!==self.top,deviceStorageUsageMbytes:Qy(null==c?void 0:c.usage),deviceStorageQuotaMbytes:Qy(null==c?void 0:c.quota)});a.h("idbQuotaExceeded",c)})}
function Qy(a){return"undefined"===typeof a?"-1":String(Math.ceil(a/1048576))}
;function Ry(a,b,c){Ge.call(this);var d=this;c=c||N("POST_MESSAGE_ORIGIN")||window.document.location.protocol+"//"+window.document.location.hostname;this.l=b||null;this.targetOrigin="*";this.m=c;this.sessionId=null;this.i="widget";this.R=!!a;this.L=function(e){a:if(!("*"!=d.m&&e.origin!=d.m||d.l&&e.source!=d.l||"string"!==typeof e.data)){try{var f=JSON.parse(e.data)}catch(g){break a}if(!(null==f||d.R&&(d.sessionId&&d.sessionId!=f.id||d.i&&d.i!=f.channel))&&f)switch(f.event){case "listening":"null"!=
e.origin&&(d.m=d.targetOrigin=e.origin);d.l=e.source;d.sessionId=f.id;d.j&&(d.j(),d.j=null);break;case "command":d.s&&(!d.A||0<=eb(d.A,f.func))&&d.s(f.func,f.args,e.origin)}}};
this.A=this.j=this.s=null;window.addEventListener("message",this.L)}
v(Ry,Ge);Ry.prototype.sendMessage=function(a,b){if(b=b||this.l){this.sessionId&&(a.id=this.sessionId);this.i&&(a.channel=this.i);try{var c=JSON.stringify(a);b.postMessage(c,this.targetOrigin)}catch(d){Km(d)}}};
Ry.prototype.M=function(){window.removeEventListener("message",this.L);Ge.prototype.M.call(this)};function Sy(){this.i=[];this.isReady=!1;this.j={};var a=this.h=new Ry(!!N("WIDGET_ID_ENFORCE")),b=this.Me.bind(this);a.s=b;a.A=null;this.h.i="widget";if(a=N("WIDGET_ID"))this.h.sessionId=a}
k=Sy.prototype;k.Me=function(a,b,c){"addEventListener"===a&&b?this.Ec(b[0],c):this.Vc(a,b,c)};
k.Vc=function(){};
k.xc=function(a){var b=this;return function(c){return b.sendMessage(a,c)}};
k.Ec=function(a,b){this.j[a]||"onReady"===a||(this.addEventListener(a,this.xc(a,b)),this.j[a]=!0)};
k.addEventListener=function(){};
k.pe=function(){this.isReady=!0;this.sendMessage("initialDelivery",this.Ac());this.sendMessage("onReady");fb(this.i,this.Id,this);this.i=[]};
k.Ac=function(){return null};
function Ty(a,b){a.sendMessage("infoDelivery",b)}
k.Id=function(a){this.isReady?this.h.sendMessage(a):this.i.push(a)};
k.sendMessage=function(a,b){this.Id({event:a,info:void 0===b?null:b})};
k.dispose=function(){this.h=null};var Uy={},Vy=(Uy["api.invalidparam"]=2,Uy.auth=150,Uy["drm.auth"]=150,Uy["heartbeat.net"]=150,Uy["heartbeat.servererror"]=150,Uy["heartbeat.stop"]=150,Uy["html5.unsupportedads"]=5,Uy["fmt.noneavailable"]=5,Uy["fmt.decode"]=5,Uy["fmt.unplayable"]=5,Uy["html5.missingapi"]=5,Uy["html5.unsupportedlive"]=5,Uy["drm.unavailable"]=5,Uy["mrm.blocked"]=151,Uy);var Wy=new Set("endSeconds startSeconds mediaContentUrl suggestedQuality videoId rct rctn".split(" "));function Xy(a){return(0===a.search("cue")||0===a.search("load"))&&"loadModule"!==a}
function Yy(a,b,c){if("string"===typeof a)return{videoId:a,startSeconds:b,suggestedQuality:c};b={};c=r(Wy);for(var d=c.next();!d.done;d=c.next())d=d.value,a[d]&&(b[d]=a[d]);return b}
function Zy(a,b,c,d){if(Qa(a)&&!Array.isArray(a)){b="playlist list listType index startSeconds suggestedQuality".split(" ");c={};for(d=0;d<b.length;d++){var e=b[d];a[e]&&(c[e]=a[e])}return c}b={index:b,startSeconds:c,suggestedQuality:d};"string"===typeof a&&16===a.length?b.list="PL"+a:b.playlist=a;return b}
;function $y(a){Sy.call(this);this.listeners=[];this.l=!1;this.api=a;this.addEventListener("onReady",this.onReady.bind(this));this.addEventListener("onVideoProgress",this.Ye.bind(this));this.addEventListener("onVolumeChange",this.Ze.bind(this));this.addEventListener("onApiChange",this.Te.bind(this));this.addEventListener("onPlaybackQualityChange",this.Ve.bind(this));this.addEventListener("onPlaybackRateChange",this.We.bind(this));this.addEventListener("onStateChange",this.Xe.bind(this));this.addEventListener("onWebglSettingsChanged",
this.af.bind(this))}
v($y,Sy);k=$y.prototype;
k.Vc=function(a,b,c){if(this.api.isExternalMethodAvailable(a,c)){b=b||[];if(0<b.length&&Xy(a)){var d=b;if(Qa(d[0])&&!Array.isArray(d[0]))var e=d[0];else switch(e={},a){case "loadVideoById":case "cueVideoById":e=Yy(d[0],void 0!==d[1]?Number(d[1]):void 0,d[2]);break;case "loadVideoByUrl":case "cueVideoByUrl":e=d[0];"string"===typeof e&&(e={mediaContentUrl:e,startSeconds:void 0!==d[1]?Number(d[1]):void 0,suggestedQuality:d[2]});b:{if((d=e.mediaContentUrl)&&(d=/\/([ve]|embed)\/([^#?]+)/.exec(d))&&d[2]){d=
d[2];break b}d=null}e.videoId=d;e=Yy(e);break;case "loadPlaylist":case "cuePlaylist":e=Zy(d[0],d[1],d[2],d[3])}b.length=1;b[0]=e}this.api.handleExternalCall(a,b,c);Xy(a)&&Ty(this,this.Ac())}};
k.Ec=function(a,b){"onReady"===a?this.api.logApiCall(a+" invocation",b):"onError"===a&&this.l&&(this.api.logApiCall(a+" invocation",b,this.errorCode),this.errorCode=void 0);this.api.logApiCall(a+" registration",b);Sy.prototype.Ec.call(this,a,b)};
k.xc=function(a,b){var c=this,d=Sy.prototype.xc.call(this,a,b);return function(e){"onError"===a?c.api.logApiCall(a+" invocation",b,e):c.api.logApiCall(a+" invocation",b);d(e)}};
k.onReady=function(){var a=this.pe.bind(this);this.h.j=a;a=this.api.getVideoData();if(!a.isPlayable){this.l=!0;a=a.errorCode;var b=void 0===b?5:b;this.errorCode=a?Vy[a]||b:b;this.sendMessage("onError",this.errorCode.toString())}};
k.addEventListener=function(a,b){this.listeners.push({eventType:a,listener:b});this.api.addEventListener(a,b)};
k.Ac=function(){if(!this.api)return null;var a=this.api.getApiInterface();kb(a,"getVideoData");for(var b={apiInterface:a},c=0,d=a.length;c<d;c++){var e=a[c];if(0===e.search("get")||0===e.search("is")){var f=0;0===e.search("get")?f=3:0===e.search("is")&&(f=2);f=e.charAt(f).toLowerCase()+e.substr(f+1);try{var g=this.api[e]();b[f]=g}catch(h){}}}b.videoData=this.api.getVideoData();b.currentTimeLastUpdated_=Date.now()/1E3;return b};
k.Xe=function(a){a={playerState:a,currentTime:this.api.getCurrentTime(),duration:this.api.getDuration(),videoData:this.api.getVideoData(),videoStartBytes:0,videoBytesTotal:this.api.getVideoBytesTotal(),videoLoadedFraction:this.api.getVideoLoadedFraction(),playbackQuality:this.api.getPlaybackQuality(),availableQualityLevels:this.api.getAvailableQualityLevels(),currentTimeLastUpdated_:Date.now()/1E3,playbackRate:this.api.getPlaybackRate(),mediaReferenceTime:this.api.getMediaReferenceTime()};this.api.getVideoUrl&&
(a.videoUrl=this.api.getVideoUrl());this.api.getVideoContentRect&&(a.videoContentRect=this.api.getVideoContentRect());this.api.getProgressState&&(a.progressState=this.api.getProgressState());this.api.getPlaylist&&(a.playlist=this.api.getPlaylist());this.api.getPlaylistIndex&&(a.playlistIndex=this.api.getPlaylistIndex());this.api.getStoryboardFormat&&(a.storyboardFormat=this.api.getStoryboardFormat());Ty(this,a)};
k.Ve=function(a){Ty(this,{playbackQuality:a})};
k.We=function(a){Ty(this,{playbackRate:a})};
k.Te=function(){for(var a=this.api.getOptions(),b={namespaces:a},c=0,d=a.length;c<d;c++){var e=a[c],f=this.api.getOptions(e);b[e]={options:f};for(var g=0,h=f.length;g<h;g++){var l=f[g],m=this.api.getOption(e,l);b[e][l]=m}}this.sendMessage("apiInfoDelivery",b)};
k.Ze=function(){Ty(this,{muted:this.api.isMuted(),volume:this.api.getVolume()})};
k.Ye=function(a){a={currentTime:a,videoBytesLoaded:this.api.getVideoBytesLoaded(),videoLoadedFraction:this.api.getVideoLoadedFraction(),currentTimeLastUpdated_:Date.now()/1E3,playbackRate:this.api.getPlaybackRate(),mediaReferenceTime:this.api.getMediaReferenceTime()};this.api.getProgressState&&(a.progressState=this.api.getProgressState());Ty(this,a)};
k.af=function(){var a={sphericalProperties:this.api.getSphericalProperties()};Ty(this,a)};
k.dispose=function(){Sy.prototype.dispose.call(this);for(var a=0;a<this.listeners.length;a++){var b=this.listeners[a];this.api.removeEventListener(b.eventType,b.listener)}this.listeners=[]};function az(a){Ge.call(this);this.i={};this.started=!1;this.connection=a;this.connection.subscribe("command",this.Ed,this)}
v(az,Ge);k=az.prototype;k.start=function(){this.started||this.h()||(this.started=!0,this.connection.lb("RECEIVING"))};
k.lb=function(a,b){this.started&&!this.h()&&this.connection.lb(a,b)};
k.Ed=function(a,b,c){if(this.started&&!this.h()){var d=b||{};switch(a){case "addEventListener":"string"===typeof d.event&&this.addListener(d.event);break;case "removeEventListener":"string"===typeof d.event&&this.removeListener(d.event);break;default:this.api.isReady()&&this.api.isExternalMethodAvailable(a,c||null)&&(b=bz(a,b||{}),c=this.api.handleExternalCall(a,b,c||null),(c=cz(a,c))&&this.lb(a,c))}}};
k.addListener=function(a){if(!(a in this.i)){var b=this.Ue.bind(this,a);this.i[a]=b;this.addEventListener(a,b)}};
k.Ue=function(a,b){this.started&&!this.h()&&this.connection.lb(a,this.zc(a,b))};
k.zc=function(a,b){if(null!=b)return{value:b}};
k.removeListener=function(a){a in this.i&&(this.removeEventListener(a,this.i[a]),delete this.i[a])};
k.M=function(){var a=this.connection;a.h()||Vi(a.i,"command",this.Ed,this);this.connection=null;for(var b in this.i)this.i.hasOwnProperty(b)&&this.removeListener(b);Ge.prototype.M.call(this)};function dz(a,b){az.call(this,b);this.api=a;this.start()}
v(dz,az);dz.prototype.addEventListener=function(a,b){this.api.addEventListener(a,b)};
dz.prototype.removeEventListener=function(a,b){this.api.removeEventListener(a,b)};
function bz(a,b){switch(a){case "loadVideoById":return a=Yy(b),[a];case "cueVideoById":return a=Yy(b),[a];case "loadVideoByPlayerVars":return[b];case "cueVideoByPlayerVars":return[b];case "loadPlaylist":return a=Zy(b),[a];case "cuePlaylist":return a=Zy(b),[a];case "seekTo":return[b.seconds,b.allowSeekAhead];case "playVideoAt":return[b.index];case "setVolume":return[b.volume];case "setPlaybackQuality":return[b.suggestedQuality];case "setPlaybackRate":return[b.suggestedRate];case "setLoop":return[b.loopPlaylists];
case "setShuffle":return[b.shufflePlaylist];case "getOptions":return[b.module];case "getOption":return[b.module,b.option];case "setOption":return[b.module,b.option,b.value];case "handleGlobalKeyDown":return[b.keyCode,b.shiftKey,b.ctrlKey,b.altKey,b.metaKey,b.key,b.code]}return[]}
function cz(a,b){switch(a){case "isMuted":return{muted:b};case "getVolume":return{volume:b};case "getPlaybackRate":return{playbackRate:b};case "getAvailablePlaybackRates":return{availablePlaybackRates:b};case "getVideoLoadedFraction":return{videoLoadedFraction:b};case "getPlayerState":return{playerState:b};case "getCurrentTime":return{currentTime:b};case "getPlaybackQuality":return{playbackQuality:b};case "getAvailableQualityLevels":return{availableQualityLevels:b};case "getDuration":return{duration:b};
case "getVideoUrl":return{videoUrl:b};case "getVideoEmbedCode":return{videoEmbedCode:b};case "getPlaylist":return{playlist:b};case "getPlaylistIndex":return{playlistIndex:b};case "getOptions":return{options:b};case "getOption":return{option:b}}}
dz.prototype.zc=function(a,b){switch(a){case "onReady":return;case "onStateChange":return{playerState:b};case "onPlaybackQualityChange":return{playbackQuality:b};case "onPlaybackRateChange":return{playbackRate:b};case "onError":return{errorCode:b}}return az.prototype.zc.call(this,a,b)};
dz.prototype.M=function(){az.prototype.M.call(this);delete this.api};function ez(a){a=void 0===a?!1:a;Ge.call(this);this.i=new Ui(a);He(this,this.i)}
Ya(ez,Ge);ez.prototype.subscribe=function(a,b,c){return this.h()?0:this.i.subscribe(a,b,c)};
ez.prototype.m=function(a,b){this.h()||this.i.cb.apply(this.i,arguments)};function fz(a,b,c){ez.call(this);this.l=a;this.j=b;this.id=c}
v(fz,ez);fz.prototype.lb=function(a,b){this.h()||this.l.lb(this.j,this.id,a,b)};
fz.prototype.M=function(){this.j=this.l=null;ez.prototype.M.call(this)};function gz(a,b,c){Ge.call(this);this.i=a;this.origin=c;this.j=Cs(window,"message",this.l.bind(this));this.connection=new fz(this,a,b);He(this,this.connection)}
v(gz,Ge);gz.prototype.lb=function(a,b,c,d){this.h()||a!==this.i||(a={id:b,command:c},d&&(a.data=d),this.i.postMessage(JSON.stringify(a),this.origin))};
gz.prototype.l=function(a){if(!this.h()&&a.origin===this.origin){var b=a.data;if("string"===typeof b){try{b=JSON.parse(b)}catch(d){return}if(b.command){var c=this.connection;c.h()||c.m("command",b.command,b.data,a.origin)}}}};
gz.prototype.M=function(){Ds(this.j);this.i=null;Ge.prototype.M.call(this)};function hz(){this.state=1;this.h=null}
k=hz.prototype;k.initialize=function(a,b,c){if(a.program){var d,e=null!=(d=a.interpreterUrl)?d:null;if(a.interpreterSafeScript){d=a.interpreterSafeScript.privateDoNotAccessOrElseSafeScriptWrappedValue||"";var f=yb();d=f?f.createScript(d):d;d=new Db(d,Cb)}else d=null!=(f=a.interpreterScript)?f:null;a.interpreterSafeUrl&&(e=a.interpreterSafeUrl,Bb("From proto message. b/166824318"),e=Hb(e.privateDoNotAccessOrElseTrustedResourceUrlWrappedValue||"").toString());iz(this,d,e,a.program,b,c)}else mu(Error("Cannot initialize botguard without program"))};
function iz(a,b,c,d,e,f){var g=void 0===g?"trayride":g;c?(a.state=2,$x(c,function(){window[g]?jz(a,d,g,e):(a.state=3,ey(c),mu(new P("Unable to load Botguard","from "+c)))},f)):b?(f=zf("SCRIPT"),b instanceof Db?(b instanceof Db&&b.constructor===Db?b=b.j:(Na(b),b="type_error:SafeScript"),f.textContent=b,di(f)):f.textContent=b,f.nonce=qc(),document.head.appendChild(f),document.head.removeChild(f),window[g]?jz(a,d,g,e):(a.state=4,mu(new P("Unable to load Botguard from JS")))):mu(new P("Unable to load VM; no url or JS provided"))}
function jz(a,b,c,d){a.state=5;try{var e=new Vh({program:b,te:c,Ne:O("att_web_record_metrics")});e.cf.then(function(){a.state=6;d&&d(b)});
a.Qc(e)}catch(f){a.state=7,f instanceof Error&&mu(f)}}
k.invoke=function(a){a=void 0===a?{}:a;return this.Tc()?this.Rd({hd:a}):null};
k.dispose=function(){this.Wc()};
k.Wc=function(){this.Qc(null);this.state=8};
k.Tc=function(){return!!this.h};
k.Rd=function(a){return this.h.Ld(a)};
k.Qc=function(a){Ee(this.h);this.h=a};function kz(){var a=A("yt.abuse.playerAttLoader");return a&&["bgvma","bgvmb","bgvmc"].every(function(b){return b in a})?a:null}
;function lz(){hz.apply(this,arguments)}
v(lz,hz);lz.prototype.Wc=function(){this.state=8};
lz.prototype.Qc=function(a){var b;null==(b=kz())||b.bgvma();a?(b={bgvma:a.dispose.bind(a),bgvmb:a.snapshot.bind(a),bgvmc:a.Ld.bind(a)},z("yt.abuse.playerAttLoader",b),z("yt.abuse.playerAttLoaderRun",function(c){return a.snapshot(c)})):(z("yt.abuse.playerAttLoader",null),z("yt.abuse.playerAttLoaderRun",null))};
lz.prototype.Tc=function(){return!!kz()};
lz.prototype.Rd=function(a){return kz().bgvmc(a)};var mz=new lz;function nz(){return mz.Tc()}
function oz(a){a=void 0===a?{}:a;return mz.invoke(a)}
;function pz(a){a=a||{};var b={},c={};this.url=a.url||"";this.args=a.args||tb(b);this.assets=a.assets||{};this.attrs=a.attrs||tb(c);this.fallback=a.fallback||null;this.fallbackMessage=a.fallbackMessage||null;this.html5=!!a.html5;this.disable=a.disable||{};this.loaded=!!a.loaded;this.messages=a.messages||{}}
pz.prototype.clone=function(){var a=new pz,b;for(b in this)if(this.hasOwnProperty(b)){var c=this[b];"object"==Na(c)?a[b]=tb(c):a[b]=c}return a};var qz=/cssbin\/(?:debug-)?([a-zA-Z0-9_-]+?)(?:-2x|-web|-rtl|-vfl|.css)/;function rz(a){a=a||"";if(window.spf){var b=a.match(qz);spf.style.load(a,b?b[1]:"",void 0)}else sz(a)}
function sz(a){var b=tz(a),c=document.getElementById(b),d=c&&Wx(c,"loaded");d||c&&!d||(c=uz(a,b,function(){Wx(c,"loaded")||(Ux(c),Rs(b),dn(Xa(Ss,b),0))}))}
function uz(a,b,c){var d=document.createElement("link");d.id=b;d.onload=function(){c&&setTimeout(c,0)};
a=Ak(a);oc(d,a);(document.getElementsByTagName("head")[0]||document.body).appendChild(d);return d}
function tz(a){var b=zf("A");nc(b,new Kb(a,Lb));a=b.href.replace(/^[a-zA-Z]+:\/\//,"//");return"css-"+sc(a)}
;function vz(){Ge.call(this);this.i=[]}
v(vz,Ge);vz.prototype.M=function(){for(;this.i.length;){var a=this.i.pop();a.target.removeEventListener(a.name,a.callback,void 0)}Ge.prototype.M.call(this)};function wz(){vz.apply(this,arguments)}
v(wz,vz);function xz(a,b,c,d,e){Ge.call(this);var f=this;this.A=b;this.webPlayerContextConfig=d;this.Vb=e;this.za=!1;this.api={};this.na=this.s=null;this.U=new Ui;this.i={};this.Z=this.oa=this.elementId=this.eb=this.config=null;this.Y=!1;this.l=this.L=null;this.Oa={};this.Wb=["onReady"];this.lastError=null;this.Fb=NaN;this.R={};this.Xb=new wz(this);this.ha=0;this.j=this.m=a;He(this,this.U);yz(this);zz(this);He(this,this.Xb);c?this.ha=dn(function(){f.loadNewVideoConfig(c)},0):d&&(Az(this),Bz(this))}
v(xz,Ge);k=xz.prototype;k.getId=function(){return this.A};
k.loadNewVideoConfig=function(a){if(!this.h()){this.ha&&(window.clearTimeout(this.ha),this.ha=0);var b=a||{};b instanceof pz||(b=new pz(b));this.config=b;this.setConfig(a);Bz(this);this.isReady()&&Cz(this)}};
function Az(a){var b;a.webPlayerContextConfig?b=a.webPlayerContextConfig.rootElementId:b=a.config.attrs.id;a.elementId=b||a.elementId;"video-player"===a.elementId&&(a.elementId=a.A,a.webPlayerContextConfig?a.webPlayerContextConfig.rootElementId=a.A:a.config.attrs.id=a.A);var c;(null==(c=a.j)?void 0:c.id)===a.elementId&&(a.elementId+="-player",a.webPlayerContextConfig?a.webPlayerContextConfig.rootElementId=a.elementId:a.config.attrs.id=a.elementId)}
k.setConfig=function(a){this.eb=a;this.config=Dz(a);Az(this);if(!this.oa){var b;this.oa=Ez(this,(null==(b=this.config.args)?void 0:b.jsapicallback)||"onYouTubePlayerReady")}this.config.args?this.config.args.jsapicallback=null:this.config.args={jsapicallback:null};var c;if(null==(c=this.config)?0:c.attrs)a=this.config.attrs,(b=a.width)&&this.j&&(this.j.style.width=oi(Number(b)||b)),(a=a.height)&&this.j&&(this.j.style.height=oi(Number(a)||a))};
function Cz(a){if(a.config&&!0!==a.config.loaded)if(a.config.loaded=!0,!a.config.args||"0"!==a.config.args.autoplay&&0!==a.config.args.autoplay&&!1!==a.config.args.autoplay){var b;a.api.loadVideoByPlayerVars(null!=(b=a.config.args)?b:null)}else a.api.cueVideoByPlayerVars(a.config.args)}
function Fz(a){var b=!0,c=Gz(a);c&&a.config&&(a=Hz(a),b=Wx(c,"version")===a);return b&&!!A("yt.player.Application.create")}
function Bz(a){if(!a.h()&&!a.Y){var b=Fz(a);if(b&&"html5"===(Gz(a)?"html5":null))a.Z="html5",a.isReady()||Iz(a);else if(Jz(a),a.Z="html5",b&&a.l&&a.m)a.m.appendChild(a.l),Iz(a);else{a.config&&(a.config.loaded=!0);var c=!1;a.L=function(){c=!0;var d=Kz(a,"player_bootstrap_method")?A("yt.player.Application.createAlternate")||A("yt.player.Application.create"):A("yt.player.Application.create");var e=a.config?Dz(a.config):void 0;d&&d(a.m,e,a.webPlayerContextConfig,a.Vb);Iz(a)};
a.Y=!0;b?a.L():($x(Hz(a),a.L),(b=Lz(a))&&rz(b),Mz(a)&&!c&&z("yt.player.Application.create",null))}}}
function Gz(a){var b=yf(a.elementId);!b&&a.j&&a.j.querySelector&&(b=a.j.querySelector("#"+a.elementId));return b}
function Iz(a){if(!a.h()){var b=Gz(a),c=!1;b&&b.getApiInterface&&b.getApiInterface()&&(c=!0);if(c){a.Y=!1;if(!Kz(a,"html5_remove_not_servable_check_killswitch")){var d;if((null==b?0:b.isNotServable)&&a.config&&(null==b?0:b.isNotServable(null==(d=a.config.args)?void 0:d.video_id)))return}Nz(a)}else a.Fb=dn(function(){Iz(a)},50)}}
function Nz(a){yz(a);a.za=!0;var b=Gz(a);if(b){a.s=Oz(a,b,"addEventListener");a.na=Oz(a,b,"removeEventListener");var c=b.getApiInterface();c=c.concat(b.getInternalApiInterface());for(var d=a.api,e=0;e<c.length;e++){var f=c[e];d[f]||(d[f]=Oz(a,b,f))}}for(var g in a.i)a.i.hasOwnProperty(g)&&a.s&&a.s(g,a.i[g]);Cz(a);a.oa&&a.oa(a.api);a.U.cb("onReady",a.api)}
function Oz(a,b,c){var d=b[c];return function(){var e=Ja.apply(0,arguments);try{return a.lastError=null,d.apply(b,e)}catch(f){"sendAbandonmentPing"!==c&&(f.params=c,a.lastError=f,mu(f))}}}
function yz(a){a.za=!1;if(a.na)for(var b in a.i)a.i.hasOwnProperty(b)&&a.na(b,a.i[b]);for(var c in a.R)a.R.hasOwnProperty(c)&&window.clearTimeout(Number(c));a.R={};a.s=null;a.na=null;b=a.api;for(var d in b)b.hasOwnProperty(d)&&(b[d]=null);b.addEventListener=function(e,f){a.addEventListener(e,f)};
b.removeEventListener=function(e,f){a.removeEventListener(e,f)};
b.destroy=function(){a.dispose()};
b.getLastError=function(){return a.getLastError()};
b.getPlayerType=function(){return a.getPlayerType()};
b.getCurrentVideoConfig=function(){return a.eb};
b.loadNewVideoConfig=function(e){a.loadNewVideoConfig(e)};
b.isReady=function(){return a.isReady()}}
k.isReady=function(){return this.za};
function zz(a){a.addEventListener("WATCH_LATER_VIDEO_ADDED",function(b){Rs("WATCH_LATER_VIDEO_ADDED",b)});
a.addEventListener("WATCH_LATER_VIDEO_REMOVED",function(b){Rs("WATCH_LATER_VIDEO_REMOVED",b)})}
k.addEventListener=function(a,b){var c=this,d=Ez(this,b);d&&(0<=eb(this.Wb,a)||this.i[a]||(b=Pz(this,a),this.s&&this.s(a,b)),this.U.subscribe(a,d),"onReady"===a&&this.isReady()&&dn(function(){d(c.api)},0))};
k.removeEventListener=function(a,b){this.h()||(b=Ez(this,b))&&Vi(this.U,a,b)};
function Ez(a,b){var c=b;if("string"===typeof b){if(a.Oa[b])return a.Oa[b];c=function(){var d=Ja.apply(0,arguments),e=A(b);if(e)try{e.apply(y,d)}catch(f){lu(f)}};
a.Oa[b]=c}return c?c:null}
function Pz(a,b){var c="ytPlayer"+b+a.A;a.i[b]=c;y[c]=function(d){var e=dn(function(){if(!a.h()){try{a.U.cb(b,null!=d?d:void 0)}catch(h){mu(new P("PlayerProxy error when creating global callback",{error:h,event:b,playerId:a.A,data:d}))}var f=a.R,g=String(e);g in f&&delete f[g]}},0);
qb(a.R,String(e))};
return c}
k.getPlayerType=function(){return this.Z||(Gz(this)?"html5":null)};
k.getLastError=function(){return this.lastError};
function Jz(a){a.cancel();yz(a);a.Z=null;a.config&&(a.config.loaded=!1);var b=Gz(a);b&&(Fz(a)||!Mz(a)?a.l=b:(b&&b.destroy&&b.destroy(),a.l=null));if(a.m)for(a=a.m;b=a.firstChild;)a.removeChild(b)}
k.cancel=function(){this.L&&fy(Hz(this),this.L);window.clearTimeout(this.Fb);this.Y=!1};
k.M=function(){Jz(this);if(this.l&&this.config&&this.l.destroy)try{this.l.destroy()}catch(b){lu(b)}this.Oa=null;for(var a in this.i)this.i.hasOwnProperty(a)&&(y[this.i[a]]=null);this.eb=this.config=this.api=null;delete this.m;delete this.j;Ge.prototype.M.call(this)};
function Mz(a){var b,c;a=null==(b=a.config)?void 0:null==(c=b.args)?void 0:c.fflags;return!!a&&-1!==a.indexOf("player_destroy_old_version=true")}
function Hz(a){return a.webPlayerContextConfig?a.webPlayerContextConfig.jsUrl:(a=a.config.assets)?a.js:""}
function Lz(a){return a.webPlayerContextConfig?a.webPlayerContextConfig.cssUrl:(a=a.config.assets)?a.css:""}
function Kz(a,b){if(a.webPlayerContextConfig)var c=a.webPlayerContextConfig.serializedExperimentFlags;else{var d;if(null==(d=a.config)?0:d.args)c=a.config.args.fflags}return"true"===Nm(c||"","&")[b]}
function Dz(a){for(var b={},c=r(Object.keys(a)),d=c.next();!d.done;d=c.next()){d=d.value;var e=a[d];b[d]="object"===typeof e?tb(e):e}return b}
;var Qz={},Rz="player_uid_"+(1E9*Math.random()>>>0);function Sz(a,b){var c="player",d=!1;d=void 0===d?!0:d;c="string"===typeof c?yf(c):c;var e=Rz+"_"+Ra(c),f=Qz[e];if(f&&d)return Tz(a,b)?f.api.loadVideoByPlayerVars(a.args||null):f.loadNewVideoConfig(a),f.api;f=new xz(c,e,a,b,void 0);Qz[e]=f;Rs("player-added",f.api);Ie(f,function(){delete Qz[f.getId()]});
return f.api}
function Tz(a,b){return b&&b.serializedExperimentFlags?b.serializedExperimentFlags.includes("web_player_remove_playerproxy=true"):a&&a.args&&a.args.fflags?a.args.fflags.includes("web_player_remove_playerproxy=true"):!1}
;var Uz=null,Vz=null,Wz=null;function Xz(){Yz()}
function Zz(){Yz()}
function Yz(){var a=Uz.getVideoData(1);a=a.title?a.title+" - YouTube":"YouTube";document.title!==a&&(document.title=a)}
function $z(){Uz&&Uz.sendAbandonmentPing&&Uz.sendAbandonmentPing();N("PL_ATT")&&mz.dispose();for(var a=xi,b=0,c=gy.length;b<c;b++)a.Ba(gy[b]);gy.length=0;ey("//static.doubleclick.net/instream/ad_status.js");hy=!1;Em("DCLKSTAT",0);Fe(Wz,Vz);Uz&&(Uz.removeEventListener("onVideoDataChange",Xz),Uz.destroy())}
;function aA(a,b,c){a="ST-"+sc(a).toString(36);b=b?Bc(b):"";c=c||5;Xu()&&Nn(a,b,c)}
;function bA(a,b,c){b=void 0===b?{}:b;c=void 0===c?!1:c;var d=N("EVENT_ID");d&&(b.ei||(b.ei=d));if(b){d=a;var e=void 0===e?!0:e;var f=N("VALID_SESSION_TEMPDATA_DOMAINS",[]),g=wc(window.location.href);g&&f.push(g);g=wc(d);if(0<=eb(f,g)||!g&&0==d.lastIndexOf("/",0))if(O("autoescape_tempdata_url")&&(f=document.createElement("a"),nc(f,d),d=f.href),d&&(d=xc(d),f=d.indexOf("#"),d=0>f?d:d.slice(0,f)))if(e&&!b.csn&&(b.itct||b.ved)&&(b=Object.assign({csn:Hu()},b)),h){var h=parseInt(h,10);isFinite(h)&&0<h&&
aA(d,b,h)}else aA(d,b)}if(c)return!1;if((window.ytspf||{}).enabled)spf.navigate(a);else{var l=void 0===l?{}:l;var m=void 0===m?"":m;var n=void 0===n?window:n;c=n.location;a=Dc(a,l)+m;var q=void 0===q?hi:q;a:{q=void 0===q?hi:q;for(l=0;l<q.length;++l)if(m=q[l],m instanceof fi&&m.Be(a)){q=new Kb(a,Lb);break a}q=void 0}q=q||Rb;if(q instanceof Kb)var u=Mb(q);else{b:if(Yh){try{u=new URL(q)}catch(t){u="https:";break b}u=u.protocol}else c:{u=document.createElement("a");try{u.href=q}catch(t){u=void 0;break c}u=
u.protocol;u=":"===u||""===u?"https:":u}u="javascript:"!==u?q:void 0}void 0!==u&&(c.href=u)}return!0}
;z("yt.setConfig",Em);z("yt.config.set",Em);z("yt.setMsg",Nu);z("yt.msgs.set",Nu);z("yt.logging.errors.log",lu);
z("writeEmbed",function(){var a=N("PLAYER_CONFIG");if(!a){var b=N("PLAYER_VARS");b&&(a={args:b})}gv(!0);"gvn"===a.args.ps&&(document.body.style.backgroundColor="transparent");a.attrs||(a.attrs={width:"100%",height:"100%",id:"video-player"});var c=document.referrer;b=N("POST_MESSAGE_ORIGIN");window!==window.top&&c&&c!==document.URL&&(a.args.loaderUrl=c);Gw("embed",["ol"]);c=N("WEB_PLAYER_CONTEXT_CONFIGS").WEB_PLAYER_CONTEXT_CONFIG_ID_EMBEDDED_PLAYER;if(!c.serializedForcedExperimentIds){var d=Sm(window.location.href);
d.forced_experiments&&(c.serializedForcedExperimentIds=d.forced_experiments)}var e;O("embeds_web_enable_watch_on_autoplay")&&(null==(e=a.args)?0:e.autoplay)&&Gw("watch",["pbs","pbu","pbp"]);Uz=Sz(a,c);Uz.addEventListener("onVideoDataChange",Xz);Uz.addEventListener("onReady",Zz);a=N("POST_MESSAGE_ID","player");N("ENABLE_JS_API")?Wz=new $y(Uz):N("ENABLE_POST_API")&&"string"===typeof a&&"string"===typeof b&&(Vz=new gz(window.parent,a,b),Wz=new dz(Uz,Vz.connection));iy();O("ytidb_create_logger_embed_killswitch")||
to();a={};Ly.h||(Ly.h=new Ly);Ly.h.install((a.flush_logs={callback:function(){Bt()}},a));
ss();O("ytidb_clear_embedded_player")&&xi.ea(function(){var f,g;if(!kx){var h=at(),l={Nc:jx,Pd:ix};h.h.set(l.Nc,l);l={gd:{feedbackEndpoint:sv(dx),modifyChannelNotificationPreferenceEndpoint:sv(ex),playlistEditEndpoint:sv(fx),subscribeEndpoint:sv(bx),unsubscribeEndpoint:sv(cx),webPlayerShareEntityServiceEndpoint:sv(gx)}};var m=qv(),n={};m&&(n.client_location=m);void 0===f&&(f=In());void 0===g&&(g=h.resolve(jx));Pw(l,g,f,n);f={Nc:Vw,Qd:Ow.h};h.h.set(f.Nc,f);kx=h.resolve(Vw)}Tx()})});
var cA=Im(function(){Kw();hv();O("embeds_web_enable_ve_logging_unification")||Ax()}),dA=Im(function(a){a.persisted||(Kw(),hv())}),eA=Im(function(a){O("embeds_web_enable_dispose_player_if_page_not_cached_killswitch")?$z():a.persisted||$z()}),fA=Im($z);
window.addEventListener?(window.addEventListener("load",cA),window.addEventListener("pageshow",dA),window.addEventListener("pagehide",eA)):window.attachEvent&&(window.attachEvent("onload",cA),window.attachEvent("onunload",fA));z("yt.abuse.player.botguardInitialized",A("yt.abuse.player.botguardInitialized")||nz);z("yt.abuse.player.invokeBotguard",A("yt.abuse.player.invokeBotguard")||oz);z("yt.abuse.dclkstatus.checkDclkStatus",A("yt.abuse.dclkstatus.checkDclkStatus")||jy);
z("yt.player.exports.navigate",A("yt.player.exports.navigate")||bA);z("yt.util.activity.init",A("yt.util.activity.init")||Gs);z("yt.util.activity.getTimeSinceActive",A("yt.util.activity.getTimeSinceActive")||Js);z("yt.util.activity.setTimestamp",A("yt.util.activity.setTimestamp")||Hs);}).call(this);

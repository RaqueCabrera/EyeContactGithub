﻿#include "pch-cpp.hpp"





template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3)
	{
		void* params[3] = { &p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
struct ConstrainedActionInvoker0
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, NULL);
	}
};

struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862;
struct EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct EqualityComparer_1_t6F3DEBFB94986A90A7E3D2670A6572DD17FF2959;
struct EqualityComparer_1_tC9DE43D57A757552DA3E3956FF4C8ACC0825A058;
struct EqualityComparer_1_t11104B05F3482CB1AA975DE7DAC61EC198B51522;
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
struct HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A;
struct HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C;
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87;
struct HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055;
struct HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893;
struct HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF;
struct ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB;
struct ICollection_1_t03EA087489342703ED691AFD807C50289BADA136;
struct ICollection_1_tD7D6ABAE0ED462D1FFC5A89FEDD63734A24D7B40;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct ICollection_1_tE5AC4219CD400DE42B3E0672D2A1FA43603579FC;
struct ICollection_1_tFC52E4683AAB2B1AFA3BEC0221B4AA55CCF77EC6;
struct ICollection_1_t1D505C3BD64F4248761D3823957E6F86FA4444FF;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_tF78C5A55C1D093F0B8CD95E0247BA2EE703D9D55;
struct IEnumerable_1_t0AC4B0264C90B43D2F1B3B68095F5A35E8750525;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerable_1_tE00BFA98D2BD7DF2637E19757F07B904AB59B6AB;
struct IEnumerable_1_t18E353A8C49308B1AFB7C3B4991FB51D2F1AEBF7;
struct IEnumerable_1_t291D3F87672C24EDCF4BC9EAD70F70D3DD94CAF2;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_t737E5D96E5E3657734509E507812DBA5E7EDD547;
struct IEnumerator_1_tE07B98951C528DCEC133D87CFB6966101285E71E;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEnumerator_1_tB2D027713BE0E2228C985B94526E1BD3DED2F9F6;
struct IEnumerator_1_t72676C716CC8C5B75D00E9CAF066E46698697A14;
struct IEnumerator_1_t86FDA12A24C3A4FF8AB720E76E016B4B022ADCA5;
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
struct IEqualityComparer_1_t0BB8211419723EB61BF19007AC9D62365E50500E;
struct IEqualityComparer_1_t958EAC5D5BD188327B4736D6F82A08EA1476A4C8;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IEqualityComparer_1_tDC1C214EDC5CC452A49072614F03A67F6E59AD38;
struct IEqualityComparer_1_t2C2028B059D2B35E8A5339E3F2A14301706377E3;
struct IEqualityComparer_1_tF463C496D9C1E4C0551FD95FA3A706FFD9164CD0;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF;
struct Predicate_1_t4CC76CDB2DE98076E841155882228372ED64954D;
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
struct Predicate_1_t513B0A46D99B486017C4E744E22B524233A4DE7B;
struct Predicate_1_tE249FBB519623C34D35DD00865B140E8845D754C;
struct Predicate_1_t8CA75FACE87C87E7388C22655BF559D93FB9EEBD;
struct SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343;
struct SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6;
struct SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4;
struct SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D;
struct SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E;
struct SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9;
struct SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D;
struct MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6;
struct UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Guid_t;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414;
IL2CPP_EXTERN_C String_t* _stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B;
IL2CPP_EXTERN_C String_t* _stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25;
IL2CPP_EXTERN_C String_t* _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0;
IL2CPP_EXTERN_C String_t* _stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E;
IL2CPP_EXTERN_C String_t* _stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343;
struct SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6;
struct SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4;
struct SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D;
struct SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E;
struct SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9;
struct SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D;
struct MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6;
struct UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862  : public RuntimeObject
{
};
struct EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct EqualityComparer_1_t6F3DEBFB94986A90A7E3D2670A6572DD17FF2959  : public RuntimeObject
{
};
struct EqualityComparer_1_tC9DE43D57A757552DA3E3956FF4C8ACC0825A058  : public RuntimeObject
{
};
struct EqualityComparer_1_t11104B05F3482CB1AA975DE7DAC61EC198B51522  : public RuntimeObject
{
};
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1  : public RuntimeObject
{
	int32_t ____length;
	int32_t* ____arrayPtr;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array;
	bool ____useStackAlloc;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct ElementCount_t29C15B1C88986C3AC6DE53448FEDB70F587E3274 
{
	int32_t ___uniqueCount;
	int32_t ___unfoundCount;
};
struct ElementCount_tACEFCAA43DAE9F379C31ABFBD2664B4BF9A04A3A 
{
	int32_t ___uniqueCount;
	int32_t ___unfoundCount;
};
struct ElementCount_tDA4455B14F797EC22A9CAA800585B32F75F302C3 
{
	int32_t ___uniqueCount;
	int32_t ___unfoundCount;
};
struct ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 
{
	int32_t ___uniqueCount;
	int32_t ___unfoundCount;
};
struct ElementCount_tF8FF9CA1A6D9482EA7132FDF9EE46913548BB989 
{
	int32_t ___uniqueCount;
	int32_t ___unfoundCount;
};
struct ElementCount_tA9A164AD1FA506092B76B7EA298A254C8605702D 
{
	int32_t ___uniqueCount;
	int32_t ___unfoundCount;
};
struct ElementCount_t5517AF99E2810C026E560770FAA1D5EF6EBDEC8A 
{
	int32_t ___uniqueCount;
	int32_t ___unfoundCount;
};
struct Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 
{
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____set;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1 
{
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ____set;
	int32_t ____index;
	int32_t ____version;
	uint32_t ____current;
};
struct Enumerator_t1BD5EAC17E707DFC9C05151D77D6E6DC9166D1EC 
{
	HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* ____set;
	int32_t ____index;
	int32_t ____version;
	uint64_t ____current;
};
typedef Il2CppFullySharedGenericStruct Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB;
struct Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___value;
};
struct Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382 
{
	int32_t ___hashCode;
	int32_t ___next;
	uint32_t ___value;
};
struct Slot_tFDEB37B8831C6BCF9C5CF829B00AD86325B27113 
{
	int32_t ___hashCode;
	int32_t ___next;
	uint64_t ___value;
};
typedef Il2CppFullySharedGenericStruct Slot_tEC146EEEF7022C6542EBF082D658446682962BFD;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D 
{
	uint64_t ___U3CHandleU3Ek__BackingField;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct Metrics_t865BF0741490865117A79705F58784742D6F02B8 
{
	int32_t ___TotalRoomCount;
	int32_t ___CandidateRoomCount;
	int32_t ___Loaded;
	int32_t ___Failed;
	int32_t ___SkippedUserNotInRoom;
	int32_t ___SkippedAlreadyInstantiated;
};
struct Enumerator_tAB071B3AC8721E962A36762209E67EB3FF4E27EA 
{
	HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* ____set;
	int32_t ____index;
	int32_t ____version;
	Metrics_t865BF0741490865117A79705F58784742D6F02B8 ____current;
};
struct Slot_t6F1C6BBE6A38D4B944B955D516A5643E78FB0426 
{
	int32_t ___hashCode;
	int32_t ___next;
	Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___value;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct SpaceComponentType_tCD4A67FF4EBD7D9997F959066452AFAD5255910E 
{
	int32_t ___value__;
};
struct SpaceDiscoveryFilterType_t50E46DE8466114FD8B0B4A8BE5D1E422E823F3EE 
{
	int32_t ___value__;
};
struct UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 
{
	OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D ____space;
	Guid_t ___U3CUuidU3Ek__BackingField;
};
struct Enumerator_tD84FE35CA246D7E202555F238743C91C623A6E27 
{
	HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* ____set;
	int32_t ____index;
	int32_t ____version;
	UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ____current;
};
struct Slot_tC00CA6060A9B3737F319F2268F388D4E077DA026 
{
	int32_t ___hashCode;
	int32_t ___next;
	UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___value;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct SpaceDiscoveryFilterInfoComponents_tFE3C27C1DF3BCB9C439ABD02BB4F7ED3D95AF421 
{
	int32_t ___Type;
	int32_t ___Component;
};
struct SpaceDiscoveryFilterInfoIds_t34A4026061DCD863BE49C3F98454B0069E802D8A 
{
	int32_t ___Type;
	int32_t ___NumIds;
	Guid_t* ___Ids;
};
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12  : public MulticastDelegate_t
{
};
struct Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF  : public MulticastDelegate_t
{
};
struct Predicate_1_t4CC76CDB2DE98076E841155882228372ED64954D  : public MulticastDelegate_t
{
};
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107  : public MulticastDelegate_t
{
};
struct Predicate_1_tE249FBB519623C34D35DD00865B140E8845D754C  : public MulticastDelegate_t
{
};
struct Predicate_1_t8CA75FACE87C87E7388C22655BF559D93FB9EEBD  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			SpaceDiscoveryFilterInfoComponents_tFE3C27C1DF3BCB9C439ABD02BB4F7ED3D95AF421 ___ComponentFilter;
		};
		#pragma pack(pop, tp)
		struct
		{
			SpaceDiscoveryFilterInfoComponents_tFE3C27C1DF3BCB9C439ABD02BB4F7ED3D95AF421 ___ComponentFilter_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			SpaceDiscoveryFilterInfoIds_t34A4026061DCD863BE49C3F98454B0069E802D8A ___IdFilter;
		};
		#pragma pack(pop, tp)
		struct
		{
			SpaceDiscoveryFilterInfoIds_t34A4026061DCD863BE49C3F98454B0069E802D8A ___IdFilter_forAlignmentOnly;
		};
	};
};
struct Enumerator_t81A4C0342C2282BCF88E24BCC5106FD6E3DF46EB 
{
	HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* ____set;
	int32_t ____index;
	int32_t ____version;
	FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 ____current;
};
struct Predicate_1_t513B0A46D99B486017C4E744E22B524233A4DE7B  : public MulticastDelegate_t
{
};
struct Slot_t6A59220AF4A6A8097A22EBAB005A9FBAD6169FB4 
{
	int32_t ___hashCode;
	int32_t ___next;
	FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 ___value;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer;
};
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields
{
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* ___defaultComparer;
};
struct EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17_StaticFields
{
	EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct EqualityComparer_1_t6F3DEBFB94986A90A7E3D2670A6572DD17FF2959_StaticFields
{
	EqualityComparer_1_t6F3DEBFB94986A90A7E3D2670A6572DD17FF2959* ___defaultComparer;
};
struct EqualityComparer_1_tC9DE43D57A757552DA3E3956FF4C8ACC0825A058_StaticFields
{
	EqualityComparer_1_tC9DE43D57A757552DA3E3956FF4C8ACC0825A058* ___defaultComparer;
};
struct EqualityComparer_1_t11104B05F3482CB1AA975DE7DAC61EC198B51522_StaticFields
{
	EqualityComparer_1_t11104B05F3482CB1AA975DE7DAC61EC198B51522* ___defaultComparer;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_StaticFields
{
	String_t* ___s_nullMessage;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 m_Items[1];

	inline Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382 m_Items[1];

	inline Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382 value)
	{
		m_Items[index] = value;
	}
};
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
struct SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_tFDEB37B8831C6BCF9C5CF829B00AD86325B27113 m_Items[1];

	inline Slot_tFDEB37B8831C6BCF9C5CF829B00AD86325B27113 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_tFDEB37B8831C6BCF9C5CF829B00AD86325B27113* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_tFDEB37B8831C6BCF9C5CF829B00AD86325B27113 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Slot_tFDEB37B8831C6BCF9C5CF829B00AD86325B27113 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_tFDEB37B8831C6BCF9C5CF829B00AD86325B27113* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_tFDEB37B8831C6BCF9C5CF829B00AD86325B27113 value)
	{
		m_Items[index] = value;
	}
};
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
struct SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_t6A59220AF4A6A8097A22EBAB005A9FBAD6169FB4 m_Items[1];

	inline Slot_t6A59220AF4A6A8097A22EBAB005A9FBAD6169FB4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_t6A59220AF4A6A8097A22EBAB005A9FBAD6169FB4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_t6A59220AF4A6A8097A22EBAB005A9FBAD6169FB4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Slot_t6A59220AF4A6A8097A22EBAB005A9FBAD6169FB4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_t6A59220AF4A6A8097A22EBAB005A9FBAD6169FB4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_t6A59220AF4A6A8097A22EBAB005A9FBAD6169FB4 value)
	{
		m_Items[index] = value;
	}
};
struct FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D  : public RuntimeArray
{
	ALIGN_FIELD (8) FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 m_Items[1];

	inline FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 value)
	{
		m_Items[index] = value;
	}
};
struct SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_t6F1C6BBE6A38D4B944B955D516A5643E78FB0426 m_Items[1];

	inline Slot_t6F1C6BBE6A38D4B944B955D516A5643E78FB0426 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_t6F1C6BBE6A38D4B944B955D516A5643E78FB0426* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_t6F1C6BBE6A38D4B944B955D516A5643E78FB0426 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Slot_t6F1C6BBE6A38D4B944B955D516A5643E78FB0426 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_t6F1C6BBE6A38D4B944B955D516A5643E78FB0426* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_t6F1C6BBE6A38D4B944B955D516A5643E78FB0426 value)
	{
		m_Items[index] = value;
	}
};
struct MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6  : public RuntimeArray
{
	ALIGN_FIELD (8) Metrics_t865BF0741490865117A79705F58784742D6F02B8 m_Items[1];

	inline Metrics_t865BF0741490865117A79705F58784742D6F02B8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Metrics_t865BF0741490865117A79705F58784742D6F02B8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Metrics_t865BF0741490865117A79705F58784742D6F02B8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Metrics_t865BF0741490865117A79705F58784742D6F02B8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Metrics_t865BF0741490865117A79705F58784742D6F02B8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Metrics_t865BF0741490865117A79705F58784742D6F02B8 value)
	{
		m_Items[index] = value;
	}
};
struct SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_tC00CA6060A9B3737F319F2268F388D4E077DA026 m_Items[1];

	inline Slot_tC00CA6060A9B3737F319F2268F388D4E077DA026 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_tC00CA6060A9B3737F319F2268F388D4E077DA026* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_tC00CA6060A9B3737F319F2268F388D4E077DA026 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Slot_tC00CA6060A9B3737F319F2268F388D4E077DA026 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_tC00CA6060A9B3737F319F2268F388D4E077DA026* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_tC00CA6060A9B3737F319F2268F388D4E077DA026 value)
	{
		m_Items[index] = value;
	}
};
struct UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4  : public RuntimeArray
{
	ALIGN_FIELD (8) UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 m_Items[1];

	inline UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mAB3B1F14E6741A640E2FA9AE77D62C363B6FBA10_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m30E9F91069377DDEFABD6C81559E24AD320D3A84_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mD320BA1FC2F52FBBD8EFB2C97BAC4E70B56DDAFD_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m7F948A6D7605FADC9C80513D3CB1F21627E974E1_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_set1, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___1_set2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m13E227A3D0F6C66092069932EBFFD303B7A2B5F7_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m5340441ADFFCE4FC7BEA14DD637B35C25CC47EBF_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mCE1D0DC2EACB98D74562CA79EB0DB6B6A806510C_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mA48EDAF136B0C1BFBC90E61A5A5F8771F2F60806_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m20C9F0D67E5BFE2515651D37D880697363F6562F_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, int32_t ___0_index, int32_t ___1_hashCode, RuntimeObject* ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mC04293BBDC3046C251D90104C942B4576676EF79_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m194DF48C3A8D04814AEF65F316DF262AA89DB68F_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m2C3002B96C50658CE5522C74A6B1F5599D922D61_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mC9D698BB17611B2B5A3A805337647838FCAA26DE_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m5102D82155B190BF666DD92500756CC1CCBA2172_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_m6A2179B7EAA828F08B611529248E69BE8035CF19_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_t29C15B1C88986C3AC6DE53448FEDB70F587E3274 HashSet_1_CheckUniqueAndUnfoundElements_mFC2621EEB8C562D9AA586DFFB0FFE49D2C378390_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_m13263B924ECBFF036A687875947FA1FFE7BE2B4E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m38D352E6EBE6E50B1D407129115FC9DE6721C55C_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_mC01C0797260CF7FEBBC99C8245B0A31B1C2E5E56_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_m0E3B9180AF054442765D541B6F10FAB2D11C5F82_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_mD54AFBFBD525862DC2F8F47071DA5B37CFDEA948_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m3B7B2891BFEF63A7A2071CEBC71CAC98E86706CE_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m84F19ECFD45EC3F29B8ED82184E4892EFC93A50C_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m06A7ECC1351897A5086F1261E9DF0EE1FF0A757D_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_mA6D6AFBE54A3A5C041B6D016B614A506C2C0CCE6_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___0_set1, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___1_set2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m757886C93AFA00039C804FBA0DC24407EE787C5F_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m85E38E3E0475D0E8ACBC35AFB10D3E89BCF850AC_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mCC6A0E6F531708E02411F3A62A0EE263B3155CD2_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m60E387432DD7DB110EBA0525FFA77E9B6DC7AFF4_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_mD5191D2B847EF17B4112378DE8CD72D1BF3AA7DC_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_index, int32_t ___1_hashCode, uint32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mC839AC5977B30ECC4FCABF7EA67B2A2A4E6E5F0C_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_mB12B697B82E7E87BF40223DEDD96F3F07FD3CA32_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m421003E7CDC7B4B86D94CBB25C57DC78D4A42B3B_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m9F89B5A77506688ABC2B08774AB13ADDF965703C_gshared (Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1* __this, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m0A1E30AFCFECF4120A2582BCEF92DB3898C02BF0_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m12BF15F6E4EEE48D66C845BC74A11EF6673C933B_gshared_inline (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_m2FE59CB812DA784F803C5DC582B936A8CD9DF40E_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_tACEFCAA43DAE9F379C31ABFBD2664B4BF9A04A3A HashSet_1_CheckUniqueAndUnfoundElements_m4E26FF964B1E889AD210069648B9FD1B2A1ECD0B_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_m0F69DB33ED289FB4C716975C7DFC5DB6F8730ED7_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m02385B663B65E53485251FFFD116D0F26BA172B9_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mCE33776BF08B37A05CCD7FBB46335E5FB6B215DC_gshared_inline (Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* __this, uint32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m387D02609162D1AA4998698546E668AF4A960F67_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m3F7FB3120006196BDCDF9B70A78B647AF318EC85_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m9DBE122D41CA3941B3FE97DB9935895B99A84124_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1 HashSet_1_GetEnumerator_m519EAE87AF990E90AF0AC67400E9F88D37675611_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m70072EE419A750BD1D4D458850A4A7A587CBB365_gshared (Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Enumerator_get_Current_m1816042CBEEA33AC96FF5A81924F31E40F1FFF6B_gshared_inline (Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8914E282461C43F14B63B6851A52DC20566D9FDA_gshared (Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_mC8EA2612D4BA927B7C2F47DED6DCFE0A1E0764C3_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_mC799EE656F81D83581F8A413304661B6F103BC6E_gshared_inline (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4AC18EE571786DBCFCF629F25C3B0E0A85498229_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4216E3423F93FD1B7345F1F1C19775BD98DE25FD_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mDCC089CE779E3B325E2E51230A136DCEBF3806F0_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_mC35CB7FF1429F80F6BFFF0EB2060D7C94DB4CAFE_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* ___0_set1, HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* ___1_set2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_mA714EBF95699EE2EBF3680B8AFFD47A6A2D5C9BF_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m667376365ACF3E4F9574B98DE073CEC5676A382E_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m9F28E11C077FF3F0A71FBFB5213D0484D3C77571_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m7496C4131504533235207CF9AF1657CEF2EAB287_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_mE56A2D98D83D58FA42BE62D2AB99C087AA95AB8D_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, int32_t ___0_index, int32_t ___1_hashCode, uint64_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m03503FE8664D0DABAC1F80E80091FC39C13AB81A_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m936FFC0CEE87F16430B8525E691A8D1597B0797F_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, uint64_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m7D65846715D8AB759355FD8326B7C82BA06FA7CD_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m04D7B4B8F433B4F404609A5C750699AFE1B7AF61_gshared (Enumerator_t1BD5EAC17E707DFC9C05151D77D6E6DC9166D1EC* __this, HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m461444400C7E12A594A158A9821B3A43757979D8_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mD658CCA7E625AB10F1732A4EAC391535B9B818BE_gshared_inline (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_m91BB9570F5D110DDCCF6D9F3A45F97D8167885DC_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_tDA4455B14F797EC22A9CAA800585B32F75F302C3 HashSet_1_CheckUniqueAndUnfoundElements_m8C5905FA6921BE0C162D78DD7929FA2C7E6CEE11_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_m67B4DA26B9E2AF1B2EC16C122550D88B27031AD4_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, uint64_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mB49963DE17DE6231BC30045E671D0499C73E9889_gshared_inline (Predicate_1_t4CC76CDB2DE98076E841155882228372ED64954D* __this, uint64_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mA9EE324C0F152945E0170FC6CB33584EBA708075_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, uint64_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m15F41F753DF895CAF8BC8E6D557CADBDCFB6BE58_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m864397CDDF1F08837B55DAA97DBCA0B888D5BE1A_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1BD5EAC17E707DFC9C05151D77D6E6DC9166D1EC HashSet_1_GetEnumerator_m71DB2D9A0333DB3369C6E27C428D1479764004D4_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85002A2327014F1C4F0417EF8B60AC2E266F84BD_gshared (Enumerator_t1BD5EAC17E707DFC9C05151D77D6E6DC9166D1EC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Enumerator_get_Current_m6D6A80C33FAD4B68D656C2356DEB1AA585AEF100_gshared_inline (Enumerator_t1BD5EAC17E707DFC9C05151D77D6E6DC9166D1EC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mFA51C33525EADB63DC73E468E53EB55E8ED1AA10_gshared (Enumerator_t1BD5EAC17E707DFC9C05151D77D6E6DC9166D1EC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_m6B2B4F137FC5B975AE9BAD39627483000BA5CDEB_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, uint64_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m93D6B6D99DFDD89BFDD1FD1AB76A4FCB488F80CD_gshared_inline (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5_gshared (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_set, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t6F3DEBFB94986A90A7E3D2670A6572DD17FF2959* EqualityComparer_1_get_Default_m0A536FB1E5E1BF720FE6BE32E551F8E8622F1B28_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m598AF08431A5CC1809E010A0334C8E6B6F52F5F3_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m99A7949C4E8EFD3A7F1299A7A27BED7682771633_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mE60A61118BC2BF3E42100D41DF6655751811A266_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m8ADC857F6053F3617A2B969EBFF1D4D67AC2AFEF_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* ___0_set1, HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* ___1_set2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m2B6D8C63333672B350A9A140DA6EAE9DBA52FB68_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_mBC64B6CAB4BD3FA9D334E10D31668F44D848D23A_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m347EC2142091FA83731EC44DA59F70A46A03203A_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mCA6A95C6B9122CFFF7340A23D62E773B65A1F244_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m005159F180824B3258A1551FE40B67F7F39A2CB8_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, int32_t ___0_index, int32_t ___1_hashCode, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m373A349A1E294D8B027416590783179C789F88C4_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m27D313CEC3BF4546C5D1C9541AF74D2FD754115B_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mB508C8DC40546F8B9A4512E64251509B00A30433_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mA7D70092988E0B6FAAAF3FF0E0CA92BA9F1E7B27_gshared (Enumerator_t81A4C0342C2282BCF88E24BCC5106FD6E3DF46EB* __this, HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mC69F1200F6A21855CCEB6BE8F205E52B0F3E38AD_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mEC8A5DA1828F7F0DDB0E19139E124989516D42F6_gshared_inline (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_m2EDBB5348ACC637E3A0774DC901A7D102150FD5B_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_tF8FF9CA1A6D9482EA7132FDF9EE46913548BB989 HashSet_1_CheckUniqueAndUnfoundElements_m4EDB438C6E16E369D0468804598604A957CEF714_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_m1210454DD4DF0C59D32DFCB27C30FD10B9DACF0E_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m3E3AB2F118CF2D099A7A8F968B00AFED24B2B6E0_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m4C2C8AA6F862B3791D07AFF2E3734563AEF972D8_gshared_inline (Predicate_1_t513B0A46D99B486017C4E744E22B524233A4DE7B* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m02BC1D9B579C663AF2416CFF91D219A3A3E01C96_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_mEBCECC1FA33BE9521202BA4E099C8C42A9E27AF2_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m11CA54F2AF511060EAD69B1B02C1A4A0DA1150B8_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t81A4C0342C2282BCF88E24BCC5106FD6E3DF46EB HashSet_1_GetEnumerator_m51A2706D66E3140568437570C6C5EF582EAF104D_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mC461795DF94036703C07E72C504D7A7BB79721AC_gshared (Enumerator_t81A4C0342C2282BCF88E24BCC5106FD6E3DF46EB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 Enumerator_get_Current_mAB69385F951A3A9A3C908FF6FBEBC999A1662FCE_gshared_inline (Enumerator_t81A4C0342C2282BCF88E24BCC5106FD6E3DF46EB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3D2919C078241F1D09516B111CA0457EDDA3CF6D_gshared (Enumerator_t81A4C0342C2282BCF88E24BCC5106FD6E3DF46EB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_m01B8445CB48AA750AE33D95705328A6311F2AD56_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_mC0481642BF6A7996280C25DA99597179DD426608_gshared_inline (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tC9DE43D57A757552DA3E3956FF4C8ACC0825A058* EqualityComparer_1_get_Default_m8E87BD6A1ADC9B9DF76194307BE572FEBF9BDD13_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB45B129265310BD6DA41539E016374B3465CA024_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mF5564AE6B06C99BF8D32D846DC80FFC620DD23AA_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mAAF8F13FABAB6DBA1F03EC4736951D20BCDD4359_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m22965DB81DE8890F8B54AB7A39F09B1ED2659862_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* ___0_set1, HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* ___1_set2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_mC315B23D5FD9F1BA7D2D9DFAF22CFC3F027C575C_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m8B90EBA4EEBF76EF0E529780921C0B8D2CFC2D38_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mEFF3EDD96C69B980F30110FC1CF124F3C9B77375_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m0DD0F2604D41195D8D974246C124B327A085F436_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_mFA5CB9658D49A0C1658D04A868595A93CFA7CB50_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, int32_t ___0_index, int32_t ___1_hashCode, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m9141DD3272567A7C3649511C34EADFBB313D73A9_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m66E41A3F6FE27047E8F7131D09761AACBD07149D_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m2B2516803722215CA0FE9D88F71F0851EE43B232_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m78A568D4F3952CB3FC0DF6E36120BE7EA137C527_gshared (Enumerator_tAB071B3AC8721E962A36762209E67EB3FF4E27EA* __this, HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mDE6C9C2E386DADF328E9571B744F509C09F23391_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m714BECF828090B2CB7E1B1EFA936B5D85DB15EC7_gshared_inline (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_m6CCB8D903C658435C56D8F146D80F1EB0C5F0C6B_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_tA9A164AD1FA506092B76B7EA298A254C8605702D HashSet_1_CheckUniqueAndUnfoundElements_m2A3082EF09C8CEE35B0BCEE39AE9F7D0628C75BE_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_m6FCD03575D85B47E3AF8FB2E404FC4F63756BECF_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m2F39A987AC3CF51DA53BA4BCF4877ABEBB57C19A_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m34D179CDEC67872AAC21AE158477A4B6ECD3BDCF_gshared_inline (Predicate_1_tE249FBB519623C34D35DD00865B140E8845D754C* __this, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m8D2DE338F16776B05DD8495A5E402B164ED0B43B_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m0F74F4132618A0A041FE602280B96F9C7910491A_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m0E8ABE6F04F95EA83E09AD2F3F2BD40D8E39DF54_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tAB071B3AC8721E962A36762209E67EB3FF4E27EA HashSet_1_GetEnumerator_mC19744A41AFA69C7FB5F5856EB87DD1A1694DB0C_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m670B6FF684596056E72482252D8991240E6D4DB6_gshared (Enumerator_tAB071B3AC8721E962A36762209E67EB3FF4E27EA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Metrics_t865BF0741490865117A79705F58784742D6F02B8 Enumerator_get_Current_m2464C605A96D0EA0E0EF843839AABCABF3963E9C_gshared_inline (Enumerator_tAB071B3AC8721E962A36762209E67EB3FF4E27EA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m6F7B936B2B88AA7D9E7B57C276FE08B5646E3CCA_gshared (Enumerator_tAB071B3AC8721E962A36762209E67EB3FF4E27EA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_mF18C35EF863BAE1EB37A73F97247C730A0D8C9CF_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m522BD6FC519C7693999126415B22F6E6F673E1D3_gshared_inline (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t11104B05F3482CB1AA975DE7DAC61EC198B51522* EqualityComparer_1_get_Default_mB1E8D63ECB288A5051B41BC6216319CF2FE182FF_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m069C0B34CDBB45125CB6B79FCF4C4513BCB49BBD_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m0B16EC2189F27CE02EE52343F4E6B869EF15A4EA_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m3B58EAF2B8D48759F480ABB444A8CD02F6CC493E_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_mFF32E7845F3695A6E5AC0E25D369C192A510E354_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* ___0_set1, HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* ___1_set2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m4AF04CF0BDBB2335496B84F57FC5C4CE42DAD263_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m2938C4FCC0840559B7A40513143AF5A2567B23E1_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m2DE794FB8336B711CBBCE36F67B1150C1B2BBC6D_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mBED751EA912F67D8E8A17B07F5C162FD6A43DBA7_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m066C06738E8E1CEFCEE9CC950C3F9C680CE836C1_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, int32_t ___0_index, int32_t ___1_hashCode, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m211CCA5D17B1C1A85E135220763606B298B196CF_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m9184434F3E85315939198280272EEDD45B74AE59_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m9B1AE2FA071C53DF6CB578A4B5EBBD91405C8898_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mAADC6BB8FB3CA53169E46ED56FECE40867AFE7D3_gshared (Enumerator_tD84FE35CA246D7E202555F238743C91C623A6E27* __this, HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mAA58EA4DEDD1AB3BBD1165845800F1CB1E97C939_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m0C0115BEC5E4F2D1E13106D739526E6364F49E79_gshared_inline (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_m669987743D4C2034287483D632C33E3298DC9981_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_t5517AF99E2810C026E560770FAA1D5EF6EBDEC8A HashSet_1_CheckUniqueAndUnfoundElements_mA1A67A311A7DBE5CCA76DF8898E5E447FB49B676_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_m0C3D0DFE46EF0F6A3E73A94F6818F2103B7E6318_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m079EDBBDA1CEB62E947D15414A7256A8BC2BFEE2_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mE0D4F79F74E39C7D1A4DBC9DF4DED3D58F5FD3CE_gshared_inline (Predicate_1_t8CA75FACE87C87E7388C22655BF559D93FB9EEBD* __this, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mB535953E594955344F789BF24354D92DEBF0BDB2_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m9961E14B4021212F6C7F72F00B927A275CBAB1CF_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_mE881EF643DDE8E51E7303319AF0FE7BD307F6523_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD84FE35CA246D7E202555F238743C91C623A6E27 HashSet_1_GetEnumerator_m90FDD6C1E365F6CACB9353358FBA34FDC6484AC7_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m652C45E49AEEABF2AEAF174087AF3E4BE2B3D3A7_gshared (Enumerator_tD84FE35CA246D7E202555F238743C91C623A6E27* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 Enumerator_get_Current_mA761DEEB4A8B6A32AB66987F3F64F2EA136585B8_gshared_inline (Enumerator_tD84FE35CA246D7E202555F238743C91C623A6E27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD37C907E621BAEF71C6DF4E0195C59F9F91E4DB6_gshared (Enumerator_tD84FE35CA246D7E202555F238743C91C623A6E27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_mF6D6FE3C80FF63AA9C5C0910C0EDB5ADBCEDDB9F_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m3449149DB3E6A92AAD8982994744C8EED038F356_gshared_inline (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* EqualityComparer_1_CreateComparer_m73A019C274DF1E66D30647A3F24ADC27784B7114_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t6F3DEBFB94986A90A7E3D2670A6572DD17FF2959* EqualityComparer_1_CreateComparer_m1754A1571412B1E1DA573098E2EE9502C982B3A8_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tC9DE43D57A757552DA3E3956FF4C8ACC0825A058* EqualityComparer_1_CreateComparer_mE72567F384B2A5E3EB60BACEE64A80F9A1E6D855_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t11104B05F3482CB1AA975DE7DAC61EC198B51522* EqualityComparer_1_CreateComparer_m2D4B19CD0D04FE1FB330A45CC78495CE44365011_gshared (const RuntimeMethod* method) ;

inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline)(method);
}
inline void HashSet_1__ctor_mAB3B1F14E6741A640E2FA9AE77D62C363B6FBA10 (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mAB3B1F14E6741A640E2FA9AE77D62C363B6FBA10_gshared)(__this, ___0_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void HashSet_1__ctor_m30E9F91069377DDEFABD6C81559E24AD320D3A84 (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, int32_t, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m30E9F91069377DDEFABD6C81559E24AD320D3A84_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline void HashSet_1__ctor_mD320BA1FC2F52FBBD8EFB2C97BAC4E70B56DDAFD (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mD320BA1FC2F52FBBD8EFB2C97BAC4E70B56DDAFD_gshared)(__this, ___0_collection, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline bool HashSet_1_AreEqualityComparersEqual_m7F948A6D7605FADC9C80513D3CB1F21627E974E1 (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_set1, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_m7F948A6D7605FADC9C80513D3CB1F21627E974E1_gshared)(___0_set1, ___1_set2, method);
}
inline void HashSet_1_CopyFrom_m13E227A3D0F6C66092069932EBFFD303B7A2B5F7 (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, const RuntimeMethod*))HashSet_1_CopyFrom_m13E227A3D0F6C66092069932EBFFD303B7A2B5F7_gshared)(__this, ___0_source, method);
}
inline int32_t HashSet_1_Initialize_m5340441ADFFCE4FC7BEA14DD637B35C25CC47EBF (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, int32_t, const RuntimeMethod*))HashSet_1_Initialize_m5340441ADFFCE4FC7BEA14DD637B35C25CC47EBF_gshared)(__this, ___0_capacity, method);
}
inline void HashSet_1_UnionWith_mCE1D0DC2EACB98D74562CA79EB0DB6B6A806510C (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, RuntimeObject*, const RuntimeMethod*))HashSet_1_UnionWith_mCE1D0DC2EACB98D74562CA79EB0DB6B6A806510C_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_TrimExcess_mA48EDAF136B0C1BFBC90E61A5A5F8771F2F60806 (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, const RuntimeMethod*))HashSet_1_TrimExcess_mA48EDAF136B0C1BFBC90E61A5A5F8771F2F60806_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042 (RuntimeArray* __this, const RuntimeMethod* method) ;
inline void HashSet_1_AddValue_m20C9F0D67E5BFE2515651D37D880697363F6562F (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, int32_t ___0_index, int32_t ___1_hashCode, RuntimeObject* ___2_value, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))HashSet_1_AddValue_m20C9F0D67E5BFE2515651D37D880697363F6562F_gshared)(__this, ___0_index, ___1_hashCode, ___2_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline bool HashSet_1_AddIfNotPresent_mC04293BBDC3046C251D90104C942B4576676EF79 (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, RuntimeObject*, const RuntimeMethod*))HashSet_1_AddIfNotPresent_mC04293BBDC3046C251D90104C942B4576676EF79_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline int32_t HashSet_1_InternalGetHashCode_m194DF48C3A8D04814AEF65F316DF262AA89DB68F (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, RuntimeObject*, const RuntimeMethod*))HashSet_1_InternalGetHashCode_m194DF48C3A8D04814AEF65F316DF262AA89DB68F_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void HashSet_1_CopyTo_m2C3002B96C50658CE5522C74A6B1F5599D922D61 (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, const RuntimeMethod*))HashSet_1_CopyTo_m2C3002B96C50658CE5522C74A6B1F5599D922D61_gshared)(__this, ___0_array, ___1_arrayIndex, ___2_count, method);
}
inline void Enumerator__ctor_mC9D698BB17611B2B5A3A805337647838FCAA26DE (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8*, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, const RuntimeMethod*))Enumerator__ctor_mC9D698BB17611B2B5A3A805337647838FCAA26DE_gshared)(__this, ___0_set, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
inline void HashSet_1_CopyTo_m5102D82155B190BF666DD92500756CC1CCBA2172 (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))HashSet_1_CopyTo_m5102D82155B190BF666DD92500756CC1CCBA2172_gshared)(__this, ___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0 (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, const RuntimeMethod*))HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline)(__this, method);
}
inline bool HashSet_1_IsSubsetOfHashSetWithSameEC_m6A2179B7EAA828F08B611529248E69BE8035CF19 (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, const RuntimeMethod*))HashSet_1_IsSubsetOfHashSetWithSameEC_m6A2179B7EAA828F08B611529248E69BE8035CF19_gshared)(__this, ___0_other, method);
}
inline ElementCount_t29C15B1C88986C3AC6DE53448FEDB70F587E3274 HashSet_1_CheckUniqueAndUnfoundElements_mFC2621EEB8C562D9AA586DFFB0FFE49D2C378390 (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method)
{
	return ((  ElementCount_t29C15B1C88986C3AC6DE53448FEDB70F587E3274 (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, RuntimeObject*, bool, const RuntimeMethod*))HashSet_1_CheckUniqueAndUnfoundElements_mFC2621EEB8C562D9AA586DFFB0FFE49D2C378390_gshared)(__this, ___0_other, ___1_returnIfUnfound, method);
}
inline bool HashSet_1_ContainsAllElements_m13263B924ECBFF036A687875947FA1FFE7BE2B4E (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, RuntimeObject*, const RuntimeMethod*))HashSet_1_ContainsAllElements_m13263B924ECBFF036A687875947FA1FFE7BE2B4E_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, RuntimeObject*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline bool Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_inline (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12*, RuntimeObject*, const RuntimeMethod*))Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline)(__this, ___0_obj, method);
}
inline bool HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, RuntimeObject*, const RuntimeMethod*))HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
inline void HashSet_1_SetCapacity_m38D352E6EBE6E50B1D407129115FC9DE6721C55C (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, int32_t, const RuntimeMethod*))HashSet_1_SetCapacity_m38D352E6EBE6E50B1D407129115FC9DE6721C55C_gshared)(__this, ___0_newSize, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
inline void HashSet_1_IncreaseCapacity_mC01C0797260CF7FEBBC99C8245B0A31B1C2E5E56 (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, const RuntimeMethod*))HashSet_1_IncreaseCapacity_mC01C0797260CF7FEBBC99C8245B0A31B1C2E5E56_gshared)(__this, method);
}
inline Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635 (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, const RuntimeMethod*))HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared)(__this, method);
}
inline void Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657 (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8*, const RuntimeMethod*))Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8*, const RuntimeMethod*))Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6 (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8*, const RuntimeMethod*))Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C (int32_t ___0_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3 (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* __this, int32_t* ___0_bitArrayPtr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19 (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_bitArray, int32_t ___1_length, const RuntimeMethod* method) ;
inline int32_t HashSet_1_InternalIndexOf_m0E3B9180AF054442765D541B6F10FAB2D11C5F82 (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, RuntimeObject*, const RuntimeMethod*))HashSet_1_InternalIndexOf_m0E3B9180AF054442765D541B6F10FAB2D11C5F82_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2 (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* __this, int32_t ___0_bitPosition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86 (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* __this, int32_t ___0_bitPosition, const RuntimeMethod* method) ;
inline RuntimeObject* HashSet_1_get_Comparer_mD54AFBFBD525862DC2F8F47071DA5B37CFDEA948_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, const RuntimeMethod*))HashSet_1_get_Comparer_mD54AFBFBD525862DC2F8F47071DA5B37CFDEA948_gshared_inline)(__this, method);
}
inline EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_gshared_inline)(method);
}
inline void HashSet_1__ctor_m3B7B2891BFEF63A7A2071CEBC71CAC98E86706CE (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m3B7B2891BFEF63A7A2071CEBC71CAC98E86706CE_gshared)(__this, ___0_comparer, method);
}
inline void HashSet_1__ctor_m84F19ECFD45EC3F29B8ED82184E4892EFC93A50C (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, int32_t, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m84F19ECFD45EC3F29B8ED82184E4892EFC93A50C_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline void HashSet_1__ctor_m06A7ECC1351897A5086F1261E9DF0EE1FF0A757D (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m06A7ECC1351897A5086F1261E9DF0EE1FF0A757D_gshared)(__this, ___0_collection, ___1_comparer, method);
}
inline bool HashSet_1_AreEqualityComparersEqual_mA6D6AFBE54A3A5C041B6D016B614A506C2C0CCE6 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___0_set1, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_mA6D6AFBE54A3A5C041B6D016B614A506C2C0CCE6_gshared)(___0_set1, ___1_set2, method);
}
inline void HashSet_1_CopyFrom_m757886C93AFA00039C804FBA0DC24407EE787C5F (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, const RuntimeMethod*))HashSet_1_CopyFrom_m757886C93AFA00039C804FBA0DC24407EE787C5F_gshared)(__this, ___0_source, method);
}
inline int32_t HashSet_1_Initialize_m85E38E3E0475D0E8ACBC35AFB10D3E89BCF850AC (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, int32_t, const RuntimeMethod*))HashSet_1_Initialize_m85E38E3E0475D0E8ACBC35AFB10D3E89BCF850AC_gshared)(__this, ___0_capacity, method);
}
inline void HashSet_1_UnionWith_mCC6A0E6F531708E02411F3A62A0EE263B3155CD2 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, RuntimeObject*, const RuntimeMethod*))HashSet_1_UnionWith_mCC6A0E6F531708E02411F3A62A0EE263B3155CD2_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_TrimExcess_m60E387432DD7DB110EBA0525FFA77E9B6DC7AFF4 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, const RuntimeMethod*))HashSet_1_TrimExcess_m60E387432DD7DB110EBA0525FFA77E9B6DC7AFF4_gshared)(__this, method);
}
inline void HashSet_1_AddValue_mD5191D2B847EF17B4112378DE8CD72D1BF3AA7DC (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_index, int32_t ___1_hashCode, uint32_t ___2_value, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, int32_t, int32_t, uint32_t, const RuntimeMethod*))HashSet_1_AddValue_mD5191D2B847EF17B4112378DE8CD72D1BF3AA7DC_gshared)(__this, ___0_index, ___1_hashCode, ___2_value, method);
}
inline bool HashSet_1_AddIfNotPresent_mC839AC5977B30ECC4FCABF7EA67B2A2A4E6E5F0C (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, uint32_t, const RuntimeMethod*))HashSet_1_AddIfNotPresent_mC839AC5977B30ECC4FCABF7EA67B2A2A4E6E5F0C_gshared)(__this, ___0_value, method);
}
inline int32_t HashSet_1_InternalGetHashCode_mB12B697B82E7E87BF40223DEDD96F3F07FD3CA32 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, uint32_t, const RuntimeMethod*))HashSet_1_InternalGetHashCode_mB12B697B82E7E87BF40223DEDD96F3F07FD3CA32_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_CopyTo_m421003E7CDC7B4B86D94CBB25C57DC78D4A42B3B (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, int32_t, int32_t, const RuntimeMethod*))HashSet_1_CopyTo_m421003E7CDC7B4B86D94CBB25C57DC78D4A42B3B_gshared)(__this, ___0_array, ___1_arrayIndex, ___2_count, method);
}
inline void Enumerator__ctor_m9F89B5A77506688ABC2B08774AB13ADDF965703C (Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1* __this, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1*, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, const RuntimeMethod*))Enumerator__ctor_m9F89B5A77506688ABC2B08774AB13ADDF965703C_gshared)(__this, ___0_set, method);
}
inline void HashSet_1_CopyTo_m0A1E30AFCFECF4120A2582BCEF92DB3898C02BF0 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, const RuntimeMethod*))HashSet_1_CopyTo_m0A1E30AFCFECF4120A2582BCEF92DB3898C02BF0_gshared)(__this, ___0_array, method);
}
inline int32_t HashSet_1_get_Count_m12BF15F6E4EEE48D66C845BC74A11EF6673C933B_inline (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, const RuntimeMethod*))HashSet_1_get_Count_m12BF15F6E4EEE48D66C845BC74A11EF6673C933B_gshared_inline)(__this, method);
}
inline bool HashSet_1_IsSubsetOfHashSetWithSameEC_m2FE59CB812DA784F803C5DC582B936A8CD9DF40E (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, const RuntimeMethod*))HashSet_1_IsSubsetOfHashSetWithSameEC_m2FE59CB812DA784F803C5DC582B936A8CD9DF40E_gshared)(__this, ___0_other, method);
}
inline ElementCount_tACEFCAA43DAE9F379C31ABFBD2664B4BF9A04A3A HashSet_1_CheckUniqueAndUnfoundElements_m4E26FF964B1E889AD210069648B9FD1B2A1ECD0B (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method)
{
	return ((  ElementCount_tACEFCAA43DAE9F379C31ABFBD2664B4BF9A04A3A (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, RuntimeObject*, bool, const RuntimeMethod*))HashSet_1_CheckUniqueAndUnfoundElements_m4E26FF964B1E889AD210069648B9FD1B2A1ECD0B_gshared)(__this, ___0_other, ___1_returnIfUnfound, method);
}
inline bool HashSet_1_ContainsAllElements_m0F69DB33ED289FB4C716975C7DFC5DB6F8730ED7 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, RuntimeObject*, const RuntimeMethod*))HashSet_1_ContainsAllElements_m0F69DB33ED289FB4C716975C7DFC5DB6F8730ED7_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_Contains_m02385B663B65E53485251FFFD116D0F26BA172B9 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, uint32_t, const RuntimeMethod*))HashSet_1_Contains_m02385B663B65E53485251FFFD116D0F26BA172B9_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_mCE33776BF08B37A05CCD7FBB46335E5FB6B215DC_inline (Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* __this, uint32_t ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF*, uint32_t, const RuntimeMethod*))Predicate_1_Invoke_mCE33776BF08B37A05CCD7FBB46335E5FB6B215DC_gshared_inline)(__this, ___0_obj, method);
}
inline bool HashSet_1_Remove_m387D02609162D1AA4998698546E668AF4A960F67 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, uint32_t, const RuntimeMethod*))HashSet_1_Remove_m387D02609162D1AA4998698546E668AF4A960F67_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_SetCapacity_m3F7FB3120006196BDCDF9B70A78B647AF318EC85 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, int32_t, const RuntimeMethod*))HashSet_1_SetCapacity_m3F7FB3120006196BDCDF9B70A78B647AF318EC85_gshared)(__this, ___0_newSize, method);
}
inline void HashSet_1_IncreaseCapacity_m9DBE122D41CA3941B3FE97DB9935895B99A84124 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, const RuntimeMethod*))HashSet_1_IncreaseCapacity_m9DBE122D41CA3941B3FE97DB9935895B99A84124_gshared)(__this, method);
}
inline Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1 HashSet_1_GetEnumerator_m519EAE87AF990E90AF0AC67400E9F88D37675611 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1 (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, const RuntimeMethod*))HashSet_1_GetEnumerator_m519EAE87AF990E90AF0AC67400E9F88D37675611_gshared)(__this, method);
}
inline void Enumerator_Dispose_m70072EE419A750BD1D4D458850A4A7A587CBB365 (Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1*, const RuntimeMethod*))Enumerator_Dispose_m70072EE419A750BD1D4D458850A4A7A587CBB365_gshared)(__this, method);
}
inline uint32_t Enumerator_get_Current_m1816042CBEEA33AC96FF5A81924F31E40F1FFF6B_inline (Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1*, const RuntimeMethod*))Enumerator_get_Current_m1816042CBEEA33AC96FF5A81924F31E40F1FFF6B_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m8914E282461C43F14B63B6851A52DC20566D9FDA (Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1*, const RuntimeMethod*))Enumerator_MoveNext_m8914E282461C43F14B63B6851A52DC20566D9FDA_gshared)(__this, method);
}
inline int32_t HashSet_1_InternalIndexOf_mC8EA2612D4BA927B7C2F47DED6DCFE0A1E0764C3 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, uint32_t, const RuntimeMethod*))HashSet_1_InternalIndexOf_mC8EA2612D4BA927B7C2F47DED6DCFE0A1E0764C3_gshared)(__this, ___0_item, method);
}
inline RuntimeObject* HashSet_1_get_Comparer_mC799EE656F81D83581F8A413304661B6F103BC6E_inline (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, const RuntimeMethod*))HashSet_1_get_Comparer_mC799EE656F81D83581F8A413304661B6F103BC6E_gshared_inline)(__this, method);
}
inline EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_gshared_inline)(method);
}
inline void HashSet_1__ctor_m4AC18EE571786DBCFCF629F25C3B0E0A85498229 (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m4AC18EE571786DBCFCF629F25C3B0E0A85498229_gshared)(__this, ___0_comparer, method);
}
inline void HashSet_1__ctor_m4216E3423F93FD1B7345F1F1C19775BD98DE25FD (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, int32_t, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m4216E3423F93FD1B7345F1F1C19775BD98DE25FD_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline void HashSet_1__ctor_mDCC089CE779E3B325E2E51230A136DCEBF3806F0 (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mDCC089CE779E3B325E2E51230A136DCEBF3806F0_gshared)(__this, ___0_collection, ___1_comparer, method);
}
inline bool HashSet_1_AreEqualityComparersEqual_mC35CB7FF1429F80F6BFFF0EB2060D7C94DB4CAFE (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* ___0_set1, HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_mC35CB7FF1429F80F6BFFF0EB2060D7C94DB4CAFE_gshared)(___0_set1, ___1_set2, method);
}
inline void HashSet_1_CopyFrom_mA714EBF95699EE2EBF3680B8AFFD47A6A2D5C9BF (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, const RuntimeMethod*))HashSet_1_CopyFrom_mA714EBF95699EE2EBF3680B8AFFD47A6A2D5C9BF_gshared)(__this, ___0_source, method);
}
inline int32_t HashSet_1_Initialize_m667376365ACF3E4F9574B98DE073CEC5676A382E (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, int32_t, const RuntimeMethod*))HashSet_1_Initialize_m667376365ACF3E4F9574B98DE073CEC5676A382E_gshared)(__this, ___0_capacity, method);
}
inline void HashSet_1_UnionWith_m9F28E11C077FF3F0A71FBFB5213D0484D3C77571 (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, RuntimeObject*, const RuntimeMethod*))HashSet_1_UnionWith_m9F28E11C077FF3F0A71FBFB5213D0484D3C77571_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_TrimExcess_m7496C4131504533235207CF9AF1657CEF2EAB287 (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, const RuntimeMethod*))HashSet_1_TrimExcess_m7496C4131504533235207CF9AF1657CEF2EAB287_gshared)(__this, method);
}
inline void HashSet_1_AddValue_mE56A2D98D83D58FA42BE62D2AB99C087AA95AB8D (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, int32_t ___0_index, int32_t ___1_hashCode, uint64_t ___2_value, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, int32_t, int32_t, uint64_t, const RuntimeMethod*))HashSet_1_AddValue_mE56A2D98D83D58FA42BE62D2AB99C087AA95AB8D_gshared)(__this, ___0_index, ___1_hashCode, ___2_value, method);
}
inline bool HashSet_1_AddIfNotPresent_m03503FE8664D0DABAC1F80E80091FC39C13AB81A (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, uint64_t ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, uint64_t, const RuntimeMethod*))HashSet_1_AddIfNotPresent_m03503FE8664D0DABAC1F80E80091FC39C13AB81A_gshared)(__this, ___0_value, method);
}
inline int32_t HashSet_1_InternalGetHashCode_m936FFC0CEE87F16430B8525E691A8D1597B0797F (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, uint64_t ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, uint64_t, const RuntimeMethod*))HashSet_1_InternalGetHashCode_m936FFC0CEE87F16430B8525E691A8D1597B0797F_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_CopyTo_m7D65846715D8AB759355FD8326B7C82BA06FA7CD (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, int32_t, int32_t, const RuntimeMethod*))HashSet_1_CopyTo_m7D65846715D8AB759355FD8326B7C82BA06FA7CD_gshared)(__this, ___0_array, ___1_arrayIndex, ___2_count, method);
}
inline void Enumerator__ctor_m04D7B4B8F433B4F404609A5C750699AFE1B7AF61 (Enumerator_t1BD5EAC17E707DFC9C05151D77D6E6DC9166D1EC* __this, HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1BD5EAC17E707DFC9C05151D77D6E6DC9166D1EC*, HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, const RuntimeMethod*))Enumerator__ctor_m04D7B4B8F433B4F404609A5C750699AFE1B7AF61_gshared)(__this, ___0_set, method);
}
inline void HashSet_1_CopyTo_m461444400C7E12A594A158A9821B3A43757979D8 (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, const RuntimeMethod*))HashSet_1_CopyTo_m461444400C7E12A594A158A9821B3A43757979D8_gshared)(__this, ___0_array, method);
}
inline int32_t HashSet_1_get_Count_mD658CCA7E625AB10F1732A4EAC391535B9B818BE_inline (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, const RuntimeMethod*))HashSet_1_get_Count_mD658CCA7E625AB10F1732A4EAC391535B9B818BE_gshared_inline)(__this, method);
}
inline bool HashSet_1_IsSubsetOfHashSetWithSameEC_m91BB9570F5D110DDCCF6D9F3A45F97D8167885DC (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, const RuntimeMethod*))HashSet_1_IsSubsetOfHashSetWithSameEC_m91BB9570F5D110DDCCF6D9F3A45F97D8167885DC_gshared)(__this, ___0_other, method);
}
inline ElementCount_tDA4455B14F797EC22A9CAA800585B32F75F302C3 HashSet_1_CheckUniqueAndUnfoundElements_m8C5905FA6921BE0C162D78DD7929FA2C7E6CEE11 (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method)
{
	return ((  ElementCount_tDA4455B14F797EC22A9CAA800585B32F75F302C3 (*) (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, RuntimeObject*, bool, const RuntimeMethod*))HashSet_1_CheckUniqueAndUnfoundElements_m8C5905FA6921BE0C162D78DD7929FA2C7E6CEE11_gshared)(__this, ___0_other, ___1_returnIfUnfound, method);
}
inline bool HashSet_1_ContainsAllElements_m67B4DA26B9E2AF1B2EC16C122550D88B27031AD4 (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, RuntimeObject*, const RuntimeMethod*))HashSet_1_ContainsAllElements_m67B4DA26B9E2AF1B2EC16C122550D88B27031AD4_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957 (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, uint64_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, uint64_t, const RuntimeMethod*))HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_mB49963DE17DE6231BC30045E671D0499C73E9889_inline (Predicate_1_t4CC76CDB2DE98076E841155882228372ED64954D* __this, uint64_t ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t4CC76CDB2DE98076E841155882228372ED64954D*, uint64_t, const RuntimeMethod*))Predicate_1_Invoke_mB49963DE17DE6231BC30045E671D0499C73E9889_gshared_inline)(__this, ___0_obj, method);
}
inline bool HashSet_1_Remove_mA9EE324C0F152945E0170FC6CB33584EBA708075 (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, uint64_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, uint64_t, const RuntimeMethod*))HashSet_1_Remove_mA9EE324C0F152945E0170FC6CB33584EBA708075_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_SetCapacity_m15F41F753DF895CAF8BC8E6D557CADBDCFB6BE58 (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, int32_t, const RuntimeMethod*))HashSet_1_SetCapacity_m15F41F753DF895CAF8BC8E6D557CADBDCFB6BE58_gshared)(__this, ___0_newSize, method);
}
inline void HashSet_1_IncreaseCapacity_m864397CDDF1F08837B55DAA97DBCA0B888D5BE1A (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, const RuntimeMethod*))HashSet_1_IncreaseCapacity_m864397CDDF1F08837B55DAA97DBCA0B888D5BE1A_gshared)(__this, method);
}
inline Enumerator_t1BD5EAC17E707DFC9C05151D77D6E6DC9166D1EC HashSet_1_GetEnumerator_m71DB2D9A0333DB3369C6E27C428D1479764004D4 (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1BD5EAC17E707DFC9C05151D77D6E6DC9166D1EC (*) (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, const RuntimeMethod*))HashSet_1_GetEnumerator_m71DB2D9A0333DB3369C6E27C428D1479764004D4_gshared)(__this, method);
}
inline void Enumerator_Dispose_m85002A2327014F1C4F0417EF8B60AC2E266F84BD (Enumerator_t1BD5EAC17E707DFC9C05151D77D6E6DC9166D1EC* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1BD5EAC17E707DFC9C05151D77D6E6DC9166D1EC*, const RuntimeMethod*))Enumerator_Dispose_m85002A2327014F1C4F0417EF8B60AC2E266F84BD_gshared)(__this, method);
}
inline uint64_t Enumerator_get_Current_m6D6A80C33FAD4B68D656C2356DEB1AA585AEF100_inline (Enumerator_t1BD5EAC17E707DFC9C05151D77D6E6DC9166D1EC* __this, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (Enumerator_t1BD5EAC17E707DFC9C05151D77D6E6DC9166D1EC*, const RuntimeMethod*))Enumerator_get_Current_m6D6A80C33FAD4B68D656C2356DEB1AA585AEF100_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mFA51C33525EADB63DC73E468E53EB55E8ED1AA10 (Enumerator_t1BD5EAC17E707DFC9C05151D77D6E6DC9166D1EC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1BD5EAC17E707DFC9C05151D77D6E6DC9166D1EC*, const RuntimeMethod*))Enumerator_MoveNext_mFA51C33525EADB63DC73E468E53EB55E8ED1AA10_gshared)(__this, method);
}
inline int32_t HashSet_1_InternalIndexOf_m6B2B4F137FC5B975AE9BAD39627483000BA5CDEB (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, uint64_t ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, uint64_t, const RuntimeMethod*))HashSet_1_InternalIndexOf_m6B2B4F137FC5B975AE9BAD39627483000BA5CDEB_gshared)(__this, ___0_item, method);
}
inline RuntimeObject* HashSet_1_get_Comparer_m93D6B6D99DFDD89BFDD1FD1AB76A4FCB488F80CD_inline (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*, const RuntimeMethod*))HashSet_1_get_Comparer_m93D6B6D99DFDD89BFDD1FD1AB76A4FCB488F80CD_gshared_inline)(__this, method);
}
inline void Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5 (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5_gshared)(__this, ___0_set, method);
}
inline EqualityComparer_1_t6F3DEBFB94986A90A7E3D2670A6572DD17FF2959* EqualityComparer_1_get_Default_m0A536FB1E5E1BF720FE6BE32E551F8E8622F1B28_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t6F3DEBFB94986A90A7E3D2670A6572DD17FF2959* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m0A536FB1E5E1BF720FE6BE32E551F8E8622F1B28_gshared_inline)(method);
}
inline void HashSet_1__ctor_m598AF08431A5CC1809E010A0334C8E6B6F52F5F3 (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m598AF08431A5CC1809E010A0334C8E6B6F52F5F3_gshared)(__this, ___0_comparer, method);
}
inline void HashSet_1__ctor_m99A7949C4E8EFD3A7F1299A7A27BED7682771633 (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*, int32_t, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m99A7949C4E8EFD3A7F1299A7A27BED7682771633_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline void HashSet_1__ctor_mE60A61118BC2BF3E42100D41DF6655751811A266 (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mE60A61118BC2BF3E42100D41DF6655751811A266_gshared)(__this, ___0_collection, ___1_comparer, method);
}
inline bool HashSet_1_AreEqualityComparersEqual_m8ADC857F6053F3617A2B969EBFF1D4D67AC2AFEF (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* ___0_set1, HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*, HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_m8ADC857F6053F3617A2B969EBFF1D4D67AC2AFEF_gshared)(___0_set1, ___1_set2, method);
}
inline void HashSet_1_CopyFrom_m2B6D8C63333672B350A9A140DA6EAE9DBA52FB68 (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*, HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*, const RuntimeMethod*))HashSet_1_CopyFrom_m2B6D8C63333672B350A9A140DA6EAE9DBA52FB68_gshared)(__this, ___0_source, method);
}
inline int32_t HashSet_1_Initialize_mBC64B6CAB4BD3FA9D334E10D31668F44D848D23A (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*, int32_t, const RuntimeMethod*))HashSet_1_Initialize_mBC64B6CAB4BD3FA9D334E10D31668F44D848D23A_gshared)(__this, ___0_capacity, method);
}
inline void HashSet_1_UnionWith_m347EC2142091FA83731EC44DA59F70A46A03203A (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*, RuntimeObject*, const RuntimeMethod*))HashSet_1_UnionWith_m347EC2142091FA83731EC44DA59F70A46A03203A_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_TrimExcess_mCA6A95C6B9122CFFF7340A23D62E773B65A1F244 (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*, const RuntimeMethod*))HashSet_1_TrimExcess_mCA6A95C6B9122CFFF7340A23D62E773B65A1F244_gshared)(__this, method);
}
inline void HashSet_1_AddValue_m005159F180824B3258A1551FE40B67F7F39A2CB8 (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, int32_t ___0_index, int32_t ___1_hashCode, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 ___2_value, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*, int32_t, int32_t, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03, const RuntimeMethod*))HashSet_1_AddValue_m005159F180824B3258A1551FE40B67F7F39A2CB8_gshared)(__this, ___0_index, ___1_hashCode, ___2_value, method);
}
inline bool HashSet_1_AddIfNotPresent_m373A349A1E294D8B027416590783179C789F88C4 (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03, const RuntimeMethod*))HashSet_1_AddIfNotPresent_m373A349A1E294D8B027416590783179C789F88C4_gshared)(__this, ___0_value, method);
}
inline int32_t HashSet_1_InternalGetHashCode_m27D313CEC3BF4546C5D1C9541AF74D2FD754115B (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03, const RuntimeMethod*))HashSet_1_InternalGetHashCode_m27D313CEC3BF4546C5D1C9541AF74D2FD754115B_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_CopyTo_mB508C8DC40546F8B9A4512E64251509B00A30433 (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*, FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D*, int32_t, int32_t, const RuntimeMethod*))HashSet_1_CopyTo_mB508C8DC40546F8B9A4512E64251509B00A30433_gshared)(__this, ___0_array, ___1_arrayIndex, ___2_count, method);
}
inline void Enumerator__ctor_mA7D70092988E0B6FAAAF3FF0E0CA92BA9F1E7B27 (Enumerator_t81A4C0342C2282BCF88E24BCC5106FD6E3DF46EB* __this, HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t81A4C0342C2282BCF88E24BCC5106FD6E3DF46EB*, HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*, const RuntimeMethod*))Enumerator__ctor_mA7D70092988E0B6FAAAF3FF0E0CA92BA9F1E7B27_gshared)(__this, ___0_set, method);
}
inline void HashSet_1_CopyTo_mC69F1200F6A21855CCEB6BE8F205E52B0F3E38AD (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*, FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D*, const RuntimeMethod*))HashSet_1_CopyTo_mC69F1200F6A21855CCEB6BE8F205E52B0F3E38AD_gshared)(__this, ___0_array, method);
}
inline int32_t HashSet_1_get_Count_mEC8A5DA1828F7F0DDB0E19139E124989516D42F6_inline (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*, const RuntimeMethod*))HashSet_1_get_Count_mEC8A5DA1828F7F0DDB0E19139E124989516D42F6_gshared_inline)(__this, method);
}
inline bool HashSet_1_IsSubsetOfHashSetWithSameEC_m2EDBB5348ACC637E3A0774DC901A7D102150FD5B (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*, HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*, const RuntimeMethod*))HashSet_1_IsSubsetOfHashSetWithSameEC_m2EDBB5348ACC637E3A0774DC901A7D102150FD5B_gshared)(__this, ___0_other, method);
}
inline ElementCount_tF8FF9CA1A6D9482EA7132FDF9EE46913548BB989 HashSet_1_CheckUniqueAndUnfoundElements_m4EDB438C6E16E369D0468804598604A957CEF714 (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method)
{
	return ((  ElementCount_tF8FF9CA1A6D9482EA7132FDF9EE46913548BB989 (*) (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*, RuntimeObject*, bool, const RuntimeMethod*))HashSet_1_CheckUniqueAndUnfoundElements_m4EDB438C6E16E369D0468804598604A957CEF714_gshared)(__this, ___0_other, ___1_returnIfUnfound, method);
}
inline bool HashSet_1_ContainsAllElements_m1210454DD4DF0C59D32DFCB27C30FD10B9DACF0E (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*, RuntimeObject*, const RuntimeMethod*))HashSet_1_ContainsAllElements_m1210454DD4DF0C59D32DFCB27C30FD10B9DACF0E_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_Contains_m3E3AB2F118CF2D099A7A8F968B00AFED24B2B6E0 (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03, const RuntimeMethod*))HashSet_1_Contains_m3E3AB2F118CF2D099A7A8F968B00AFED24B2B6E0_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_m4C2C8AA6F862B3791D07AFF2E3734563AEF972D8_inline (Predicate_1_t513B0A46D99B486017C4E744E22B524233A4DE7B* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t513B0A46D99B486017C4E744E22B524233A4DE7B*, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03, const RuntimeMethod*))Predicate_1_Invoke_m4C2C8AA6F862B3791D07AFF2E3734563AEF972D8_gshared_inline)(__this, ___0_obj, method);
}
inline bool HashSet_1_Remove_m02BC1D9B579C663AF2416CFF91D219A3A3E01C96 (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03, const RuntimeMethod*))HashSet_1_Remove_m02BC1D9B579C663AF2416CFF91D219A3A3E01C96_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_SetCapacity_mEBCECC1FA33BE9521202BA4E099C8C42A9E27AF2 (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*, int32_t, const RuntimeMethod*))HashSet_1_SetCapacity_mEBCECC1FA33BE9521202BA4E099C8C42A9E27AF2_gshared)(__this, ___0_newSize, method);
}
inline void HashSet_1_IncreaseCapacity_m11CA54F2AF511060EAD69B1B02C1A4A0DA1150B8 (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*, const RuntimeMethod*))HashSet_1_IncreaseCapacity_m11CA54F2AF511060EAD69B1B02C1A4A0DA1150B8_gshared)(__this, method);
}
inline Enumerator_t81A4C0342C2282BCF88E24BCC5106FD6E3DF46EB HashSet_1_GetEnumerator_m51A2706D66E3140568437570C6C5EF582EAF104D (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t81A4C0342C2282BCF88E24BCC5106FD6E3DF46EB (*) (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*, const RuntimeMethod*))HashSet_1_GetEnumerator_m51A2706D66E3140568437570C6C5EF582EAF104D_gshared)(__this, method);
}
inline void Enumerator_Dispose_mC461795DF94036703C07E72C504D7A7BB79721AC (Enumerator_t81A4C0342C2282BCF88E24BCC5106FD6E3DF46EB* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t81A4C0342C2282BCF88E24BCC5106FD6E3DF46EB*, const RuntimeMethod*))Enumerator_Dispose_mC461795DF94036703C07E72C504D7A7BB79721AC_gshared)(__this, method);
}
inline FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 Enumerator_get_Current_mAB69385F951A3A9A3C908FF6FBEBC999A1662FCE_inline (Enumerator_t81A4C0342C2282BCF88E24BCC5106FD6E3DF46EB* __this, const RuntimeMethod* method)
{
	return ((  FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 (*) (Enumerator_t81A4C0342C2282BCF88E24BCC5106FD6E3DF46EB*, const RuntimeMethod*))Enumerator_get_Current_mAB69385F951A3A9A3C908FF6FBEBC999A1662FCE_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m3D2919C078241F1D09516B111CA0457EDDA3CF6D (Enumerator_t81A4C0342C2282BCF88E24BCC5106FD6E3DF46EB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t81A4C0342C2282BCF88E24BCC5106FD6E3DF46EB*, const RuntimeMethod*))Enumerator_MoveNext_m3D2919C078241F1D09516B111CA0457EDDA3CF6D_gshared)(__this, method);
}
inline int32_t HashSet_1_InternalIndexOf_m01B8445CB48AA750AE33D95705328A6311F2AD56 (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03, const RuntimeMethod*))HashSet_1_InternalIndexOf_m01B8445CB48AA750AE33D95705328A6311F2AD56_gshared)(__this, ___0_item, method);
}
inline RuntimeObject* HashSet_1_get_Comparer_mC0481642BF6A7996280C25DA99597179DD426608_inline (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*, const RuntimeMethod*))HashSet_1_get_Comparer_mC0481642BF6A7996280C25DA99597179DD426608_gshared_inline)(__this, method);
}
inline EqualityComparer_1_tC9DE43D57A757552DA3E3956FF4C8ACC0825A058* EqualityComparer_1_get_Default_m8E87BD6A1ADC9B9DF76194307BE572FEBF9BDD13_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tC9DE43D57A757552DA3E3956FF4C8ACC0825A058* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m8E87BD6A1ADC9B9DF76194307BE572FEBF9BDD13_gshared_inline)(method);
}
inline void HashSet_1__ctor_mB45B129265310BD6DA41539E016374B3465CA024 (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mB45B129265310BD6DA41539E016374B3465CA024_gshared)(__this, ___0_comparer, method);
}
inline void HashSet_1__ctor_mF5564AE6B06C99BF8D32D846DC80FFC620DD23AA (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*, int32_t, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mF5564AE6B06C99BF8D32D846DC80FFC620DD23AA_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline void HashSet_1__ctor_mAAF8F13FABAB6DBA1F03EC4736951D20BCDD4359 (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mAAF8F13FABAB6DBA1F03EC4736951D20BCDD4359_gshared)(__this, ___0_collection, ___1_comparer, method);
}
inline bool HashSet_1_AreEqualityComparersEqual_m22965DB81DE8890F8B54AB7A39F09B1ED2659862 (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* ___0_set1, HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*, HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_m22965DB81DE8890F8B54AB7A39F09B1ED2659862_gshared)(___0_set1, ___1_set2, method);
}
inline void HashSet_1_CopyFrom_mC315B23D5FD9F1BA7D2D9DFAF22CFC3F027C575C (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*, HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*, const RuntimeMethod*))HashSet_1_CopyFrom_mC315B23D5FD9F1BA7D2D9DFAF22CFC3F027C575C_gshared)(__this, ___0_source, method);
}
inline int32_t HashSet_1_Initialize_m8B90EBA4EEBF76EF0E529780921C0B8D2CFC2D38 (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*, int32_t, const RuntimeMethod*))HashSet_1_Initialize_m8B90EBA4EEBF76EF0E529780921C0B8D2CFC2D38_gshared)(__this, ___0_capacity, method);
}
inline void HashSet_1_UnionWith_mEFF3EDD96C69B980F30110FC1CF124F3C9B77375 (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*, RuntimeObject*, const RuntimeMethod*))HashSet_1_UnionWith_mEFF3EDD96C69B980F30110FC1CF124F3C9B77375_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_TrimExcess_m0DD0F2604D41195D8D974246C124B327A085F436 (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*, const RuntimeMethod*))HashSet_1_TrimExcess_m0DD0F2604D41195D8D974246C124B327A085F436_gshared)(__this, method);
}
inline void HashSet_1_AddValue_mFA5CB9658D49A0C1658D04A868595A93CFA7CB50 (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, int32_t ___0_index, int32_t ___1_hashCode, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___2_value, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*, int32_t, int32_t, Metrics_t865BF0741490865117A79705F58784742D6F02B8, const RuntimeMethod*))HashSet_1_AddValue_mFA5CB9658D49A0C1658D04A868595A93CFA7CB50_gshared)(__this, ___0_index, ___1_hashCode, ___2_value, method);
}
inline bool HashSet_1_AddIfNotPresent_m9141DD3272567A7C3649511C34EADFBB313D73A9 (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*, Metrics_t865BF0741490865117A79705F58784742D6F02B8, const RuntimeMethod*))HashSet_1_AddIfNotPresent_m9141DD3272567A7C3649511C34EADFBB313D73A9_gshared)(__this, ___0_value, method);
}
inline int32_t HashSet_1_InternalGetHashCode_m66E41A3F6FE27047E8F7131D09761AACBD07149D (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*, Metrics_t865BF0741490865117A79705F58784742D6F02B8, const RuntimeMethod*))HashSet_1_InternalGetHashCode_m66E41A3F6FE27047E8F7131D09761AACBD07149D_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_CopyTo_m2B2516803722215CA0FE9D88F71F0851EE43B232 (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*, MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6*, int32_t, int32_t, const RuntimeMethod*))HashSet_1_CopyTo_m2B2516803722215CA0FE9D88F71F0851EE43B232_gshared)(__this, ___0_array, ___1_arrayIndex, ___2_count, method);
}
inline void Enumerator__ctor_m78A568D4F3952CB3FC0DF6E36120BE7EA137C527 (Enumerator_tAB071B3AC8721E962A36762209E67EB3FF4E27EA* __this, HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAB071B3AC8721E962A36762209E67EB3FF4E27EA*, HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*, const RuntimeMethod*))Enumerator__ctor_m78A568D4F3952CB3FC0DF6E36120BE7EA137C527_gshared)(__this, ___0_set, method);
}
inline void HashSet_1_CopyTo_mDE6C9C2E386DADF328E9571B744F509C09F23391 (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*, MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6*, const RuntimeMethod*))HashSet_1_CopyTo_mDE6C9C2E386DADF328E9571B744F509C09F23391_gshared)(__this, ___0_array, method);
}
inline int32_t HashSet_1_get_Count_m714BECF828090B2CB7E1B1EFA936B5D85DB15EC7_inline (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*, const RuntimeMethod*))HashSet_1_get_Count_m714BECF828090B2CB7E1B1EFA936B5D85DB15EC7_gshared_inline)(__this, method);
}
inline bool HashSet_1_IsSubsetOfHashSetWithSameEC_m6CCB8D903C658435C56D8F146D80F1EB0C5F0C6B (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*, HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*, const RuntimeMethod*))HashSet_1_IsSubsetOfHashSetWithSameEC_m6CCB8D903C658435C56D8F146D80F1EB0C5F0C6B_gshared)(__this, ___0_other, method);
}
inline ElementCount_tA9A164AD1FA506092B76B7EA298A254C8605702D HashSet_1_CheckUniqueAndUnfoundElements_m2A3082EF09C8CEE35B0BCEE39AE9F7D0628C75BE (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method)
{
	return ((  ElementCount_tA9A164AD1FA506092B76B7EA298A254C8605702D (*) (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*, RuntimeObject*, bool, const RuntimeMethod*))HashSet_1_CheckUniqueAndUnfoundElements_m2A3082EF09C8CEE35B0BCEE39AE9F7D0628C75BE_gshared)(__this, ___0_other, ___1_returnIfUnfound, method);
}
inline bool HashSet_1_ContainsAllElements_m6FCD03575D85B47E3AF8FB2E404FC4F63756BECF (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*, RuntimeObject*, const RuntimeMethod*))HashSet_1_ContainsAllElements_m6FCD03575D85B47E3AF8FB2E404FC4F63756BECF_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_Contains_m2F39A987AC3CF51DA53BA4BCF4877ABEBB57C19A (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*, Metrics_t865BF0741490865117A79705F58784742D6F02B8, const RuntimeMethod*))HashSet_1_Contains_m2F39A987AC3CF51DA53BA4BCF4877ABEBB57C19A_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_m34D179CDEC67872AAC21AE158477A4B6ECD3BDCF_inline (Predicate_1_tE249FBB519623C34D35DD00865B140E8845D754C* __this, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_tE249FBB519623C34D35DD00865B140E8845D754C*, Metrics_t865BF0741490865117A79705F58784742D6F02B8, const RuntimeMethod*))Predicate_1_Invoke_m34D179CDEC67872AAC21AE158477A4B6ECD3BDCF_gshared_inline)(__this, ___0_obj, method);
}
inline bool HashSet_1_Remove_m8D2DE338F16776B05DD8495A5E402B164ED0B43B (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*, Metrics_t865BF0741490865117A79705F58784742D6F02B8, const RuntimeMethod*))HashSet_1_Remove_m8D2DE338F16776B05DD8495A5E402B164ED0B43B_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_SetCapacity_m0F74F4132618A0A041FE602280B96F9C7910491A (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*, int32_t, const RuntimeMethod*))HashSet_1_SetCapacity_m0F74F4132618A0A041FE602280B96F9C7910491A_gshared)(__this, ___0_newSize, method);
}
inline void HashSet_1_IncreaseCapacity_m0E8ABE6F04F95EA83E09AD2F3F2BD40D8E39DF54 (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*, const RuntimeMethod*))HashSet_1_IncreaseCapacity_m0E8ABE6F04F95EA83E09AD2F3F2BD40D8E39DF54_gshared)(__this, method);
}
inline Enumerator_tAB071B3AC8721E962A36762209E67EB3FF4E27EA HashSet_1_GetEnumerator_mC19744A41AFA69C7FB5F5856EB87DD1A1694DB0C (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tAB071B3AC8721E962A36762209E67EB3FF4E27EA (*) (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*, const RuntimeMethod*))HashSet_1_GetEnumerator_mC19744A41AFA69C7FB5F5856EB87DD1A1694DB0C_gshared)(__this, method);
}
inline void Enumerator_Dispose_m670B6FF684596056E72482252D8991240E6D4DB6 (Enumerator_tAB071B3AC8721E962A36762209E67EB3FF4E27EA* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAB071B3AC8721E962A36762209E67EB3FF4E27EA*, const RuntimeMethod*))Enumerator_Dispose_m670B6FF684596056E72482252D8991240E6D4DB6_gshared)(__this, method);
}
inline Metrics_t865BF0741490865117A79705F58784742D6F02B8 Enumerator_get_Current_m2464C605A96D0EA0E0EF843839AABCABF3963E9C_inline (Enumerator_tAB071B3AC8721E962A36762209E67EB3FF4E27EA* __this, const RuntimeMethod* method)
{
	return ((  Metrics_t865BF0741490865117A79705F58784742D6F02B8 (*) (Enumerator_tAB071B3AC8721E962A36762209E67EB3FF4E27EA*, const RuntimeMethod*))Enumerator_get_Current_m2464C605A96D0EA0E0EF843839AABCABF3963E9C_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m6F7B936B2B88AA7D9E7B57C276FE08B5646E3CCA (Enumerator_tAB071B3AC8721E962A36762209E67EB3FF4E27EA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAB071B3AC8721E962A36762209E67EB3FF4E27EA*, const RuntimeMethod*))Enumerator_MoveNext_m6F7B936B2B88AA7D9E7B57C276FE08B5646E3CCA_gshared)(__this, method);
}
inline int32_t HashSet_1_InternalIndexOf_mF18C35EF863BAE1EB37A73F97247C730A0D8C9CF (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*, Metrics_t865BF0741490865117A79705F58784742D6F02B8, const RuntimeMethod*))HashSet_1_InternalIndexOf_mF18C35EF863BAE1EB37A73F97247C730A0D8C9CF_gshared)(__this, ___0_item, method);
}
inline RuntimeObject* HashSet_1_get_Comparer_m522BD6FC519C7693999126415B22F6E6F673E1D3_inline (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*, const RuntimeMethod*))HashSet_1_get_Comparer_m522BD6FC519C7693999126415B22F6E6F673E1D3_gshared_inline)(__this, method);
}
inline EqualityComparer_1_t11104B05F3482CB1AA975DE7DAC61EC198B51522* EqualityComparer_1_get_Default_mB1E8D63ECB288A5051B41BC6216319CF2FE182FF_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t11104B05F3482CB1AA975DE7DAC61EC198B51522* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mB1E8D63ECB288A5051B41BC6216319CF2FE182FF_gshared_inline)(method);
}
inline void HashSet_1__ctor_m069C0B34CDBB45125CB6B79FCF4C4513BCB49BBD (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m069C0B34CDBB45125CB6B79FCF4C4513BCB49BBD_gshared)(__this, ___0_comparer, method);
}
inline void HashSet_1__ctor_m0B16EC2189F27CE02EE52343F4E6B869EF15A4EA (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*, int32_t, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m0B16EC2189F27CE02EE52343F4E6B869EF15A4EA_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline void HashSet_1__ctor_m3B58EAF2B8D48759F480ABB444A8CD02F6CC493E (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m3B58EAF2B8D48759F480ABB444A8CD02F6CC493E_gshared)(__this, ___0_collection, ___1_comparer, method);
}
inline bool HashSet_1_AreEqualityComparersEqual_mFF32E7845F3695A6E5AC0E25D369C192A510E354 (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* ___0_set1, HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*, HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_mFF32E7845F3695A6E5AC0E25D369C192A510E354_gshared)(___0_set1, ___1_set2, method);
}
inline void HashSet_1_CopyFrom_m4AF04CF0BDBB2335496B84F57FC5C4CE42DAD263 (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*, HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*, const RuntimeMethod*))HashSet_1_CopyFrom_m4AF04CF0BDBB2335496B84F57FC5C4CE42DAD263_gshared)(__this, ___0_source, method);
}
inline int32_t HashSet_1_Initialize_m2938C4FCC0840559B7A40513143AF5A2567B23E1 (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*, int32_t, const RuntimeMethod*))HashSet_1_Initialize_m2938C4FCC0840559B7A40513143AF5A2567B23E1_gshared)(__this, ___0_capacity, method);
}
inline void HashSet_1_UnionWith_m2DE794FB8336B711CBBCE36F67B1150C1B2BBC6D (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*, RuntimeObject*, const RuntimeMethod*))HashSet_1_UnionWith_m2DE794FB8336B711CBBCE36F67B1150C1B2BBC6D_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_TrimExcess_mBED751EA912F67D8E8A17B07F5C162FD6A43DBA7 (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*, const RuntimeMethod*))HashSet_1_TrimExcess_mBED751EA912F67D8E8A17B07F5C162FD6A43DBA7_gshared)(__this, method);
}
inline void HashSet_1_AddValue_m066C06738E8E1CEFCEE9CC950C3F9C680CE836C1 (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, int32_t ___0_index, int32_t ___1_hashCode, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___2_value, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*, int32_t, int32_t, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71, const RuntimeMethod*))HashSet_1_AddValue_m066C06738E8E1CEFCEE9CC950C3F9C680CE836C1_gshared)(__this, ___0_index, ___1_hashCode, ___2_value, method);
}
inline bool HashSet_1_AddIfNotPresent_m211CCA5D17B1C1A85E135220763606B298B196CF (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71, const RuntimeMethod*))HashSet_1_AddIfNotPresent_m211CCA5D17B1C1A85E135220763606B298B196CF_gshared)(__this, ___0_value, method);
}
inline int32_t HashSet_1_InternalGetHashCode_m9184434F3E85315939198280272EEDD45B74AE59 (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71, const RuntimeMethod*))HashSet_1_InternalGetHashCode_m9184434F3E85315939198280272EEDD45B74AE59_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_CopyTo_m9B1AE2FA071C53DF6CB578A4B5EBBD91405C8898 (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*, UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4*, int32_t, int32_t, const RuntimeMethod*))HashSet_1_CopyTo_m9B1AE2FA071C53DF6CB578A4B5EBBD91405C8898_gshared)(__this, ___0_array, ___1_arrayIndex, ___2_count, method);
}
inline void Enumerator__ctor_mAADC6BB8FB3CA53169E46ED56FECE40867AFE7D3 (Enumerator_tD84FE35CA246D7E202555F238743C91C623A6E27* __this, HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD84FE35CA246D7E202555F238743C91C623A6E27*, HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*, const RuntimeMethod*))Enumerator__ctor_mAADC6BB8FB3CA53169E46ED56FECE40867AFE7D3_gshared)(__this, ___0_set, method);
}
inline void HashSet_1_CopyTo_mAA58EA4DEDD1AB3BBD1165845800F1CB1E97C939 (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*, UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4*, const RuntimeMethod*))HashSet_1_CopyTo_mAA58EA4DEDD1AB3BBD1165845800F1CB1E97C939_gshared)(__this, ___0_array, method);
}
inline int32_t HashSet_1_get_Count_m0C0115BEC5E4F2D1E13106D739526E6364F49E79_inline (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*, const RuntimeMethod*))HashSet_1_get_Count_m0C0115BEC5E4F2D1E13106D739526E6364F49E79_gshared_inline)(__this, method);
}
inline bool HashSet_1_IsSubsetOfHashSetWithSameEC_m669987743D4C2034287483D632C33E3298DC9981 (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*, HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*, const RuntimeMethod*))HashSet_1_IsSubsetOfHashSetWithSameEC_m669987743D4C2034287483D632C33E3298DC9981_gshared)(__this, ___0_other, method);
}
inline ElementCount_t5517AF99E2810C026E560770FAA1D5EF6EBDEC8A HashSet_1_CheckUniqueAndUnfoundElements_mA1A67A311A7DBE5CCA76DF8898E5E447FB49B676 (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method)
{
	return ((  ElementCount_t5517AF99E2810C026E560770FAA1D5EF6EBDEC8A (*) (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*, RuntimeObject*, bool, const RuntimeMethod*))HashSet_1_CheckUniqueAndUnfoundElements_mA1A67A311A7DBE5CCA76DF8898E5E447FB49B676_gshared)(__this, ___0_other, ___1_returnIfUnfound, method);
}
inline bool HashSet_1_ContainsAllElements_m0C3D0DFE46EF0F6A3E73A94F6818F2103B7E6318 (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*, RuntimeObject*, const RuntimeMethod*))HashSet_1_ContainsAllElements_m0C3D0DFE46EF0F6A3E73A94F6818F2103B7E6318_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_Contains_m079EDBBDA1CEB62E947D15414A7256A8BC2BFEE2 (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71, const RuntimeMethod*))HashSet_1_Contains_m079EDBBDA1CEB62E947D15414A7256A8BC2BFEE2_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_mE0D4F79F74E39C7D1A4DBC9DF4DED3D58F5FD3CE_inline (Predicate_1_t8CA75FACE87C87E7388C22655BF559D93FB9EEBD* __this, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t8CA75FACE87C87E7388C22655BF559D93FB9EEBD*, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71, const RuntimeMethod*))Predicate_1_Invoke_mE0D4F79F74E39C7D1A4DBC9DF4DED3D58F5FD3CE_gshared_inline)(__this, ___0_obj, method);
}
inline bool HashSet_1_Remove_mB535953E594955344F789BF24354D92DEBF0BDB2 (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71, const RuntimeMethod*))HashSet_1_Remove_mB535953E594955344F789BF24354D92DEBF0BDB2_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_SetCapacity_m9961E14B4021212F6C7F72F00B927A275CBAB1CF (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*, int32_t, const RuntimeMethod*))HashSet_1_SetCapacity_m9961E14B4021212F6C7F72F00B927A275CBAB1CF_gshared)(__this, ___0_newSize, method);
}
inline void HashSet_1_IncreaseCapacity_mE881EF643DDE8E51E7303319AF0FE7BD307F6523 (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*, const RuntimeMethod*))HashSet_1_IncreaseCapacity_mE881EF643DDE8E51E7303319AF0FE7BD307F6523_gshared)(__this, method);
}
inline Enumerator_tD84FE35CA246D7E202555F238743C91C623A6E27 HashSet_1_GetEnumerator_m90FDD6C1E365F6CACB9353358FBA34FDC6484AC7 (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD84FE35CA246D7E202555F238743C91C623A6E27 (*) (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*, const RuntimeMethod*))HashSet_1_GetEnumerator_m90FDD6C1E365F6CACB9353358FBA34FDC6484AC7_gshared)(__this, method);
}
inline void Enumerator_Dispose_m652C45E49AEEABF2AEAF174087AF3E4BE2B3D3A7 (Enumerator_tD84FE35CA246D7E202555F238743C91C623A6E27* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD84FE35CA246D7E202555F238743C91C623A6E27*, const RuntimeMethod*))Enumerator_Dispose_m652C45E49AEEABF2AEAF174087AF3E4BE2B3D3A7_gshared)(__this, method);
}
inline UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 Enumerator_get_Current_mA761DEEB4A8B6A32AB66987F3F64F2EA136585B8_inline (Enumerator_tD84FE35CA246D7E202555F238743C91C623A6E27* __this, const RuntimeMethod* method)
{
	return ((  UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 (*) (Enumerator_tD84FE35CA246D7E202555F238743C91C623A6E27*, const RuntimeMethod*))Enumerator_get_Current_mA761DEEB4A8B6A32AB66987F3F64F2EA136585B8_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mD37C907E621BAEF71C6DF4E0195C59F9F91E4DB6 (Enumerator_tD84FE35CA246D7E202555F238743C91C623A6E27* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD84FE35CA246D7E202555F238743C91C623A6E27*, const RuntimeMethod*))Enumerator_MoveNext_mD37C907E621BAEF71C6DF4E0195C59F9F91E4DB6_gshared)(__this, method);
}
inline int32_t HashSet_1_InternalIndexOf_mF6D6FE3C80FF63AA9C5C0910C0EDB5ADBCEDDB9F (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71, const RuntimeMethod*))HashSet_1_InternalIndexOf_mF6D6FE3C80FF63AA9C5C0910C0EDB5ADBCEDDB9F_gshared)(__this, ___0_item, method);
}
inline RuntimeObject* HashSet_1_get_Comparer_m3449149DB3E6A92AAD8982994744C8EED038F356_inline (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*, const RuntimeMethod*))HashSet_1_get_Comparer_m3449149DB3E6A92AAD8982994744C8EED038F356_gshared_inline)(__this, method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared)(method);
}
inline EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B_gshared)(method);
}
inline EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* EqualityComparer_1_CreateComparer_m73A019C274DF1E66D30647A3F24ADC27784B7114 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m73A019C274DF1E66D30647A3F24ADC27784B7114_gshared)(method);
}
inline EqualityComparer_1_t6F3DEBFB94986A90A7E3D2670A6572DD17FF2959* EqualityComparer_1_CreateComparer_m1754A1571412B1E1DA573098E2EE9502C982B3A8 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t6F3DEBFB94986A90A7E3D2670A6572DD17FF2959* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m1754A1571412B1E1DA573098E2EE9502C982B3A8_gshared)(method);
}
inline EqualityComparer_1_tC9DE43D57A757552DA3E3956FF4C8ACC0825A058* EqualityComparer_1_CreateComparer_mE72567F384B2A5E3EB60BACEE64A80F9A1E6D855 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tC9DE43D57A757552DA3E3956FF4C8ACC0825A058* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mE72567F384B2A5E3EB60BACEE64A80F9A1E6D855_gshared)(method);
}
inline EqualityComparer_1_t11104B05F3482CB1AA975DE7DAC61EC198B51522* EqualityComparer_1_CreateComparer_m2D4B19CD0D04FE1FB330A45CC78495CE44365011 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t11104B05F3482CB1AA975DE7DAC61EC198B51522* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m2D4B19CD0D04FE1FB330A45CC78495CE44365011_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0;
		L_0 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_mAB3B1F14E6741A640E2FA9AE77D62C363B6FBA10(__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mAB3B1F14E6741A640E2FA9AE77D62C363B6FBA10_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1;
		L_1 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9B0F380B2B34D1F340F5B4FAB8070229BE067917_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1;
		L_1 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m30E9F91069377DDEFABD6C81559E24AD320D3A84(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mC13D3ADFE27A073EC3C583E9C926C801A7EE1DDD_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1;
		L_1 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_mD320BA1FC2F52FBBD8EFB2C97BAC4E70B56DDAFD(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mD320BA1FC2F52FBBD8EFB2C97BAC4E70B56DDAFD_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_mAB3B1F14E6741A640E2FA9AE77D62C363B6FBA10(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_m7F948A6D7605FADC9C80513D3CB1F21627E974E1(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_7 = V_0;
		HashSet_1_CopyFrom_m13E227A3D0F6C66092069932EBFFD303B7A2B5F7(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_m5340441ADFFCE4FC7BEA14DD637B35C25CC47EBF(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_mCE1D0DC2EACB98D74562CA79EB0DB6B6A806510C(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = __this->____count;
		if ((((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_16)->max_length))/L_17))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_mA48EDAF136B0C1BFBC90E61A5A5F8771F2F60806(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}

IL_0074:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB4BE9A1DEE4567D48CA23C9ED1A8242B0B71C4EC_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		__this->____siInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m13E227A3D0F6C66092069932EBFFD303B7A2B5F7_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		V_1 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_8 = ___0_source;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->____buckets;
		NullCheck((RuntimeArray*)L_9);
		RuntimeObject* L_10;
		L_10 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_9, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_11 = ___0_source;
		NullCheck(L_11);
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_12 = L_11->____slots;
		NullCheck((RuntimeArray*)L_12);
		RuntimeObject* L_13;
		L_13 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_12, NULL);
		__this->____slots = ((SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16))));
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_14 = ___0_source;
		NullCheck(L_14);
		int32_t L_15 = L_14->____lastIndex;
		__this->____lastIndex = L_15;
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_16 = ___0_source;
		NullCheck(L_16);
		int32_t L_17 = L_16->____freeList;
		__this->____freeList = L_17;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_18 = ___0_source;
		NullCheck(L_18);
		int32_t L_19 = L_18->____lastIndex;
		V_2 = L_19;
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_20 = ___0_source;
		NullCheck(L_20);
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_21 = L_20->____slots;
		V_3 = L_21;
		int32_t L_22 = V_0;
		int32_t L_23;
		L_23 = HashSet_1_Initialize_m5340441ADFFCE4FC7BEA14DD637B35C25CC47EBF(__this, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_24 = V_3;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode;
		V_6 = L_26;
		int32_t L_27 = V_6;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_28 = V_4;
		int32_t L_29 = V_6;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_30 = V_3;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		RuntimeObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		HashSet_1_AddValue_m20C9F0D67E5BFE2515651D37D880697363F6562F(__this, L_28, L_29, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b4:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ba:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = V_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_37 = V_4;
		__this->____lastIndex = L_37;
	}

IL_00c7:
	{
		int32_t L_38 = V_0;
		__this->____count = L_38;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m30E9F91069377DDEFABD6C81559E24AD320D3A84_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_mAB3B1F14E6741A640E2FA9AE77D62C363B6FBA10(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_m5340441ADFFCE4FC7BEA14DD637B35C25CC47EBF(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m7258E146F589909562A953D54AD7345A616528DC_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_mC04293BBDC3046C251D90104C942B4576676EF79(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m75A6528F0B47448EB3B3A05EC379260E9BDFC2DD_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____lastIndex;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_1 = __this->____slots;
		int32_t L_2 = __this->____lastIndex;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
	}

IL_0044:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		RuntimeObject* L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m194DF48C3A8D04814AEF65F316DF262AA89DB68F(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_2;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)(L_5%((int32_t)(((RuntimeArray*)L_6)->max_length))));
		int32_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___hashCode;
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		RuntimeObject* L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___value;
		RuntimeObject* L_17 = ___0_item;
		NullCheck(L_13);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_13, L_16, L_17);
		if (!L_18)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_006b:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		V_3 = L_25;
	}

IL_007c:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mF4B39069AEE1A4EEB15ED91559241D950F3EE9F8_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_m2C3002B96C50658CE5522C74A6B1F5599D922D61(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		RuntimeObject* L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m194DF48C3A8D04814AEF65F316DF262AA89DB68F(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		V_1 = ((int32_t)(L_3%((int32_t)(((RuntimeArray*)L_4)->max_length))));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_5 = __this->____slots;
		V_4 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_10 = V_4;
		int32_t L_11 = V_5;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		RuntimeObject* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		RuntimeObject* L_18 = ___0_item;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->____buckets;
		int32_t L_22 = V_1;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_23 = V_4;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (int32_t)((int32_t)il2cpp_codegen_add(L_25, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_26 = V_4;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_28 = V_4;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___next;
		((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___next = L_30;
	}

IL_00a7:
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_31 = V_4;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___hashCode = (-1);
	}
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_33 = V_4;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		RuntimeObject** L_35 = (RuntimeObject**)(&((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value);
		il2cpp_codegen_initobj(L_35, sizeof(RuntimeObject*));
	}

IL_00d1:
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_36 = V_4;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = __this->____freeList;
		((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___next = L_38;
		int32_t L_39 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
		int32_t L_40 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_40, 1));
		int32_t L_41 = __this->____count;
		if (L_41)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_42 = V_5;
		__this->____freeList = L_42;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_43 = V_3;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_44 = V_4;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_45 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_45, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, method);
	}

IL_0135:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = V_5;
		V_2 = L_47;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_48 = V_4;
		int32_t L_49 = V_5;
		NullCheck(L_48);
		int32_t L_50 = ((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___next;
		V_5 = L_50;
	}

IL_014c:
	{
		int32_t L_51 = V_5;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mF0024D8CEAE9F50AD481308A80AC1A6320C3553E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC9D698BB17611B2B5A3A805337647838FCAA26DE((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6B8EC9FC82E94AD16FF208FDDD9C73D7397170B0_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC9D698BB17611B2B5A3A805337647838FCAA26DE((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_mE1B4F5BEC5FEAAEAEC77BE8ED6177327DA64060F_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC9D698BB17611B2B5A3A805337647838FCAA26DE((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_m4825222EFCC17409B9FA6121D4857A0AD7281F2A_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 30)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_10)->max_length));
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_12 = __this->____count;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 31), (uint32_t)L_12);
		V_0 = L_13;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
		HashSet_1_CopyTo_m5102D82155B190BF666DD92500756CC1CCBA2172(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_15 = ___0_info;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		NullCheck(L_15);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_15, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_16, L_18, NULL);
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_mAF26E4A7ED72AA389C7EB0EAA7645752CCBEBB60_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_11 = (SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343*)(SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->klass->rgctx_data, 24)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_mC04293BBDC3046C251D90104C942B4576676EF79(__this, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = V_1;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_26 = __this->____siInfo;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_26, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_27;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_mC04293BBDC3046C251D90104C942B4576676EF79(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mCE1D0DC2EACB98D74562CA79EB0DB6B6A806510C_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				RuntimeObject* L_7;
				L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_6);
				V_1 = L_7;
				RuntimeObject* L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_mC04293BBDC3046C251D90104C942B4576676EF79(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck((RuntimeObject*)L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOf_mE3602F240A7B7EC87D77377C3DBF1F0C086BA7C3_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* V_0 = NULL;
	ElementCount_t29C15B1C88986C3AC6DE53448FEDB70F587E3274 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_6 = V_0;
		bool L_7;
		L_7 = HashSet_1_AreEqualityComparersEqual_m7F948A6D7605FADC9C80513D3CB1F21627E974E1(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_8 = __this->____count;
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_inline(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0041:
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_11 = V_0;
		bool L_12;
		L_12 = HashSet_1_IsSubsetOfHashSetWithSameEC_m6A2179B7EAA828F08B611529248E69BE8035CF19(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return L_12;
	}

IL_0049:
	{
		RuntimeObject* L_13 = ___0_other;
		ElementCount_t29C15B1C88986C3AC6DE53448FEDB70F587E3274 L_14;
		L_14 = HashSet_1_CheckUniqueAndUnfoundElements_mFC2621EEB8C562D9AA586DFFB0FFE49D2C378390(__this, L_13, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		V_1 = L_14;
		ElementCount_t29C15B1C88986C3AC6DE53448FEDB70F587E3274 L_15 = V_1;
		int32_t L_16 = L_15.___uniqueCount;
		int32_t L_17 = __this->____count;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_006d;
		}
	}
	{
		ElementCount_t29C15B1C88986C3AC6DE53448FEDB70F587E3274 L_18 = V_1;
		int32_t L_19 = L_18.___unfoundCount;
		return (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_006d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSubsetOf_m9CFA9D5B58A5B99B871393052C16C2D63633E109_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	ElementCount_t29C15B1C88986C3AC6DE53448FEDB70F587E3274 V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0065;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)0;
	}

IL_0028:
	{
		int32_t L_7 = __this->____count;
		if (L_7)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_8);
		return (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
	}

IL_003a:
	{
		RuntimeObject* L_10 = ___0_other;
		V_2 = ((HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*)IsInstClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_12 = V_2;
		bool L_13;
		L_13 = HashSet_1_AreEqualityComparersEqual_m7F948A6D7605FADC9C80513D3CB1F21627E974E1(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_14 = __this->____count;
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_inline(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_005d:
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_17 = V_2;
		bool L_18;
		L_18 = HashSet_1_IsSubsetOfHashSetWithSameEC_m6A2179B7EAA828F08B611529248E69BE8035CF19(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return L_18;
	}

IL_0065:
	{
		RuntimeObject* L_19 = ___0_other;
		ElementCount_t29C15B1C88986C3AC6DE53448FEDB70F587E3274 L_20;
		L_20 = HashSet_1_CheckUniqueAndUnfoundElements_mFC2621EEB8C562D9AA586DFFB0FFE49D2C378390(__this, L_19, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		V_1 = L_20;
		ElementCount_t29C15B1C88986C3AC6DE53448FEDB70F587E3274 L_21 = V_1;
		int32_t L_22 = L_21.___uniqueCount;
		int32_t L_23 = __this->____count;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_0086;
		}
	}
	{
		ElementCount_t29C15B1C88986C3AC6DE53448FEDB70F587E3274 L_24 = V_1;
		int32_t L_25 = L_24.___unfoundCount;
		return (bool)((((int32_t)L_25) > ((int32_t)0))? 1 : 0);
	}

IL_0086:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSupersetOf_m52C636CFE7E5C83D6C5DCA836A6CEBB0BD0DEF8D_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		RuntimeObject* L_7 = ___0_other;
		V_1 = ((HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*)IsInstClass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_8 = V_1;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_9 = V_1;
		bool L_10;
		L_10 = HashSet_1_AreEqualityComparersEqual_m7F948A6D7605FADC9C80513D3CB1F21627E974E1(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_inline(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		int32_t L_13 = __this->____count;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		return (bool)0;
	}

IL_004b:
	{
		RuntimeObject* L_14 = ___0_other;
		bool L_15;
		L_15 = HashSet_1_ContainsAllElements_m13263B924ECBFF036A687875947FA1FFE7BE2B4E(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSupersetOf_mC4C003D52E69C0A392D72F8E41BB9878860580A5_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	ElementCount_t29C15B1C88986C3AC6DE53448FEDB70F587E3274 V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		RuntimeObject* L_8 = ___0_other;
		V_2 = ((HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_9 = V_2;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_10 = V_2;
		bool L_11;
		L_11 = HashSet_1_AreEqualityComparersEqual_m7F948A6D7605FADC9C80513D3CB1F21627E974E1(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_inline(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0055:
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_15 = V_2;
		bool L_16;
		L_16 = HashSet_1_ContainsAllElements_m13263B924ECBFF036A687875947FA1FFE7BE2B4E(__this, (RuntimeObject*)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_16;
	}

IL_005d:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_t29C15B1C88986C3AC6DE53448FEDB70F587E3274 L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_mFC2621EEB8C562D9AA586DFFB0FFE49D2C378390(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		V_1 = L_18;
		ElementCount_t29C15B1C88986C3AC6DE53448FEDB70F587E3274 L_19 = V_1;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_007e;
		}
	}
	{
		ElementCount_t29C15B1C88986C3AC6DE53448FEDB70F587E3274 L_22 = V_1;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Overlaps_mC601342C67DC409970E870A0F9D040D41EE5C892_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003b_1;
			}

IL_0027_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				RuntimeObject* L_9;
				L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_8);
				V_1 = L_9;
				RuntimeObject* L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				if (!L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				V_2 = (bool)1;
				goto IL_0051;
			}

IL_003b_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_004f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		return (bool)0;
	}

IL_0051:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_SetEquals_mF732845AD8521332BC169B8AA011217D3A63FB84_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	ElementCount_t29C15B1C88986C3AC6DE53448FEDB70F587E3274 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_4 = V_0;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_m7F948A6D7605FADC9C80513D3CB1F21627E974E1(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_7 = __this->____count;
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_inline(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_10 = V_0;
		bool L_11;
		L_11 = HashSet_1_ContainsAllElements_m13263B924ECBFF036A687875947FA1FFE7BE2B4E(__this, (RuntimeObject*)L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_11;
	}

IL_003f:
	{
		RuntimeObject* L_12 = ___0_other;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_13 = V_1;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_14 = __this->____count;
		if (L_14)
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_15);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_005c:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_t29C15B1C88986C3AC6DE53448FEDB70F587E3274 L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_mFC2621EEB8C562D9AA586DFFB0FFE49D2C378390(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		V_2 = L_18;
		ElementCount_t29C15B1C88986C3AC6DE53448FEDB70F587E3274 L_19 = V_2;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_007d;
		}
	}
	{
		ElementCount_t29C15B1C88986C3AC6DE53448FEDB70F587E3274 L_22 = V_2;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m5102D82155B190BF666DD92500756CC1CCBA2172_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_m2C3002B96C50658CE5522C74A6B1F5599D922D61(__this, L_0, 0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m2C3002B96C50658CE5522C74A6B1F5599D922D61_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.int32_class, &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___0_array;
		NullCheck(L_13);
		if ((((int32_t)L_12) > ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_14 = ___2_count;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = ___0_array;
		NullCheck(L_15);
		int32_t L_16 = ___1_arrayIndex;
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_18 = __this->____slots;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___hashCode;
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_0;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_24 = __this->____slots;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		RuntimeObject* L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___value;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23))), (RuntimeObject*)L_26);
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0093:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0097:
	{
		int32_t L_29 = V_1;
		int32_t L_30 = __this->____lastIndex;
		if ((((int32_t)L_29) >= ((int32_t)L_30)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_31 = V_0;
		int32_t L_32 = ___2_count;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_m8D29E1EEF73BF771A3EDC41907FCA953D66543C2_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* L_8 = ___0_match;
		RuntimeObject* L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_mD54AFBFBD525862DC2F8F47071DA5B37CFDEA948_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mA48EDAF136B0C1BFBC90E61A5A5F8771F2F60806_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_5 = (SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343*)(SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744)L_16);
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m5340441ADFFCE4FC7BEA14DD637B35C25CC47EBF_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_5 = (SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343*)(SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_mC01C0797260CF7FEBBC99C8245B0A31B1C2E5E56_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_m38D352E6EBE6E50B1D407129115FC9DE6721C55C(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m38D352E6EBE6E50B1D407129115FC9DE6721C55C_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_1 = (SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343*)(SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_3 = __this->____slots;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mC04293BBDC3046C251D90104C942B4576676EF79_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_m5340441ADFFCE4FC7BEA14DD637B35C25CC47EBF(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_m194DF48C3A8D04814AEF65F316DF262AA89DB68F(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		V_1 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		V_2 = 0;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_6 = __this->____slots;
		V_3 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_11 = V_3;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_16 = V_3;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		RuntimeObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_21 = V_2;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_22 = V_3;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0078:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_5 = L_27;
	}

IL_008b:
	{
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_29 = __this->____freeList;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_30 = __this->____freeList;
		V_4 = L_30;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_31 = V_3;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next;
		__this->____freeList = L_33;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_34 = __this->____lastIndex;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_35 = V_3;
		NullCheck(L_35);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_mC01C0797260CF7FEBBC99C8245B0A31B1C2E5E56(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_36 = __this->____slots;
		V_3 = L_36;
		int32_t L_37 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____buckets;
		NullCheck(L_38);
		V_1 = ((int32_t)(L_37%((int32_t)(((RuntimeArray*)L_38)->max_length))));
	}

IL_00d9:
	{
		int32_t L_39 = __this->____lastIndex;
		V_4 = L_39;
		int32_t L_40 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_41 = V_3;
		int32_t L_42 = V_4;
		NullCheck(L_41);
		int32_t L_43 = V_0;
		((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode = L_43;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_44 = V_3;
		int32_t L_45 = V_4;
		NullCheck(L_44);
		RuntimeObject* L_46 = ___0_value;
		((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___value = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___value), (void*)L_46);
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_47 = V_3;
		int32_t L_48 = V_4;
		NullCheck(L_47);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->____buckets;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___next = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		int32_t L_55 = V_4;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (int32_t)((int32_t)il2cpp_codegen_add(L_55, 1)));
		int32_t L_56 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_57, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m20C9F0D67E5BFE2515651D37D880697363F6562F_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, int32_t ___0_index, int32_t ___1_hashCode, RuntimeObject* ___2_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		V_0 = ((int32_t)(L_0%((int32_t)(((RuntimeArray*)L_1)->max_length))));
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_2 = __this->____slots;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = ___1_hashCode;
		((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode = L_4;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_5 = __this->____slots;
		int32_t L_6 = ___0_index;
		NullCheck(L_5);
		RuntimeObject* L_7 = ___2_value;
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value), (void*)L_7);
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_8 = __this->____slots;
		int32_t L_9 = ___0_index;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___next = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		int32_t L_15 = V_0;
		int32_t L_16 = ___0_index;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (int32_t)((int32_t)il2cpp_codegen_add(L_16, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_m13263B924ECBFF036A687875947FA1FFE7BE2B4E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0030;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_0030:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_001d_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				RuntimeObject* L_5;
				L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_4);
				V_1 = L_5;
				RuntimeObject* L_6 = V_1;
				bool L_7;
				L_7 = HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				if (L_7)
				{
					goto IL_001d_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0033;
			}

IL_001d_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0031;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		return (bool)1;
	}

IL_0033:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_m6A2179B7EAA828F08B611529248E69BE8035CF19_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_other, const RuntimeMethod* method) 
{
	Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 L_0;
		L_0 = HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 53));
				return;
			}
		});
		try
		{
			{
				goto IL_001e_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_1;
				L_1 = Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
				V_1 = L_1;
				HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_2 = ___0_other;
				RuntimeObject* L_3 = V_1;
				NullCheck(L_2);
				bool L_4;
				L_4 = HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				if (L_4)
				{
					goto IL_001e_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0039;
			}

IL_001e_1:
			{
				bool L_5;
				L_5 = Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
				if (L_5)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0037;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		return (bool)1;
	}

IL_0039:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_m0E3B9180AF054442765D541B6F10FAB2D11C5F82_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		RuntimeObject* L_0 = ___0_item;
		int32_t L_1;
		L_1 = HashSet_1_InternalGetHashCode_m194DF48C3A8D04814AEF65F316DF262AA89DB68F(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_1;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_2 = __this->____slots;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		int32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_0074;
	}

IL_0027:
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_12 = __this->____comparer;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_13 = V_2;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		RuntimeObject* L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___value;
		RuntimeObject* L_16 = ___0_item;
		NullCheck(L_12);
		bool L_17;
		L_17 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_12, L_15, L_16);
		if (!L_17)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_18 = V_3;
		return L_18;
	}

IL_0052:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0063;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_0063:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		V_3 = L_25;
	}

IL_0074:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_t29C15B1C88986C3AC6DE53448FEDB70F587E3274 HashSet_1_CheckUniqueAndUnfoundElements_mFC2621EEB8C562D9AA586DFFB0FFE49D2C378390_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ElementCount_t29C15B1C88986C3AC6DE53448FEDB70F587E3274 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		V_5 = 0;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_1);
		V_6 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_3 = V_6;
					if (!L_3)
					{
						goto IL_003b;
					}
				}
				{
					RuntimeObject* L_4 = V_6;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_003b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0025_1;
			}

IL_0015_1:
			{
				RuntimeObject* L_5 = V_6;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_5);
				int32_t L_7 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_7, 1));
				goto IL_003c;
			}

IL_0025_1:
			{
				RuntimeObject* L_8 = V_6;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003c;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		(&V_0)->___uniqueCount = 0;
		int32_t L_10 = V_5;
		(&V_0)->___unfoundCount = L_10;
		ElementCount_t29C15B1C88986C3AC6DE53448FEDB70F587E3274 L_11 = V_0;
		return L_11;
	}

IL_004f:
	{
		int32_t L_12 = __this->____lastIndex;
		int32_t L_13;
		L_13 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_12, NULL);
		V_1 = L_13;
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)100))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_15 = V_1;
		if ((uintptr_t)((uintptr_t)L_15) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_16 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_15), 4));
		int8_t* L_17 = (int8_t*) (L_16 ? alloca(L_16) : NULL);
		memset(L_17, 0, L_16);
		int32_t L_18 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_19 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_19, (int32_t*)(L_17), L_18, NULL);
		V_2 = L_19;
		goto IL_007c;
	}

IL_006f:
	{
		int32_t L_20 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_20);
		int32_t L_22 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_23 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_23, L_21, L_22, NULL);
		V_2 = L_23;
	}

IL_007c:
	{
		V_3 = 0;
		V_4 = 0;
		RuntimeObject* L_24 = ___0_other;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_24);
		V_6 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d1:
			{
				{
					RuntimeObject* L_26 = V_6;
					if (!L_26)
					{
						goto IL_00dc;
					}
				}
				{
					RuntimeObject* L_27 = V_6;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00dc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00c6_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_28 = V_6;
				NullCheck(L_28);
				RuntimeObject* L_29;
				L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_28);
				V_7 = L_29;
				RuntimeObject* L_30 = V_7;
				int32_t L_31;
				L_31 = HashSet_1_InternalIndexOf_m0E3B9180AF054442765D541B6F10FAB2D11C5F82(__this, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
				V_8 = L_31;
				int32_t L_32 = V_8;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_00bd_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_33 = V_2;
				int32_t L_34 = V_8;
				NullCheck(L_33);
				bool L_35;
				L_35 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_33, L_34, NULL);
				if (L_35)
				{
					goto IL_00c6_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_36 = V_2;
				int32_t L_37 = V_8;
				NullCheck(L_36);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_36, L_37, NULL);
				int32_t L_38 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
				goto IL_00c6_1;
			}

IL_00bd_1:
			{
				int32_t L_39 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
				bool L_40 = ___1_returnIfUnfound;
				if (!L_40)
				{
					goto IL_00c6_1;
				}
			}
			{
				goto IL_00dd;
			}

IL_00c6_1:
			{
				RuntimeObject* L_41 = V_6;
				NullCheck((RuntimeObject*)L_41);
				bool L_42;
				L_42 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				if (L_42)
				{
					goto IL_008b_1;
				}
			}
			{
				goto IL_00dd;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dd:
	{
		int32_t L_43 = V_4;
		(&V_0)->___uniqueCount = L_43;
		int32_t L_44 = V_3;
		(&V_0)->___unfoundCount = L_44;
		ElementCount_t29C15B1C88986C3AC6DE53448FEDB70F587E3274 L_45 = V_0;
		return L_45;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m7F948A6D7605FADC9C80513D3CB1F21627E974E1_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_set1, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___1_set2, const RuntimeMethod* method) 
{
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_0 = ___0_set1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = HashSet_1_get_Comparer_mD54AFBFBD525862DC2F8F47071DA5B37CFDEA948_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_2 = ___1_set2;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = HashSet_1_get_Comparer_mD54AFBFBD525862DC2F8F47071DA5B37CFDEA948_inline(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		NullCheck((RuntimeObject*)L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)L_1, (RuntimeObject*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m194DF48C3A8D04814AEF65F316DF262AA89DB68F_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		RuntimeObject* L_2 = ___0_item;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4058973F19EEF9E5FCFF05F3779C7F219544C68A_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_0;
		L_0 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m3B7B2891BFEF63A7A2071CEBC71CAC98E86706CE(__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m3B7B2891BFEF63A7A2071CEBC71CAC98E86706CE_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_1;
		L_1 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mA476795C67986109E5187494DEC5981D25457C86_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_1;
		L_1 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m84F19ECFD45EC3F29B8ED82184E4892EFC93A50C(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB226FE67A69CD8BBFE3F07A9BAB84AB6853A10C6_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_1;
		L_1 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m06A7ECC1351897A5086F1261E9DF0EE1FF0A757D(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m06A7ECC1351897A5086F1261E9DF0EE1FF0A757D_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m3B7B2891BFEF63A7A2071CEBC71CAC98E86706CE(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_mA6D6AFBE54A3A5C041B6D016B614A506C2C0CCE6(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_7 = V_0;
		HashSet_1_CopyFrom_m757886C93AFA00039C804FBA0DC24407EE787C5F(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_m85E38E3E0475D0E8ACBC35AFB10D3E89BCF850AC(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_mCC6A0E6F531708E02411F3A62A0EE263B3155CD2(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = __this->____count;
		if ((((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_16)->max_length))/L_17))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_m60E387432DD7DB110EBA0525FFA77E9B6DC7AFF4(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}

IL_0074:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4DB4611435EBE8D5BF2E1FEC52400256F0245F76_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		__this->____siInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m757886C93AFA00039C804FBA0DC24407EE787C5F_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		V_1 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_8 = ___0_source;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->____buckets;
		NullCheck((RuntimeArray*)L_9);
		RuntimeObject* L_10;
		L_10 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_9, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_11 = ___0_source;
		NullCheck(L_11);
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_12 = L_11->____slots;
		NullCheck((RuntimeArray*)L_12);
		RuntimeObject* L_13;
		L_13 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_12, NULL);
		__this->____slots = ((SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16))));
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_14 = ___0_source;
		NullCheck(L_14);
		int32_t L_15 = L_14->____lastIndex;
		__this->____lastIndex = L_15;
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_16 = ___0_source;
		NullCheck(L_16);
		int32_t L_17 = L_16->____freeList;
		__this->____freeList = L_17;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_18 = ___0_source;
		NullCheck(L_18);
		int32_t L_19 = L_18->____lastIndex;
		V_2 = L_19;
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_20 = ___0_source;
		NullCheck(L_20);
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_21 = L_20->____slots;
		V_3 = L_21;
		int32_t L_22 = V_0;
		int32_t L_23;
		L_23 = HashSet_1_Initialize_m85E38E3E0475D0E8ACBC35AFB10D3E89BCF850AC(__this, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_24 = V_3;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode;
		V_6 = L_26;
		int32_t L_27 = V_6;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_28 = V_4;
		int32_t L_29 = V_6;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_30 = V_3;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		uint32_t L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		HashSet_1_AddValue_mD5191D2B847EF17B4112378DE8CD72D1BF3AA7DC(__this, L_28, L_29, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b4:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ba:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = V_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_37 = V_4;
		__this->____lastIndex = L_37;
	}

IL_00c7:
	{
		int32_t L_38 = V_0;
		__this->____count = L_38;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m84F19ECFD45EC3F29B8ED82184E4892EFC93A50C_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m3B7B2891BFEF63A7A2071CEBC71CAC98E86706CE(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_m85E38E3E0475D0E8ACBC35AFB10D3E89BCF850AC(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m348E36EA9F5CD3B346A1D013F3E4950DFF39426A_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_mC839AC5977B30ECC4FCABF7EA67B2A2A4E6E5F0C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m756D9726C9F4BFB2C3500A8A9F27FF47A550EC1D_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____lastIndex;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_1 = __this->____slots;
		int32_t L_2 = __this->____lastIndex;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
	}

IL_0044:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m02385B663B65E53485251FFFD116D0F26BA172B9_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		uint32_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_mB12B697B82E7E87BF40223DEDD96F3F07FD3CA32(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_2;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)(L_5%((int32_t)(((RuntimeArray*)L_6)->max_length))));
		int32_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___hashCode;
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		uint32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___value;
		uint32_t L_17 = ___0_item;
		NullCheck(L_13);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_13, L_16, L_17);
		if (!L_18)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_006b:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		V_3 = L_25;
	}

IL_007c:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m7A73EAC25610F587DD30114203F21E505AB6338C_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_m421003E7CDC7B4B86D94CBB25C57DC78D4A42B3B(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m387D02609162D1AA4998698546E668AF4A960F67_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		uint32_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_mB12B697B82E7E87BF40223DEDD96F3F07FD3CA32(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		V_1 = ((int32_t)(L_3%((int32_t)(((RuntimeArray*)L_4)->max_length))));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_5 = __this->____slots;
		V_4 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_10 = V_4;
		int32_t L_11 = V_5;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		uint32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		uint32_t L_18 = ___0_item;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->____buckets;
		int32_t L_22 = V_1;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_23 = V_4;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (int32_t)((int32_t)il2cpp_codegen_add(L_25, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_26 = V_4;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_28 = V_4;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___next;
		((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___next = L_30;
	}

IL_00a7:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_31 = V_4;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___hashCode = (-1);
		goto IL_00d1;
	}

IL_00d1:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_33 = V_4;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		int32_t L_35 = __this->____freeList;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next = L_35;
		int32_t L_36 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		int32_t L_38 = __this->____count;
		if (L_38)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_39 = V_5;
		__this->____freeList = L_39;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_40 = V_3;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_41 = V_4;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_42 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_42, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
	}

IL_0135:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = V_5;
		V_2 = L_44;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_45 = V_4;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___next;
		V_5 = L_47;
	}

IL_014c:
	{
		int32_t L_48 = V_5;
		if ((((int32_t)L_48) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m12BF15F6E4EEE48D66C845BC74A11EF6673C933B_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m68D44CA7137094B90C9E5C7DB2EDC5012528DADA_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1 HashSet_1_GetEnumerator_m519EAE87AF990E90AF0AC67400E9F88D37675611_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9F89B5A77506688ABC2B08774AB13ADDF965703C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6A9D59B9A319E9A8A0FE2F5738A41821BCD74D97_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9F89B5A77506688ABC2B08774AB13ADDF965703C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_m3A48D76992C5D568FB0D0739748467B17D196FDC_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9F89B5A77506688ABC2B08774AB13ADDF965703C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_m062A764FA7943A6A3EFF468126A44868DD745178_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 30)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_10)->max_length));
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_12 = __this->____count;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 31), (uint32_t)L_12);
		V_0 = L_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_0;
		HashSet_1_CopyTo_m0A1E30AFCFECF4120A2582BCEF92DB3898C02BF0(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_15 = ___0_info;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		NullCheck(L_15);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_15, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_16, L_18, NULL);
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_m502E844E033C614B7D9F80E372E5AA9C7C9B872E_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_11 = (SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)(SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->klass->rgctx_data, 24)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_mC839AC5977B30ECC4FCABF7EA67B2A2A4E6E5F0C(__this, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_1;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_26 = __this->____siInfo;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_26, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_27;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mDA8E52933A6A885D9FCF549C99489EF5E095BE1E_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_mC839AC5977B30ECC4FCABF7EA67B2A2A4E6E5F0C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mCC6A0E6F531708E02411F3A62A0EE263B3155CD2_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				uint32_t L_7;
				L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_6);
				V_1 = L_7;
				uint32_t L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_mC839AC5977B30ECC4FCABF7EA67B2A2A4E6E5F0C(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck((RuntimeObject*)L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOf_m7789049B07F65A4E20001853A0F29E977E317A82_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* V_0 = NULL;
	ElementCount_tACEFCAA43DAE9F379C31ABFBD2664B4BF9A04A3A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_6 = V_0;
		bool L_7;
		L_7 = HashSet_1_AreEqualityComparersEqual_mA6D6AFBE54A3A5C041B6D016B614A506C2C0CCE6(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_8 = __this->____count;
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = HashSet_1_get_Count_m12BF15F6E4EEE48D66C845BC74A11EF6673C933B_inline(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0041:
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_11 = V_0;
		bool L_12;
		L_12 = HashSet_1_IsSubsetOfHashSetWithSameEC_m2FE59CB812DA784F803C5DC582B936A8CD9DF40E(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return L_12;
	}

IL_0049:
	{
		RuntimeObject* L_13 = ___0_other;
		ElementCount_tACEFCAA43DAE9F379C31ABFBD2664B4BF9A04A3A L_14;
		L_14 = HashSet_1_CheckUniqueAndUnfoundElements_m4E26FF964B1E889AD210069648B9FD1B2A1ECD0B(__this, L_13, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		V_1 = L_14;
		ElementCount_tACEFCAA43DAE9F379C31ABFBD2664B4BF9A04A3A L_15 = V_1;
		int32_t L_16 = L_15.___uniqueCount;
		int32_t L_17 = __this->____count;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_006d;
		}
	}
	{
		ElementCount_tACEFCAA43DAE9F379C31ABFBD2664B4BF9A04A3A L_18 = V_1;
		int32_t L_19 = L_18.___unfoundCount;
		return (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_006d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSubsetOf_m527C27ACB683DBCEB82979E9F64BEBC3BC3EAA48_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	ElementCount_tACEFCAA43DAE9F379C31ABFBD2664B4BF9A04A3A V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0065;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)0;
	}

IL_0028:
	{
		int32_t L_7 = __this->____count;
		if (L_7)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_8);
		return (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
	}

IL_003a:
	{
		RuntimeObject* L_10 = ___0_other;
		V_2 = ((HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*)IsInstClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_12 = V_2;
		bool L_13;
		L_13 = HashSet_1_AreEqualityComparersEqual_mA6D6AFBE54A3A5C041B6D016B614A506C2C0CCE6(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_14 = __this->____count;
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = HashSet_1_get_Count_m12BF15F6E4EEE48D66C845BC74A11EF6673C933B_inline(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_005d:
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_17 = V_2;
		bool L_18;
		L_18 = HashSet_1_IsSubsetOfHashSetWithSameEC_m2FE59CB812DA784F803C5DC582B936A8CD9DF40E(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return L_18;
	}

IL_0065:
	{
		RuntimeObject* L_19 = ___0_other;
		ElementCount_tACEFCAA43DAE9F379C31ABFBD2664B4BF9A04A3A L_20;
		L_20 = HashSet_1_CheckUniqueAndUnfoundElements_m4E26FF964B1E889AD210069648B9FD1B2A1ECD0B(__this, L_19, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		V_1 = L_20;
		ElementCount_tACEFCAA43DAE9F379C31ABFBD2664B4BF9A04A3A L_21 = V_1;
		int32_t L_22 = L_21.___uniqueCount;
		int32_t L_23 = __this->____count;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_0086;
		}
	}
	{
		ElementCount_tACEFCAA43DAE9F379C31ABFBD2664B4BF9A04A3A L_24 = V_1;
		int32_t L_25 = L_24.___unfoundCount;
		return (bool)((((int32_t)L_25) > ((int32_t)0))? 1 : 0);
	}

IL_0086:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSupersetOf_m3B8747C5571F5652FC38340F9942B92A313AAE2D_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		RuntimeObject* L_7 = ___0_other;
		V_1 = ((HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*)IsInstClass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_8 = V_1;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_9 = V_1;
		bool L_10;
		L_10 = HashSet_1_AreEqualityComparersEqual_mA6D6AFBE54A3A5C041B6D016B614A506C2C0CCE6(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = HashSet_1_get_Count_m12BF15F6E4EEE48D66C845BC74A11EF6673C933B_inline(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		int32_t L_13 = __this->____count;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		return (bool)0;
	}

IL_004b:
	{
		RuntimeObject* L_14 = ___0_other;
		bool L_15;
		L_15 = HashSet_1_ContainsAllElements_m0F69DB33ED289FB4C716975C7DFC5DB6F8730ED7(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSupersetOf_m697F034971135857591C69BA21B454EF160F2506_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	ElementCount_tACEFCAA43DAE9F379C31ABFBD2664B4BF9A04A3A V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		RuntimeObject* L_8 = ___0_other;
		V_2 = ((HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_9 = V_2;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_10 = V_2;
		bool L_11;
		L_11 = HashSet_1_AreEqualityComparersEqual_mA6D6AFBE54A3A5C041B6D016B614A506C2C0CCE6(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = HashSet_1_get_Count_m12BF15F6E4EEE48D66C845BC74A11EF6673C933B_inline(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0055:
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_15 = V_2;
		bool L_16;
		L_16 = HashSet_1_ContainsAllElements_m0F69DB33ED289FB4C716975C7DFC5DB6F8730ED7(__this, (RuntimeObject*)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_16;
	}

IL_005d:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_tACEFCAA43DAE9F379C31ABFBD2664B4BF9A04A3A L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_m4E26FF964B1E889AD210069648B9FD1B2A1ECD0B(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		V_1 = L_18;
		ElementCount_tACEFCAA43DAE9F379C31ABFBD2664B4BF9A04A3A L_19 = V_1;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_007e;
		}
	}
	{
		ElementCount_tACEFCAA43DAE9F379C31ABFBD2664B4BF9A04A3A L_22 = V_1;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Overlaps_mE15813DFE096BD525D3336711D8E051010D632A1_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	uint32_t V_1 = 0;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003b_1;
			}

IL_0027_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				uint32_t L_9;
				L_9 = InterfaceFuncInvoker0< uint32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_8);
				V_1 = L_9;
				uint32_t L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Contains_m02385B663B65E53485251FFFD116D0F26BA172B9(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				if (!L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				V_2 = (bool)1;
				goto IL_0051;
			}

IL_003b_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_004f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		return (bool)0;
	}

IL_0051:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_SetEquals_mCE32A4AF2B81DD944E68C8C184645A2C507C6473_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	ElementCount_tACEFCAA43DAE9F379C31ABFBD2664B4BF9A04A3A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_4 = V_0;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_mA6D6AFBE54A3A5C041B6D016B614A506C2C0CCE6(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_7 = __this->____count;
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = HashSet_1_get_Count_m12BF15F6E4EEE48D66C845BC74A11EF6673C933B_inline(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_10 = V_0;
		bool L_11;
		L_11 = HashSet_1_ContainsAllElements_m0F69DB33ED289FB4C716975C7DFC5DB6F8730ED7(__this, (RuntimeObject*)L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_11;
	}

IL_003f:
	{
		RuntimeObject* L_12 = ___0_other;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_13 = V_1;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_14 = __this->____count;
		if (L_14)
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_15);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_005c:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_tACEFCAA43DAE9F379C31ABFBD2664B4BF9A04A3A L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_m4E26FF964B1E889AD210069648B9FD1B2A1ECD0B(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		V_2 = L_18;
		ElementCount_tACEFCAA43DAE9F379C31ABFBD2664B4BF9A04A3A L_19 = V_2;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_007d;
		}
	}
	{
		ElementCount_tACEFCAA43DAE9F379C31ABFBD2664B4BF9A04A3A L_22 = V_2;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m0A1E30AFCFECF4120A2582BCEF92DB3898C02BF0_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_m421003E7CDC7B4B86D94CBB25C57DC78D4A42B3B(__this, L_0, 0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m421003E7CDC7B4B86D94CBB25C57DC78D4A42B3B_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.int32_class, &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___0_array;
		NullCheck(L_13);
		if ((((int32_t)L_12) > ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_14 = ___2_count;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___0_array;
		NullCheck(L_15);
		int32_t L_16 = ___1_arrayIndex;
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_18 = __this->____slots;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___hashCode;
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_0;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_24 = __this->____slots;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		uint32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___value;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23))), (uint32_t)L_26);
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0093:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0097:
	{
		int32_t L_29 = V_1;
		int32_t L_30 = __this->____lastIndex;
		if ((((int32_t)L_29) >= ((int32_t)L_30)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_31 = V_0;
		int32_t L_32 = ___2_count;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_m1D8E57063CD3288C9CACB27466A7002F984FD411_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		uint32_t L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* L_8 = ___0_match;
		uint32_t L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = Predicate_1_Invoke_mCE33776BF08B37A05CCD7FBB46335E5FB6B215DC_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		uint32_t L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_m387D02609162D1AA4998698546E668AF4A960F67(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_mC799EE656F81D83581F8A413304661B6F103BC6E_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m60E387432DD7DB110EBA0525FFA77E9B6DC7AFF4_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_5 = (SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)(SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382)L_16);
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m85E38E3E0475D0E8ACBC35AFB10D3E89BCF850AC_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_5 = (SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)(SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m9DBE122D41CA3941B3FE97DB9935895B99A84124_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_m3F7FB3120006196BDCDF9B70A78B647AF318EC85(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m3F7FB3120006196BDCDF9B70A78B647AF318EC85_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_1 = (SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)(SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_3 = __this->____slots;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mC839AC5977B30ECC4FCABF7EA67B2A2A4E6E5F0C_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_m85E38E3E0475D0E8ACBC35AFB10D3E89BCF850AC(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0010:
	{
		uint32_t L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_mB12B697B82E7E87BF40223DEDD96F3F07FD3CA32(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		V_1 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		V_2 = 0;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_6 = __this->____slots;
		V_3 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_11 = V_3;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_16 = V_3;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		uint32_t L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		uint32_t L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_21 = V_2;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_22 = V_3;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0078:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_5 = L_27;
	}

IL_008b:
	{
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_29 = __this->____freeList;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_30 = __this->____freeList;
		V_4 = L_30;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_31 = V_3;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next;
		__this->____freeList = L_33;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_34 = __this->____lastIndex;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_35 = V_3;
		NullCheck(L_35);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_m9DBE122D41CA3941B3FE97DB9935895B99A84124(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_36 = __this->____slots;
		V_3 = L_36;
		int32_t L_37 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____buckets;
		NullCheck(L_38);
		V_1 = ((int32_t)(L_37%((int32_t)(((RuntimeArray*)L_38)->max_length))));
	}

IL_00d9:
	{
		int32_t L_39 = __this->____lastIndex;
		V_4 = L_39;
		int32_t L_40 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_41 = V_3;
		int32_t L_42 = V_4;
		NullCheck(L_41);
		int32_t L_43 = V_0;
		((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode = L_43;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_44 = V_3;
		int32_t L_45 = V_4;
		NullCheck(L_44);
		uint32_t L_46 = ___0_value;
		((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___value = L_46;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_47 = V_3;
		int32_t L_48 = V_4;
		NullCheck(L_47);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->____buckets;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___next = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		int32_t L_55 = V_4;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (int32_t)((int32_t)il2cpp_codegen_add(L_55, 1)));
		int32_t L_56 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_57, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_mD5191D2B847EF17B4112378DE8CD72D1BF3AA7DC_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_index, int32_t ___1_hashCode, uint32_t ___2_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		V_0 = ((int32_t)(L_0%((int32_t)(((RuntimeArray*)L_1)->max_length))));
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_2 = __this->____slots;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = ___1_hashCode;
		((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode = L_4;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_5 = __this->____slots;
		int32_t L_6 = ___0_index;
		NullCheck(L_5);
		uint32_t L_7 = ___2_value;
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value = L_7;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_8 = __this->____slots;
		int32_t L_9 = ___0_index;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___next = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		int32_t L_15 = V_0;
		int32_t L_16 = ___0_index;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (int32_t)((int32_t)il2cpp_codegen_add(L_16, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_m0F69DB33ED289FB4C716975C7DFC5DB6F8730ED7_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	uint32_t V_1 = 0;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0030;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_0030:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_001d_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				uint32_t L_5;
				L_5 = InterfaceFuncInvoker0< uint32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_4);
				V_1 = L_5;
				uint32_t L_6 = V_1;
				bool L_7;
				L_7 = HashSet_1_Contains_m02385B663B65E53485251FFFD116D0F26BA172B9(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				if (L_7)
				{
					goto IL_001d_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0033;
			}

IL_001d_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0031;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		return (bool)1;
	}

IL_0033:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_m2FE59CB812DA784F803C5DC582B936A8CD9DF40E_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___0_other, const RuntimeMethod* method) 
{
	Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint32_t V_1 = 0;
	bool V_2 = false;
	{
		Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1 L_0;
		L_0 = HashSet_1_GetEnumerator_m519EAE87AF990E90AF0AC67400E9F88D37675611(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				Enumerator_Dispose_m70072EE419A750BD1D4D458850A4A7A587CBB365((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 53));
				return;
			}
		});
		try
		{
			{
				goto IL_001e_1;
			}

IL_0009_1:
			{
				uint32_t L_1;
				L_1 = Enumerator_get_Current_m1816042CBEEA33AC96FF5A81924F31E40F1FFF6B_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
				V_1 = L_1;
				HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_2 = ___0_other;
				uint32_t L_3 = V_1;
				NullCheck(L_2);
				bool L_4;
				L_4 = HashSet_1_Contains_m02385B663B65E53485251FFFD116D0F26BA172B9(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				if (L_4)
				{
					goto IL_001e_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0039;
			}

IL_001e_1:
			{
				bool L_5;
				L_5 = Enumerator_MoveNext_m8914E282461C43F14B63B6851A52DC20566D9FDA((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
				if (L_5)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0037;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		return (bool)1;
	}

IL_0039:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_mC8EA2612D4BA927B7C2F47DED6DCFE0A1E0764C3_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		uint32_t L_0 = ___0_item;
		int32_t L_1;
		L_1 = HashSet_1_InternalGetHashCode_mB12B697B82E7E87BF40223DEDD96F3F07FD3CA32(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_1;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_2 = __this->____slots;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		int32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_0074;
	}

IL_0027:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_12 = __this->____comparer;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_13 = V_2;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		uint32_t L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___value;
		uint32_t L_16 = ___0_item;
		NullCheck(L_12);
		bool L_17;
		L_17 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_12, L_15, L_16);
		if (!L_17)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_18 = V_3;
		return L_18;
	}

IL_0052:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0063;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_0063:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		V_3 = L_25;
	}

IL_0074:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_tACEFCAA43DAE9F379C31ABFBD2664B4BF9A04A3A HashSet_1_CheckUniqueAndUnfoundElements_m4E26FF964B1E889AD210069648B9FD1B2A1ECD0B_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ElementCount_tACEFCAA43DAE9F379C31ABFBD2664B4BF9A04A3A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		V_5 = 0;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_1);
		V_6 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_3 = V_6;
					if (!L_3)
					{
						goto IL_003b;
					}
				}
				{
					RuntimeObject* L_4 = V_6;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_003b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0025_1;
			}

IL_0015_1:
			{
				RuntimeObject* L_5 = V_6;
				NullCheck(L_5);
				uint32_t L_6;
				L_6 = InterfaceFuncInvoker0< uint32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_5);
				int32_t L_7 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_7, 1));
				goto IL_003c;
			}

IL_0025_1:
			{
				RuntimeObject* L_8 = V_6;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003c;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		(&V_0)->___uniqueCount = 0;
		int32_t L_10 = V_5;
		(&V_0)->___unfoundCount = L_10;
		ElementCount_tACEFCAA43DAE9F379C31ABFBD2664B4BF9A04A3A L_11 = V_0;
		return L_11;
	}

IL_004f:
	{
		int32_t L_12 = __this->____lastIndex;
		int32_t L_13;
		L_13 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_12, NULL);
		V_1 = L_13;
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)100))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_15 = V_1;
		if ((uintptr_t)((uintptr_t)L_15) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_16 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_15), 4));
		int8_t* L_17 = (int8_t*) (L_16 ? alloca(L_16) : NULL);
		memset(L_17, 0, L_16);
		int32_t L_18 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_19 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_19, (int32_t*)(L_17), L_18, NULL);
		V_2 = L_19;
		goto IL_007c;
	}

IL_006f:
	{
		int32_t L_20 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_20);
		int32_t L_22 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_23 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_23, L_21, L_22, NULL);
		V_2 = L_23;
	}

IL_007c:
	{
		V_3 = 0;
		V_4 = 0;
		RuntimeObject* L_24 = ___0_other;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_24);
		V_6 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d1:
			{
				{
					RuntimeObject* L_26 = V_6;
					if (!L_26)
					{
						goto IL_00dc;
					}
				}
				{
					RuntimeObject* L_27 = V_6;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00dc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00c6_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_28 = V_6;
				NullCheck(L_28);
				uint32_t L_29;
				L_29 = InterfaceFuncInvoker0< uint32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_28);
				V_7 = L_29;
				uint32_t L_30 = V_7;
				int32_t L_31;
				L_31 = HashSet_1_InternalIndexOf_mC8EA2612D4BA927B7C2F47DED6DCFE0A1E0764C3(__this, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
				V_8 = L_31;
				int32_t L_32 = V_8;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_00bd_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_33 = V_2;
				int32_t L_34 = V_8;
				NullCheck(L_33);
				bool L_35;
				L_35 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_33, L_34, NULL);
				if (L_35)
				{
					goto IL_00c6_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_36 = V_2;
				int32_t L_37 = V_8;
				NullCheck(L_36);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_36, L_37, NULL);
				int32_t L_38 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
				goto IL_00c6_1;
			}

IL_00bd_1:
			{
				int32_t L_39 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
				bool L_40 = ___1_returnIfUnfound;
				if (!L_40)
				{
					goto IL_00c6_1;
				}
			}
			{
				goto IL_00dd;
			}

IL_00c6_1:
			{
				RuntimeObject* L_41 = V_6;
				NullCheck((RuntimeObject*)L_41);
				bool L_42;
				L_42 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				if (L_42)
				{
					goto IL_008b_1;
				}
			}
			{
				goto IL_00dd;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dd:
	{
		int32_t L_43 = V_4;
		(&V_0)->___uniqueCount = L_43;
		int32_t L_44 = V_3;
		(&V_0)->___unfoundCount = L_44;
		ElementCount_tACEFCAA43DAE9F379C31ABFBD2664B4BF9A04A3A L_45 = V_0;
		return L_45;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_mA6D6AFBE54A3A5C041B6D016B614A506C2C0CCE6_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___0_set1, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___1_set2, const RuntimeMethod* method) 
{
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_0 = ___0_set1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = HashSet_1_get_Comparer_mC799EE656F81D83581F8A413304661B6F103BC6E_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_2 = ___1_set2;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = HashSet_1_get_Comparer_mC799EE656F81D83581F8A413304661B6F103BC6E_inline(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		NullCheck((RuntimeObject*)L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)L_1, (RuntimeObject*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_mB12B697B82E7E87BF40223DEDD96F3F07FD3CA32_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		uint32_t L_2 = ___0_item;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9BDEA7E937C7BF704DD76D70C1EB8C3B72FA474B_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_0;
		L_0 = EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m4AC18EE571786DBCFCF629F25C3B0E0A85498229(__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4AC18EE571786DBCFCF629F25C3B0E0A85498229_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_1;
		L_1 = EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mEF1EE0D664768442EC055674C76E52CC740DDE36_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_1;
		L_1 = EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m4216E3423F93FD1B7345F1F1C19775BD98DE25FD(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m7B6BC6828AAF0D8735FE2D3F72C41F8B75D1E4F5_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_1;
		L_1 = EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_mDCC089CE779E3B325E2E51230A136DCEBF3806F0(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mDCC089CE779E3B325E2E51230A136DCEBF3806F0_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m4AC18EE571786DBCFCF629F25C3B0E0A85498229(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_mC35CB7FF1429F80F6BFFF0EB2060D7C94DB4CAFE(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_7 = V_0;
		HashSet_1_CopyFrom_mA714EBF95699EE2EBF3680B8AFFD47A6A2D5C9BF(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_m667376365ACF3E4F9574B98DE073CEC5676A382E(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_m9F28E11C077FF3F0A71FBFB5213D0484D3C77571(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = __this->____count;
		if ((((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_16)->max_length))/L_17))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_m7496C4131504533235207CF9AF1657CEF2EAB287(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}

IL_0074:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m5BCABFCACA1DBFD35629B9A6FA0F36B76B97C8EE_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		__this->____siInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_mA714EBF95699EE2EBF3680B8AFFD47A6A2D5C9BF_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		V_1 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_8 = ___0_source;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->____buckets;
		NullCheck((RuntimeArray*)L_9);
		RuntimeObject* L_10;
		L_10 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_9, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_11 = ___0_source;
		NullCheck(L_11);
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_12 = L_11->____slots;
		NullCheck((RuntimeArray*)L_12);
		RuntimeObject* L_13;
		L_13 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_12, NULL);
		__this->____slots = ((SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16))));
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_14 = ___0_source;
		NullCheck(L_14);
		int32_t L_15 = L_14->____lastIndex;
		__this->____lastIndex = L_15;
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_16 = ___0_source;
		NullCheck(L_16);
		int32_t L_17 = L_16->____freeList;
		__this->____freeList = L_17;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_18 = ___0_source;
		NullCheck(L_18);
		int32_t L_19 = L_18->____lastIndex;
		V_2 = L_19;
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_20 = ___0_source;
		NullCheck(L_20);
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_21 = L_20->____slots;
		V_3 = L_21;
		int32_t L_22 = V_0;
		int32_t L_23;
		L_23 = HashSet_1_Initialize_m667376365ACF3E4F9574B98DE073CEC5676A382E(__this, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_24 = V_3;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode;
		V_6 = L_26;
		int32_t L_27 = V_6;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_28 = V_4;
		int32_t L_29 = V_6;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_30 = V_3;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		uint64_t L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		HashSet_1_AddValue_mE56A2D98D83D58FA42BE62D2AB99C087AA95AB8D(__this, L_28, L_29, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b4:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ba:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = V_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_37 = V_4;
		__this->____lastIndex = L_37;
	}

IL_00c7:
	{
		int32_t L_38 = V_0;
		__this->____count = L_38;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4216E3423F93FD1B7345F1F1C19775BD98DE25FD_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m4AC18EE571786DBCFCF629F25C3B0E0A85498229(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_m667376365ACF3E4F9574B98DE073CEC5676A382E(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m68667FAC993594AC2CA510601D31CF86FAAEA2BA_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, uint64_t ___0_item, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m03503FE8664D0DABAC1F80E80091FC39C13AB81A(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m5FABFCEB547E70B270297A2A2E62F2AD22C77CCC_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____lastIndex;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_1 = __this->____slots;
		int32_t L_2 = __this->____lastIndex;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
	}

IL_0044:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, uint64_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		uint64_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m936FFC0CEE87F16430B8525E691A8D1597B0797F(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_2;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)(L_5%((int32_t)(((RuntimeArray*)L_6)->max_length))));
		int32_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___hashCode;
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		uint64_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___value;
		uint64_t L_17 = ___0_item;
		NullCheck(L_13);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_13, L_16, L_17);
		if (!L_18)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_006b:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		V_3 = L_25;
	}

IL_007c:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mCADBA41E16E189E4C949F0045CFA5D76BFACC82B_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_m7D65846715D8AB759355FD8326B7C82BA06FA7CD(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mA9EE324C0F152945E0170FC6CB33584EBA708075_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, uint64_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		uint64_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m936FFC0CEE87F16430B8525E691A8D1597B0797F(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		V_1 = ((int32_t)(L_3%((int32_t)(((RuntimeArray*)L_4)->max_length))));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_5 = __this->____slots;
		V_4 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_10 = V_4;
		int32_t L_11 = V_5;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		uint64_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		uint64_t L_18 = ___0_item;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->____buckets;
		int32_t L_22 = V_1;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_23 = V_4;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (int32_t)((int32_t)il2cpp_codegen_add(L_25, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_26 = V_4;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_28 = V_4;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___next;
		((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___next = L_30;
	}

IL_00a7:
	{
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_31 = V_4;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___hashCode = (-1);
		goto IL_00d1;
	}

IL_00d1:
	{
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_33 = V_4;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		int32_t L_35 = __this->____freeList;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next = L_35;
		int32_t L_36 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		int32_t L_38 = __this->____count;
		if (L_38)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_39 = V_5;
		__this->____freeList = L_39;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_40 = V_3;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_41 = V_4;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_42 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_42, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
	}

IL_0135:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = V_5;
		V_2 = L_44;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_45 = V_4;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___next;
		V_5 = L_47;
	}

IL_014c:
	{
		int32_t L_48 = V_5;
		if ((((int32_t)L_48) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mD658CCA7E625AB10F1732A4EAC391535B9B818BE_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mB4E0C147A0D916F8822ABDEB0EA7D7798230E4B2_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1BD5EAC17E707DFC9C05151D77D6E6DC9166D1EC HashSet_1_GetEnumerator_m71DB2D9A0333DB3369C6E27C428D1479764004D4_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t1BD5EAC17E707DFC9C05151D77D6E6DC9166D1EC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m04D7B4B8F433B4F404609A5C750699AFE1B7AF61((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32D9A2B07AA4CA65D0C60E6165889D638C1DE3CD_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t1BD5EAC17E707DFC9C05151D77D6E6DC9166D1EC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m04D7B4B8F433B4F404609A5C750699AFE1B7AF61((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t1BD5EAC17E707DFC9C05151D77D6E6DC9166D1EC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_m5D81A7E56881BA69F8BC44DF4F450A9B08C17E21_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t1BD5EAC17E707DFC9C05151D77D6E6DC9166D1EC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m04D7B4B8F433B4F404609A5C750699AFE1B7AF61((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t1BD5EAC17E707DFC9C05151D77D6E6DC9166D1EC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_m45920DDA95E789108DAE5F7059F414B32B16AC79_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 30)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_10)->max_length));
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_12 = __this->____count;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 31), (uint32_t)L_12);
		V_0 = L_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = V_0;
		HashSet_1_CopyTo_m461444400C7E12A594A158A9821B3A43757979D8(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_15 = ___0_info;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		NullCheck(L_15);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_15, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_16, L_18, NULL);
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_m8041580213C921E5459AD7A012CB21A357D1D488_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_11 = (SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4*)(SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->klass->rgctx_data, 24)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint64_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_m03503FE8664D0DABAC1F80E80091FC39C13AB81A(__this, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_25 = V_1;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_26 = __this->____siInfo;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_26, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_27;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mBC1006593BDA81F38BCAC913DA281C8437CF04D0_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, uint64_t ___0_item, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m03503FE8664D0DABAC1F80E80091FC39C13AB81A(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m9F28E11C077FF3F0A71FBFB5213D0484D3C77571_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	uint64_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				uint64_t L_7;
				L_7 = InterfaceFuncInvoker0< uint64_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_6);
				V_1 = L_7;
				uint64_t L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_m03503FE8664D0DABAC1F80E80091FC39C13AB81A(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck((RuntimeObject*)L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOf_mC973203991AB9A5CFB34A229139A9D25D5477587_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* V_0 = NULL;
	ElementCount_tDA4455B14F797EC22A9CAA800585B32F75F302C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_6 = V_0;
		bool L_7;
		L_7 = HashSet_1_AreEqualityComparersEqual_mC35CB7FF1429F80F6BFFF0EB2060D7C94DB4CAFE(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_8 = __this->____count;
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = HashSet_1_get_Count_mD658CCA7E625AB10F1732A4EAC391535B9B818BE_inline(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0041:
	{
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_11 = V_0;
		bool L_12;
		L_12 = HashSet_1_IsSubsetOfHashSetWithSameEC_m91BB9570F5D110DDCCF6D9F3A45F97D8167885DC(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return L_12;
	}

IL_0049:
	{
		RuntimeObject* L_13 = ___0_other;
		ElementCount_tDA4455B14F797EC22A9CAA800585B32F75F302C3 L_14;
		L_14 = HashSet_1_CheckUniqueAndUnfoundElements_m8C5905FA6921BE0C162D78DD7929FA2C7E6CEE11(__this, L_13, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		V_1 = L_14;
		ElementCount_tDA4455B14F797EC22A9CAA800585B32F75F302C3 L_15 = V_1;
		int32_t L_16 = L_15.___uniqueCount;
		int32_t L_17 = __this->____count;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_006d;
		}
	}
	{
		ElementCount_tDA4455B14F797EC22A9CAA800585B32F75F302C3 L_18 = V_1;
		int32_t L_19 = L_18.___unfoundCount;
		return (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_006d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSubsetOf_m98C93170839EB703CE8A9FD5412F25C85012E5B4_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	ElementCount_tDA4455B14F797EC22A9CAA800585B32F75F302C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0065;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)0;
	}

IL_0028:
	{
		int32_t L_7 = __this->____count;
		if (L_7)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_8);
		return (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
	}

IL_003a:
	{
		RuntimeObject* L_10 = ___0_other;
		V_2 = ((HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*)IsInstClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_12 = V_2;
		bool L_13;
		L_13 = HashSet_1_AreEqualityComparersEqual_mC35CB7FF1429F80F6BFFF0EB2060D7C94DB4CAFE(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_14 = __this->____count;
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = HashSet_1_get_Count_mD658CCA7E625AB10F1732A4EAC391535B9B818BE_inline(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_005d:
	{
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_17 = V_2;
		bool L_18;
		L_18 = HashSet_1_IsSubsetOfHashSetWithSameEC_m91BB9570F5D110DDCCF6D9F3A45F97D8167885DC(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return L_18;
	}

IL_0065:
	{
		RuntimeObject* L_19 = ___0_other;
		ElementCount_tDA4455B14F797EC22A9CAA800585B32F75F302C3 L_20;
		L_20 = HashSet_1_CheckUniqueAndUnfoundElements_m8C5905FA6921BE0C162D78DD7929FA2C7E6CEE11(__this, L_19, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		V_1 = L_20;
		ElementCount_tDA4455B14F797EC22A9CAA800585B32F75F302C3 L_21 = V_1;
		int32_t L_22 = L_21.___uniqueCount;
		int32_t L_23 = __this->____count;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_0086;
		}
	}
	{
		ElementCount_tDA4455B14F797EC22A9CAA800585B32F75F302C3 L_24 = V_1;
		int32_t L_25 = L_24.___unfoundCount;
		return (bool)((((int32_t)L_25) > ((int32_t)0))? 1 : 0);
	}

IL_0086:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSupersetOf_mD04357072BF3F010E697A9221A4182CCC4031492_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		RuntimeObject* L_7 = ___0_other;
		V_1 = ((HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*)IsInstClass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_8 = V_1;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_9 = V_1;
		bool L_10;
		L_10 = HashSet_1_AreEqualityComparersEqual_mC35CB7FF1429F80F6BFFF0EB2060D7C94DB4CAFE(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = HashSet_1_get_Count_mD658CCA7E625AB10F1732A4EAC391535B9B818BE_inline(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		int32_t L_13 = __this->____count;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		return (bool)0;
	}

IL_004b:
	{
		RuntimeObject* L_14 = ___0_other;
		bool L_15;
		L_15 = HashSet_1_ContainsAllElements_m67B4DA26B9E2AF1B2EC16C122550D88B27031AD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSupersetOf_m179188F6C3A93B5A00E4B7107FE78B64EC4AFCF8_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	ElementCount_tDA4455B14F797EC22A9CAA800585B32F75F302C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		RuntimeObject* L_8 = ___0_other;
		V_2 = ((HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_9 = V_2;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_10 = V_2;
		bool L_11;
		L_11 = HashSet_1_AreEqualityComparersEqual_mC35CB7FF1429F80F6BFFF0EB2060D7C94DB4CAFE(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = HashSet_1_get_Count_mD658CCA7E625AB10F1732A4EAC391535B9B818BE_inline(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0055:
	{
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_15 = V_2;
		bool L_16;
		L_16 = HashSet_1_ContainsAllElements_m67B4DA26B9E2AF1B2EC16C122550D88B27031AD4(__this, (RuntimeObject*)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_16;
	}

IL_005d:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_tDA4455B14F797EC22A9CAA800585B32F75F302C3 L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_m8C5905FA6921BE0C162D78DD7929FA2C7E6CEE11(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		V_1 = L_18;
		ElementCount_tDA4455B14F797EC22A9CAA800585B32F75F302C3 L_19 = V_1;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_007e;
		}
	}
	{
		ElementCount_tDA4455B14F797EC22A9CAA800585B32F75F302C3 L_22 = V_1;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Overlaps_m175371B89DE474B1BC5EDACFCD920738E9CB44A9_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	uint64_t V_1 = 0;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003b_1;
			}

IL_0027_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				uint64_t L_9;
				L_9 = InterfaceFuncInvoker0< uint64_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_8);
				V_1 = L_9;
				uint64_t L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				if (!L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				V_2 = (bool)1;
				goto IL_0051;
			}

IL_003b_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_004f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		return (bool)0;
	}

IL_0051:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_SetEquals_mCA2A77749D689E1D59FBAAD46CF4F51B84104BBB_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	ElementCount_tDA4455B14F797EC22A9CAA800585B32F75F302C3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_4 = V_0;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_mC35CB7FF1429F80F6BFFF0EB2060D7C94DB4CAFE(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_7 = __this->____count;
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = HashSet_1_get_Count_mD658CCA7E625AB10F1732A4EAC391535B9B818BE_inline(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_10 = V_0;
		bool L_11;
		L_11 = HashSet_1_ContainsAllElements_m67B4DA26B9E2AF1B2EC16C122550D88B27031AD4(__this, (RuntimeObject*)L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_11;
	}

IL_003f:
	{
		RuntimeObject* L_12 = ___0_other;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_13 = V_1;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_14 = __this->____count;
		if (L_14)
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_15);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_005c:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_tDA4455B14F797EC22A9CAA800585B32F75F302C3 L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_m8C5905FA6921BE0C162D78DD7929FA2C7E6CEE11(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		V_2 = L_18;
		ElementCount_tDA4455B14F797EC22A9CAA800585B32F75F302C3 L_19 = V_2;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_007d;
		}
	}
	{
		ElementCount_tDA4455B14F797EC22A9CAA800585B32F75F302C3 L_22 = V_2;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m461444400C7E12A594A158A9821B3A43757979D8_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_m7D65846715D8AB759355FD8326B7C82BA06FA7CD(__this, L_0, 0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m7D65846715D8AB759355FD8326B7C82BA06FA7CD_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.int32_class, &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = ___0_array;
		NullCheck(L_13);
		if ((((int32_t)L_12) > ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_14 = ___2_count;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_15 = ___0_array;
		NullCheck(L_15);
		int32_t L_16 = ___1_arrayIndex;
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_18 = __this->____slots;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___hashCode;
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_0;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_24 = __this->____slots;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		uint64_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___value;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23))), (uint64_t)L_26);
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0093:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0097:
	{
		int32_t L_29 = V_1;
		int32_t L_30 = __this->____lastIndex;
		if ((((int32_t)L_29) >= ((int32_t)L_30)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_31 = V_0;
		int32_t L_32 = ___2_count;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_m5DF933252FC387EB6C82902D130CA7F8A9F40729_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, Predicate_1_t4CC76CDB2DE98076E841155882228372ED64954D* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		Predicate_1_t4CC76CDB2DE98076E841155882228372ED64954D* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		uint64_t L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_t4CC76CDB2DE98076E841155882228372ED64954D* L_8 = ___0_match;
		uint64_t L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = Predicate_1_Invoke_mB49963DE17DE6231BC30045E671D0499C73E9889_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		uint64_t L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_mA9EE324C0F152945E0170FC6CB33584EBA708075(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m93D6B6D99DFDD89BFDD1FD1AB76A4FCB488F80CD_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m7496C4131504533235207CF9AF1657CEF2EAB287_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_5 = (SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4*)(SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Slot_tFDEB37B8831C6BCF9C5CF829B00AD86325B27113 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Slot_tFDEB37B8831C6BCF9C5CF829B00AD86325B27113)L_16);
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m667376365ACF3E4F9574B98DE073CEC5676A382E_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_5 = (SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4*)(SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m864397CDDF1F08837B55DAA97DBCA0B888D5BE1A_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_m15F41F753DF895CAF8BC8E6D557CADBDCFB6BE58(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m15F41F753DF895CAF8BC8E6D557CADBDCFB6BE58_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_1 = (SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4*)(SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_3 = __this->____slots;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m03503FE8664D0DABAC1F80E80091FC39C13AB81A_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_m667376365ACF3E4F9574B98DE073CEC5676A382E(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0010:
	{
		uint64_t L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_m936FFC0CEE87F16430B8525E691A8D1597B0797F(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		V_1 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		V_2 = 0;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_6 = __this->____slots;
		V_3 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_11 = V_3;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_16 = V_3;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		uint64_t L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		uint64_t L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_21 = V_2;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_22 = V_3;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0078:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_5 = L_27;
	}

IL_008b:
	{
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_29 = __this->____freeList;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_30 = __this->____freeList;
		V_4 = L_30;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_31 = V_3;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next;
		__this->____freeList = L_33;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_34 = __this->____lastIndex;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_35 = V_3;
		NullCheck(L_35);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_m864397CDDF1F08837B55DAA97DBCA0B888D5BE1A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_36 = __this->____slots;
		V_3 = L_36;
		int32_t L_37 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____buckets;
		NullCheck(L_38);
		V_1 = ((int32_t)(L_37%((int32_t)(((RuntimeArray*)L_38)->max_length))));
	}

IL_00d9:
	{
		int32_t L_39 = __this->____lastIndex;
		V_4 = L_39;
		int32_t L_40 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_41 = V_3;
		int32_t L_42 = V_4;
		NullCheck(L_41);
		int32_t L_43 = V_0;
		((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode = L_43;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_44 = V_3;
		int32_t L_45 = V_4;
		NullCheck(L_44);
		uint64_t L_46 = ___0_value;
		((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___value = L_46;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_47 = V_3;
		int32_t L_48 = V_4;
		NullCheck(L_47);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->____buckets;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___next = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		int32_t L_55 = V_4;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (int32_t)((int32_t)il2cpp_codegen_add(L_55, 1)));
		int32_t L_56 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_57, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_mE56A2D98D83D58FA42BE62D2AB99C087AA95AB8D_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, int32_t ___0_index, int32_t ___1_hashCode, uint64_t ___2_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		V_0 = ((int32_t)(L_0%((int32_t)(((RuntimeArray*)L_1)->max_length))));
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_2 = __this->____slots;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = ___1_hashCode;
		((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode = L_4;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_5 = __this->____slots;
		int32_t L_6 = ___0_index;
		NullCheck(L_5);
		uint64_t L_7 = ___2_value;
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value = L_7;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_8 = __this->____slots;
		int32_t L_9 = ___0_index;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___next = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		int32_t L_15 = V_0;
		int32_t L_16 = ___0_index;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (int32_t)((int32_t)il2cpp_codegen_add(L_16, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_m67B4DA26B9E2AF1B2EC16C122550D88B27031AD4_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	uint64_t V_1 = 0;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0030;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_0030:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_001d_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				uint64_t L_5;
				L_5 = InterfaceFuncInvoker0< uint64_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_4);
				V_1 = L_5;
				uint64_t L_6 = V_1;
				bool L_7;
				L_7 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				if (L_7)
				{
					goto IL_001d_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0033;
			}

IL_001d_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0031;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		return (bool)1;
	}

IL_0033:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_m91BB9570F5D110DDCCF6D9F3A45F97D8167885DC_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* ___0_other, const RuntimeMethod* method) 
{
	Enumerator_t1BD5EAC17E707DFC9C05151D77D6E6DC9166D1EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint64_t V_1 = 0;
	bool V_2 = false;
	{
		Enumerator_t1BD5EAC17E707DFC9C05151D77D6E6DC9166D1EC L_0;
		L_0 = HashSet_1_GetEnumerator_m71DB2D9A0333DB3369C6E27C428D1479764004D4(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				Enumerator_Dispose_m85002A2327014F1C4F0417EF8B60AC2E266F84BD((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 53));
				return;
			}
		});
		try
		{
			{
				goto IL_001e_1;
			}

IL_0009_1:
			{
				uint64_t L_1;
				L_1 = Enumerator_get_Current_m6D6A80C33FAD4B68D656C2356DEB1AA585AEF100_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
				V_1 = L_1;
				HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_2 = ___0_other;
				uint64_t L_3 = V_1;
				NullCheck(L_2);
				bool L_4;
				L_4 = HashSet_1_Contains_mBF5C5703CB05DC938E7B68F670E5BE303E16A957(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				if (L_4)
				{
					goto IL_001e_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0039;
			}

IL_001e_1:
			{
				bool L_5;
				L_5 = Enumerator_MoveNext_mFA51C33525EADB63DC73E468E53EB55E8ED1AA10((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
				if (L_5)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0037;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		return (bool)1;
	}

IL_0039:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_m6B2B4F137FC5B975AE9BAD39627483000BA5CDEB_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, uint64_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		uint64_t L_0 = ___0_item;
		int32_t L_1;
		L_1 = HashSet_1_InternalGetHashCode_m936FFC0CEE87F16430B8525E691A8D1597B0797F(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_1;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_2 = __this->____slots;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		int32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_0074;
	}

IL_0027:
	{
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_12 = __this->____comparer;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_13 = V_2;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		uint64_t L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___value;
		uint64_t L_16 = ___0_item;
		NullCheck(L_12);
		bool L_17;
		L_17 = InterfaceFuncInvoker2< bool, uint64_t, uint64_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_12, L_15, L_16);
		if (!L_17)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_18 = V_3;
		return L_18;
	}

IL_0052:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0063;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_0063:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_tD77BA12A8B5C999831247D5AEAA77EB7870E1CF4* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		V_3 = L_25;
	}

IL_0074:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_tDA4455B14F797EC22A9CAA800585B32F75F302C3 HashSet_1_CheckUniqueAndUnfoundElements_m8C5905FA6921BE0C162D78DD7929FA2C7E6CEE11_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ElementCount_tDA4455B14F797EC22A9CAA800585B32F75F302C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	uint64_t V_7 = 0;
	int32_t V_8 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		V_5 = 0;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_1);
		V_6 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_3 = V_6;
					if (!L_3)
					{
						goto IL_003b;
					}
				}
				{
					RuntimeObject* L_4 = V_6;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_003b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0025_1;
			}

IL_0015_1:
			{
				RuntimeObject* L_5 = V_6;
				NullCheck(L_5);
				uint64_t L_6;
				L_6 = InterfaceFuncInvoker0< uint64_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_5);
				int32_t L_7 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_7, 1));
				goto IL_003c;
			}

IL_0025_1:
			{
				RuntimeObject* L_8 = V_6;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003c;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		(&V_0)->___uniqueCount = 0;
		int32_t L_10 = V_5;
		(&V_0)->___unfoundCount = L_10;
		ElementCount_tDA4455B14F797EC22A9CAA800585B32F75F302C3 L_11 = V_0;
		return L_11;
	}

IL_004f:
	{
		int32_t L_12 = __this->____lastIndex;
		int32_t L_13;
		L_13 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_12, NULL);
		V_1 = L_13;
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)100))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_15 = V_1;
		if ((uintptr_t)((uintptr_t)L_15) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_16 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_15), 4));
		int8_t* L_17 = (int8_t*) (L_16 ? alloca(L_16) : NULL);
		memset(L_17, 0, L_16);
		int32_t L_18 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_19 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_19, (int32_t*)(L_17), L_18, NULL);
		V_2 = L_19;
		goto IL_007c;
	}

IL_006f:
	{
		int32_t L_20 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_20);
		int32_t L_22 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_23 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_23, L_21, L_22, NULL);
		V_2 = L_23;
	}

IL_007c:
	{
		V_3 = 0;
		V_4 = 0;
		RuntimeObject* L_24 = ___0_other;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_24);
		V_6 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d1:
			{
				{
					RuntimeObject* L_26 = V_6;
					if (!L_26)
					{
						goto IL_00dc;
					}
				}
				{
					RuntimeObject* L_27 = V_6;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00dc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00c6_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_28 = V_6;
				NullCheck(L_28);
				uint64_t L_29;
				L_29 = InterfaceFuncInvoker0< uint64_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_28);
				V_7 = L_29;
				uint64_t L_30 = V_7;
				int32_t L_31;
				L_31 = HashSet_1_InternalIndexOf_m6B2B4F137FC5B975AE9BAD39627483000BA5CDEB(__this, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
				V_8 = L_31;
				int32_t L_32 = V_8;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_00bd_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_33 = V_2;
				int32_t L_34 = V_8;
				NullCheck(L_33);
				bool L_35;
				L_35 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_33, L_34, NULL);
				if (L_35)
				{
					goto IL_00c6_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_36 = V_2;
				int32_t L_37 = V_8;
				NullCheck(L_36);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_36, L_37, NULL);
				int32_t L_38 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
				goto IL_00c6_1;
			}

IL_00bd_1:
			{
				int32_t L_39 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
				bool L_40 = ___1_returnIfUnfound;
				if (!L_40)
				{
					goto IL_00c6_1;
				}
			}
			{
				goto IL_00dd;
			}

IL_00c6_1:
			{
				RuntimeObject* L_41 = V_6;
				NullCheck((RuntimeObject*)L_41);
				bool L_42;
				L_42 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				if (L_42)
				{
					goto IL_008b_1;
				}
			}
			{
				goto IL_00dd;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dd:
	{
		int32_t L_43 = V_4;
		(&V_0)->___uniqueCount = L_43;
		int32_t L_44 = V_3;
		(&V_0)->___unfoundCount = L_44;
		ElementCount_tDA4455B14F797EC22A9CAA800585B32F75F302C3 L_45 = V_0;
		return L_45;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_mC35CB7FF1429F80F6BFFF0EB2060D7C94DB4CAFE_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* ___0_set1, HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* ___1_set2, const RuntimeMethod* method) 
{
	{
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_0 = ___0_set1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = HashSet_1_get_Comparer_m93D6B6D99DFDD89BFDD1FD1AB76A4FCB488F80CD_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* L_2 = ___1_set2;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = HashSet_1_get_Comparer_m93D6B6D99DFDD89BFDD1FD1AB76A4FCB488F80CD_inline(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		NullCheck((RuntimeObject*)L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)L_1, (RuntimeObject*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m936FFC0CEE87F16430B8525E691A8D1597B0797F_gshared (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, uint64_t ___0_item, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		uint64_t L_2 = ___0_item;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m5E12B490550D90B0686D55F8F4E7B0506BD07120_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m938F8F1E5CECD06A2575952EC6D253BF0053EC3D_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1;
		L_1 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mAFD9C455FC1D54D3BBD67275A15A02AD4193A4DE_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1;
		L_1 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mDEE8470968EF687DF9B40AE07DE41E0B09652532_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1;
		L_1 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4523730BBAA53ADE100ED764690FEC1639243C75_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_5 = V_0;
		bool L_6;
		L_6 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_7 = V_0;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_14 = ___0_collection;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = __this->____count;
		if ((((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_16)->max_length))/L_17))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}

IL_0074:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mA1015BCA85A81FCEC34284D87AAE4E1AB7526FDD_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		__this->____siInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_mFBAD19B5E7335AF392786729D62E2D9B04E0DDF4_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_32 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		V_1 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_8 = ___0_source;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->____buckets;
		NullCheck((RuntimeArray*)L_9);
		RuntimeObject* L_10;
		L_10 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_9, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_11 = ___0_source;
		NullCheck(L_11);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_12 = L_11->____slots;
		NullCheck((RuntimeArray*)L_12);
		RuntimeObject* L_13;
		L_13 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_12, NULL);
		__this->____slots = ((SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16))));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_14 = ___0_source;
		NullCheck(L_14);
		int32_t L_15 = L_14->____lastIndex;
		__this->____lastIndex = L_15;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_16 = ___0_source;
		NullCheck(L_16);
		int32_t L_17 = L_16->____freeList;
		__this->____freeList = L_17;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_18 = ___0_source;
		NullCheck(L_18);
		int32_t L_19 = L_18->____lastIndex;
		V_2 = L_19;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_20 = ___0_source;
		NullCheck(L_20);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_21 = L_20->____slots;
		V_3 = L_21;
		int32_t L_22 = V_0;
		int32_t L_23;
		L_23 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_24 = V_3;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		V_6 = L_26;
		int32_t L_27 = V_6;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_28 = V_4;
		int32_t L_29 = V_6;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_30 = V_3;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		il2cpp_codegen_memcpy(L_32, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		InvokerActionInvoker3< int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), __this, L_28, L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_32: *(void**)L_32));
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b4:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ba:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = V_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_37 = V_4;
		__this->____lastIndex = L_37;
	}

IL_00c7:
	{
		int32_t L_38 = V_0;
		__this->____count = L_38;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB3665C091D8A36D90CC380C1D4FA37220DC6C40D_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_comparer;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_mF6F4FF6F131B5A5671352C1A2E44A08203658B06_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_1;
		L_1 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_0: *(void**)L_0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_mCD863950F0D273BF34801FDD92CBEC230ECD5A6D_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____lastIndex;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_1 = __this->____slots;
		int32_t L_2 = __this->____lastIndex;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
	}

IL_0044:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m6D40586EE21316C2647D81169AFFF9B4C7719F74_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_16 = L_1;
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		int32_t L_2;
		L_2 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_1: *(void**)L_1));
		V_1 = L_2;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)(L_5%((int32_t)(((RuntimeArray*)L_6)->max_length))));
		int32_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_13);
		bool L_18;
		L_18 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_16: *(void**)L_16), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_17: *(void**)L_17));
		if (!L_18)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_006b:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		V_3 = L_25;
	}

IL_007c:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m88DE8E9D3C3D641EB7F4567A05CB23A65AAABB4A_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mE12E434B402CFEB49197444DE1D52A3AE4C7F6EE_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_17 = L_1;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		int32_t L_2;
		L_2 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_1: *(void**)L_1));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		V_1 = ((int32_t)(L_3%((int32_t)(((RuntimeArray*)L_4)->max_length))));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_5 = __this->____slots;
		V_4 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_10 = V_4;
		int32_t L_11 = V_5;
		NullCheck(L_10);
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_17: *(void**)L_17), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_18: *(void**)L_18));
		if (!L_19)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->____buckets;
		int32_t L_22 = V_1;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_23 = V_4;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (int32_t)((int32_t)il2cpp_codegen_add(L_25, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_26 = V_4;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_28 = V_4;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1), L_30);
	}

IL_00a7:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_31 = V_4;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0), (-1));
		bool L_33;
		L_33 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_33)
		{
			goto IL_00d1;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_34 = V_4;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)))), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	}

IL_00d1:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_36 = V_4;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = __this->____freeList;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1), L_38);
		int32_t L_39 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
		int32_t L_40 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_40, 1));
		int32_t L_41 = __this->____count;
		if (L_41)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_42 = V_5;
		__this->____freeList = L_42;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_43 = V_3;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_44 = V_4;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_45 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_45, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, method);
	}

IL_0135:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = V_5;
		V_2 = L_47;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_48 = V_4;
		int32_t L_49 = V_5;
		NullCheck(L_48);
		int32_t L_50 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		V_5 = L_50;
	}

IL_014c:
	{
		int32_t L_51 = V_5;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mA764DCA3CB14CB2CBDF742A163492FF4DA515B63_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m76BECFED2AFB768A9DE14C29899DD46F16044F4D_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetEnumerator_m75DD344FE9A073CA9564DC6A425EC36883FB32A7_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27));
	const Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB L_0 = alloca(SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	{
		memset(L_0, 0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
		Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5((Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mB077531C4148EC6AF72C7EC429E44A8636D2A8AA_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27));
	const Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB L_0 = alloca(SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	{
		memset(L_0, 0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
		Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5((Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_m63E181A7F597D9BB07C674DA40F21F4A2B755FB3_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27));
	const Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB L_0 = alloca(SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	{
		memset(L_0, 0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
		Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5((Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_m2D69A3859D85C85A103B08728E096D87DC9F5715_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 30)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_10)->max_length));
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_12 = __this->____count;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 31), (uint32_t)L_12);
		V_0 = L_13;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = V_0;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_15 = ___0_info;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		NullCheck(L_15);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_15, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_16, L_18, NULL);
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_m05AAB1A1992F82537C1125645B4D0D82676561FA_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_11 = (SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)(SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->klass->rgctx_data, 24)));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		il2cpp_codegen_memcpy(L_21, (L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_22;
		L_22 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_21: *(void**)L_21));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = V_1;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_26 = __this->____siInfo;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_26, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_27;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m73E14DB94D21272EEE1E28E4D74704B0095D8064_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_1;
		L_1 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_0: *(void**)L_0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m1C3E9C4A4AE3555B04CD0140644DC4387D7592C6_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_1, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_6, (Il2CppFullySharedGenericAny*)L_7);
				il2cpp_codegen_memcpy(V_1, L_7, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				il2cpp_codegen_memcpy(L_8, V_1, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				bool L_9;
				L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_8: *(void**)L_8));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck((RuntimeObject*)L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOf_mE61DEFCE1DB528373434DB1E0AC232016D93C34D_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_0 = NULL;
	ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_6 = V_0;
		bool L_7;
		L_7 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_8 = __this->____count;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0041:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_11 = V_0;
		bool L_12;
		L_12 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return L_12;
	}

IL_0049:
	{
		RuntimeObject* L_13 = ___0_other;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_14;
		L_14 = ((  ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, L_13, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		V_1 = L_14;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_15 = V_1;
		int32_t L_16 = L_15.___uniqueCount;
		int32_t L_17 = __this->____count;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_006d;
		}
	}
	{
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_18 = V_1;
		int32_t L_19 = L_18.___unfoundCount;
		return (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_006d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSubsetOf_m9D9C7E3C85E93DD072CA3337BAE50942BC7B34C7_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0065;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)0;
	}

IL_0028:
	{
		int32_t L_7 = __this->____count;
		if (L_7)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_8);
		return (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
	}

IL_003a:
	{
		RuntimeObject* L_10 = ___0_other;
		V_2 = ((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)IsInstClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_12 = V_2;
		bool L_13;
		L_13 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_14 = __this->____count;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_005d:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_17 = V_2;
		bool L_18;
		L_18 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return L_18;
	}

IL_0065:
	{
		RuntimeObject* L_19 = ___0_other;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_20;
		L_20 = ((  ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, L_19, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		V_1 = L_20;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_21 = V_1;
		int32_t L_22 = L_21.___uniqueCount;
		int32_t L_23 = __this->____count;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_0086;
		}
	}
	{
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_24 = V_1;
		int32_t L_25 = L_24.___unfoundCount;
		return (bool)((((int32_t)L_25) > ((int32_t)0))? 1 : 0);
	}

IL_0086:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSupersetOf_m0FBBADEC459533F60E5093A26C91FDB9510B783A_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		RuntimeObject* L_7 = ___0_other;
		V_1 = ((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)IsInstClass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_8 = V_1;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_9 = V_1;
		bool L_10;
		L_10 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		int32_t L_13 = __this->____count;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		return (bool)0;
	}

IL_004b:
	{
		RuntimeObject* L_14 = ___0_other;
		bool L_15;
		L_15 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSupersetOf_m69AD22254EF51FB475202B4710FE0DBA6F0929C2_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		RuntimeObject* L_8 = ___0_other;
		V_2 = ((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_9 = V_2;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_10 = V_2;
		bool L_11;
		L_11 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0055:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_15 = V_2;
		bool L_16;
		L_16 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(__this, (RuntimeObject*)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_16;
	}

IL_005d:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_18;
		L_18 = ((  ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		V_1 = L_18;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_19 = V_1;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_007e;
		}
	}
	{
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_22 = V_1;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Overlaps_mACE07913C77D92D54A542F3BDBE27FDB5343CE99_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_1, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003b_1;
			}

IL_0027_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_8, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_memcpy(V_1, L_9, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				il2cpp_codegen_memcpy(L_10, V_1, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				bool L_11;
				L_11 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)), il2cpp_rgctx_method(method->klass->rgctx_data, 43), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_10: *(void**)L_10));
				if (!L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				V_2 = (bool)1;
				goto IL_0051;
			}

IL_003b_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_004f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		return (bool)0;
	}

IL_0051:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_SetEquals_mEE1A697B324249DAF55E5030E26E7FF1606A2E26_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_4 = V_0;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_5 = V_0;
		bool L_6;
		L_6 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_7 = __this->____count;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_10 = V_0;
		bool L_11;
		L_11 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(__this, (RuntimeObject*)L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_11;
	}

IL_003f:
	{
		RuntimeObject* L_12 = ___0_other;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_13 = V_1;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_14 = __this->____count;
		if (L_14)
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_15);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_005c:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_18;
		L_18 = ((  ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		V_2 = L_18;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_19 = V_2;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_007d;
		}
	}
	{
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_22 = V_2;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m3B04E1071B17DF96CD5B72299EE55F25E75EBD50_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_0, 0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m3A8192100B5A0772B9962D3F1AA5CF3760ED113F_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.int32_class, &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ___0_array;
		NullCheck(L_13);
		if ((((int32_t)L_12) > ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_14 = ___2_count;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = ___0_array;
		NullCheck(L_15);
		int32_t L_16 = ___1_arrayIndex;
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_18 = __this->____slots;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_24 = __this->____slots;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		il2cpp_codegen_memcpy(L_26, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_21);
		il2cpp_codegen_memcpy((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23)))), L_26, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 19), (void**)(L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23)))), (void*)L_26);
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0093:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0097:
	{
		int32_t L_29 = V_1;
		int32_t L_30 = __this->____lastIndex;
		if ((((int32_t)L_29) >= ((int32_t)L_30)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_31 = V_0;
		int32_t L_32 = ___2_count;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_m779C784616153E67C9EB38CEF6875A7DCC2492AA_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_11 = L_7;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_2, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy(V_2, L_7, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_8 = ___0_match;
		il2cpp_codegen_memcpy(L_9, V_2, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_8);
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)), il2cpp_rgctx_method(method->klass->rgctx_data, 45), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_9: *(void**)L_9));
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		il2cpp_codegen_memcpy(L_11, V_2, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_12;
		L_12 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)), il2cpp_rgctx_method(method->klass->rgctx_data, 46), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_11: *(void**)L_11));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m3025B6666A254AEDE933EDE04AD66D456C52AD00_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m61244B342437754775955075EDF4F12C60341CE0_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_Slot_t997B45C664ACE85A6BC6136C9A4A25A71BA8FFD5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18));
	const Slot_tEC146EEEF7022C6542EBF082D658446682962BFD L_16 = alloca(SizeOf_Slot_t997B45C664ACE85A6BC6136C9A4A25A71BA8FFD5);
	int32_t V_0 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_5 = (SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)(SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		il2cpp_codegen_memcpy(L_16, (L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)), SizeOf_Slot_t997B45C664ACE85A6BC6136C9A4A25A71BA8FFD5);
		NullCheck(L_11);
		il2cpp_codegen_memcpy((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)), L_16, SizeOf_Slot_t997B45C664ACE85A6BC6136C9A4A25A71BA8FFD5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 18), (void**)(L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)), (void*)L_16);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1), ((int32_t)il2cpp_codegen_subtract(L_26, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_mB8584D1E01509492EE6C3DC75184140DBE2F053B_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_5 = (SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)(SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_mC3B321603207D03BD776F91FF7741EFF27621BD2_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_mA861522E8D0DB9628EEABF16F04BD49C6C0DC774_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_1 = (SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)(SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_3 = __this->____slots;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1), ((int32_t)il2cpp_codegen_subtract(L_17, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m58D69C8710CAB51D00282379158F183A79344DFB_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_18 = L_2;
	const Il2CppFullySharedGenericAny L_46 = L_2;
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0010:
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_value : &___0_value), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		int32_t L_3;
		L_3 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_2: *(void**)L_2));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		V_1 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		V_2 = 0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_6 = __this->____slots;
		V_3 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_11 = V_3;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_16 = V_3;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy(L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_value : &___0_value), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_18: *(void**)L_18), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_19: *(void**)L_19));
		if (!L_20)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_21 = V_2;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_22 = V_3;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0078:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		V_5 = L_27;
	}

IL_008b:
	{
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_29 = __this->____freeList;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_30 = __this->____freeList;
		V_4 = L_30;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_31 = V_3;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		__this->____freeList = L_33;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_34 = __this->____lastIndex;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_35 = V_3;
		NullCheck(L_35);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_00d9;
		}
	}
	{
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_36 = __this->____slots;
		V_3 = L_36;
		int32_t L_37 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____buckets;
		NullCheck(L_38);
		V_1 = ((int32_t)(L_37%((int32_t)(((RuntimeArray*)L_38)->max_length))));
	}

IL_00d9:
	{
		int32_t L_39 = __this->____lastIndex;
		V_4 = L_39;
		int32_t L_40 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_41 = V_3;
		int32_t L_42 = V_4;
		NullCheck(L_41);
		int32_t L_43 = V_0;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0), L_43);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_44 = V_3;
		int32_t L_45 = V_4;
		NullCheck(L_44);
		il2cpp_codegen_memcpy(L_46, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_value : &___0_value), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_write_instance_field_data(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2), L_46, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_47 = V_3;
		int32_t L_48 = V_4;
		NullCheck(L_47);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->____buckets;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1), ((int32_t)il2cpp_codegen_subtract(L_52, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		int32_t L_55 = V_4;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (int32_t)((int32_t)il2cpp_codegen_add(L_55, 1)));
		int32_t L_56 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_57, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m038B507326561F3D8BD44AD54E3FFAC497ED5C05_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, int32_t ___0_index, int32_t ___1_hashCode, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		V_0 = ((int32_t)(L_0%((int32_t)(((RuntimeArray*)L_1)->max_length))));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_2 = __this->____slots;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = ___1_hashCode;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0), L_4);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_5 = __this->____slots;
		int32_t L_6 = ___0_index;
		NullCheck(L_5);
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___2_value : &___2_value), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_write_instance_field_data(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2), L_7, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_8 = __this->____slots;
		int32_t L_9 = ___0_index;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1), ((int32_t)il2cpp_codegen_subtract(L_13, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		int32_t L_15 = V_0;
		int32_t L_16 = ___0_index;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (int32_t)((int32_t)il2cpp_codegen_add(L_16, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_mFB7B29A9FDD11C8B7C465C5D9A77008A14776F8F_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_1, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0030;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_0030:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_001d_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_4, (Il2CppFullySharedGenericAny*)L_5);
				il2cpp_codegen_memcpy(V_1, L_5, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				il2cpp_codegen_memcpy(L_6, V_1, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				bool L_7;
				L_7 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)), il2cpp_rgctx_method(method->klass->rgctx_data, 43), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_6: *(void**)L_6));
				if (L_7)
				{
					goto IL_001d_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0033;
			}

IL_001d_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0031;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		return (bool)1;
	}

IL_0033:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_mD3C0C7C7B1ACC01867AEDBE3E68CB155D11485F9_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27));
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 27)));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB L_0 = alloca(SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB V_0 = alloca(SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	memset(V_0, 0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_1, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	bool V_2 = false;
	{
		InvokerActionInvoker1< Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)), il2cpp_rgctx_method(method->klass->rgctx_data, 49), __this, (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)L_0);
		il2cpp_codegen_memcpy(V_0, L_0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				ConstrainedActionInvoker0::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 27), il2cpp_rgctx_method(method->klass->rgctx_data, 53), L_1, (void*)(Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)V_0);
				return;
			}
		});
		try
		{
			{
				goto IL_001e_1;
			}

IL_0009_1:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)), il2cpp_rgctx_method(method->klass->rgctx_data, 50), (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)V_0, (Il2CppFullySharedGenericAny*)L_2);
				il2cpp_codegen_memcpy(V_1, L_2, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_3 = ___0_other;
				il2cpp_codegen_memcpy(L_4, V_1, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				NullCheck(L_3);
				bool L_5;
				L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)), il2cpp_rgctx_method(method->klass->rgctx_data, 43), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_4: *(void**)L_4));
				if (L_5)
				{
					goto IL_001e_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0039;
			}

IL_001e_1:
			{
				bool L_6;
				L_6 = ((  bool (*) (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))((Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)V_0, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
				if (L_6)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0037;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		return (bool)1;
	}

IL_0039:
	{
		bool L_7 = V_2;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_m247DC7E2CE2AE78F3825DD44108362C2CE93F017_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_15 = L_0;
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_0: *(void**)L_0));
		V_1 = L_1;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_2 = __this->____slots;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		int32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_0074;
	}

IL_0027:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_12 = __this->____comparer;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_13 = V_2;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		il2cpp_codegen_memcpy(L_15, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_12);
		bool L_17;
		L_17 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_15: *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_16: *(void**)L_16));
		if (!L_17)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_18 = V_3;
		return L_18;
	}

IL_0052:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0063;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_0063:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		V_3 = L_25;
	}

IL_0074:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 HashSet_1_CheckUniqueAndUnfoundElements_mE015C3640B788E156F8AE69EB69B867C0EC7F006_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_29 = L_6;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_7, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_8 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		V_5 = 0;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_1);
		V_6 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_3 = V_6;
					if (!L_3)
					{
						goto IL_003b;
					}
				}
				{
					RuntimeObject* L_4 = V_6;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_003b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0025_1;
			}

IL_0015_1:
			{
				RuntimeObject* L_5 = V_6;
				NullCheck(L_5);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_5, (Il2CppFullySharedGenericAny*)L_6);
				int32_t L_7 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_7, 1));
				goto IL_003c;
			}

IL_0025_1:
			{
				RuntimeObject* L_8 = V_6;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003c;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		(&V_0)->___uniqueCount = 0;
		int32_t L_10 = V_5;
		(&V_0)->___unfoundCount = L_10;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_11 = V_0;
		return L_11;
	}

IL_004f:
	{
		int32_t L_12 = __this->____lastIndex;
		int32_t L_13;
		L_13 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_12, NULL);
		V_1 = L_13;
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)100))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_15 = V_1;
		if ((uintptr_t)((uintptr_t)L_15) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_16 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_15), 4));
		int8_t* L_17 = (int8_t*) (L_16 ? alloca(L_16) : NULL);
		memset(L_17, 0, L_16);
		int32_t L_18 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_19 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_19, (int32_t*)(L_17), L_18, NULL);
		V_2 = L_19;
		goto IL_007c;
	}

IL_006f:
	{
		int32_t L_20 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_20);
		int32_t L_22 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_23 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_23, L_21, L_22, NULL);
		V_2 = L_23;
	}

IL_007c:
	{
		V_3 = 0;
		V_4 = 0;
		RuntimeObject* L_24 = ___0_other;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_24);
		V_6 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d1:
			{
				{
					RuntimeObject* L_26 = V_6;
					if (!L_26)
					{
						goto IL_00dc;
					}
				}
				{
					RuntimeObject* L_27 = V_6;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00dc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00c6_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_28 = V_6;
				NullCheck(L_28);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_28, (Il2CppFullySharedGenericAny*)L_29);
				il2cpp_codegen_memcpy(V_7, L_29, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				il2cpp_codegen_memcpy(L_30, V_7, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				int32_t L_31;
				L_31 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)), il2cpp_rgctx_method(method->klass->rgctx_data, 54), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_30: *(void**)L_30));
				V_8 = L_31;
				int32_t L_32 = V_8;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_00bd_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_33 = V_2;
				int32_t L_34 = V_8;
				NullCheck(L_33);
				bool L_35;
				L_35 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_33, L_34, NULL);
				if (L_35)
				{
					goto IL_00c6_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_36 = V_2;
				int32_t L_37 = V_8;
				NullCheck(L_36);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_36, L_37, NULL);
				int32_t L_38 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
				goto IL_00c6_1;
			}

IL_00bd_1:
			{
				int32_t L_39 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
				bool L_40 = ___1_returnIfUnfound;
				if (!L_40)
				{
					goto IL_00c6_1;
				}
			}
			{
				goto IL_00dd;
			}

IL_00c6_1:
			{
				RuntimeObject* L_41 = V_6;
				NullCheck((RuntimeObject*)L_41);
				bool L_42;
				L_42 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				if (L_42)
				{
					goto IL_008b_1;
				}
			}
			{
				goto IL_00dd;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dd:
	{
		int32_t L_43 = V_4;
		(&V_0)->___uniqueCount = L_43;
		int32_t L_44 = V_3;
		(&V_0)->___unfoundCount = L_44;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_45 = V_0;
		return L_45;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m2BEC57F75CABAE588E047406FED797DC3F7B8B71_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_set1, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___1_set2, const RuntimeMethod* method) 
{
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = ___0_set1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 55)))(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_2 = ___1_set2;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 55)))(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		NullCheck((RuntimeObject*)L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)L_1, (RuntimeObject*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m1A1758DA258D8DE5AA075333D2B6D4DF0B75A4D6_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_3 = L_0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19), L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_2 = __this->____comparer;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_3: *(void**)L_3));
		return ((int32_t)(L_4&((int32_t)2147483647LL)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m3DDE934DB51E8AB0F1570647C5B8F2D4819A8DB1_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_t6F3DEBFB94986A90A7E3D2670A6572DD17FF2959* L_0;
		L_0 = EqualityComparer_1_get_Default_m0A536FB1E5E1BF720FE6BE32E551F8E8622F1B28_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m598AF08431A5CC1809E010A0334C8E6B6F52F5F3(__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m598AF08431A5CC1809E010A0334C8E6B6F52F5F3_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t6F3DEBFB94986A90A7E3D2670A6572DD17FF2959* L_1;
		L_1 = EqualityComparer_1_get_Default_m0A536FB1E5E1BF720FE6BE32E551F8E8622F1B28_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mF333DD74759F25224E493DA8A1F437473894337F_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_t6F3DEBFB94986A90A7E3D2670A6572DD17FF2959* L_1;
		L_1 = EqualityComparer_1_get_Default_m0A536FB1E5E1BF720FE6BE32E551F8E8622F1B28_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m99A7949C4E8EFD3A7F1299A7A27BED7682771633(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4771078FFBE487D5AE8861310E45752066DCA552_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_t6F3DEBFB94986A90A7E3D2670A6572DD17FF2959* L_1;
		L_1 = EqualityComparer_1_get_Default_m0A536FB1E5E1BF720FE6BE32E551F8E8622F1B28_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_mE60A61118BC2BF3E42100D41DF6655751811A266(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mE60A61118BC2BF3E42100D41DF6655751811A266_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m598AF08431A5CC1809E010A0334C8E6B6F52F5F3(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_m8ADC857F6053F3617A2B969EBFF1D4D67AC2AFEF(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_7 = V_0;
		HashSet_1_CopyFrom_m2B6D8C63333672B350A9A140DA6EAE9DBA52FB68(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_mBC64B6CAB4BD3FA9D334E10D31668F44D848D23A(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_m347EC2142091FA83731EC44DA59F70A46A03203A(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = __this->____count;
		if ((((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_16)->max_length))/L_17))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_mCA6A95C6B9122CFFF7340A23D62E773B65A1F244(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}

IL_0074:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m31202ACAA891367392BBE10A2E3DC298B8E772EC_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		__this->____siInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m2B6D8C63333672B350A9A140DA6EAE9DBA52FB68_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		V_1 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_8 = ___0_source;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->____buckets;
		NullCheck((RuntimeArray*)L_9);
		RuntimeObject* L_10;
		L_10 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_9, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_11 = ___0_source;
		NullCheck(L_11);
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_12 = L_11->____slots;
		NullCheck((RuntimeArray*)L_12);
		RuntimeObject* L_13;
		L_13 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_12, NULL);
		__this->____slots = ((SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16))));
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_14 = ___0_source;
		NullCheck(L_14);
		int32_t L_15 = L_14->____lastIndex;
		__this->____lastIndex = L_15;
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_16 = ___0_source;
		NullCheck(L_16);
		int32_t L_17 = L_16->____freeList;
		__this->____freeList = L_17;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_18 = ___0_source;
		NullCheck(L_18);
		int32_t L_19 = L_18->____lastIndex;
		V_2 = L_19;
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_20 = ___0_source;
		NullCheck(L_20);
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_21 = L_20->____slots;
		V_3 = L_21;
		int32_t L_22 = V_0;
		int32_t L_23;
		L_23 = HashSet_1_Initialize_mBC64B6CAB4BD3FA9D334E10D31668F44D848D23A(__this, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_24 = V_3;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode;
		V_6 = L_26;
		int32_t L_27 = V_6;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_28 = V_4;
		int32_t L_29 = V_6;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_30 = V_3;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		HashSet_1_AddValue_m005159F180824B3258A1551FE40B67F7F39A2CB8(__this, L_28, L_29, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b4:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ba:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = V_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_37 = V_4;
		__this->____lastIndex = L_37;
	}

IL_00c7:
	{
		int32_t L_38 = V_0;
		__this->____count = L_38;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m99A7949C4E8EFD3A7F1299A7A27BED7682771633_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m598AF08431A5CC1809E010A0334C8E6B6F52F5F3(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_mBC64B6CAB4BD3FA9D334E10D31668F44D848D23A(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_mA2D80245B8CC5DBC988B82E9C5909648A7DF24C9_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 ___0_item, const RuntimeMethod* method) 
{
	{
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m373A349A1E294D8B027416590783179C789F88C4(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m3A8F32A06A34F02954CA33E08FBE5454DF410761_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____lastIndex;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_1 = __this->____slots;
		int32_t L_2 = __this->____lastIndex;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
	}

IL_0044:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m3E3AB2F118CF2D099A7A8F968B00AFED24B2B6E0_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m27D313CEC3BF4546C5D1C9541AF74D2FD754115B(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_2;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)(L_5%((int32_t)(((RuntimeArray*)L_6)->max_length))));
		int32_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___hashCode;
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___value;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_17 = ___0_item;
		NullCheck(L_13);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_13, L_16, L_17);
		if (!L_18)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_006b:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		V_3 = L_25;
	}

IL_007c:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m743543562CB862C211D02C60FD83B2A0DCBE2442_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_mB508C8DC40546F8B9A4512E64251509B00A30433(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m02BC1D9B579C663AF2416CFF91D219A3A3E01C96_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m27D313CEC3BF4546C5D1C9541AF74D2FD754115B(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		V_1 = ((int32_t)(L_3%((int32_t)(((RuntimeArray*)L_4)->max_length))));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_5 = __this->____slots;
		V_4 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_10 = V_4;
		int32_t L_11 = V_5;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_18 = ___0_item;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->____buckets;
		int32_t L_22 = V_1;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_23 = V_4;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (int32_t)((int32_t)il2cpp_codegen_add(L_25, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_26 = V_4;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_28 = V_4;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___next;
		((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___next = L_30;
	}

IL_00a7:
	{
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_31 = V_4;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___hashCode = (-1);
		goto IL_00d1;
	}

IL_00d1:
	{
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_33 = V_4;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		int32_t L_35 = __this->____freeList;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next = L_35;
		int32_t L_36 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		int32_t L_38 = __this->____count;
		if (L_38)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_39 = V_5;
		__this->____freeList = L_39;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_40 = V_3;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_41 = V_4;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_42 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_42, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
	}

IL_0135:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = V_5;
		V_2 = L_44;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_45 = V_4;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___next;
		V_5 = L_47;
	}

IL_014c:
	{
		int32_t L_48 = V_5;
		if ((((int32_t)L_48) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mEC8A5DA1828F7F0DDB0E19139E124989516D42F6_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29D46BC21B4A31B8CC4156270516C0E5C52BFA01_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t81A4C0342C2282BCF88E24BCC5106FD6E3DF46EB HashSet_1_GetEnumerator_m51A2706D66E3140568437570C6C5EF582EAF104D_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t81A4C0342C2282BCF88E24BCC5106FD6E3DF46EB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA7D70092988E0B6FAAAF3FF0E0CA92BA9F1E7B27((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m07EFCDC2F135D9063DA35DCEDFEE42524023EDDB_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t81A4C0342C2282BCF88E24BCC5106FD6E3DF46EB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA7D70092988E0B6FAAAF3FF0E0CA92BA9F1E7B27((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t81A4C0342C2282BCF88E24BCC5106FD6E3DF46EB L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_m7E010C9C3840B2E90EC0C395E142B86B4A57F45E_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t81A4C0342C2282BCF88E24BCC5106FD6E3DF46EB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA7D70092988E0B6FAAAF3FF0E0CA92BA9F1E7B27((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t81A4C0342C2282BCF88E24BCC5106FD6E3DF46EB L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_m0A9E237F77D798C8E2172276405E78AF19A9C559_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 30)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_10)->max_length));
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_12 = __this->____count;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_13 = (FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D*)(FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 31), (uint32_t)L_12);
		V_0 = L_13;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_14 = V_0;
		HashSet_1_CopyTo_mC69F1200F6A21855CCEB6BE8F205E52B0F3E38AD(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_15 = ___0_info;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_16 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		NullCheck(L_15);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_15, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_16, L_18, NULL);
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_mDECF8CBF41E3CC85397631E7D6ABA56A65554DCD_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_11 = (SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E*)(SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->klass->rgctx_data, 24)));
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_m373A349A1E294D8B027416590783179C789F88C4(__this, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_25 = V_1;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_26 = __this->____siInfo;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_26, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_27;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mB3C8409DBF3257D5D3D94E339848BFB8CD96D6F5_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 ___0_item, const RuntimeMethod* method) 
{
	{
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m373A349A1E294D8B027416590783179C789F88C4(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m347EC2142091FA83731EC44DA59F70A46A03203A_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_7;
				L_7 = InterfaceFuncInvoker0< FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_6);
				V_1 = L_7;
				FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_m373A349A1E294D8B027416590783179C789F88C4(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck((RuntimeObject*)L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOf_m6F695B3D8066CC76B1CEDC5CBFFAB921401CC5A1_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* V_0 = NULL;
	ElementCount_tF8FF9CA1A6D9482EA7132FDF9EE46913548BB989 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_6 = V_0;
		bool L_7;
		L_7 = HashSet_1_AreEqualityComparersEqual_m8ADC857F6053F3617A2B969EBFF1D4D67AC2AFEF(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_8 = __this->____count;
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = HashSet_1_get_Count_mEC8A5DA1828F7F0DDB0E19139E124989516D42F6_inline(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0041:
	{
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_11 = V_0;
		bool L_12;
		L_12 = HashSet_1_IsSubsetOfHashSetWithSameEC_m2EDBB5348ACC637E3A0774DC901A7D102150FD5B(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return L_12;
	}

IL_0049:
	{
		RuntimeObject* L_13 = ___0_other;
		ElementCount_tF8FF9CA1A6D9482EA7132FDF9EE46913548BB989 L_14;
		L_14 = HashSet_1_CheckUniqueAndUnfoundElements_m4EDB438C6E16E369D0468804598604A957CEF714(__this, L_13, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		V_1 = L_14;
		ElementCount_tF8FF9CA1A6D9482EA7132FDF9EE46913548BB989 L_15 = V_1;
		int32_t L_16 = L_15.___uniqueCount;
		int32_t L_17 = __this->____count;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_006d;
		}
	}
	{
		ElementCount_tF8FF9CA1A6D9482EA7132FDF9EE46913548BB989 L_18 = V_1;
		int32_t L_19 = L_18.___unfoundCount;
		return (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_006d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSubsetOf_m09CF2E4026FD522A2D7AA67C297E812CC55C2AB0_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	ElementCount_tF8FF9CA1A6D9482EA7132FDF9EE46913548BB989 V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0065;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)0;
	}

IL_0028:
	{
		int32_t L_7 = __this->____count;
		if (L_7)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_8);
		return (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
	}

IL_003a:
	{
		RuntimeObject* L_10 = ___0_other;
		V_2 = ((HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*)IsInstClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_12 = V_2;
		bool L_13;
		L_13 = HashSet_1_AreEqualityComparersEqual_m8ADC857F6053F3617A2B969EBFF1D4D67AC2AFEF(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_14 = __this->____count;
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = HashSet_1_get_Count_mEC8A5DA1828F7F0DDB0E19139E124989516D42F6_inline(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_005d:
	{
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_17 = V_2;
		bool L_18;
		L_18 = HashSet_1_IsSubsetOfHashSetWithSameEC_m2EDBB5348ACC637E3A0774DC901A7D102150FD5B(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return L_18;
	}

IL_0065:
	{
		RuntimeObject* L_19 = ___0_other;
		ElementCount_tF8FF9CA1A6D9482EA7132FDF9EE46913548BB989 L_20;
		L_20 = HashSet_1_CheckUniqueAndUnfoundElements_m4EDB438C6E16E369D0468804598604A957CEF714(__this, L_19, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		V_1 = L_20;
		ElementCount_tF8FF9CA1A6D9482EA7132FDF9EE46913548BB989 L_21 = V_1;
		int32_t L_22 = L_21.___uniqueCount;
		int32_t L_23 = __this->____count;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_0086;
		}
	}
	{
		ElementCount_tF8FF9CA1A6D9482EA7132FDF9EE46913548BB989 L_24 = V_1;
		int32_t L_25 = L_24.___unfoundCount;
		return (bool)((((int32_t)L_25) > ((int32_t)0))? 1 : 0);
	}

IL_0086:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSupersetOf_mED737ED4C589E4A60390A532F3BBCB7FDED60C89_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		RuntimeObject* L_7 = ___0_other;
		V_1 = ((HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*)IsInstClass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_8 = V_1;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_9 = V_1;
		bool L_10;
		L_10 = HashSet_1_AreEqualityComparersEqual_m8ADC857F6053F3617A2B969EBFF1D4D67AC2AFEF(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = HashSet_1_get_Count_mEC8A5DA1828F7F0DDB0E19139E124989516D42F6_inline(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		int32_t L_13 = __this->____count;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		return (bool)0;
	}

IL_004b:
	{
		RuntimeObject* L_14 = ___0_other;
		bool L_15;
		L_15 = HashSet_1_ContainsAllElements_m1210454DD4DF0C59D32DFCB27C30FD10B9DACF0E(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSupersetOf_mD3EFC070FFE2541C1F9A98E3EE80920221675E95_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	ElementCount_tF8FF9CA1A6D9482EA7132FDF9EE46913548BB989 V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		RuntimeObject* L_8 = ___0_other;
		V_2 = ((HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_9 = V_2;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_10 = V_2;
		bool L_11;
		L_11 = HashSet_1_AreEqualityComparersEqual_m8ADC857F6053F3617A2B969EBFF1D4D67AC2AFEF(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = HashSet_1_get_Count_mEC8A5DA1828F7F0DDB0E19139E124989516D42F6_inline(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0055:
	{
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_15 = V_2;
		bool L_16;
		L_16 = HashSet_1_ContainsAllElements_m1210454DD4DF0C59D32DFCB27C30FD10B9DACF0E(__this, (RuntimeObject*)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_16;
	}

IL_005d:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_tF8FF9CA1A6D9482EA7132FDF9EE46913548BB989 L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_m4EDB438C6E16E369D0468804598604A957CEF714(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		V_1 = L_18;
		ElementCount_tF8FF9CA1A6D9482EA7132FDF9EE46913548BB989 L_19 = V_1;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_007e;
		}
	}
	{
		ElementCount_tF8FF9CA1A6D9482EA7132FDF9EE46913548BB989 L_22 = V_1;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Overlaps_m0CDC4DA3A33A72E449AD370555CE3A856B7E8B42_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003b_1;
			}

IL_0027_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_9;
				L_9 = InterfaceFuncInvoker0< FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_8);
				V_1 = L_9;
				FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Contains_m3E3AB2F118CF2D099A7A8F968B00AFED24B2B6E0(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				if (!L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				V_2 = (bool)1;
				goto IL_0051;
			}

IL_003b_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_004f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		return (bool)0;
	}

IL_0051:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_SetEquals_m727EC55F46CDB5224E59F6329830870268776C34_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	ElementCount_tF8FF9CA1A6D9482EA7132FDF9EE46913548BB989 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_4 = V_0;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_m8ADC857F6053F3617A2B969EBFF1D4D67AC2AFEF(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_7 = __this->____count;
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = HashSet_1_get_Count_mEC8A5DA1828F7F0DDB0E19139E124989516D42F6_inline(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_10 = V_0;
		bool L_11;
		L_11 = HashSet_1_ContainsAllElements_m1210454DD4DF0C59D32DFCB27C30FD10B9DACF0E(__this, (RuntimeObject*)L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_11;
	}

IL_003f:
	{
		RuntimeObject* L_12 = ___0_other;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_13 = V_1;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_14 = __this->____count;
		if (L_14)
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_15);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_005c:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_tF8FF9CA1A6D9482EA7132FDF9EE46913548BB989 L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_m4EDB438C6E16E369D0468804598604A957CEF714(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		V_2 = L_18;
		ElementCount_tF8FF9CA1A6D9482EA7132FDF9EE46913548BB989 L_19 = V_2;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_007d;
		}
	}
	{
		ElementCount_tF8FF9CA1A6D9482EA7132FDF9EE46913548BB989 L_22 = V_2;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mC69F1200F6A21855CCEB6BE8F205E52B0F3E38AD_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* ___0_array, const RuntimeMethod* method) 
{
	{
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_mB508C8DC40546F8B9A4512E64251509B00A30433(__this, L_0, 0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mB508C8DC40546F8B9A4512E64251509B00A30433_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.int32_class, &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_13 = ___0_array;
		NullCheck(L_13);
		if ((((int32_t)L_12) > ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_14 = ___2_count;
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_15 = ___0_array;
		NullCheck(L_15);
		int32_t L_16 = ___1_arrayIndex;
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_18 = __this->____slots;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___hashCode;
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		FilterUnionU5BU5D_t8778FBF9BC7FE3230BCB228346D0C62BC9A0A94D* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_0;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_24 = __this->____slots;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___value;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23))), (FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03)L_26);
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0093:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0097:
	{
		int32_t L_29 = V_1;
		int32_t L_30 = __this->____lastIndex;
		if ((((int32_t)L_29) >= ((int32_t)L_30)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_31 = V_0;
		int32_t L_32 = ___2_count;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_m93F3E7D12B96C704BC73B65E8942A2997BA11130_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, Predicate_1_t513B0A46D99B486017C4E744E22B524233A4DE7B* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Predicate_1_t513B0A46D99B486017C4E744E22B524233A4DE7B* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_t513B0A46D99B486017C4E744E22B524233A4DE7B* L_8 = ___0_match;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = Predicate_1_Invoke_m4C2C8AA6F862B3791D07AFF2E3734563AEF972D8_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_m02BC1D9B579C663AF2416CFF91D219A3A3E01C96(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_mC0481642BF6A7996280C25DA99597179DD426608_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mCA6A95C6B9122CFFF7340A23D62E773B65A1F244_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_5 = (SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E*)(SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Slot_t6A59220AF4A6A8097A22EBAB005A9FBAD6169FB4 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Slot_t6A59220AF4A6A8097A22EBAB005A9FBAD6169FB4)L_16);
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_mBC64B6CAB4BD3FA9D334E10D31668F44D848D23A_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_5 = (SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E*)(SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m11CA54F2AF511060EAD69B1B02C1A4A0DA1150B8_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_mEBCECC1FA33BE9521202BA4E099C8C42A9E27AF2(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_mEBCECC1FA33BE9521202BA4E099C8C42A9E27AF2_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_1 = (SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E*)(SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_3 = __this->____slots;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m373A349A1E294D8B027416590783179C789F88C4_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_mBC64B6CAB4BD3FA9D334E10D31668F44D848D23A(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0010:
	{
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_m27D313CEC3BF4546C5D1C9541AF74D2FD754115B(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		V_1 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		V_2 = 0;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_6 = __this->____slots;
		V_3 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_11 = V_3;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_16 = V_3;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_21 = V_2;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_22 = V_3;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0078:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_5 = L_27;
	}

IL_008b:
	{
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_29 = __this->____freeList;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_30 = __this->____freeList;
		V_4 = L_30;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_31 = V_3;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next;
		__this->____freeList = L_33;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_34 = __this->____lastIndex;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_35 = V_3;
		NullCheck(L_35);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_m11CA54F2AF511060EAD69B1B02C1A4A0DA1150B8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_36 = __this->____slots;
		V_3 = L_36;
		int32_t L_37 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____buckets;
		NullCheck(L_38);
		V_1 = ((int32_t)(L_37%((int32_t)(((RuntimeArray*)L_38)->max_length))));
	}

IL_00d9:
	{
		int32_t L_39 = __this->____lastIndex;
		V_4 = L_39;
		int32_t L_40 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_41 = V_3;
		int32_t L_42 = V_4;
		NullCheck(L_41);
		int32_t L_43 = V_0;
		((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode = L_43;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_44 = V_3;
		int32_t L_45 = V_4;
		NullCheck(L_44);
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_46 = ___0_value;
		((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___value = L_46;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_47 = V_3;
		int32_t L_48 = V_4;
		NullCheck(L_47);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->____buckets;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___next = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		int32_t L_55 = V_4;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (int32_t)((int32_t)il2cpp_codegen_add(L_55, 1)));
		int32_t L_56 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_57, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m005159F180824B3258A1551FE40B67F7F39A2CB8_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, int32_t ___0_index, int32_t ___1_hashCode, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 ___2_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		V_0 = ((int32_t)(L_0%((int32_t)(((RuntimeArray*)L_1)->max_length))));
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_2 = __this->____slots;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = ___1_hashCode;
		((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode = L_4;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_5 = __this->____slots;
		int32_t L_6 = ___0_index;
		NullCheck(L_5);
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_7 = ___2_value;
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value = L_7;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_8 = __this->____slots;
		int32_t L_9 = ___0_index;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___next = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		int32_t L_15 = V_0;
		int32_t L_16 = ___0_index;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (int32_t)((int32_t)il2cpp_codegen_add(L_16, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_m1210454DD4DF0C59D32DFCB27C30FD10B9DACF0E_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0030;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_0030:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_001d_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_5;
				L_5 = InterfaceFuncInvoker0< FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_4);
				V_1 = L_5;
				FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_6 = V_1;
				bool L_7;
				L_7 = HashSet_1_Contains_m3E3AB2F118CF2D099A7A8F968B00AFED24B2B6E0(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				if (L_7)
				{
					goto IL_001d_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0033;
			}

IL_001d_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0031;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		return (bool)1;
	}

IL_0033:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_m2EDBB5348ACC637E3A0774DC901A7D102150FD5B_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* ___0_other, const RuntimeMethod* method) 
{
	Enumerator_t81A4C0342C2282BCF88E24BCC5106FD6E3DF46EB V_0;
	memset((&V_0), 0, sizeof(V_0));
	FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		Enumerator_t81A4C0342C2282BCF88E24BCC5106FD6E3DF46EB L_0;
		L_0 = HashSet_1_GetEnumerator_m51A2706D66E3140568437570C6C5EF582EAF104D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				Enumerator_Dispose_mC461795DF94036703C07E72C504D7A7BB79721AC((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 53));
				return;
			}
		});
		try
		{
			{
				goto IL_001e_1;
			}

IL_0009_1:
			{
				FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_1;
				L_1 = Enumerator_get_Current_mAB69385F951A3A9A3C908FF6FBEBC999A1662FCE_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
				V_1 = L_1;
				HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_2 = ___0_other;
				FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_3 = V_1;
				NullCheck(L_2);
				bool L_4;
				L_4 = HashSet_1_Contains_m3E3AB2F118CF2D099A7A8F968B00AFED24B2B6E0(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				if (L_4)
				{
					goto IL_001e_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0039;
			}

IL_001e_1:
			{
				bool L_5;
				L_5 = Enumerator_MoveNext_m3D2919C078241F1D09516B111CA0457EDDA3CF6D((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
				if (L_5)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0037;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		return (bool)1;
	}

IL_0039:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_m01B8445CB48AA750AE33D95705328A6311F2AD56_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_0 = ___0_item;
		int32_t L_1;
		L_1 = HashSet_1_InternalGetHashCode_m27D313CEC3BF4546C5D1C9541AF74D2FD754115B(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_1;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_2 = __this->____slots;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		int32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_0074;
	}

IL_0027:
	{
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_12 = __this->____comparer;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_13 = V_2;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___value;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_16 = ___0_item;
		NullCheck(L_12);
		bool L_17;
		L_17 = InterfaceFuncInvoker2< bool, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_12, L_15, L_16);
		if (!L_17)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_18 = V_3;
		return L_18;
	}

IL_0052:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0063;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_0063:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_t2B5A983D3415C14A15091AE3DA33C64CCB76081E* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		V_3 = L_25;
	}

IL_0074:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_tF8FF9CA1A6D9482EA7132FDF9EE46913548BB989 HashSet_1_CheckUniqueAndUnfoundElements_m4EDB438C6E16E369D0468804598604A957CEF714_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ElementCount_tF8FF9CA1A6D9482EA7132FDF9EE46913548BB989 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		V_5 = 0;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_1);
		V_6 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_3 = V_6;
					if (!L_3)
					{
						goto IL_003b;
					}
				}
				{
					RuntimeObject* L_4 = V_6;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_003b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0025_1;
			}

IL_0015_1:
			{
				RuntimeObject* L_5 = V_6;
				NullCheck(L_5);
				FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_6;
				L_6 = InterfaceFuncInvoker0< FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_5);
				int32_t L_7 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_7, 1));
				goto IL_003c;
			}

IL_0025_1:
			{
				RuntimeObject* L_8 = V_6;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003c;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		(&V_0)->___uniqueCount = 0;
		int32_t L_10 = V_5;
		(&V_0)->___unfoundCount = L_10;
		ElementCount_tF8FF9CA1A6D9482EA7132FDF9EE46913548BB989 L_11 = V_0;
		return L_11;
	}

IL_004f:
	{
		int32_t L_12 = __this->____lastIndex;
		int32_t L_13;
		L_13 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_12, NULL);
		V_1 = L_13;
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)100))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_15 = V_1;
		if ((uintptr_t)((uintptr_t)L_15) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_16 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_15), 4));
		int8_t* L_17 = (int8_t*) (L_16 ? alloca(L_16) : NULL);
		memset(L_17, 0, L_16);
		int32_t L_18 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_19 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_19, (int32_t*)(L_17), L_18, NULL);
		V_2 = L_19;
		goto IL_007c;
	}

IL_006f:
	{
		int32_t L_20 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_20);
		int32_t L_22 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_23 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_23, L_21, L_22, NULL);
		V_2 = L_23;
	}

IL_007c:
	{
		V_3 = 0;
		V_4 = 0;
		RuntimeObject* L_24 = ___0_other;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_24);
		V_6 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d1:
			{
				{
					RuntimeObject* L_26 = V_6;
					if (!L_26)
					{
						goto IL_00dc;
					}
				}
				{
					RuntimeObject* L_27 = V_6;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00dc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00c6_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_28 = V_6;
				NullCheck(L_28);
				FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_29;
				L_29 = InterfaceFuncInvoker0< FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_28);
				V_7 = L_29;
				FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_30 = V_7;
				int32_t L_31;
				L_31 = HashSet_1_InternalIndexOf_m01B8445CB48AA750AE33D95705328A6311F2AD56(__this, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
				V_8 = L_31;
				int32_t L_32 = V_8;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_00bd_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_33 = V_2;
				int32_t L_34 = V_8;
				NullCheck(L_33);
				bool L_35;
				L_35 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_33, L_34, NULL);
				if (L_35)
				{
					goto IL_00c6_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_36 = V_2;
				int32_t L_37 = V_8;
				NullCheck(L_36);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_36, L_37, NULL);
				int32_t L_38 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
				goto IL_00c6_1;
			}

IL_00bd_1:
			{
				int32_t L_39 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
				bool L_40 = ___1_returnIfUnfound;
				if (!L_40)
				{
					goto IL_00c6_1;
				}
			}
			{
				goto IL_00dd;
			}

IL_00c6_1:
			{
				RuntimeObject* L_41 = V_6;
				NullCheck((RuntimeObject*)L_41);
				bool L_42;
				L_42 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				if (L_42)
				{
					goto IL_008b_1;
				}
			}
			{
				goto IL_00dd;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dd:
	{
		int32_t L_43 = V_4;
		(&V_0)->___uniqueCount = L_43;
		int32_t L_44 = V_3;
		(&V_0)->___unfoundCount = L_44;
		ElementCount_tF8FF9CA1A6D9482EA7132FDF9EE46913548BB989 L_45 = V_0;
		return L_45;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m8ADC857F6053F3617A2B969EBFF1D4D67AC2AFEF_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* ___0_set1, HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* ___1_set2, const RuntimeMethod* method) 
{
	{
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_0 = ___0_set1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = HashSet_1_get_Comparer_mC0481642BF6A7996280C25DA99597179DD426608_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* L_2 = ___1_set2;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = HashSet_1_get_Comparer_mC0481642BF6A7996280C25DA99597179DD426608_inline(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		NullCheck((RuntimeObject*)L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)L_1, (RuntimeObject*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m27D313CEC3BF4546C5D1C9541AF74D2FD754115B_gshared (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 ___0_item, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_2 = ___0_item;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mC8AEA59809C10A51469A3819101C1847D1FFEDDD_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_tC9DE43D57A757552DA3E3956FF4C8ACC0825A058* L_0;
		L_0 = EqualityComparer_1_get_Default_m8E87BD6A1ADC9B9DF76194307BE572FEBF9BDD13_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_mB45B129265310BD6DA41539E016374B3465CA024(__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB45B129265310BD6DA41539E016374B3465CA024_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_tC9DE43D57A757552DA3E3956FF4C8ACC0825A058* L_1;
		L_1 = EqualityComparer_1_get_Default_m8E87BD6A1ADC9B9DF76194307BE572FEBF9BDD13_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB703DE0B73168E5C3381454613066F3C61EB663E_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_tC9DE43D57A757552DA3E3956FF4C8ACC0825A058* L_1;
		L_1 = EqualityComparer_1_get_Default_m8E87BD6A1ADC9B9DF76194307BE572FEBF9BDD13_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_mF5564AE6B06C99BF8D32D846DC80FFC620DD23AA(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mEC928F0F3F96C4E0A33E05B2B85F01A228F7A111_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_tC9DE43D57A757552DA3E3956FF4C8ACC0825A058* L_1;
		L_1 = EqualityComparer_1_get_Default_m8E87BD6A1ADC9B9DF76194307BE572FEBF9BDD13_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_mAAF8F13FABAB6DBA1F03EC4736951D20BCDD4359(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mAAF8F13FABAB6DBA1F03EC4736951D20BCDD4359_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_mB45B129265310BD6DA41539E016374B3465CA024(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_m22965DB81DE8890F8B54AB7A39F09B1ED2659862(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_7 = V_0;
		HashSet_1_CopyFrom_mC315B23D5FD9F1BA7D2D9DFAF22CFC3F027C575C(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_m8B90EBA4EEBF76EF0E529780921C0B8D2CFC2D38(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_mEFF3EDD96C69B980F30110FC1CF124F3C9B77375(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = __this->____count;
		if ((((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_16)->max_length))/L_17))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_m0DD0F2604D41195D8D974246C124B327A085F436(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}

IL_0074:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mE5C77F6DE3DBD408927899F1EE97721C85DFA3FD_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		__this->____siInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_mC315B23D5FD9F1BA7D2D9DFAF22CFC3F027C575C_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		V_1 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_8 = ___0_source;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->____buckets;
		NullCheck((RuntimeArray*)L_9);
		RuntimeObject* L_10;
		L_10 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_9, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_11 = ___0_source;
		NullCheck(L_11);
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_12 = L_11->____slots;
		NullCheck((RuntimeArray*)L_12);
		RuntimeObject* L_13;
		L_13 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_12, NULL);
		__this->____slots = ((SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16))));
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_14 = ___0_source;
		NullCheck(L_14);
		int32_t L_15 = L_14->____lastIndex;
		__this->____lastIndex = L_15;
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_16 = ___0_source;
		NullCheck(L_16);
		int32_t L_17 = L_16->____freeList;
		__this->____freeList = L_17;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_18 = ___0_source;
		NullCheck(L_18);
		int32_t L_19 = L_18->____lastIndex;
		V_2 = L_19;
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_20 = ___0_source;
		NullCheck(L_20);
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_21 = L_20->____slots;
		V_3 = L_21;
		int32_t L_22 = V_0;
		int32_t L_23;
		L_23 = HashSet_1_Initialize_m8B90EBA4EEBF76EF0E529780921C0B8D2CFC2D38(__this, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_24 = V_3;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode;
		V_6 = L_26;
		int32_t L_27 = V_6;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_28 = V_4;
		int32_t L_29 = V_6;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_30 = V_3;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		HashSet_1_AddValue_mFA5CB9658D49A0C1658D04A868595A93CFA7CB50(__this, L_28, L_29, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b4:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ba:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = V_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_37 = V_4;
		__this->____lastIndex = L_37;
	}

IL_00c7:
	{
		int32_t L_38 = V_0;
		__this->____count = L_38;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mF5564AE6B06C99BF8D32D846DC80FFC620DD23AA_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_mB45B129265310BD6DA41539E016374B3465CA024(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_m8B90EBA4EEBF76EF0E529780921C0B8D2CFC2D38(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_mDB6E7B8F6B29D6402061C3199DE920EBCFF7505B_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___0_item, const RuntimeMethod* method) 
{
	{
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m9141DD3272567A7C3649511C34EADFBB313D73A9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_mD4BCAE08F1F78F4B7E2DAC7C907B3A13A53AFB7D_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____lastIndex;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_1 = __this->____slots;
		int32_t L_2 = __this->____lastIndex;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
	}

IL_0044:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m2F39A987AC3CF51DA53BA4BCF4877ABEBB57C19A_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m66E41A3F6FE27047E8F7131D09761AACBD07149D(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_2;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)(L_5%((int32_t)(((RuntimeArray*)L_6)->max_length))));
		int32_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___hashCode;
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___value;
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_17 = ___0_item;
		NullCheck(L_13);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, Metrics_t865BF0741490865117A79705F58784742D6F02B8, Metrics_t865BF0741490865117A79705F58784742D6F02B8 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_13, L_16, L_17);
		if (!L_18)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_006b:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		V_3 = L_25;
	}

IL_007c:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m171A8BB1E317E3E1DD541A9FB3E882652AF255D4_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_m2B2516803722215CA0FE9D88F71F0851EE43B232(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m8D2DE338F16776B05DD8495A5E402B164ED0B43B_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m66E41A3F6FE27047E8F7131D09761AACBD07149D(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		V_1 = ((int32_t)(L_3%((int32_t)(((RuntimeArray*)L_4)->max_length))));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_5 = __this->____slots;
		V_4 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_10 = V_4;
		int32_t L_11 = V_5;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_18 = ___0_item;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, Metrics_t865BF0741490865117A79705F58784742D6F02B8, Metrics_t865BF0741490865117A79705F58784742D6F02B8 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->____buckets;
		int32_t L_22 = V_1;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_23 = V_4;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (int32_t)((int32_t)il2cpp_codegen_add(L_25, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_26 = V_4;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_28 = V_4;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___next;
		((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___next = L_30;
	}

IL_00a7:
	{
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_31 = V_4;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___hashCode = (-1);
		goto IL_00d1;
	}

IL_00d1:
	{
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_33 = V_4;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		int32_t L_35 = __this->____freeList;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next = L_35;
		int32_t L_36 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		int32_t L_38 = __this->____count;
		if (L_38)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_39 = V_5;
		__this->____freeList = L_39;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_40 = V_3;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_41 = V_4;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_42 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_42, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
	}

IL_0135:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = V_5;
		V_2 = L_44;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_45 = V_4;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___next;
		V_5 = L_47;
	}

IL_014c:
	{
		int32_t L_48 = V_5;
		if ((((int32_t)L_48) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m714BECF828090B2CB7E1B1EFA936B5D85DB15EC7_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mA740CAFAC8252BA07FE2E355E8D2F772D97FA222_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tAB071B3AC8721E962A36762209E67EB3FF4E27EA HashSet_1_GetEnumerator_mC19744A41AFA69C7FB5F5856EB87DD1A1694DB0C_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tAB071B3AC8721E962A36762209E67EB3FF4E27EA L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m78A568D4F3952CB3FC0DF6E36120BE7EA137C527((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2114C93D6E6A240BD4E60FF83DB07F77C1BF5765_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tAB071B3AC8721E962A36762209E67EB3FF4E27EA L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m78A568D4F3952CB3FC0DF6E36120BE7EA137C527((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_tAB071B3AC8721E962A36762209E67EB3FF4E27EA L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_mFF5135FF5BD21D60DDD96219B1349F5053F01E52_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tAB071B3AC8721E962A36762209E67EB3FF4E27EA L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m78A568D4F3952CB3FC0DF6E36120BE7EA137C527((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_tAB071B3AC8721E962A36762209E67EB3FF4E27EA L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_mDBC00D0323111B2B9A99560FA42161D39B0E1533_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 30)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_10)->max_length));
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_12 = __this->____count;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_13 = (MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6*)(MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 31), (uint32_t)L_12);
		V_0 = L_13;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_14 = V_0;
		HashSet_1_CopyTo_mDE6C9C2E386DADF328E9571B744F509C09F23391(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_15 = ___0_info;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_16 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		NullCheck(L_15);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_15, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_16, L_18, NULL);
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_m03C035D5AB931D56E67196D78CF246F5AA8B6647_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_11 = (SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9*)(SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->klass->rgctx_data, 24)));
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_m9141DD3272567A7C3649511C34EADFBB313D73A9(__this, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_25 = V_1;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_26 = __this->____siInfo;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_26, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_27;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m03B21CBDDDE17D5ABEF68C575D88CDBCBCC06570_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___0_item, const RuntimeMethod* method) 
{
	{
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m9141DD3272567A7C3649511C34EADFBB313D73A9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mEFF3EDD96C69B980F30110FC1CF124F3C9B77375_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Metrics_t865BF0741490865117A79705F58784742D6F02B8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_7;
				L_7 = InterfaceFuncInvoker0< Metrics_t865BF0741490865117A79705F58784742D6F02B8 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_6);
				V_1 = L_7;
				Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_m9141DD3272567A7C3649511C34EADFBB313D73A9(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck((RuntimeObject*)L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOf_m6B24BB35905D4409781D4DE406FDBBBB361E70E5_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* V_0 = NULL;
	ElementCount_tA9A164AD1FA506092B76B7EA298A254C8605702D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_6 = V_0;
		bool L_7;
		L_7 = HashSet_1_AreEqualityComparersEqual_m22965DB81DE8890F8B54AB7A39F09B1ED2659862(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_8 = __this->____count;
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = HashSet_1_get_Count_m714BECF828090B2CB7E1B1EFA936B5D85DB15EC7_inline(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0041:
	{
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_11 = V_0;
		bool L_12;
		L_12 = HashSet_1_IsSubsetOfHashSetWithSameEC_m6CCB8D903C658435C56D8F146D80F1EB0C5F0C6B(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return L_12;
	}

IL_0049:
	{
		RuntimeObject* L_13 = ___0_other;
		ElementCount_tA9A164AD1FA506092B76B7EA298A254C8605702D L_14;
		L_14 = HashSet_1_CheckUniqueAndUnfoundElements_m2A3082EF09C8CEE35B0BCEE39AE9F7D0628C75BE(__this, L_13, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		V_1 = L_14;
		ElementCount_tA9A164AD1FA506092B76B7EA298A254C8605702D L_15 = V_1;
		int32_t L_16 = L_15.___uniqueCount;
		int32_t L_17 = __this->____count;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_006d;
		}
	}
	{
		ElementCount_tA9A164AD1FA506092B76B7EA298A254C8605702D L_18 = V_1;
		int32_t L_19 = L_18.___unfoundCount;
		return (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_006d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSubsetOf_m56D40AD2395631D35E43F222CAB2549C07C9C716_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	ElementCount_tA9A164AD1FA506092B76B7EA298A254C8605702D V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0065;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)0;
	}

IL_0028:
	{
		int32_t L_7 = __this->____count;
		if (L_7)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_8);
		return (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
	}

IL_003a:
	{
		RuntimeObject* L_10 = ___0_other;
		V_2 = ((HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*)IsInstClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_12 = V_2;
		bool L_13;
		L_13 = HashSet_1_AreEqualityComparersEqual_m22965DB81DE8890F8B54AB7A39F09B1ED2659862(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_14 = __this->____count;
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = HashSet_1_get_Count_m714BECF828090B2CB7E1B1EFA936B5D85DB15EC7_inline(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_005d:
	{
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_17 = V_2;
		bool L_18;
		L_18 = HashSet_1_IsSubsetOfHashSetWithSameEC_m6CCB8D903C658435C56D8F146D80F1EB0C5F0C6B(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return L_18;
	}

IL_0065:
	{
		RuntimeObject* L_19 = ___0_other;
		ElementCount_tA9A164AD1FA506092B76B7EA298A254C8605702D L_20;
		L_20 = HashSet_1_CheckUniqueAndUnfoundElements_m2A3082EF09C8CEE35B0BCEE39AE9F7D0628C75BE(__this, L_19, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		V_1 = L_20;
		ElementCount_tA9A164AD1FA506092B76B7EA298A254C8605702D L_21 = V_1;
		int32_t L_22 = L_21.___uniqueCount;
		int32_t L_23 = __this->____count;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_0086;
		}
	}
	{
		ElementCount_tA9A164AD1FA506092B76B7EA298A254C8605702D L_24 = V_1;
		int32_t L_25 = L_24.___unfoundCount;
		return (bool)((((int32_t)L_25) > ((int32_t)0))? 1 : 0);
	}

IL_0086:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSupersetOf_m4DFFD875B6CF2C262C6FE264ACEF84CE30B7B795_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		RuntimeObject* L_7 = ___0_other;
		V_1 = ((HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*)IsInstClass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_8 = V_1;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_9 = V_1;
		bool L_10;
		L_10 = HashSet_1_AreEqualityComparersEqual_m22965DB81DE8890F8B54AB7A39F09B1ED2659862(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = HashSet_1_get_Count_m714BECF828090B2CB7E1B1EFA936B5D85DB15EC7_inline(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		int32_t L_13 = __this->____count;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		return (bool)0;
	}

IL_004b:
	{
		RuntimeObject* L_14 = ___0_other;
		bool L_15;
		L_15 = HashSet_1_ContainsAllElements_m6FCD03575D85B47E3AF8FB2E404FC4F63756BECF(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSupersetOf_mEF025E20686CBC723410F98515F80707BE929104_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	ElementCount_tA9A164AD1FA506092B76B7EA298A254C8605702D V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		RuntimeObject* L_8 = ___0_other;
		V_2 = ((HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_9 = V_2;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_10 = V_2;
		bool L_11;
		L_11 = HashSet_1_AreEqualityComparersEqual_m22965DB81DE8890F8B54AB7A39F09B1ED2659862(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = HashSet_1_get_Count_m714BECF828090B2CB7E1B1EFA936B5D85DB15EC7_inline(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0055:
	{
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_15 = V_2;
		bool L_16;
		L_16 = HashSet_1_ContainsAllElements_m6FCD03575D85B47E3AF8FB2E404FC4F63756BECF(__this, (RuntimeObject*)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_16;
	}

IL_005d:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_tA9A164AD1FA506092B76B7EA298A254C8605702D L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_m2A3082EF09C8CEE35B0BCEE39AE9F7D0628C75BE(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		V_1 = L_18;
		ElementCount_tA9A164AD1FA506092B76B7EA298A254C8605702D L_19 = V_1;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_007e;
		}
	}
	{
		ElementCount_tA9A164AD1FA506092B76B7EA298A254C8605702D L_22 = V_1;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Overlaps_m773681BE81B3E4F1AC3A3114DB2D05A1B6BAC2F5_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Metrics_t865BF0741490865117A79705F58784742D6F02B8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003b_1;
			}

IL_0027_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_9;
				L_9 = InterfaceFuncInvoker0< Metrics_t865BF0741490865117A79705F58784742D6F02B8 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_8);
				V_1 = L_9;
				Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Contains_m2F39A987AC3CF51DA53BA4BCF4877ABEBB57C19A(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				if (!L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				V_2 = (bool)1;
				goto IL_0051;
			}

IL_003b_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_004f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		return (bool)0;
	}

IL_0051:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_SetEquals_m7ADDCB5B71B55414B28C1FBA8BA0B07434354667_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	ElementCount_tA9A164AD1FA506092B76B7EA298A254C8605702D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_4 = V_0;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_m22965DB81DE8890F8B54AB7A39F09B1ED2659862(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_7 = __this->____count;
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = HashSet_1_get_Count_m714BECF828090B2CB7E1B1EFA936B5D85DB15EC7_inline(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_10 = V_0;
		bool L_11;
		L_11 = HashSet_1_ContainsAllElements_m6FCD03575D85B47E3AF8FB2E404FC4F63756BECF(__this, (RuntimeObject*)L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_11;
	}

IL_003f:
	{
		RuntimeObject* L_12 = ___0_other;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_13 = V_1;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_14 = __this->____count;
		if (L_14)
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_15);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_005c:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_tA9A164AD1FA506092B76B7EA298A254C8605702D L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_m2A3082EF09C8CEE35B0BCEE39AE9F7D0628C75BE(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		V_2 = L_18;
		ElementCount_tA9A164AD1FA506092B76B7EA298A254C8605702D L_19 = V_2;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_007d;
		}
	}
	{
		ElementCount_tA9A164AD1FA506092B76B7EA298A254C8605702D L_22 = V_2;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mDE6C9C2E386DADF328E9571B744F509C09F23391_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* ___0_array, const RuntimeMethod* method) 
{
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_m2B2516803722215CA0FE9D88F71F0851EE43B232(__this, L_0, 0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m2B2516803722215CA0FE9D88F71F0851EE43B232_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.int32_class, &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_13 = ___0_array;
		NullCheck(L_13);
		if ((((int32_t)L_12) > ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_14 = ___2_count;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_15 = ___0_array;
		NullCheck(L_15);
		int32_t L_16 = ___1_arrayIndex;
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_18 = __this->____slots;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___hashCode;
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_0;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_24 = __this->____slots;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___value;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23))), (Metrics_t865BF0741490865117A79705F58784742D6F02B8)L_26);
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0093:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0097:
	{
		int32_t L_29 = V_1;
		int32_t L_30 = __this->____lastIndex;
		if ((((int32_t)L_29) >= ((int32_t)L_30)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_31 = V_0;
		int32_t L_32 = ___2_count;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_mFA19F95B42C0E536BBFEDCD8720D313344DD5208_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, Predicate_1_tE249FBB519623C34D35DD00865B140E8845D754C* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Metrics_t865BF0741490865117A79705F58784742D6F02B8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Predicate_1_tE249FBB519623C34D35DD00865B140E8845D754C* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_tE249FBB519623C34D35DD00865B140E8845D754C* L_8 = ___0_match;
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = Predicate_1_Invoke_m34D179CDEC67872AAC21AE158477A4B6ECD3BDCF_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_m8D2DE338F16776B05DD8495A5E402B164ED0B43B(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m522BD6FC519C7693999126415B22F6E6F673E1D3_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m0DD0F2604D41195D8D974246C124B327A085F436_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_5 = (SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9*)(SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Slot_t6F1C6BBE6A38D4B944B955D516A5643E78FB0426 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Slot_t6F1C6BBE6A38D4B944B955D516A5643E78FB0426)L_16);
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m8B90EBA4EEBF76EF0E529780921C0B8D2CFC2D38_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_5 = (SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9*)(SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m0E8ABE6F04F95EA83E09AD2F3F2BD40D8E39DF54_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_m0F74F4132618A0A041FE602280B96F9C7910491A(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m0F74F4132618A0A041FE602280B96F9C7910491A_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_1 = (SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9*)(SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_3 = __this->____slots;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m9141DD3272567A7C3649511C34EADFBB313D73A9_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_m8B90EBA4EEBF76EF0E529780921C0B8D2CFC2D38(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0010:
	{
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_m66E41A3F6FE27047E8F7131D09761AACBD07149D(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		V_1 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		V_2 = 0;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_6 = __this->____slots;
		V_3 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_11 = V_3;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_16 = V_3;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, Metrics_t865BF0741490865117A79705F58784742D6F02B8, Metrics_t865BF0741490865117A79705F58784742D6F02B8 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_21 = V_2;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_22 = V_3;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0078:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_5 = L_27;
	}

IL_008b:
	{
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_29 = __this->____freeList;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_30 = __this->____freeList;
		V_4 = L_30;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_31 = V_3;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next;
		__this->____freeList = L_33;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_34 = __this->____lastIndex;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_35 = V_3;
		NullCheck(L_35);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_m0E8ABE6F04F95EA83E09AD2F3F2BD40D8E39DF54(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_36 = __this->____slots;
		V_3 = L_36;
		int32_t L_37 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____buckets;
		NullCheck(L_38);
		V_1 = ((int32_t)(L_37%((int32_t)(((RuntimeArray*)L_38)->max_length))));
	}

IL_00d9:
	{
		int32_t L_39 = __this->____lastIndex;
		V_4 = L_39;
		int32_t L_40 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_41 = V_3;
		int32_t L_42 = V_4;
		NullCheck(L_41);
		int32_t L_43 = V_0;
		((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode = L_43;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_44 = V_3;
		int32_t L_45 = V_4;
		NullCheck(L_44);
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_46 = ___0_value;
		((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___value = L_46;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_47 = V_3;
		int32_t L_48 = V_4;
		NullCheck(L_47);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->____buckets;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___next = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		int32_t L_55 = V_4;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (int32_t)((int32_t)il2cpp_codegen_add(L_55, 1)));
		int32_t L_56 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_57, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_mFA5CB9658D49A0C1658D04A868595A93CFA7CB50_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, int32_t ___0_index, int32_t ___1_hashCode, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___2_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		V_0 = ((int32_t)(L_0%((int32_t)(((RuntimeArray*)L_1)->max_length))));
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_2 = __this->____slots;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = ___1_hashCode;
		((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode = L_4;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_5 = __this->____slots;
		int32_t L_6 = ___0_index;
		NullCheck(L_5);
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_7 = ___2_value;
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value = L_7;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_8 = __this->____slots;
		int32_t L_9 = ___0_index;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___next = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		int32_t L_15 = V_0;
		int32_t L_16 = ___0_index;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (int32_t)((int32_t)il2cpp_codegen_add(L_16, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_m6FCD03575D85B47E3AF8FB2E404FC4F63756BECF_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Metrics_t865BF0741490865117A79705F58784742D6F02B8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0030;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_0030:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_001d_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_5;
				L_5 = InterfaceFuncInvoker0< Metrics_t865BF0741490865117A79705F58784742D6F02B8 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_4);
				V_1 = L_5;
				Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_6 = V_1;
				bool L_7;
				L_7 = HashSet_1_Contains_m2F39A987AC3CF51DA53BA4BCF4877ABEBB57C19A(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				if (L_7)
				{
					goto IL_001d_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0033;
			}

IL_001d_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0031;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		return (bool)1;
	}

IL_0033:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_m6CCB8D903C658435C56D8F146D80F1EB0C5F0C6B_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* ___0_other, const RuntimeMethod* method) 
{
	Enumerator_tAB071B3AC8721E962A36762209E67EB3FF4E27EA V_0;
	memset((&V_0), 0, sizeof(V_0));
	Metrics_t865BF0741490865117A79705F58784742D6F02B8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		Enumerator_tAB071B3AC8721E962A36762209E67EB3FF4E27EA L_0;
		L_0 = HashSet_1_GetEnumerator_mC19744A41AFA69C7FB5F5856EB87DD1A1694DB0C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				Enumerator_Dispose_m670B6FF684596056E72482252D8991240E6D4DB6((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 53));
				return;
			}
		});
		try
		{
			{
				goto IL_001e_1;
			}

IL_0009_1:
			{
				Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_1;
				L_1 = Enumerator_get_Current_m2464C605A96D0EA0E0EF843839AABCABF3963E9C_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
				V_1 = L_1;
				HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_2 = ___0_other;
				Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_3 = V_1;
				NullCheck(L_2);
				bool L_4;
				L_4 = HashSet_1_Contains_m2F39A987AC3CF51DA53BA4BCF4877ABEBB57C19A(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				if (L_4)
				{
					goto IL_001e_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0039;
			}

IL_001e_1:
			{
				bool L_5;
				L_5 = Enumerator_MoveNext_m6F7B936B2B88AA7D9E7B57C276FE08B5646E3CCA((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
				if (L_5)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0037;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		return (bool)1;
	}

IL_0039:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_mF18C35EF863BAE1EB37A73F97247C730A0D8C9CF_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_0 = ___0_item;
		int32_t L_1;
		L_1 = HashSet_1_InternalGetHashCode_m66E41A3F6FE27047E8F7131D09761AACBD07149D(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_1;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_2 = __this->____slots;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		int32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_0074;
	}

IL_0027:
	{
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_12 = __this->____comparer;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_13 = V_2;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___value;
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_16 = ___0_item;
		NullCheck(L_12);
		bool L_17;
		L_17 = InterfaceFuncInvoker2< bool, Metrics_t865BF0741490865117A79705F58784742D6F02B8, Metrics_t865BF0741490865117A79705F58784742D6F02B8 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_12, L_15, L_16);
		if (!L_17)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_18 = V_3;
		return L_18;
	}

IL_0052:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0063;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_0063:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_tD4310C9CE5A5C4768D8534B60473149A7CBBD0E9* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		V_3 = L_25;
	}

IL_0074:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_tA9A164AD1FA506092B76B7EA298A254C8605702D HashSet_1_CheckUniqueAndUnfoundElements_m2A3082EF09C8CEE35B0BCEE39AE9F7D0628C75BE_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ElementCount_tA9A164AD1FA506092B76B7EA298A254C8605702D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	Metrics_t865BF0741490865117A79705F58784742D6F02B8 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		V_5 = 0;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_1);
		V_6 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_3 = V_6;
					if (!L_3)
					{
						goto IL_003b;
					}
				}
				{
					RuntimeObject* L_4 = V_6;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_003b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0025_1;
			}

IL_0015_1:
			{
				RuntimeObject* L_5 = V_6;
				NullCheck(L_5);
				Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_6;
				L_6 = InterfaceFuncInvoker0< Metrics_t865BF0741490865117A79705F58784742D6F02B8 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_5);
				int32_t L_7 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_7, 1));
				goto IL_003c;
			}

IL_0025_1:
			{
				RuntimeObject* L_8 = V_6;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003c;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		(&V_0)->___uniqueCount = 0;
		int32_t L_10 = V_5;
		(&V_0)->___unfoundCount = L_10;
		ElementCount_tA9A164AD1FA506092B76B7EA298A254C8605702D L_11 = V_0;
		return L_11;
	}

IL_004f:
	{
		int32_t L_12 = __this->____lastIndex;
		int32_t L_13;
		L_13 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_12, NULL);
		V_1 = L_13;
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)100))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_15 = V_1;
		if ((uintptr_t)((uintptr_t)L_15) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_16 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_15), 4));
		int8_t* L_17 = (int8_t*) (L_16 ? alloca(L_16) : NULL);
		memset(L_17, 0, L_16);
		int32_t L_18 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_19 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_19, (int32_t*)(L_17), L_18, NULL);
		V_2 = L_19;
		goto IL_007c;
	}

IL_006f:
	{
		int32_t L_20 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_20);
		int32_t L_22 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_23 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_23, L_21, L_22, NULL);
		V_2 = L_23;
	}

IL_007c:
	{
		V_3 = 0;
		V_4 = 0;
		RuntimeObject* L_24 = ___0_other;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_24);
		V_6 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d1:
			{
				{
					RuntimeObject* L_26 = V_6;
					if (!L_26)
					{
						goto IL_00dc;
					}
				}
				{
					RuntimeObject* L_27 = V_6;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00dc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00c6_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_28 = V_6;
				NullCheck(L_28);
				Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_29;
				L_29 = InterfaceFuncInvoker0< Metrics_t865BF0741490865117A79705F58784742D6F02B8 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_28);
				V_7 = L_29;
				Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_30 = V_7;
				int32_t L_31;
				L_31 = HashSet_1_InternalIndexOf_mF18C35EF863BAE1EB37A73F97247C730A0D8C9CF(__this, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
				V_8 = L_31;
				int32_t L_32 = V_8;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_00bd_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_33 = V_2;
				int32_t L_34 = V_8;
				NullCheck(L_33);
				bool L_35;
				L_35 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_33, L_34, NULL);
				if (L_35)
				{
					goto IL_00c6_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_36 = V_2;
				int32_t L_37 = V_8;
				NullCheck(L_36);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_36, L_37, NULL);
				int32_t L_38 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
				goto IL_00c6_1;
			}

IL_00bd_1:
			{
				int32_t L_39 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
				bool L_40 = ___1_returnIfUnfound;
				if (!L_40)
				{
					goto IL_00c6_1;
				}
			}
			{
				goto IL_00dd;
			}

IL_00c6_1:
			{
				RuntimeObject* L_41 = V_6;
				NullCheck((RuntimeObject*)L_41);
				bool L_42;
				L_42 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				if (L_42)
				{
					goto IL_008b_1;
				}
			}
			{
				goto IL_00dd;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dd:
	{
		int32_t L_43 = V_4;
		(&V_0)->___uniqueCount = L_43;
		int32_t L_44 = V_3;
		(&V_0)->___unfoundCount = L_44;
		ElementCount_tA9A164AD1FA506092B76B7EA298A254C8605702D L_45 = V_0;
		return L_45;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m22965DB81DE8890F8B54AB7A39F09B1ED2659862_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* ___0_set1, HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* ___1_set2, const RuntimeMethod* method) 
{
	{
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_0 = ___0_set1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = HashSet_1_get_Comparer_m522BD6FC519C7693999126415B22F6E6F673E1D3_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* L_2 = ___1_set2;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = HashSet_1_get_Comparer_m522BD6FC519C7693999126415B22F6E6F673E1D3_inline(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		NullCheck((RuntimeObject*)L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)L_1, (RuntimeObject*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m66E41A3F6FE27047E8F7131D09761AACBD07149D_gshared (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___0_item, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_2 = ___0_item;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, Metrics_t865BF0741490865117A79705F58784742D6F02B8 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m5389409F15C014B476134588B4DEB16282862873_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_t11104B05F3482CB1AA975DE7DAC61EC198B51522* L_0;
		L_0 = EqualityComparer_1_get_Default_mB1E8D63ECB288A5051B41BC6216319CF2FE182FF_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m069C0B34CDBB45125CB6B79FCF4C4513BCB49BBD(__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m069C0B34CDBB45125CB6B79FCF4C4513BCB49BBD_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t11104B05F3482CB1AA975DE7DAC61EC198B51522* L_1;
		L_1 = EqualityComparer_1_get_Default_mB1E8D63ECB288A5051B41BC6216319CF2FE182FF_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mDEF4956E720535DD9C391B1193ECFEEAD5B11DE9_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_t11104B05F3482CB1AA975DE7DAC61EC198B51522* L_1;
		L_1 = EqualityComparer_1_get_Default_mB1E8D63ECB288A5051B41BC6216319CF2FE182FF_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m0B16EC2189F27CE02EE52343F4E6B869EF15A4EA(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4076C553C8A461F83FB3587DBB63D85878A45D8E_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_t11104B05F3482CB1AA975DE7DAC61EC198B51522* L_1;
		L_1 = EqualityComparer_1_get_Default_mB1E8D63ECB288A5051B41BC6216319CF2FE182FF_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m3B58EAF2B8D48759F480ABB444A8CD02F6CC493E(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m3B58EAF2B8D48759F480ABB444A8CD02F6CC493E_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m069C0B34CDBB45125CB6B79FCF4C4513BCB49BBD(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_mFF32E7845F3695A6E5AC0E25D369C192A510E354(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_7 = V_0;
		HashSet_1_CopyFrom_m4AF04CF0BDBB2335496B84F57FC5C4CE42DAD263(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_m2938C4FCC0840559B7A40513143AF5A2567B23E1(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_m2DE794FB8336B711CBBCE36F67B1150C1B2BBC6D(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = __this->____count;
		if ((((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_16)->max_length))/L_17))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_mBED751EA912F67D8E8A17B07F5C162FD6A43DBA7(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}

IL_0074:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m73148A7B98858D04E9DCCE8D78943FB1AF4705D4_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		__this->____siInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m4AF04CF0BDBB2335496B84F57FC5C4CE42DAD263_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		V_1 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_8 = ___0_source;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->____buckets;
		NullCheck((RuntimeArray*)L_9);
		RuntimeObject* L_10;
		L_10 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_9, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_11 = ___0_source;
		NullCheck(L_11);
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_12 = L_11->____slots;
		NullCheck((RuntimeArray*)L_12);
		RuntimeObject* L_13;
		L_13 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_12, NULL);
		__this->____slots = ((SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16))));
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_14 = ___0_source;
		NullCheck(L_14);
		int32_t L_15 = L_14->____lastIndex;
		__this->____lastIndex = L_15;
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_16 = ___0_source;
		NullCheck(L_16);
		int32_t L_17 = L_16->____freeList;
		__this->____freeList = L_17;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_18 = ___0_source;
		NullCheck(L_18);
		int32_t L_19 = L_18->____lastIndex;
		V_2 = L_19;
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_20 = ___0_source;
		NullCheck(L_20);
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_21 = L_20->____slots;
		V_3 = L_21;
		int32_t L_22 = V_0;
		int32_t L_23;
		L_23 = HashSet_1_Initialize_m2938C4FCC0840559B7A40513143AF5A2567B23E1(__this, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_24 = V_3;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode;
		V_6 = L_26;
		int32_t L_27 = V_6;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_28 = V_4;
		int32_t L_29 = V_6;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_30 = V_3;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		HashSet_1_AddValue_m066C06738E8E1CEFCEE9CC950C3F9C680CE836C1(__this, L_28, L_29, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b4:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ba:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = V_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_37 = V_4;
		__this->____lastIndex = L_37;
	}

IL_00c7:
	{
		int32_t L_38 = V_0;
		__this->____count = L_38;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m0B16EC2189F27CE02EE52343F4E6B869EF15A4EA_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m069C0B34CDBB45125CB6B79FCF4C4513BCB49BBD(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_m2938C4FCC0840559B7A40513143AF5A2567B23E1(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_mB076F096C9105EC45B599371A054A6734CEBB678_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___0_item, const RuntimeMethod* method) 
{
	{
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m211CCA5D17B1C1A85E135220763606B298B196CF(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m26C08EA5D700166E2C04361289BA33FC503346B0_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____lastIndex;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_1 = __this->____slots;
		int32_t L_2 = __this->____lastIndex;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
	}

IL_0044:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m079EDBBDA1CEB62E947D15414A7256A8BC2BFEE2_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m9184434F3E85315939198280272EEDD45B74AE59(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_2;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)(L_5%((int32_t)(((RuntimeArray*)L_6)->max_length))));
		int32_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___hashCode;
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___value;
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_17 = ___0_item;
		NullCheck(L_13);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_13, L_16, L_17);
		if (!L_18)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_006b:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		V_3 = L_25;
	}

IL_007c:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m7A40EF5BB975E0BF3179BDDCBF314DBCB0D76AB8_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_m9B1AE2FA071C53DF6CB578A4B5EBBD91405C8898(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mB535953E594955344F789BF24354D92DEBF0BDB2_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m9184434F3E85315939198280272EEDD45B74AE59(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		V_1 = ((int32_t)(L_3%((int32_t)(((RuntimeArray*)L_4)->max_length))));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_5 = __this->____slots;
		V_4 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_10 = V_4;
		int32_t L_11 = V_5;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_18 = ___0_item;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->____buckets;
		int32_t L_22 = V_1;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_23 = V_4;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (int32_t)((int32_t)il2cpp_codegen_add(L_25, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_26 = V_4;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_28 = V_4;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___next;
		((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___next = L_30;
	}

IL_00a7:
	{
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_31 = V_4;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___hashCode = (-1);
		goto IL_00d1;
	}

IL_00d1:
	{
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_33 = V_4;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		int32_t L_35 = __this->____freeList;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next = L_35;
		int32_t L_36 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		int32_t L_38 = __this->____count;
		if (L_38)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_39 = V_5;
		__this->____freeList = L_39;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_40 = V_3;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_41 = V_4;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_42 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_42, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
	}

IL_0135:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = V_5;
		V_2 = L_44;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_45 = V_4;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___next;
		V_5 = L_47;
	}

IL_014c:
	{
		int32_t L_48 = V_5;
		if ((((int32_t)L_48) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m0C0115BEC5E4F2D1E13106D739526E6364F49E79_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mB00635152C41DA7187816B84C1EC4BD5736AD89A_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD84FE35CA246D7E202555F238743C91C623A6E27 HashSet_1_GetEnumerator_m90FDD6C1E365F6CACB9353358FBA34FDC6484AC7_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD84FE35CA246D7E202555F238743C91C623A6E27 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mAADC6BB8FB3CA53169E46ED56FECE40867AFE7D3((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9C906BE5A589C4789D381BFF11371C55F59E4224_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD84FE35CA246D7E202555F238743C91C623A6E27 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mAADC6BB8FB3CA53169E46ED56FECE40867AFE7D3((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_tD84FE35CA246D7E202555F238743C91C623A6E27 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_mCE93BD51376057054ADBD655CEF9E8C224169D11_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD84FE35CA246D7E202555F238743C91C623A6E27 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mAADC6BB8FB3CA53169E46ED56FECE40867AFE7D3((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_tD84FE35CA246D7E202555F238743C91C623A6E27 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_m69F4BACCBCF6D0BDDFEDC5F7B2EECFA4FFC5078A_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 30)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_10)->max_length));
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_12 = __this->____count;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_13 = (UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4*)(UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 31), (uint32_t)L_12);
		V_0 = L_13;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_14 = V_0;
		HashSet_1_CopyTo_mAA58EA4DEDD1AB3BBD1165845800F1CB1E97C939(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_15 = ___0_info;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_16 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		NullCheck(L_15);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_15, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_16, L_18, NULL);
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_m4F26C2FC553077FCE28A82D392E266A217E4EBC8_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_11 = (SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5*)(SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->klass->rgctx_data, 24)));
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_m211CCA5D17B1C1A85E135220763606B298B196CF(__this, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_25 = V_1;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_26 = __this->____siInfo;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_26, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_27;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m77F1226BDF56F479C9308834E8C344D9FE90AED0_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___0_item, const RuntimeMethod* method) 
{
	{
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m211CCA5D17B1C1A85E135220763606B298B196CF(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m2DE794FB8336B711CBBCE36F67B1150C1B2BBC6D_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_7;
				L_7 = InterfaceFuncInvoker0< UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_6);
				V_1 = L_7;
				UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_m211CCA5D17B1C1A85E135220763606B298B196CF(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck((RuntimeObject*)L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOf_m9B5D89F70ECD5E6B8655EC5FF89AF0F723D58DD7_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* V_0 = NULL;
	ElementCount_t5517AF99E2810C026E560770FAA1D5EF6EBDEC8A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_6 = V_0;
		bool L_7;
		L_7 = HashSet_1_AreEqualityComparersEqual_mFF32E7845F3695A6E5AC0E25D369C192A510E354(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_8 = __this->____count;
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = HashSet_1_get_Count_m0C0115BEC5E4F2D1E13106D739526E6364F49E79_inline(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0041:
	{
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_11 = V_0;
		bool L_12;
		L_12 = HashSet_1_IsSubsetOfHashSetWithSameEC_m669987743D4C2034287483D632C33E3298DC9981(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return L_12;
	}

IL_0049:
	{
		RuntimeObject* L_13 = ___0_other;
		ElementCount_t5517AF99E2810C026E560770FAA1D5EF6EBDEC8A L_14;
		L_14 = HashSet_1_CheckUniqueAndUnfoundElements_mA1A67A311A7DBE5CCA76DF8898E5E447FB49B676(__this, L_13, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		V_1 = L_14;
		ElementCount_t5517AF99E2810C026E560770FAA1D5EF6EBDEC8A L_15 = V_1;
		int32_t L_16 = L_15.___uniqueCount;
		int32_t L_17 = __this->____count;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_006d;
		}
	}
	{
		ElementCount_t5517AF99E2810C026E560770FAA1D5EF6EBDEC8A L_18 = V_1;
		int32_t L_19 = L_18.___unfoundCount;
		return (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_006d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSubsetOf_m5925357111209F0B0C4CDAD26D86BABC6EAA9044_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	ElementCount_t5517AF99E2810C026E560770FAA1D5EF6EBDEC8A V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0065;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)0;
	}

IL_0028:
	{
		int32_t L_7 = __this->____count;
		if (L_7)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_8);
		return (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
	}

IL_003a:
	{
		RuntimeObject* L_10 = ___0_other;
		V_2 = ((HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*)IsInstClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_12 = V_2;
		bool L_13;
		L_13 = HashSet_1_AreEqualityComparersEqual_mFF32E7845F3695A6E5AC0E25D369C192A510E354(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_14 = __this->____count;
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = HashSet_1_get_Count_m0C0115BEC5E4F2D1E13106D739526E6364F49E79_inline(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_005d:
	{
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_17 = V_2;
		bool L_18;
		L_18 = HashSet_1_IsSubsetOfHashSetWithSameEC_m669987743D4C2034287483D632C33E3298DC9981(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return L_18;
	}

IL_0065:
	{
		RuntimeObject* L_19 = ___0_other;
		ElementCount_t5517AF99E2810C026E560770FAA1D5EF6EBDEC8A L_20;
		L_20 = HashSet_1_CheckUniqueAndUnfoundElements_mA1A67A311A7DBE5CCA76DF8898E5E447FB49B676(__this, L_19, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		V_1 = L_20;
		ElementCount_t5517AF99E2810C026E560770FAA1D5EF6EBDEC8A L_21 = V_1;
		int32_t L_22 = L_21.___uniqueCount;
		int32_t L_23 = __this->____count;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_0086;
		}
	}
	{
		ElementCount_t5517AF99E2810C026E560770FAA1D5EF6EBDEC8A L_24 = V_1;
		int32_t L_25 = L_24.___unfoundCount;
		return (bool)((((int32_t)L_25) > ((int32_t)0))? 1 : 0);
	}

IL_0086:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSupersetOf_mAE807DCDC9935BDD227B9CC9328D8F62477DB32D_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		RuntimeObject* L_7 = ___0_other;
		V_1 = ((HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*)IsInstClass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_8 = V_1;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_9 = V_1;
		bool L_10;
		L_10 = HashSet_1_AreEqualityComparersEqual_mFF32E7845F3695A6E5AC0E25D369C192A510E354(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = HashSet_1_get_Count_m0C0115BEC5E4F2D1E13106D739526E6364F49E79_inline(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		int32_t L_13 = __this->____count;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		return (bool)0;
	}

IL_004b:
	{
		RuntimeObject* L_14 = ___0_other;
		bool L_15;
		L_15 = HashSet_1_ContainsAllElements_m0C3D0DFE46EF0F6A3E73A94F6818F2103B7E6318(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSupersetOf_mE16996A92E46F70CE6588E71792C501D2A3586FB_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	ElementCount_t5517AF99E2810C026E560770FAA1D5EF6EBDEC8A V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		RuntimeObject* L_8 = ___0_other;
		V_2 = ((HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_9 = V_2;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_10 = V_2;
		bool L_11;
		L_11 = HashSet_1_AreEqualityComparersEqual_mFF32E7845F3695A6E5AC0E25D369C192A510E354(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = HashSet_1_get_Count_m0C0115BEC5E4F2D1E13106D739526E6364F49E79_inline(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0055:
	{
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_15 = V_2;
		bool L_16;
		L_16 = HashSet_1_ContainsAllElements_m0C3D0DFE46EF0F6A3E73A94F6818F2103B7E6318(__this, (RuntimeObject*)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_16;
	}

IL_005d:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_t5517AF99E2810C026E560770FAA1D5EF6EBDEC8A L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_mA1A67A311A7DBE5CCA76DF8898E5E447FB49B676(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		V_1 = L_18;
		ElementCount_t5517AF99E2810C026E560770FAA1D5EF6EBDEC8A L_19 = V_1;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_007e;
		}
	}
	{
		ElementCount_t5517AF99E2810C026E560770FAA1D5EF6EBDEC8A L_22 = V_1;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Overlaps_m0992F75DE7443AF923893241A86AD63F8EDA7AFA_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003b_1;
			}

IL_0027_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_9;
				L_9 = InterfaceFuncInvoker0< UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_8);
				V_1 = L_9;
				UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Contains_m079EDBBDA1CEB62E947D15414A7256A8BC2BFEE2(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				if (!L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				V_2 = (bool)1;
				goto IL_0051;
			}

IL_003b_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_004f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		return (bool)0;
	}

IL_0051:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_SetEquals_m40C2E46C39FA17128C42B8E53B81D6D2C4420477_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	ElementCount_t5517AF99E2810C026E560770FAA1D5EF6EBDEC8A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_4 = V_0;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_mFF32E7845F3695A6E5AC0E25D369C192A510E354(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_7 = __this->____count;
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = HashSet_1_get_Count_m0C0115BEC5E4F2D1E13106D739526E6364F49E79_inline(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_10 = V_0;
		bool L_11;
		L_11 = HashSet_1_ContainsAllElements_m0C3D0DFE46EF0F6A3E73A94F6818F2103B7E6318(__this, (RuntimeObject*)L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_11;
	}

IL_003f:
	{
		RuntimeObject* L_12 = ___0_other;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_13 = V_1;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_14 = __this->____count;
		if (L_14)
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_15);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_005c:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_t5517AF99E2810C026E560770FAA1D5EF6EBDEC8A L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_mA1A67A311A7DBE5CCA76DF8898E5E447FB49B676(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		V_2 = L_18;
		ElementCount_t5517AF99E2810C026E560770FAA1D5EF6EBDEC8A L_19 = V_2;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_007d;
		}
	}
	{
		ElementCount_t5517AF99E2810C026E560770FAA1D5EF6EBDEC8A L_22 = V_2;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mAA58EA4DEDD1AB3BBD1165845800F1CB1E97C939_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* ___0_array, const RuntimeMethod* method) 
{
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_m9B1AE2FA071C53DF6CB578A4B5EBBD91405C8898(__this, L_0, 0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m9B1AE2FA071C53DF6CB578A4B5EBBD91405C8898_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.int32_class, &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_13 = ___0_array;
		NullCheck(L_13);
		if ((((int32_t)L_12) > ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_14 = ___2_count;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_15 = ___0_array;
		NullCheck(L_15);
		int32_t L_16 = ___1_arrayIndex;
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_18 = __this->____slots;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___hashCode;
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_0;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_24 = __this->____slots;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___value;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23))), (UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71)L_26);
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0093:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0097:
	{
		int32_t L_29 = V_1;
		int32_t L_30 = __this->____lastIndex;
		if ((((int32_t)L_29) >= ((int32_t)L_30)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_31 = V_0;
		int32_t L_32 = ___2_count;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_mAE6D32F04AD39CC46014044892EF64EFB641E717_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, Predicate_1_t8CA75FACE87C87E7388C22655BF559D93FB9EEBD* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Predicate_1_t8CA75FACE87C87E7388C22655BF559D93FB9EEBD* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_t8CA75FACE87C87E7388C22655BF559D93FB9EEBD* L_8 = ___0_match;
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = Predicate_1_Invoke_mE0D4F79F74E39C7D1A4DBC9DF4DED3D58F5FD3CE_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_mB535953E594955344F789BF24354D92DEBF0BDB2(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m3449149DB3E6A92AAD8982994744C8EED038F356_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mBED751EA912F67D8E8A17B07F5C162FD6A43DBA7_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_5 = (SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5*)(SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Slot_tC00CA6060A9B3737F319F2268F388D4E077DA026 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Slot_tC00CA6060A9B3737F319F2268F388D4E077DA026)L_16);
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m2938C4FCC0840559B7A40513143AF5A2567B23E1_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_5 = (SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5*)(SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_mE881EF643DDE8E51E7303319AF0FE7BD307F6523_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_m9961E14B4021212F6C7F72F00B927A275CBAB1CF(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m9961E14B4021212F6C7F72F00B927A275CBAB1CF_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_1 = (SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5*)(SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_3 = __this->____slots;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m211CCA5D17B1C1A85E135220763606B298B196CF_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_m2938C4FCC0840559B7A40513143AF5A2567B23E1(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0010:
	{
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_m9184434F3E85315939198280272EEDD45B74AE59(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		V_1 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		V_2 = 0;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_6 = __this->____slots;
		V_3 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_11 = V_3;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_16 = V_3;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_21 = V_2;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_22 = V_3;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0078:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_5 = L_27;
	}

IL_008b:
	{
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_29 = __this->____freeList;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_30 = __this->____freeList;
		V_4 = L_30;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_31 = V_3;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next;
		__this->____freeList = L_33;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_34 = __this->____lastIndex;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_35 = V_3;
		NullCheck(L_35);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_mE881EF643DDE8E51E7303319AF0FE7BD307F6523(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_36 = __this->____slots;
		V_3 = L_36;
		int32_t L_37 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____buckets;
		NullCheck(L_38);
		V_1 = ((int32_t)(L_37%((int32_t)(((RuntimeArray*)L_38)->max_length))));
	}

IL_00d9:
	{
		int32_t L_39 = __this->____lastIndex;
		V_4 = L_39;
		int32_t L_40 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_41 = V_3;
		int32_t L_42 = V_4;
		NullCheck(L_41);
		int32_t L_43 = V_0;
		((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode = L_43;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_44 = V_3;
		int32_t L_45 = V_4;
		NullCheck(L_44);
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_46 = ___0_value;
		((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___value = L_46;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_47 = V_3;
		int32_t L_48 = V_4;
		NullCheck(L_47);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->____buckets;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___next = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		int32_t L_55 = V_4;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (int32_t)((int32_t)il2cpp_codegen_add(L_55, 1)));
		int32_t L_56 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_57, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m066C06738E8E1CEFCEE9CC950C3F9C680CE836C1_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, int32_t ___0_index, int32_t ___1_hashCode, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___2_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		V_0 = ((int32_t)(L_0%((int32_t)(((RuntimeArray*)L_1)->max_length))));
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_2 = __this->____slots;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = ___1_hashCode;
		((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode = L_4;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_5 = __this->____slots;
		int32_t L_6 = ___0_index;
		NullCheck(L_5);
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_7 = ___2_value;
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value = L_7;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_8 = __this->____slots;
		int32_t L_9 = ___0_index;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___next = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		int32_t L_15 = V_0;
		int32_t L_16 = ___0_index;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (int32_t)((int32_t)il2cpp_codegen_add(L_16, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_m0C3D0DFE46EF0F6A3E73A94F6818F2103B7E6318_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0030;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_0030:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_001d_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_5;
				L_5 = InterfaceFuncInvoker0< UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_4);
				V_1 = L_5;
				UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_6 = V_1;
				bool L_7;
				L_7 = HashSet_1_Contains_m079EDBBDA1CEB62E947D15414A7256A8BC2BFEE2(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				if (L_7)
				{
					goto IL_001d_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0033;
			}

IL_001d_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0031;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		return (bool)1;
	}

IL_0033:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_m669987743D4C2034287483D632C33E3298DC9981_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* ___0_other, const RuntimeMethod* method) 
{
	Enumerator_tD84FE35CA246D7E202555F238743C91C623A6E27 V_0;
	memset((&V_0), 0, sizeof(V_0));
	UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		Enumerator_tD84FE35CA246D7E202555F238743C91C623A6E27 L_0;
		L_0 = HashSet_1_GetEnumerator_m90FDD6C1E365F6CACB9353358FBA34FDC6484AC7(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				Enumerator_Dispose_m652C45E49AEEABF2AEAF174087AF3E4BE2B3D3A7((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 53));
				return;
			}
		});
		try
		{
			{
				goto IL_001e_1;
			}

IL_0009_1:
			{
				UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_1;
				L_1 = Enumerator_get_Current_mA761DEEB4A8B6A32AB66987F3F64F2EA136585B8_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
				V_1 = L_1;
				HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_2 = ___0_other;
				UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_3 = V_1;
				NullCheck(L_2);
				bool L_4;
				L_4 = HashSet_1_Contains_m079EDBBDA1CEB62E947D15414A7256A8BC2BFEE2(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				if (L_4)
				{
					goto IL_001e_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0039;
			}

IL_001e_1:
			{
				bool L_5;
				L_5 = Enumerator_MoveNext_mD37C907E621BAEF71C6DF4E0195C59F9F91E4DB6((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
				if (L_5)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0037;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		return (bool)1;
	}

IL_0039:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_mF6D6FE3C80FF63AA9C5C0910C0EDB5ADBCEDDB9F_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_0 = ___0_item;
		int32_t L_1;
		L_1 = HashSet_1_InternalGetHashCode_m9184434F3E85315939198280272EEDD45B74AE59(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_1;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_2 = __this->____slots;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		int32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_0074;
	}

IL_0027:
	{
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_12 = __this->____comparer;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_13 = V_2;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___value;
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_16 = ___0_item;
		NullCheck(L_12);
		bool L_17;
		L_17 = InterfaceFuncInvoker2< bool, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_12, L_15, L_16);
		if (!L_17)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_18 = V_3;
		return L_18;
	}

IL_0052:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0063;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_0063:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_tA84E66D9D4814DFD8240B3838F9976FF9AC139C5* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		V_3 = L_25;
	}

IL_0074:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_t5517AF99E2810C026E560770FAA1D5EF6EBDEC8A HashSet_1_CheckUniqueAndUnfoundElements_mA1A67A311A7DBE5CCA76DF8898E5E447FB49B676_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ElementCount_t5517AF99E2810C026E560770FAA1D5EF6EBDEC8A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		V_5 = 0;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_1);
		V_6 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_3 = V_6;
					if (!L_3)
					{
						goto IL_003b;
					}
				}
				{
					RuntimeObject* L_4 = V_6;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_003b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0025_1;
			}

IL_0015_1:
			{
				RuntimeObject* L_5 = V_6;
				NullCheck(L_5);
				UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_6;
				L_6 = InterfaceFuncInvoker0< UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_5);
				int32_t L_7 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_7, 1));
				goto IL_003c;
			}

IL_0025_1:
			{
				RuntimeObject* L_8 = V_6;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003c;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		(&V_0)->___uniqueCount = 0;
		int32_t L_10 = V_5;
		(&V_0)->___unfoundCount = L_10;
		ElementCount_t5517AF99E2810C026E560770FAA1D5EF6EBDEC8A L_11 = V_0;
		return L_11;
	}

IL_004f:
	{
		int32_t L_12 = __this->____lastIndex;
		int32_t L_13;
		L_13 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_12, NULL);
		V_1 = L_13;
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)100))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_15 = V_1;
		if ((uintptr_t)((uintptr_t)L_15) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_16 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_15), 4));
		int8_t* L_17 = (int8_t*) (L_16 ? alloca(L_16) : NULL);
		memset(L_17, 0, L_16);
		int32_t L_18 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_19 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_19, (int32_t*)(L_17), L_18, NULL);
		V_2 = L_19;
		goto IL_007c;
	}

IL_006f:
	{
		int32_t L_20 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_20);
		int32_t L_22 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_23 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_23, L_21, L_22, NULL);
		V_2 = L_23;
	}

IL_007c:
	{
		V_3 = 0;
		V_4 = 0;
		RuntimeObject* L_24 = ___0_other;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_24);
		V_6 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d1:
			{
				{
					RuntimeObject* L_26 = V_6;
					if (!L_26)
					{
						goto IL_00dc;
					}
				}
				{
					RuntimeObject* L_27 = V_6;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00dc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00c6_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_28 = V_6;
				NullCheck(L_28);
				UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_29;
				L_29 = InterfaceFuncInvoker0< UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_28);
				V_7 = L_29;
				UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_30 = V_7;
				int32_t L_31;
				L_31 = HashSet_1_InternalIndexOf_mF6D6FE3C80FF63AA9C5C0910C0EDB5ADBCEDDB9F(__this, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
				V_8 = L_31;
				int32_t L_32 = V_8;
				if ((((int32_t)L_32) < ((int32_t)0)))
				{
					goto IL_00bd_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_33 = V_2;
				int32_t L_34 = V_8;
				NullCheck(L_33);
				bool L_35;
				L_35 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_33, L_34, NULL);
				if (L_35)
				{
					goto IL_00c6_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_36 = V_2;
				int32_t L_37 = V_8;
				NullCheck(L_36);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_36, L_37, NULL);
				int32_t L_38 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
				goto IL_00c6_1;
			}

IL_00bd_1:
			{
				int32_t L_39 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
				bool L_40 = ___1_returnIfUnfound;
				if (!L_40)
				{
					goto IL_00c6_1;
				}
			}
			{
				goto IL_00dd;
			}

IL_00c6_1:
			{
				RuntimeObject* L_41 = V_6;
				NullCheck((RuntimeObject*)L_41);
				bool L_42;
				L_42 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				if (L_42)
				{
					goto IL_008b_1;
				}
			}
			{
				goto IL_00dd;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dd:
	{
		int32_t L_43 = V_4;
		(&V_0)->___uniqueCount = L_43;
		int32_t L_44 = V_3;
		(&V_0)->___unfoundCount = L_44;
		ElementCount_t5517AF99E2810C026E560770FAA1D5EF6EBDEC8A L_45 = V_0;
		return L_45;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_mFF32E7845F3695A6E5AC0E25D369C192A510E354_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* ___0_set1, HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* ___1_set2, const RuntimeMethod* method) 
{
	{
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_0 = ___0_set1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = HashSet_1_get_Comparer_m3449149DB3E6A92AAD8982994744C8EED038F356_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* L_2 = ___1_set2;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = HashSet_1_get_Comparer_m3449149DB3E6A92AAD8982994744C8EED038F356_inline(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 55));
		NullCheck((RuntimeObject*)L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)L_1, (RuntimeObject*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m9184434F3E85315939198280272EEDD45B74AE59_gshared (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___0_item, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_2 = ___0_item;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_0 = NULL;
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0 = ((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_mD54AFBFBD525862DC2F8F47071DA5B37CFDEA948_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_0 = NULL;
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_0 = ((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m12BF15F6E4EEE48D66C845BC74A11EF6673C933B_gshared_inline (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mCE33776BF08B37A05CCD7FBB46335E5FB6B215DC_gshared_inline (Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* __this, uint32_t ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Enumerator_get_Current_m1816042CBEEA33AC96FF5A81924F31E40F1FFF6B_gshared_inline (Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_mC799EE656F81D83581F8A413304661B6F103BC6E_gshared_inline (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* EqualityComparer_1_get_Default_m65C88AD76FA11C898FE9437B5D46E13B12F10B77_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* V_0 = NULL;
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_0 = ((EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m73A019C274DF1E66D30647A3F24ADC27784B7114(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mD658CCA7E625AB10F1732A4EAC391535B9B818BE_gshared_inline (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mB49963DE17DE6231BC30045E671D0499C73E9889_gshared_inline (Predicate_1_t4CC76CDB2DE98076E841155882228372ED64954D* __this, uint64_t ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Enumerator_get_Current_m6D6A80C33FAD4B68D656C2356DEB1AA585AEF100_gshared_inline (Enumerator_t1BD5EAC17E707DFC9C05151D77D6E6DC9166D1EC* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m93D6B6D99DFDD89BFDD1FD1AB76A4FCB488F80CD_gshared_inline (HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t6F3DEBFB94986A90A7E3D2670A6572DD17FF2959* EqualityComparer_1_get_Default_m0A536FB1E5E1BF720FE6BE32E551F8E8622F1B28_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t6F3DEBFB94986A90A7E3D2670A6572DD17FF2959* V_0 = NULL;
	{
		EqualityComparer_1_t6F3DEBFB94986A90A7E3D2670A6572DD17FF2959* L_0 = ((EqualityComparer_1_t6F3DEBFB94986A90A7E3D2670A6572DD17FF2959_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t6F3DEBFB94986A90A7E3D2670A6572DD17FF2959* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t6F3DEBFB94986A90A7E3D2670A6572DD17FF2959* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m1754A1571412B1E1DA573098E2EE9502C982B3A8(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t6F3DEBFB94986A90A7E3D2670A6572DD17FF2959* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t6F3DEBFB94986A90A7E3D2670A6572DD17FF2959_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t6F3DEBFB94986A90A7E3D2670A6572DD17FF2959_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t6F3DEBFB94986A90A7E3D2670A6572DD17FF2959* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mEC8A5DA1828F7F0DDB0E19139E124989516D42F6_gshared_inline (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m4C2C8AA6F862B3791D07AFF2E3734563AEF972D8_gshared_inline (Predicate_1_t513B0A46D99B486017C4E744E22B524233A4DE7B* __this, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 Enumerator_get_Current_mAB69385F951A3A9A3C908FF6FBEBC999A1662FCE_gshared_inline (Enumerator_t81A4C0342C2282BCF88E24BCC5106FD6E3DF46EB* __this, const RuntimeMethod* method) 
{
	{
		FilterUnion_t85E549621A2CC33D9102C62C6D82B0865FF80D03 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_mC0481642BF6A7996280C25DA99597179DD426608_gshared_inline (HashSet_1_t5F852BC44815507046BFC63F4D8AE6A207435055* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tC9DE43D57A757552DA3E3956FF4C8ACC0825A058* EqualityComparer_1_get_Default_m8E87BD6A1ADC9B9DF76194307BE572FEBF9BDD13_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tC9DE43D57A757552DA3E3956FF4C8ACC0825A058* V_0 = NULL;
	{
		EqualityComparer_1_tC9DE43D57A757552DA3E3956FF4C8ACC0825A058* L_0 = ((EqualityComparer_1_tC9DE43D57A757552DA3E3956FF4C8ACC0825A058_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tC9DE43D57A757552DA3E3956FF4C8ACC0825A058* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tC9DE43D57A757552DA3E3956FF4C8ACC0825A058* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mE72567F384B2A5E3EB60BACEE64A80F9A1E6D855(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tC9DE43D57A757552DA3E3956FF4C8ACC0825A058* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tC9DE43D57A757552DA3E3956FF4C8ACC0825A058_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tC9DE43D57A757552DA3E3956FF4C8ACC0825A058_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tC9DE43D57A757552DA3E3956FF4C8ACC0825A058* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m714BECF828090B2CB7E1B1EFA936B5D85DB15EC7_gshared_inline (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m34D179CDEC67872AAC21AE158477A4B6ECD3BDCF_gshared_inline (Predicate_1_tE249FBB519623C34D35DD00865B140E8845D754C* __this, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Metrics_t865BF0741490865117A79705F58784742D6F02B8, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Metrics_t865BF0741490865117A79705F58784742D6F02B8 Enumerator_get_Current_m2464C605A96D0EA0E0EF843839AABCABF3963E9C_gshared_inline (Enumerator_tAB071B3AC8721E962A36762209E67EB3FF4E27EA* __this, const RuntimeMethod* method) 
{
	{
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m522BD6FC519C7693999126415B22F6E6F673E1D3_gshared_inline (HashSet_1_t28959D3F2572BA0CB7D4B4C041BE794C548FA893* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t11104B05F3482CB1AA975DE7DAC61EC198B51522* EqualityComparer_1_get_Default_mB1E8D63ECB288A5051B41BC6216319CF2FE182FF_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t11104B05F3482CB1AA975DE7DAC61EC198B51522* V_0 = NULL;
	{
		EqualityComparer_1_t11104B05F3482CB1AA975DE7DAC61EC198B51522* L_0 = ((EqualityComparer_1_t11104B05F3482CB1AA975DE7DAC61EC198B51522_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t11104B05F3482CB1AA975DE7DAC61EC198B51522* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t11104B05F3482CB1AA975DE7DAC61EC198B51522* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m2D4B19CD0D04FE1FB330A45CC78495CE44365011(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t11104B05F3482CB1AA975DE7DAC61EC198B51522* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t11104B05F3482CB1AA975DE7DAC61EC198B51522_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t11104B05F3482CB1AA975DE7DAC61EC198B51522_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t11104B05F3482CB1AA975DE7DAC61EC198B51522* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m0C0115BEC5E4F2D1E13106D739526E6364F49E79_gshared_inline (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mE0D4F79F74E39C7D1A4DBC9DF4DED3D58F5FD3CE_gshared_inline (Predicate_1_t8CA75FACE87C87E7388C22655BF559D93FB9EEBD* __this, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 Enumerator_get_Current_mA761DEEB4A8B6A32AB66987F3F64F2EA136585B8_gshared_inline (Enumerator_tD84FE35CA246D7E202555F238743C91C623A6E27* __this, const RuntimeMethod* method) 
{
	{
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m3449149DB3E6A92AAD8982994744C8EED038F356_gshared_inline (HashSet_1_t093E331D22C15441843A7C2487693FFC9DE366FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}

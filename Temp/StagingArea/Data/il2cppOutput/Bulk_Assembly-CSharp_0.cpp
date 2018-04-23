#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Chat
struct Chat_t201152076;
// System.String
struct String_t;
// ChatManager
struct ChatManager_t1133435335;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Transform
struct Transform_t3600365921;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Object
struct Object_t631007953;
// System.Action
struct Action_t1264377477;
// ChatManager/<SelectAnswer>c__AnonStorey0
struct U3CSelectAnswerU3Ec__AnonStorey0_t2974158987;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.UI.Text
struct Text_t1901882714;
// PhoneManager
struct PhoneManager_t4261849291;
// Countdown
struct Countdown_t1688036482;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// Countdown/<CountdownCoroutine>c__Iterator0
struct U3CCountdownCoroutineU3Ec__Iterator0_t2126704546;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;
// FightController
struct FightController_t483979242;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// Fighters
struct Fighters_t808620833;
// Fighter
struct Fighter_t1911001889;
// Poser
struct Poser_t2653926573;
// ProgressBar
struct ProgressBar_t1074804577;
// FighterInput.ComputerInput
struct ComputerInput_t965195488;
// FighterInput.Move[]
struct MoveU5BU5D_t3649037098;
// FighterInput.PlayerInput
struct PlayerInput_t2164750815;
// FighterRandomizer
struct FighterRandomizer_t1174288154;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// StanceSprites
struct StanceSprites_t3454544338;
// MatchPanel
struct MatchPanel_t3284707298;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.UI.Image
struct Image_t2670269651;
// MatchPanel/<AnimateInCoroutine>c__Iterator0
struct U3CAnimateInCoroutineU3Ec__Iterator0_t4015329932;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t1314943911;
// Names
struct Names_t4168630408;
// Poser/<ReturnTo>c__Iterator0
struct U3CReturnToU3Ec__Iterator0_t3746314890;
// Poser/<ReturnToCurrentStance>c__Iterator1
struct U3CReturnToCurrentStanceU3Ec__Iterator1_t3534570174;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522;
// SwipeManager
struct SwipeManager_t2369055733;
// SwipeManager/<AnimateTopPanel>c__AnonStorey1
struct U3CAnimateTopPanelU3Ec__AnonStorey1_t76819064;
// SwipeManager/<AnimateTopPanelCoroutine>c__Iterator0
struct U3CAnimateTopPanelCoroutineU3Ec__Iterator0_t2170529847;
// TutorialController
struct TutorialController_t1549000916;
// Utils
struct Utils_t1444179947;
// Utils/<DelayCoroutine>c__Iterator0
struct U3CDelayCoroutineU3Ec__Iterator0_t2088042557;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// Chat/Topic[]
struct TopicU5BU5D_t212031005;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2581906349;
// StanceSprites[]
struct StanceSpritesU5BU5D_t3743853223;
// UnityEngine.Color[]
struct ColorU5BU5D_t941916413;
// FighterInput.Move[][]
struct MoveU5BU5DU5BU5D_t1831594223;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;

extern RuntimeClass* Chat_t201152076_il2cpp_TypeInfo_var;
extern RuntimeClass* Nullable_1_t3261996342_il2cpp_TypeInfo_var;
extern RuntimeClass* Topic_t1539434260_il2cpp_TypeInfo_var;
extern const uint32_t Chat_RandomTopic_m514629220_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t Chat_RandomReaction_m3164130441_MetadataUsageId;
extern const uint32_t Chat_RandomEnding_m1508430914_MetadataUsageId;
extern RuntimeClass* TopicU5BU5D_t212031005_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3833672506;
extern String_t* _stringLiteral2628605007;
extern String_t* _stringLiteral1071783343;
extern String_t* _stringLiteral76953107;
extern String_t* _stringLiteral2922325545;
extern String_t* _stringLiteral1619252321;
extern String_t* _stringLiteral2209468938;
extern String_t* _stringLiteral4283636805;
extern String_t* _stringLiteral887131750;
extern String_t* _stringLiteral2286723752;
extern String_t* _stringLiteral1196101003;
extern String_t* _stringLiteral2919767492;
extern String_t* _stringLiteral3166921570;
extern String_t* _stringLiteral1972310141;
extern String_t* _stringLiteral1372198265;
extern String_t* _stringLiteral90544535;
extern String_t* _stringLiteral1348730277;
extern String_t* _stringLiteral827848858;
extern String_t* _stringLiteral2183063145;
extern String_t* _stringLiteral4212515392;
extern String_t* _stringLiteral3242078396;
extern String_t* _stringLiteral1545177200;
extern String_t* _stringLiteral321412887;
extern String_t* _stringLiteral1523494579;
extern String_t* _stringLiteral707485977;
extern String_t* _stringLiteral2438101102;
extern String_t* _stringLiteral1586394652;
extern String_t* _stringLiteral1488841317;
extern String_t* _stringLiteral1903411567;
extern String_t* _stringLiteral2278359390;
extern String_t* _stringLiteral650805295;
extern String_t* _stringLiteral1364506720;
extern String_t* _stringLiteral1589828064;
extern String_t* _stringLiteral1810451629;
extern String_t* _stringLiteral349133746;
extern String_t* _stringLiteral1865022541;
extern String_t* _stringLiteral2381930926;
extern String_t* _stringLiteral396353485;
extern String_t* _stringLiteral3413388730;
extern String_t* _stringLiteral1374789023;
extern String_t* _stringLiteral220201836;
extern String_t* _stringLiteral3706592701;
extern String_t* _stringLiteral2899140228;
extern String_t* _stringLiteral3580424420;
extern String_t* _stringLiteral2727014147;
extern String_t* _stringLiteral798688716;
extern String_t* _stringLiteral978072501;
extern String_t* _stringLiteral1599550519;
extern String_t* _stringLiteral2285215388;
extern String_t* _stringLiteral2790285033;
extern String_t* _stringLiteral2909841378;
extern String_t* _stringLiteral3193987027;
extern String_t* _stringLiteral3706841342;
extern String_t* _stringLiteral10143989;
extern String_t* _stringLiteral1038851914;
extern String_t* _stringLiteral1273143564;
extern String_t* _stringLiteral1649102179;
extern String_t* _stringLiteral3457529818;
extern String_t* _stringLiteral225286342;
extern String_t* _stringLiteral3712236819;
extern String_t* _stringLiteral81207281;
extern String_t* _stringLiteral3081170729;
extern String_t* _stringLiteral1470258178;
extern String_t* _stringLiteral1711521975;
extern String_t* _stringLiteral1977936775;
extern String_t* _stringLiteral4041807742;
extern String_t* _stringLiteral2374443066;
extern String_t* _stringLiteral3749535866;
extern String_t* _stringLiteral804911640;
extern String_t* _stringLiteral1953043435;
extern String_t* _stringLiteral3721263679;
extern const uint32_t Chat__cctor_m2410299612_MetadataUsageId;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* RectTransform_t3704657025_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2666699792;
extern const uint32_t ChatManager_OnEnable_m558465284_MetadataUsageId;
extern RuntimeClass* Action_t1264377477_il2cpp_TypeInfo_var;
extern RuntimeClass* Utils_t1444179947_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Nullable_1__ctor_m884083491_RuntimeMethod_var;
extern const RuntimeMethod* ChatManager_U3CStartNewTopicU3Em__0_m3118319763_RuntimeMethod_var;
extern const uint32_t ChatManager_StartNewTopic_m257331358_MetadataUsageId;
extern RuntimeClass* U3CSelectAnswerU3Ec__AnonStorey0_t2974158987_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CSelectAnswerU3Ec__AnonStorey0_U3CU3Em__0_m2460797937_RuntimeMethod_var;
extern const uint32_t ChatManager_SelectAnswer_m1099509755_MetadataUsageId;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponentInChildren_TisText_t1901882714_m3637202860_RuntimeMethod_var;
extern const uint32_t ChatManager_AddChatMessage_m478030932_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern const uint32_t ChatManager_Update_m1569383110_MetadataUsageId;
extern const RuntimeMethod* ChatManager_U3CStartNewTopicU3Em__1_m779667603_RuntimeMethod_var;
extern const uint32_t ChatManager_U3CStartNewTopicU3Em__0_m3118319763_MetadataUsageId;
extern const RuntimeMethod* U3CSelectAnswerU3Ec__AnonStorey0_U3CU3Em__1_m122145777_RuntimeMethod_var;
extern const RuntimeMethod* U3CSelectAnswerU3Ec__AnonStorey0_U3CU3Em__2_m2843134961_RuntimeMethod_var;
extern const uint32_t U3CSelectAnswerU3Ec__AnonStorey0_U3CU3Em__0_m2460797937_MetadataUsageId;
extern const RuntimeMethod* U3CSelectAnswerU3Ec__AnonStorey0_U3CU3Em__3_m504482801_RuntimeMethod_var;
extern String_t* _stringLiteral4118447765;
extern const uint32_t U3CSelectAnswerU3Ec__AnonStorey0_U3CU3Em__1_m122145777_MetadataUsageId;
extern const RuntimeMethod* U3CSelectAnswerU3Ec__AnonStorey0_U3CU3Em__4_m3225471985_RuntimeMethod_var;
extern String_t* _stringLiteral2266424839;
extern const uint32_t U3CSelectAnswerU3Ec__AnonStorey0_U3CU3Em__2_m2843134961_MetadataUsageId;
extern const RuntimeMethod* Object_FindObjectOfType_TisPhoneManager_t4261849291_m3175860931_RuntimeMethod_var;
extern const uint32_t U3CSelectAnswerU3Ec__AnonStorey0_U3CU3Em__3_m504482801_MetadataUsageId;
extern String_t* _stringLiteral742876739;
extern const uint32_t U3CSelectAnswerU3Ec__AnonStorey0_U3CU3Em__4_m3225471985_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var;
extern const uint32_t Countdown_Start_m3176152501_MetadataUsageId;
extern RuntimeClass* U3CCountdownCoroutineU3Ec__Iterator0_t2126704546_il2cpp_TypeInfo_var;
extern const uint32_t Countdown_CountdownCoroutine_m4265235627_MetadataUsageId;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_FindObjectOfType_TisFightController_t483979242_m1819838589_RuntimeMethod_var;
extern String_t* _stringLiteral3452614542;
extern String_t* _stringLiteral3452614543;
extern String_t* _stringLiteral1209586435;
extern const uint32_t U3CCountdownCoroutineU3Ec__Iterator0_MoveNext_m2476399835_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const uint32_t U3CCountdownCoroutineU3Ec__Iterator0_Reset_m1577327775_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisFighters_t808620833_m1186822352_RuntimeMethod_var;
extern const uint32_t FightController_Start_m281628903_MetadataUsageId;
extern RuntimeClass* FightController_t483979242_il2cpp_TypeInfo_var;
extern const RuntimeMethod* FightController_U3CDamageU3Em__0_m976867632_RuntimeMethod_var;
extern const uint32_t FightController_Damage_m3292052364_MetadataUsageId;
extern String_t* _stringLiteral3491294978;
extern const uint32_t FightController_U3CDamageU3Em__0_m976867632_MetadataUsageId;
extern RuntimeClass* MoveU5BU5DU5BU5D_t1831594223_il2cpp_TypeInfo_var;
extern RuntimeClass* MoveU5BU5D_t3649037098_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255366____U24fieldU2D5AB483684EF9BABABBBE759D201227533D0A9C64_0_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255366____U24fieldU2D0A619AF7ADBFFBADB610780D9A38974C51F6689A_1_FieldInfo_var;
extern const uint32_t ComputerInput__ctor_m1134193210_MetadataUsageId;
extern const uint32_t ComputerInput_Start_m3038780052_MetadataUsageId;
extern const uint32_t PlayerInput_Start_m595175800_MetadataUsageId;
extern const uint32_t PlayerInput_Update_m1770734208_MetadataUsageId;
extern const uint32_t PlayerInput_InterruptBlock_m2724655913_MetadataUsageId;
extern RuntimeClass* Fighter_t1911001889_il2cpp_TypeInfo_var;
extern const uint32_t Fighters__ctor_m2065656383_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var;
extern const uint32_t MatchPanel_Start_m2727152573_MetadataUsageId;
extern const uint32_t MatchPanel_Update_m3262592199_MetadataUsageId;
extern const uint32_t MatchPanel_OnSendMessageClick_m1013566159_MetadataUsageId;
extern String_t* _stringLiteral4196299889;
extern String_t* _stringLiteral711831920;
extern const uint32_t MatchPanel_AnimateIn_m2059785970_MetadataUsageId;
extern RuntimeClass* U3CAnimateInCoroutineU3Ec__Iterator0_t4015329932_il2cpp_TypeInfo_var;
extern const uint32_t MatchPanel_AnimateInCoroutine_m1239398478_MetadataUsageId;
extern RuntimeClass* WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var;
extern const uint32_t U3CAnimateInCoroutineU3Ec__Iterator0_MoveNext_m1645941771_MetadataUsageId;
extern const uint32_t U3CAnimateInCoroutineU3Ec__Iterator0_Reset_m295846840_MetadataUsageId;
extern RuntimeClass* Names_t4168630408_il2cpp_TypeInfo_var;
extern const uint32_t Names_RandomName_m3846965876_MetadataUsageId;
extern String_t* _stringLiteral432598786;
extern String_t* _stringLiteral1521926510;
extern String_t* _stringLiteral432598801;
extern String_t* _stringLiteral540523700;
extern String_t* _stringLiteral1477689725;
extern String_t* _stringLiteral793792377;
extern String_t* _stringLiteral2729332461;
extern String_t* _stringLiteral3899738666;
extern String_t* _stringLiteral2386816767;
extern String_t* _stringLiteral3611410572;
extern String_t* _stringLiteral3184256;
extern String_t* _stringLiteral1980059249;
extern String_t* _stringLiteral2021988844;
extern String_t* _stringLiteral3116935996;
extern String_t* _stringLiteral3899542074;
extern String_t* _stringLiteral1086364027;
extern String_t* _stringLiteral359890329;
extern String_t* _stringLiteral1927779500;
extern String_t* _stringLiteral2743172505;
extern String_t* _stringLiteral3194631033;
extern String_t* _stringLiteral812754233;
extern String_t* _stringLiteral3452614620;
extern String_t* _stringLiteral783656264;
extern String_t* _stringLiteral1168365623;
extern String_t* _stringLiteral434922575;
extern String_t* _stringLiteral4279992240;
extern String_t* _stringLiteral808454625;
extern String_t* _stringLiteral4294874508;
extern String_t* _stringLiteral486827602;
extern String_t* _stringLiteral1251501166;
extern String_t* _stringLiteral2703564877;
extern String_t* _stringLiteral39716468;
extern String_t* _stringLiteral446415352;
extern String_t* _stringLiteral1108012802;
extern String_t* _stringLiteral2737703039;
extern String_t* _stringLiteral809711114;
extern String_t* _stringLiteral395946812;
extern String_t* _stringLiteral432992003;
extern String_t* _stringLiteral228405448;
extern String_t* _stringLiteral1609215296;
extern String_t* _stringLiteral2743173063;
extern String_t* _stringLiteral2470034645;
extern String_t* _stringLiteral2947411610;
extern String_t* _stringLiteral3042921683;
extern String_t* _stringLiteral4166618098;
extern String_t* _stringLiteral3265940706;
extern String_t* _stringLiteral2775075737;
extern String_t* _stringLiteral2775075982;
extern String_t* _stringLiteral822240153;
extern String_t* _stringLiteral28855522;
extern const uint32_t Names__cctor_m854212717_MetadataUsageId;
extern const RuntimeMethod* Nullable_1_get_HasValue_m410045444_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_Value_m395328461_RuntimeMethod_var;
extern const uint32_t Poser_set_CurrentStance_m425755468_MetadataUsageId;
extern RuntimeClass* U3CReturnToU3Ec__Iterator0_t3746314890_il2cpp_TypeInfo_var;
extern const uint32_t Poser_ReturnTo_m1670821847_MetadataUsageId;
extern const RuntimeMethod* Nullable_1__ctor_m2743267308_RuntimeMethod_var;
extern const uint32_t Poser_InterruptCurrentStance_m2506713111_MetadataUsageId;
extern RuntimeClass* U3CReturnToCurrentStanceU3Ec__Iterator1_t3534570174_il2cpp_TypeInfo_var;
extern const uint32_t Poser_ReturnToCurrentStance_m1422296588_MetadataUsageId;
extern const uint32_t Poser_SetSpriteForAllRenderers_m463568830_MetadataUsageId;
extern const uint32_t U3CReturnToU3Ec__Iterator0_MoveNext_m3261935355_MetadataUsageId;
extern const uint32_t U3CReturnToU3Ec__Iterator0_Reset_m3626334832_MetadataUsageId;
extern const uint32_t U3CReturnToCurrentStanceU3Ec__Iterator1_MoveNext_m3702374989_MetadataUsageId;
extern const uint32_t U3CReturnToCurrentStanceU3Ec__Iterator1_Reset_m4270363208_MetadataUsageId;
extern const uint32_t ProgressBar_Start_m3915962046_MetadataUsageId;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern const uint32_t ProgressBar_SetValue_m1393192738_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponentInChildren_TisMatchPanel_t3284707298_m552025411_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var;
extern String_t* _stringLiteral3450517380;
extern const uint32_t SwipeManager_Start_m1584684223_MetadataUsageId;
extern const uint32_t SwipeManager_Update_m492427647_MetadataUsageId;
extern RuntimeClass* U3CAnimateTopPanelU3Ec__AnonStorey1_t76819064_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CAnimateTopPanelU3Ec__AnonStorey1_U3CU3Em__0_m1717187654_RuntimeMethod_var;
extern const uint32_t SwipeManager_AnimateTopPanel_m1451643684_MetadataUsageId;
extern RuntimeClass* U3CAnimateTopPanelCoroutineU3Ec__Iterator0_t2170529847_il2cpp_TypeInfo_var;
extern const uint32_t SwipeManager_AnimateTopPanelCoroutine_m788824251_MetadataUsageId;
extern const uint32_t U3CAnimateTopPanelCoroutineU3Ec__Iterator0_MoveNext_m2632426864_MetadataUsageId;
extern const uint32_t U3CAnimateTopPanelCoroutineU3Ec__Iterator0_Reset_m533587568_MetadataUsageId;
extern const uint32_t TutorialController_Update_m1392229390_MetadataUsageId;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_AddComponent_TisUtils_t1444179947_m1443986677_RuntimeMethod_var;
extern String_t* _stringLiteral439355553;
extern const uint32_t Utils_get_Instance_m4005346061_MetadataUsageId;
extern const uint32_t Utils_Delay_m1725504855_MetadataUsageId;
extern RuntimeClass* U3CDelayCoroutineU3Ec__Iterator0_t2088042557_il2cpp_TypeInfo_var;
extern const uint32_t Utils_DelayCoroutine_m3572296006_MetadataUsageId;
extern const uint32_t Utils__cctor_m1792585047_MetadataUsageId;
extern const uint32_t U3CDelayCoroutineU3Ec__Iterator0_MoveNext_m95047675_MetadataUsageId;
extern const uint32_t U3CDelayCoroutineU3Ec__Iterator0_Reset_m1903744395_MetadataUsageId;

struct TopicU5BU5D_t212031005;
struct StringU5BU5D_t1281789340;
struct MoveU5BU5D_t3649037098;
struct MoveU5BU5DU5BU5D_t1831594223;
struct StanceSpritesU5BU5D_t3743853223;
struct ColorU5BU5D_t941916413;
struct SpriteU5BU5D_t2581906349;


#ifndef U3CMODULEU3E_T692745542_H
#define U3CMODULEU3E_T692745542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745542 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745542_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef U3CDELAYCOROUTINEU3EC__ITERATOR0_T2088042557_H
#define U3CDELAYCOROUTINEU3EC__ITERATOR0_T2088042557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils/<DelayCoroutine>c__Iterator0
struct  U3CDelayCoroutineU3Ec__Iterator0_t2088042557  : public RuntimeObject
{
public:
	// System.Single Utils/<DelayCoroutine>c__Iterator0::delay
	float ___delay_0;
	// System.Action Utils/<DelayCoroutine>c__Iterator0::action
	Action_t1264377477 * ___action_1;
	// System.Object Utils/<DelayCoroutine>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean Utils/<DelayCoroutine>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 Utils/<DelayCoroutine>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_delay_0() { return static_cast<int32_t>(offsetof(U3CDelayCoroutineU3Ec__Iterator0_t2088042557, ___delay_0)); }
	inline float get_delay_0() const { return ___delay_0; }
	inline float* get_address_of_delay_0() { return &___delay_0; }
	inline void set_delay_0(float value)
	{
		___delay_0 = value;
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(U3CDelayCoroutineU3Ec__Iterator0_t2088042557, ___action_1)); }
	inline Action_t1264377477 * get_action_1() const { return ___action_1; }
	inline Action_t1264377477 ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(Action_t1264377477 * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier((&___action_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CDelayCoroutineU3Ec__Iterator0_t2088042557, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CDelayCoroutineU3Ec__Iterator0_t2088042557, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CDelayCoroutineU3Ec__Iterator0_t2088042557, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDELAYCOROUTINEU3EC__ITERATOR0_T2088042557_H
#ifndef U3CRETURNTOCURRENTSTANCEU3EC__ITERATOR1_T3534570174_H
#define U3CRETURNTOCURRENTSTANCEU3EC__ITERATOR1_T3534570174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Poser/<ReturnToCurrentStance>c__Iterator1
struct  U3CReturnToCurrentStanceU3Ec__Iterator1_t3534570174  : public RuntimeObject
{
public:
	// System.Single Poser/<ReturnToCurrentStance>c__Iterator1::time
	float ___time_0;
	// Poser Poser/<ReturnToCurrentStance>c__Iterator1::$this
	Poser_t2653926573 * ___U24this_1;
	// System.Object Poser/<ReturnToCurrentStance>c__Iterator1::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean Poser/<ReturnToCurrentStance>c__Iterator1::$disposing
	bool ___U24disposing_3;
	// System.Int32 Poser/<ReturnToCurrentStance>c__Iterator1::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(U3CReturnToCurrentStanceU3Ec__Iterator1_t3534570174, ___time_0)); }
	inline float get_time_0() const { return ___time_0; }
	inline float* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(float value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CReturnToCurrentStanceU3Ec__Iterator1_t3534570174, ___U24this_1)); }
	inline Poser_t2653926573 * get_U24this_1() const { return ___U24this_1; }
	inline Poser_t2653926573 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(Poser_t2653926573 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CReturnToCurrentStanceU3Ec__Iterator1_t3534570174, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CReturnToCurrentStanceU3Ec__Iterator1_t3534570174, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CReturnToCurrentStanceU3Ec__Iterator1_t3534570174, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRETURNTOCURRENTSTANCEU3EC__ITERATOR1_T3534570174_H
#ifndef NAMES_T4168630408_H
#define NAMES_T4168630408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Names
struct  Names_t4168630408  : public RuntimeObject
{
public:

public:
};

struct Names_t4168630408_StaticFields
{
public:
	// System.String[] Names::names
	StringU5BU5D_t1281789340* ___names_0;

public:
	inline static int32_t get_offset_of_names_0() { return static_cast<int32_t>(offsetof(Names_t4168630408_StaticFields, ___names_0)); }
	inline StringU5BU5D_t1281789340* get_names_0() const { return ___names_0; }
	inline StringU5BU5D_t1281789340** get_address_of_names_0() { return &___names_0; }
	inline void set_names_0(StringU5BU5D_t1281789340* value)
	{
		___names_0 = value;
		Il2CppCodeGenWriteBarrier((&___names_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMES_T4168630408_H
#ifndef MOVEMETHODS_T3745137382_H
#define MOVEMETHODS_T3745137382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FighterInput.MoveMethods
struct  MoveMethods_t3745137382  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVEMETHODS_T3745137382_H
#ifndef U3CCOUNTDOWNCOROUTINEU3EC__ITERATOR0_T2126704546_H
#define U3CCOUNTDOWNCOROUTINEU3EC__ITERATOR0_T2126704546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Countdown/<CountdownCoroutine>c__Iterator0
struct  U3CCountdownCoroutineU3Ec__Iterator0_t2126704546  : public RuntimeObject
{
public:
	// Countdown Countdown/<CountdownCoroutine>c__Iterator0::$this
	Countdown_t1688036482 * ___U24this_0;
	// System.Object Countdown/<CountdownCoroutine>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean Countdown/<CountdownCoroutine>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 Countdown/<CountdownCoroutine>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CCountdownCoroutineU3Ec__Iterator0_t2126704546, ___U24this_0)); }
	inline Countdown_t1688036482 * get_U24this_0() const { return ___U24this_0; }
	inline Countdown_t1688036482 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(Countdown_t1688036482 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CCountdownCoroutineU3Ec__Iterator0_t2126704546, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CCountdownCoroutineU3Ec__Iterator0_t2126704546, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CCountdownCoroutineU3Ec__Iterator0_t2126704546, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCOUNTDOWNCOROUTINEU3EC__ITERATOR0_T2126704546_H
#ifndef U3CSELECTANSWERU3EC__ANONSTOREY0_T2974158987_H
#define U3CSELECTANSWERU3EC__ANONSTOREY0_T2974158987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChatManager/<SelectAnswer>c__AnonStorey0
struct  U3CSelectAnswerU3Ec__AnonStorey0_t2974158987  : public RuntimeObject
{
public:
	// System.Boolean ChatManager/<SelectAnswer>c__AnonStorey0::isReactionPositive
	bool ___isReactionPositive_0;
	// ChatManager ChatManager/<SelectAnswer>c__AnonStorey0::$this
	ChatManager_t1133435335 * ___U24this_1;

public:
	inline static int32_t get_offset_of_isReactionPositive_0() { return static_cast<int32_t>(offsetof(U3CSelectAnswerU3Ec__AnonStorey0_t2974158987, ___isReactionPositive_0)); }
	inline bool get_isReactionPositive_0() const { return ___isReactionPositive_0; }
	inline bool* get_address_of_isReactionPositive_0() { return &___isReactionPositive_0; }
	inline void set_isReactionPositive_0(bool value)
	{
		___isReactionPositive_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CSelectAnswerU3Ec__AnonStorey0_t2974158987, ___U24this_1)); }
	inline ChatManager_t1133435335 * get_U24this_1() const { return ___U24this_1; }
	inline ChatManager_t1133435335 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(ChatManager_t1133435335 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

struct U3CSelectAnswerU3Ec__AnonStorey0_t2974158987_StaticFields
{
public:
	// System.Action ChatManager/<SelectAnswer>c__AnonStorey0::<>f__am$cache0
	Action_t1264377477 * ___U3CU3Ef__amU24cache0_2;
	// System.Action ChatManager/<SelectAnswer>c__AnonStorey0::<>f__am$cache1
	Action_t1264377477 * ___U3CU3Ef__amU24cache1_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_2() { return static_cast<int32_t>(offsetof(U3CSelectAnswerU3Ec__AnonStorey0_t2974158987_StaticFields, ___U3CU3Ef__amU24cache0_2)); }
	inline Action_t1264377477 * get_U3CU3Ef__amU24cache0_2() const { return ___U3CU3Ef__amU24cache0_2; }
	inline Action_t1264377477 ** get_address_of_U3CU3Ef__amU24cache0_2() { return &___U3CU3Ef__amU24cache0_2; }
	inline void set_U3CU3Ef__amU24cache0_2(Action_t1264377477 * value)
	{
		___U3CU3Ef__amU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_3() { return static_cast<int32_t>(offsetof(U3CSelectAnswerU3Ec__AnonStorey0_t2974158987_StaticFields, ___U3CU3Ef__amU24cache1_3)); }
	inline Action_t1264377477 * get_U3CU3Ef__amU24cache1_3() const { return ___U3CU3Ef__amU24cache1_3; }
	inline Action_t1264377477 ** get_address_of_U3CU3Ef__amU24cache1_3() { return &___U3CU3Ef__amU24cache1_3; }
	inline void set_U3CU3Ef__amU24cache1_3(Action_t1264377477 * value)
	{
		___U3CU3Ef__amU24cache1_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSELECTANSWERU3EC__ANONSTOREY0_T2974158987_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef FIGHTER_T1911001889_H
#define FIGHTER_T1911001889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fighter
struct  Fighter_t1911001889  : public RuntimeObject
{
public:
	// Poser Fighter::poser
	Poser_t2653926573 * ___poser_0;
	// System.Single Fighter::cooldown
	float ___cooldown_1;
	// ProgressBar Fighter::healthBar
	ProgressBar_t1074804577 * ___healthBar_2;
	// System.Int32 Fighter::health
	int32_t ___health_3;
	// ProgressBar Fighter::staminaBar
	ProgressBar_t1074804577 * ___staminaBar_4;
	// System.Int32 Fighter::stamina
	int32_t ___stamina_6;

public:
	inline static int32_t get_offset_of_poser_0() { return static_cast<int32_t>(offsetof(Fighter_t1911001889, ___poser_0)); }
	inline Poser_t2653926573 * get_poser_0() const { return ___poser_0; }
	inline Poser_t2653926573 ** get_address_of_poser_0() { return &___poser_0; }
	inline void set_poser_0(Poser_t2653926573 * value)
	{
		___poser_0 = value;
		Il2CppCodeGenWriteBarrier((&___poser_0), value);
	}

	inline static int32_t get_offset_of_cooldown_1() { return static_cast<int32_t>(offsetof(Fighter_t1911001889, ___cooldown_1)); }
	inline float get_cooldown_1() const { return ___cooldown_1; }
	inline float* get_address_of_cooldown_1() { return &___cooldown_1; }
	inline void set_cooldown_1(float value)
	{
		___cooldown_1 = value;
	}

	inline static int32_t get_offset_of_healthBar_2() { return static_cast<int32_t>(offsetof(Fighter_t1911001889, ___healthBar_2)); }
	inline ProgressBar_t1074804577 * get_healthBar_2() const { return ___healthBar_2; }
	inline ProgressBar_t1074804577 ** get_address_of_healthBar_2() { return &___healthBar_2; }
	inline void set_healthBar_2(ProgressBar_t1074804577 * value)
	{
		___healthBar_2 = value;
		Il2CppCodeGenWriteBarrier((&___healthBar_2), value);
	}

	inline static int32_t get_offset_of_health_3() { return static_cast<int32_t>(offsetof(Fighter_t1911001889, ___health_3)); }
	inline int32_t get_health_3() const { return ___health_3; }
	inline int32_t* get_address_of_health_3() { return &___health_3; }
	inline void set_health_3(int32_t value)
	{
		___health_3 = value;
	}

	inline static int32_t get_offset_of_staminaBar_4() { return static_cast<int32_t>(offsetof(Fighter_t1911001889, ___staminaBar_4)); }
	inline ProgressBar_t1074804577 * get_staminaBar_4() const { return ___staminaBar_4; }
	inline ProgressBar_t1074804577 ** get_address_of_staminaBar_4() { return &___staminaBar_4; }
	inline void set_staminaBar_4(ProgressBar_t1074804577 * value)
	{
		___staminaBar_4 = value;
		Il2CppCodeGenWriteBarrier((&___staminaBar_4), value);
	}

	inline static int32_t get_offset_of_stamina_6() { return static_cast<int32_t>(offsetof(Fighter_t1911001889, ___stamina_6)); }
	inline int32_t get_stamina_6() const { return ___stamina_6; }
	inline int32_t* get_address_of_stamina_6() { return &___stamina_6; }
	inline void set_stamina_6(int32_t value)
	{
		___stamina_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIGHTER_T1911001889_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef CHAT_T201152076_H
#define CHAT_T201152076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Chat
struct  Chat_t201152076  : public RuntimeObject
{
public:

public:
};

struct Chat_t201152076_StaticFields
{
public:
	// Chat/Topic[] Chat::topics
	TopicU5BU5D_t212031005* ___topics_0;
	// System.String[] Chat::positiveReactions
	StringU5BU5D_t1281789340* ___positiveReactions_1;
	// System.String[] Chat::negativeReactions
	StringU5BU5D_t1281789340* ___negativeReactions_2;
	// System.String[] Chat::positiveEndings
	StringU5BU5D_t1281789340* ___positiveEndings_3;
	// System.String[] Chat::negativeEndings
	StringU5BU5D_t1281789340* ___negativeEndings_4;

public:
	inline static int32_t get_offset_of_topics_0() { return static_cast<int32_t>(offsetof(Chat_t201152076_StaticFields, ___topics_0)); }
	inline TopicU5BU5D_t212031005* get_topics_0() const { return ___topics_0; }
	inline TopicU5BU5D_t212031005** get_address_of_topics_0() { return &___topics_0; }
	inline void set_topics_0(TopicU5BU5D_t212031005* value)
	{
		___topics_0 = value;
		Il2CppCodeGenWriteBarrier((&___topics_0), value);
	}

	inline static int32_t get_offset_of_positiveReactions_1() { return static_cast<int32_t>(offsetof(Chat_t201152076_StaticFields, ___positiveReactions_1)); }
	inline StringU5BU5D_t1281789340* get_positiveReactions_1() const { return ___positiveReactions_1; }
	inline StringU5BU5D_t1281789340** get_address_of_positiveReactions_1() { return &___positiveReactions_1; }
	inline void set_positiveReactions_1(StringU5BU5D_t1281789340* value)
	{
		___positiveReactions_1 = value;
		Il2CppCodeGenWriteBarrier((&___positiveReactions_1), value);
	}

	inline static int32_t get_offset_of_negativeReactions_2() { return static_cast<int32_t>(offsetof(Chat_t201152076_StaticFields, ___negativeReactions_2)); }
	inline StringU5BU5D_t1281789340* get_negativeReactions_2() const { return ___negativeReactions_2; }
	inline StringU5BU5D_t1281789340** get_address_of_negativeReactions_2() { return &___negativeReactions_2; }
	inline void set_negativeReactions_2(StringU5BU5D_t1281789340* value)
	{
		___negativeReactions_2 = value;
		Il2CppCodeGenWriteBarrier((&___negativeReactions_2), value);
	}

	inline static int32_t get_offset_of_positiveEndings_3() { return static_cast<int32_t>(offsetof(Chat_t201152076_StaticFields, ___positiveEndings_3)); }
	inline StringU5BU5D_t1281789340* get_positiveEndings_3() const { return ___positiveEndings_3; }
	inline StringU5BU5D_t1281789340** get_address_of_positiveEndings_3() { return &___positiveEndings_3; }
	inline void set_positiveEndings_3(StringU5BU5D_t1281789340* value)
	{
		___positiveEndings_3 = value;
		Il2CppCodeGenWriteBarrier((&___positiveEndings_3), value);
	}

	inline static int32_t get_offset_of_negativeEndings_4() { return static_cast<int32_t>(offsetof(Chat_t201152076_StaticFields, ___negativeEndings_4)); }
	inline StringU5BU5D_t1281789340* get_negativeEndings_4() const { return ___negativeEndings_4; }
	inline StringU5BU5D_t1281789340** get_address_of_negativeEndings_4() { return &___negativeEndings_4; }
	inline void set_negativeEndings_4(StringU5BU5D_t1281789340* value)
	{
		___negativeEndings_4 = value;
		Il2CppCodeGenWriteBarrier((&___negativeEndings_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAT_T201152076_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef U24ARRAYTYPEU3D12_T2488454197_H
#define U24ARRAYTYPEU3D12_T2488454197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=12
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D12_t2488454197 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D12_t2488454197__padding[12];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D12_T2488454197_H
#ifndef U24ARRAYTYPEU3D16_T3253128244_H
#define U24ARRAYTYPEU3D16_T3253128244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=16
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D16_t3253128244 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D16_t3253128244__padding[16];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D16_T3253128244_H
#ifndef TOPIC_T1539434260_H
#define TOPIC_T1539434260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Chat/Topic
struct  Topic_t1539434260 
{
public:
	// System.String Chat/Topic::supposition
	String_t* ___supposition_0;
	// System.String Chat/Topic::answer1
	String_t* ___answer1_1;
	// System.String Chat/Topic::answer2
	String_t* ___answer2_2;

public:
	inline static int32_t get_offset_of_supposition_0() { return static_cast<int32_t>(offsetof(Topic_t1539434260, ___supposition_0)); }
	inline String_t* get_supposition_0() const { return ___supposition_0; }
	inline String_t** get_address_of_supposition_0() { return &___supposition_0; }
	inline void set_supposition_0(String_t* value)
	{
		___supposition_0 = value;
		Il2CppCodeGenWriteBarrier((&___supposition_0), value);
	}

	inline static int32_t get_offset_of_answer1_1() { return static_cast<int32_t>(offsetof(Topic_t1539434260, ___answer1_1)); }
	inline String_t* get_answer1_1() const { return ___answer1_1; }
	inline String_t** get_address_of_answer1_1() { return &___answer1_1; }
	inline void set_answer1_1(String_t* value)
	{
		___answer1_1 = value;
		Il2CppCodeGenWriteBarrier((&___answer1_1), value);
	}

	inline static int32_t get_offset_of_answer2_2() { return static_cast<int32_t>(offsetof(Topic_t1539434260, ___answer2_2)); }
	inline String_t* get_answer2_2() const { return ___answer2_2; }
	inline String_t** get_address_of_answer2_2() { return &___answer2_2; }
	inline void set_answer2_2(String_t* value)
	{
		___answer2_2 = value;
		Il2CppCodeGenWriteBarrier((&___answer2_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Chat/Topic
struct Topic_t1539434260_marshaled_pinvoke
{
	char* ___supposition_0;
	char* ___answer1_1;
	char* ___answer2_2;
};
// Native definition for COM marshalling of Chat/Topic
struct Topic_t1539434260_marshaled_com
{
	Il2CppChar* ___supposition_0;
	Il2CppChar* ___answer1_1;
	Il2CppChar* ___answer2_2;
};
#endif // TOPIC_T1539434260_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef WAITFORENDOFFRAME_T1314943911_H
#define WAITFORENDOFFRAME_T1314943911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t1314943911  : public YieldInstruction_t403091072
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORENDOFFRAME_T1314943911_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef U3CANIMATETOPPANELCOROUTINEU3EC__ITERATOR0_T2170529847_H
#define U3CANIMATETOPPANELCOROUTINEU3EC__ITERATOR0_T2170529847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SwipeManager/<AnimateTopPanelCoroutine>c__Iterator0
struct  U3CAnimateTopPanelCoroutineU3Ec__Iterator0_t2170529847  : public RuntimeObject
{
public:
	// UnityEngine.RectTransform SwipeManager/<AnimateTopPanelCoroutine>c__Iterator0::<rect>__0
	RectTransform_t3704657025 * ___U3CrectU3E__0_0;
	// UnityEngine.Vector2 SwipeManager/<AnimateTopPanelCoroutine>c__Iterator0::<position>__0
	Vector2_t2156229523  ___U3CpositionU3E__0_1;
	// System.Single SwipeManager/<AnimateTopPanelCoroutine>c__Iterator0::<step>__0
	float ___U3CstepU3E__0_2;
	// System.Single SwipeManager/<AnimateTopPanelCoroutine>c__Iterator0::<maxStep>__0
	float ___U3CmaxStepU3E__0_3;
	// System.Boolean SwipeManager/<AnimateTopPanelCoroutine>c__Iterator0::left
	bool ___left_4;
	// System.Action SwipeManager/<AnimateTopPanelCoroutine>c__Iterator0::action
	Action_t1264377477 * ___action_5;
	// SwipeManager SwipeManager/<AnimateTopPanelCoroutine>c__Iterator0::$this
	SwipeManager_t2369055733 * ___U24this_6;
	// System.Object SwipeManager/<AnimateTopPanelCoroutine>c__Iterator0::$current
	RuntimeObject * ___U24current_7;
	// System.Boolean SwipeManager/<AnimateTopPanelCoroutine>c__Iterator0::$disposing
	bool ___U24disposing_8;
	// System.Int32 SwipeManager/<AnimateTopPanelCoroutine>c__Iterator0::$PC
	int32_t ___U24PC_9;

public:
	inline static int32_t get_offset_of_U3CrectU3E__0_0() { return static_cast<int32_t>(offsetof(U3CAnimateTopPanelCoroutineU3Ec__Iterator0_t2170529847, ___U3CrectU3E__0_0)); }
	inline RectTransform_t3704657025 * get_U3CrectU3E__0_0() const { return ___U3CrectU3E__0_0; }
	inline RectTransform_t3704657025 ** get_address_of_U3CrectU3E__0_0() { return &___U3CrectU3E__0_0; }
	inline void set_U3CrectU3E__0_0(RectTransform_t3704657025 * value)
	{
		___U3CrectU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrectU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U3CpositionU3E__0_1() { return static_cast<int32_t>(offsetof(U3CAnimateTopPanelCoroutineU3Ec__Iterator0_t2170529847, ___U3CpositionU3E__0_1)); }
	inline Vector2_t2156229523  get_U3CpositionU3E__0_1() const { return ___U3CpositionU3E__0_1; }
	inline Vector2_t2156229523 * get_address_of_U3CpositionU3E__0_1() { return &___U3CpositionU3E__0_1; }
	inline void set_U3CpositionU3E__0_1(Vector2_t2156229523  value)
	{
		___U3CpositionU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CstepU3E__0_2() { return static_cast<int32_t>(offsetof(U3CAnimateTopPanelCoroutineU3Ec__Iterator0_t2170529847, ___U3CstepU3E__0_2)); }
	inline float get_U3CstepU3E__0_2() const { return ___U3CstepU3E__0_2; }
	inline float* get_address_of_U3CstepU3E__0_2() { return &___U3CstepU3E__0_2; }
	inline void set_U3CstepU3E__0_2(float value)
	{
		___U3CstepU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U3CmaxStepU3E__0_3() { return static_cast<int32_t>(offsetof(U3CAnimateTopPanelCoroutineU3Ec__Iterator0_t2170529847, ___U3CmaxStepU3E__0_3)); }
	inline float get_U3CmaxStepU3E__0_3() const { return ___U3CmaxStepU3E__0_3; }
	inline float* get_address_of_U3CmaxStepU3E__0_3() { return &___U3CmaxStepU3E__0_3; }
	inline void set_U3CmaxStepU3E__0_3(float value)
	{
		___U3CmaxStepU3E__0_3 = value;
	}

	inline static int32_t get_offset_of_left_4() { return static_cast<int32_t>(offsetof(U3CAnimateTopPanelCoroutineU3Ec__Iterator0_t2170529847, ___left_4)); }
	inline bool get_left_4() const { return ___left_4; }
	inline bool* get_address_of_left_4() { return &___left_4; }
	inline void set_left_4(bool value)
	{
		___left_4 = value;
	}

	inline static int32_t get_offset_of_action_5() { return static_cast<int32_t>(offsetof(U3CAnimateTopPanelCoroutineU3Ec__Iterator0_t2170529847, ___action_5)); }
	inline Action_t1264377477 * get_action_5() const { return ___action_5; }
	inline Action_t1264377477 ** get_address_of_action_5() { return &___action_5; }
	inline void set_action_5(Action_t1264377477 * value)
	{
		___action_5 = value;
		Il2CppCodeGenWriteBarrier((&___action_5), value);
	}

	inline static int32_t get_offset_of_U24this_6() { return static_cast<int32_t>(offsetof(U3CAnimateTopPanelCoroutineU3Ec__Iterator0_t2170529847, ___U24this_6)); }
	inline SwipeManager_t2369055733 * get_U24this_6() const { return ___U24this_6; }
	inline SwipeManager_t2369055733 ** get_address_of_U24this_6() { return &___U24this_6; }
	inline void set_U24this_6(SwipeManager_t2369055733 * value)
	{
		___U24this_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_6), value);
	}

	inline static int32_t get_offset_of_U24current_7() { return static_cast<int32_t>(offsetof(U3CAnimateTopPanelCoroutineU3Ec__Iterator0_t2170529847, ___U24current_7)); }
	inline RuntimeObject * get_U24current_7() const { return ___U24current_7; }
	inline RuntimeObject ** get_address_of_U24current_7() { return &___U24current_7; }
	inline void set_U24current_7(RuntimeObject * value)
	{
		___U24current_7 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_7), value);
	}

	inline static int32_t get_offset_of_U24disposing_8() { return static_cast<int32_t>(offsetof(U3CAnimateTopPanelCoroutineU3Ec__Iterator0_t2170529847, ___U24disposing_8)); }
	inline bool get_U24disposing_8() const { return ___U24disposing_8; }
	inline bool* get_address_of_U24disposing_8() { return &___U24disposing_8; }
	inline void set_U24disposing_8(bool value)
	{
		___U24disposing_8 = value;
	}

	inline static int32_t get_offset_of_U24PC_9() { return static_cast<int32_t>(offsetof(U3CAnimateTopPanelCoroutineU3Ec__Iterator0_t2170529847, ___U24PC_9)); }
	inline int32_t get_U24PC_9() const { return ___U24PC_9; }
	inline int32_t* get_address_of_U24PC_9() { return &___U24PC_9; }
	inline void set_U24PC_9(int32_t value)
	{
		___U24PC_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CANIMATETOPPANELCOROUTINEU3EC__ITERATOR0_T2170529847_H
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef U3CANIMATETOPPANELU3EC__ANONSTOREY1_T76819064_H
#define U3CANIMATETOPPANELU3EC__ANONSTOREY1_T76819064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SwipeManager/<AnimateTopPanel>c__AnonStorey1
struct  U3CAnimateTopPanelU3Ec__AnonStorey1_t76819064  : public RuntimeObject
{
public:
	// System.Boolean SwipeManager/<AnimateTopPanel>c__AnonStorey1::left
	bool ___left_0;
	// System.String SwipeManager/<AnimateTopPanel>c__AnonStorey1::matchName
	String_t* ___matchName_1;
	// UnityEngine.Sprite SwipeManager/<AnimateTopPanel>c__AnonStorey1::dude
	Sprite_t280657092 * ___dude_2;
	// UnityEngine.Color SwipeManager/<AnimateTopPanel>c__AnonStorey1::color
	Color_t2555686324  ___color_3;
	// SwipeManager SwipeManager/<AnimateTopPanel>c__AnonStorey1::$this
	SwipeManager_t2369055733 * ___U24this_4;

public:
	inline static int32_t get_offset_of_left_0() { return static_cast<int32_t>(offsetof(U3CAnimateTopPanelU3Ec__AnonStorey1_t76819064, ___left_0)); }
	inline bool get_left_0() const { return ___left_0; }
	inline bool* get_address_of_left_0() { return &___left_0; }
	inline void set_left_0(bool value)
	{
		___left_0 = value;
	}

	inline static int32_t get_offset_of_matchName_1() { return static_cast<int32_t>(offsetof(U3CAnimateTopPanelU3Ec__AnonStorey1_t76819064, ___matchName_1)); }
	inline String_t* get_matchName_1() const { return ___matchName_1; }
	inline String_t** get_address_of_matchName_1() { return &___matchName_1; }
	inline void set_matchName_1(String_t* value)
	{
		___matchName_1 = value;
		Il2CppCodeGenWriteBarrier((&___matchName_1), value);
	}

	inline static int32_t get_offset_of_dude_2() { return static_cast<int32_t>(offsetof(U3CAnimateTopPanelU3Ec__AnonStorey1_t76819064, ___dude_2)); }
	inline Sprite_t280657092 * get_dude_2() const { return ___dude_2; }
	inline Sprite_t280657092 ** get_address_of_dude_2() { return &___dude_2; }
	inline void set_dude_2(Sprite_t280657092 * value)
	{
		___dude_2 = value;
		Il2CppCodeGenWriteBarrier((&___dude_2), value);
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(U3CAnimateTopPanelU3Ec__AnonStorey1_t76819064, ___color_3)); }
	inline Color_t2555686324  get_color_3() const { return ___color_3; }
	inline Color_t2555686324 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color_t2555686324  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CAnimateTopPanelU3Ec__AnonStorey1_t76819064, ___U24this_4)); }
	inline SwipeManager_t2369055733 * get_U24this_4() const { return ___U24this_4; }
	inline SwipeManager_t2369055733 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(SwipeManager_t2369055733 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CANIMATETOPPANELU3EC__ANONSTOREY1_T76819064_H
#ifndef U3CANIMATEINCOROUTINEU3EC__ITERATOR0_T4015329932_H
#define U3CANIMATEINCOROUTINEU3EC__ITERATOR0_T4015329932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MatchPanel/<AnimateInCoroutine>c__Iterator0
struct  U3CAnimateInCoroutineU3Ec__Iterator0_t4015329932  : public RuntimeObject
{
public:
	// UnityEngine.Vector2 MatchPanel/<AnimateInCoroutine>c__Iterator0::<pivot>__0
	Vector2_t2156229523  ___U3CpivotU3E__0_0;
	// System.Single MatchPanel/<AnimateInCoroutine>c__Iterator0::<step>__0
	float ___U3CstepU3E__0_1;
	// System.Single MatchPanel/<AnimateInCoroutine>c__Iterator0::<minStep>__0
	float ___U3CminStepU3E__0_2;
	// MatchPanel MatchPanel/<AnimateInCoroutine>c__Iterator0::$this
	MatchPanel_t3284707298 * ___U24this_3;
	// System.Object MatchPanel/<AnimateInCoroutine>c__Iterator0::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean MatchPanel/<AnimateInCoroutine>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 MatchPanel/<AnimateInCoroutine>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3CpivotU3E__0_0() { return static_cast<int32_t>(offsetof(U3CAnimateInCoroutineU3Ec__Iterator0_t4015329932, ___U3CpivotU3E__0_0)); }
	inline Vector2_t2156229523  get_U3CpivotU3E__0_0() const { return ___U3CpivotU3E__0_0; }
	inline Vector2_t2156229523 * get_address_of_U3CpivotU3E__0_0() { return &___U3CpivotU3E__0_0; }
	inline void set_U3CpivotU3E__0_0(Vector2_t2156229523  value)
	{
		___U3CpivotU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CstepU3E__0_1() { return static_cast<int32_t>(offsetof(U3CAnimateInCoroutineU3Ec__Iterator0_t4015329932, ___U3CstepU3E__0_1)); }
	inline float get_U3CstepU3E__0_1() const { return ___U3CstepU3E__0_1; }
	inline float* get_address_of_U3CstepU3E__0_1() { return &___U3CstepU3E__0_1; }
	inline void set_U3CstepU3E__0_1(float value)
	{
		___U3CstepU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CminStepU3E__0_2() { return static_cast<int32_t>(offsetof(U3CAnimateInCoroutineU3Ec__Iterator0_t4015329932, ___U3CminStepU3E__0_2)); }
	inline float get_U3CminStepU3E__0_2() const { return ___U3CminStepU3E__0_2; }
	inline float* get_address_of_U3CminStepU3E__0_2() { return &___U3CminStepU3E__0_2; }
	inline void set_U3CminStepU3E__0_2(float value)
	{
		___U3CminStepU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CAnimateInCoroutineU3Ec__Iterator0_t4015329932, ___U24this_3)); }
	inline MatchPanel_t3284707298 * get_U24this_3() const { return ___U24this_3; }
	inline MatchPanel_t3284707298 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(MatchPanel_t3284707298 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CAnimateInCoroutineU3Ec__Iterator0_t4015329932, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CAnimateInCoroutineU3Ec__Iterator0_t4015329932, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CAnimateInCoroutineU3Ec__Iterator0_t4015329932, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CANIMATEINCOROUTINEU3EC__ITERATOR0_T4015329932_H
#ifndef STANCE_T345372848_H
#define STANCE_T345372848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Poser/Stance
struct  Stance_t345372848 
{
public:
	// System.Int32 Poser/Stance::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Stance_t345372848, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STANCE_T345372848_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef MOVE_T234461003_H
#define MOVE_T234461003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FighterInput.Move
struct  Move_t234461003 
{
public:
	// System.Int32 FighterInput.Move::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Move_t234461003, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVE_T234461003_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255366  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-5AB483684EF9BABABBBE759D201227533D0A9C64
	U24ArrayTypeU3D16_t3253128244  ___U24fieldU2D5AB483684EF9BABABBBE759D201227533D0A9C64_0;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-0A619AF7ADBFFBADB610780D9A38974C51F6689A
	U24ArrayTypeU3D12_t2488454197  ___U24fieldU2D0A619AF7ADBFFBADB610780D9A38974C51F6689A_1;

public:
	inline static int32_t get_offset_of_U24fieldU2D5AB483684EF9BABABBBE759D201227533D0A9C64_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24fieldU2D5AB483684EF9BABABBBE759D201227533D0A9C64_0)); }
	inline U24ArrayTypeU3D16_t3253128244  get_U24fieldU2D5AB483684EF9BABABBBE759D201227533D0A9C64_0() const { return ___U24fieldU2D5AB483684EF9BABABBBE759D201227533D0A9C64_0; }
	inline U24ArrayTypeU3D16_t3253128244 * get_address_of_U24fieldU2D5AB483684EF9BABABBBE759D201227533D0A9C64_0() { return &___U24fieldU2D5AB483684EF9BABABBBE759D201227533D0A9C64_0; }
	inline void set_U24fieldU2D5AB483684EF9BABABBBE759D201227533D0A9C64_0(U24ArrayTypeU3D16_t3253128244  value)
	{
		___U24fieldU2D5AB483684EF9BABABBBE759D201227533D0A9C64_0 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D0A619AF7ADBFFBADB610780D9A38974C51F6689A_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24fieldU2D0A619AF7ADBFFBADB610780D9A38974C51F6689A_1)); }
	inline U24ArrayTypeU3D12_t2488454197  get_U24fieldU2D0A619AF7ADBFFBADB610780D9A38974C51F6689A_1() const { return ___U24fieldU2D0A619AF7ADBFFBADB610780D9A38974C51F6689A_1; }
	inline U24ArrayTypeU3D12_t2488454197 * get_address_of_U24fieldU2D0A619AF7ADBFFBADB610780D9A38974C51F6689A_1() { return &___U24fieldU2D0A619AF7ADBFFBADB610780D9A38974C51F6689A_1; }
	inline void set_U24fieldU2D0A619AF7ADBFFBADB610780D9A38974C51F6689A_1(U24ArrayTypeU3D12_t2488454197  value)
	{
		___U24fieldU2D0A619AF7ADBFFBADB610780D9A38974C51F6689A_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#ifndef NULLABLE_1_T3261996342_H
#define NULLABLE_1_T3261996342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<Chat/Topic>
struct  Nullable_1_t3261996342 
{
public:
	// T System.Nullable`1::value
	Topic_t1539434260  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3261996342, ___value_0)); }
	inline Topic_t1539434260  get_value_0() const { return ___value_0; }
	inline Topic_t1539434260 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Topic_t1539434260  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3261996342, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T3261996342_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef TYPE_T1152881528_H
#define TYPE_T1152881528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/Type
struct  Type_t1152881528 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t1152881528, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T1152881528_H
#ifndef FILLMETHOD_T1167457570_H
#define FILLMETHOD_T1167457570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/FillMethod
struct  FillMethod_t1167457570 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FillMethod_t1167457570, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILLMETHOD_T1167457570_H
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_T2599294277_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
#ifndef U3CRETURNTOU3EC__ITERATOR0_T3746314890_H
#define U3CRETURNTOU3EC__ITERATOR0_T3746314890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Poser/<ReturnTo>c__Iterator0
struct  U3CReturnToU3Ec__Iterator0_t3746314890  : public RuntimeObject
{
public:
	// System.Single Poser/<ReturnTo>c__Iterator0::time
	float ___time_0;
	// Poser/Stance Poser/<ReturnTo>c__Iterator0::st
	int32_t ___st_1;
	// Poser Poser/<ReturnTo>c__Iterator0::$this
	Poser_t2653926573 * ___U24this_2;
	// System.Object Poser/<ReturnTo>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean Poser/<ReturnTo>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 Poser/<ReturnTo>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(U3CReturnToU3Ec__Iterator0_t3746314890, ___time_0)); }
	inline float get_time_0() const { return ___time_0; }
	inline float* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(float value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_st_1() { return static_cast<int32_t>(offsetof(U3CReturnToU3Ec__Iterator0_t3746314890, ___st_1)); }
	inline int32_t get_st_1() const { return ___st_1; }
	inline int32_t* get_address_of_st_1() { return &___st_1; }
	inline void set_st_1(int32_t value)
	{
		___st_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CReturnToU3Ec__Iterator0_t3746314890, ___U24this_2)); }
	inline Poser_t2653926573 * get_U24this_2() const { return ___U24this_2; }
	inline Poser_t2653926573 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Poser_t2653926573 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CReturnToU3Ec__Iterator0_t3746314890, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CReturnToU3Ec__Iterator0_t3746314890, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CReturnToU3Ec__Iterator0_t3746314890, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRETURNTOU3EC__ITERATOR0_T3746314890_H
#ifndef NULLABLE_1_T2067934930_H
#define NULLABLE_1_T2067934930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<Poser/Stance>
struct  Nullable_1_t2067934930 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2067934930, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2067934930, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2067934930_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef SPRITE_T280657092_H
#define SPRITE_T280657092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t280657092  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T280657092_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef STANCESPRITES_T3454544338_H
#define STANCESPRITES_T3454544338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StanceSprites
struct  StanceSprites_t3454544338  : public ScriptableObject_t2528358522
{
public:
	// UnityEngine.Sprite StanceSprites::idleSprite
	Sprite_t280657092 * ___idleSprite_2;
	// UnityEngine.Sprite StanceSprites::punchSprite
	Sprite_t280657092 * ___punchSprite_3;
	// UnityEngine.Sprite StanceSprites::kickSprite
	Sprite_t280657092 * ___kickSprite_4;
	// UnityEngine.Sprite StanceSprites::blockPunchSprite
	Sprite_t280657092 * ___blockPunchSprite_5;
	// UnityEngine.Sprite StanceSprites::blockKickSprite
	Sprite_t280657092 * ___blockKickSprite_6;
	// UnityEngine.Sprite StanceSprites::damagedSprite
	Sprite_t280657092 * ___damagedSprite_7;
	// UnityEngine.Sprite StanceSprites::knockedOutSprite
	Sprite_t280657092 * ___knockedOutSprite_8;

public:
	inline static int32_t get_offset_of_idleSprite_2() { return static_cast<int32_t>(offsetof(StanceSprites_t3454544338, ___idleSprite_2)); }
	inline Sprite_t280657092 * get_idleSprite_2() const { return ___idleSprite_2; }
	inline Sprite_t280657092 ** get_address_of_idleSprite_2() { return &___idleSprite_2; }
	inline void set_idleSprite_2(Sprite_t280657092 * value)
	{
		___idleSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___idleSprite_2), value);
	}

	inline static int32_t get_offset_of_punchSprite_3() { return static_cast<int32_t>(offsetof(StanceSprites_t3454544338, ___punchSprite_3)); }
	inline Sprite_t280657092 * get_punchSprite_3() const { return ___punchSprite_3; }
	inline Sprite_t280657092 ** get_address_of_punchSprite_3() { return &___punchSprite_3; }
	inline void set_punchSprite_3(Sprite_t280657092 * value)
	{
		___punchSprite_3 = value;
		Il2CppCodeGenWriteBarrier((&___punchSprite_3), value);
	}

	inline static int32_t get_offset_of_kickSprite_4() { return static_cast<int32_t>(offsetof(StanceSprites_t3454544338, ___kickSprite_4)); }
	inline Sprite_t280657092 * get_kickSprite_4() const { return ___kickSprite_4; }
	inline Sprite_t280657092 ** get_address_of_kickSprite_4() { return &___kickSprite_4; }
	inline void set_kickSprite_4(Sprite_t280657092 * value)
	{
		___kickSprite_4 = value;
		Il2CppCodeGenWriteBarrier((&___kickSprite_4), value);
	}

	inline static int32_t get_offset_of_blockPunchSprite_5() { return static_cast<int32_t>(offsetof(StanceSprites_t3454544338, ___blockPunchSprite_5)); }
	inline Sprite_t280657092 * get_blockPunchSprite_5() const { return ___blockPunchSprite_5; }
	inline Sprite_t280657092 ** get_address_of_blockPunchSprite_5() { return &___blockPunchSprite_5; }
	inline void set_blockPunchSprite_5(Sprite_t280657092 * value)
	{
		___blockPunchSprite_5 = value;
		Il2CppCodeGenWriteBarrier((&___blockPunchSprite_5), value);
	}

	inline static int32_t get_offset_of_blockKickSprite_6() { return static_cast<int32_t>(offsetof(StanceSprites_t3454544338, ___blockKickSprite_6)); }
	inline Sprite_t280657092 * get_blockKickSprite_6() const { return ___blockKickSprite_6; }
	inline Sprite_t280657092 ** get_address_of_blockKickSprite_6() { return &___blockKickSprite_6; }
	inline void set_blockKickSprite_6(Sprite_t280657092 * value)
	{
		___blockKickSprite_6 = value;
		Il2CppCodeGenWriteBarrier((&___blockKickSprite_6), value);
	}

	inline static int32_t get_offset_of_damagedSprite_7() { return static_cast<int32_t>(offsetof(StanceSprites_t3454544338, ___damagedSprite_7)); }
	inline Sprite_t280657092 * get_damagedSprite_7() const { return ___damagedSprite_7; }
	inline Sprite_t280657092 ** get_address_of_damagedSprite_7() { return &___damagedSprite_7; }
	inline void set_damagedSprite_7(Sprite_t280657092 * value)
	{
		___damagedSprite_7 = value;
		Il2CppCodeGenWriteBarrier((&___damagedSprite_7), value);
	}

	inline static int32_t get_offset_of_knockedOutSprite_8() { return static_cast<int32_t>(offsetof(StanceSprites_t3454544338, ___knockedOutSprite_8)); }
	inline Sprite_t280657092 * get_knockedOutSprite_8() const { return ___knockedOutSprite_8; }
	inline Sprite_t280657092 ** get_address_of_knockedOutSprite_8() { return &___knockedOutSprite_8; }
	inline void set_knockedOutSprite_8(Sprite_t280657092 * value)
	{
		___knockedOutSprite_8 = value;
		Il2CppCodeGenWriteBarrier((&___knockedOutSprite_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STANCESPRITES_T3454544338_H
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:

public:
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_2;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_2() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_2)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_2() const { return ___reapplyDrivenProperties_2; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_2() { return &___reapplyDrivenProperties_2; }
	inline void set_reapplyDrivenProperties_2(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public Behaviour_t1437897464
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_2;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_3;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_2)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_3() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_3)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_3() const { return ___ambisonicExtension_3; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_3() { return &___ambisonicExtension_3; }
	inline void set_ambisonicExtension_3(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_3 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef SPRITERENDERER_T3235626157_H
#define SPRITERENDERER_T3235626157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3235626157  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T3235626157_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef TUTORIALCONTROLLER_T1549000916_H
#define TUTORIALCONTROLLER_T1549000916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TutorialController
struct  TutorialController_t1549000916  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TUTORIALCONTROLLER_T1549000916_H
#ifndef SWIPEMANAGER_T2369055733_H
#define SWIPEMANAGER_T2369055733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SwipeManager
struct  SwipeManager_t2369055733  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject SwipeManager::topPanel
	GameObject_t1113636619 * ___topPanel_2;
	// UnityEngine.UI.Image SwipeManager::topPanelImage
	Image_t2670269651 * ___topPanelImage_3;
	// UnityEngine.UI.Text SwipeManager::topLabel
	Text_t1901882714 * ___topLabel_4;
	// UnityEngine.UI.Image SwipeManager::topPanelBackground
	Image_t2670269651 * ___topPanelBackground_5;
	// UnityEngine.GameObject SwipeManager::bottomPanel
	GameObject_t1113636619 * ___bottomPanel_6;
	// UnityEngine.UI.Image SwipeManager::bottomPanelImage
	Image_t2670269651 * ___bottomPanelImage_7;
	// UnityEngine.UI.Text SwipeManager::bottomLabel
	Text_t1901882714 * ___bottomLabel_8;
	// UnityEngine.UI.Image SwipeManager::bottomPanelBackground
	Image_t2670269651 * ___bottomPanelBackground_9;
	// MatchPanel SwipeManager::matchPanel
	MatchPanel_t3284707298 * ___matchPanel_10;
	// UnityEngine.Sprite[] SwipeManager::dudes
	SpriteU5BU5D_t2581906349* ___dudes_11;
	// System.Boolean SwipeManager::animating
	bool ___animating_12;
	// System.String SwipeManager::topName
	String_t* ___topName_13;
	// System.String SwipeManager::bottomName
	String_t* ___bottomName_14;

public:
	inline static int32_t get_offset_of_topPanel_2() { return static_cast<int32_t>(offsetof(SwipeManager_t2369055733, ___topPanel_2)); }
	inline GameObject_t1113636619 * get_topPanel_2() const { return ___topPanel_2; }
	inline GameObject_t1113636619 ** get_address_of_topPanel_2() { return &___topPanel_2; }
	inline void set_topPanel_2(GameObject_t1113636619 * value)
	{
		___topPanel_2 = value;
		Il2CppCodeGenWriteBarrier((&___topPanel_2), value);
	}

	inline static int32_t get_offset_of_topPanelImage_3() { return static_cast<int32_t>(offsetof(SwipeManager_t2369055733, ___topPanelImage_3)); }
	inline Image_t2670269651 * get_topPanelImage_3() const { return ___topPanelImage_3; }
	inline Image_t2670269651 ** get_address_of_topPanelImage_3() { return &___topPanelImage_3; }
	inline void set_topPanelImage_3(Image_t2670269651 * value)
	{
		___topPanelImage_3 = value;
		Il2CppCodeGenWriteBarrier((&___topPanelImage_3), value);
	}

	inline static int32_t get_offset_of_topLabel_4() { return static_cast<int32_t>(offsetof(SwipeManager_t2369055733, ___topLabel_4)); }
	inline Text_t1901882714 * get_topLabel_4() const { return ___topLabel_4; }
	inline Text_t1901882714 ** get_address_of_topLabel_4() { return &___topLabel_4; }
	inline void set_topLabel_4(Text_t1901882714 * value)
	{
		___topLabel_4 = value;
		Il2CppCodeGenWriteBarrier((&___topLabel_4), value);
	}

	inline static int32_t get_offset_of_topPanelBackground_5() { return static_cast<int32_t>(offsetof(SwipeManager_t2369055733, ___topPanelBackground_5)); }
	inline Image_t2670269651 * get_topPanelBackground_5() const { return ___topPanelBackground_5; }
	inline Image_t2670269651 ** get_address_of_topPanelBackground_5() { return &___topPanelBackground_5; }
	inline void set_topPanelBackground_5(Image_t2670269651 * value)
	{
		___topPanelBackground_5 = value;
		Il2CppCodeGenWriteBarrier((&___topPanelBackground_5), value);
	}

	inline static int32_t get_offset_of_bottomPanel_6() { return static_cast<int32_t>(offsetof(SwipeManager_t2369055733, ___bottomPanel_6)); }
	inline GameObject_t1113636619 * get_bottomPanel_6() const { return ___bottomPanel_6; }
	inline GameObject_t1113636619 ** get_address_of_bottomPanel_6() { return &___bottomPanel_6; }
	inline void set_bottomPanel_6(GameObject_t1113636619 * value)
	{
		___bottomPanel_6 = value;
		Il2CppCodeGenWriteBarrier((&___bottomPanel_6), value);
	}

	inline static int32_t get_offset_of_bottomPanelImage_7() { return static_cast<int32_t>(offsetof(SwipeManager_t2369055733, ___bottomPanelImage_7)); }
	inline Image_t2670269651 * get_bottomPanelImage_7() const { return ___bottomPanelImage_7; }
	inline Image_t2670269651 ** get_address_of_bottomPanelImage_7() { return &___bottomPanelImage_7; }
	inline void set_bottomPanelImage_7(Image_t2670269651 * value)
	{
		___bottomPanelImage_7 = value;
		Il2CppCodeGenWriteBarrier((&___bottomPanelImage_7), value);
	}

	inline static int32_t get_offset_of_bottomLabel_8() { return static_cast<int32_t>(offsetof(SwipeManager_t2369055733, ___bottomLabel_8)); }
	inline Text_t1901882714 * get_bottomLabel_8() const { return ___bottomLabel_8; }
	inline Text_t1901882714 ** get_address_of_bottomLabel_8() { return &___bottomLabel_8; }
	inline void set_bottomLabel_8(Text_t1901882714 * value)
	{
		___bottomLabel_8 = value;
		Il2CppCodeGenWriteBarrier((&___bottomLabel_8), value);
	}

	inline static int32_t get_offset_of_bottomPanelBackground_9() { return static_cast<int32_t>(offsetof(SwipeManager_t2369055733, ___bottomPanelBackground_9)); }
	inline Image_t2670269651 * get_bottomPanelBackground_9() const { return ___bottomPanelBackground_9; }
	inline Image_t2670269651 ** get_address_of_bottomPanelBackground_9() { return &___bottomPanelBackground_9; }
	inline void set_bottomPanelBackground_9(Image_t2670269651 * value)
	{
		___bottomPanelBackground_9 = value;
		Il2CppCodeGenWriteBarrier((&___bottomPanelBackground_9), value);
	}

	inline static int32_t get_offset_of_matchPanel_10() { return static_cast<int32_t>(offsetof(SwipeManager_t2369055733, ___matchPanel_10)); }
	inline MatchPanel_t3284707298 * get_matchPanel_10() const { return ___matchPanel_10; }
	inline MatchPanel_t3284707298 ** get_address_of_matchPanel_10() { return &___matchPanel_10; }
	inline void set_matchPanel_10(MatchPanel_t3284707298 * value)
	{
		___matchPanel_10 = value;
		Il2CppCodeGenWriteBarrier((&___matchPanel_10), value);
	}

	inline static int32_t get_offset_of_dudes_11() { return static_cast<int32_t>(offsetof(SwipeManager_t2369055733, ___dudes_11)); }
	inline SpriteU5BU5D_t2581906349* get_dudes_11() const { return ___dudes_11; }
	inline SpriteU5BU5D_t2581906349** get_address_of_dudes_11() { return &___dudes_11; }
	inline void set_dudes_11(SpriteU5BU5D_t2581906349* value)
	{
		___dudes_11 = value;
		Il2CppCodeGenWriteBarrier((&___dudes_11), value);
	}

	inline static int32_t get_offset_of_animating_12() { return static_cast<int32_t>(offsetof(SwipeManager_t2369055733, ___animating_12)); }
	inline bool get_animating_12() const { return ___animating_12; }
	inline bool* get_address_of_animating_12() { return &___animating_12; }
	inline void set_animating_12(bool value)
	{
		___animating_12 = value;
	}

	inline static int32_t get_offset_of_topName_13() { return static_cast<int32_t>(offsetof(SwipeManager_t2369055733, ___topName_13)); }
	inline String_t* get_topName_13() const { return ___topName_13; }
	inline String_t** get_address_of_topName_13() { return &___topName_13; }
	inline void set_topName_13(String_t* value)
	{
		___topName_13 = value;
		Il2CppCodeGenWriteBarrier((&___topName_13), value);
	}

	inline static int32_t get_offset_of_bottomName_14() { return static_cast<int32_t>(offsetof(SwipeManager_t2369055733, ___bottomName_14)); }
	inline String_t* get_bottomName_14() const { return ___bottomName_14; }
	inline String_t** get_address_of_bottomName_14() { return &___bottomName_14; }
	inline void set_bottomName_14(String_t* value)
	{
		___bottomName_14 = value;
		Il2CppCodeGenWriteBarrier((&___bottomName_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWIPEMANAGER_T2369055733_H
#ifndef PLAYERINPUT_T2164750815_H
#define PLAYERINPUT_T2164750815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FighterInput.PlayerInput
struct  PlayerInput_t2164750815  : public MonoBehaviour_t3962482529
{
public:
	// FightController FighterInput.PlayerInput::controller
	FightController_t483979242 * ___controller_2;
	// System.Boolean FighterInput.PlayerInput::interruptedBlock
	bool ___interruptedBlock_3;

public:
	inline static int32_t get_offset_of_controller_2() { return static_cast<int32_t>(offsetof(PlayerInput_t2164750815, ___controller_2)); }
	inline FightController_t483979242 * get_controller_2() const { return ___controller_2; }
	inline FightController_t483979242 ** get_address_of_controller_2() { return &___controller_2; }
	inline void set_controller_2(FightController_t483979242 * value)
	{
		___controller_2 = value;
		Il2CppCodeGenWriteBarrier((&___controller_2), value);
	}

	inline static int32_t get_offset_of_interruptedBlock_3() { return static_cast<int32_t>(offsetof(PlayerInput_t2164750815, ___interruptedBlock_3)); }
	inline bool get_interruptedBlock_3() const { return ___interruptedBlock_3; }
	inline bool* get_address_of_interruptedBlock_3() { return &___interruptedBlock_3; }
	inline void set_interruptedBlock_3(bool value)
	{
		___interruptedBlock_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERINPUT_T2164750815_H
#ifndef MATCHPANEL_T3284707298_H
#define MATCHPANEL_T3284707298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MatchPanel
struct  MatchPanel_t3284707298  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text MatchPanel::subtitleLabel
	Text_t1901882714 * ___subtitleLabel_2;
	// UnityEngine.UI.Image MatchPanel::background
	Image_t2670269651 * ___background_3;
	// UnityEngine.UI.Image MatchPanel::dudeImage
	Image_t2670269651 * ___dudeImage_4;
	// UnityEngine.RectTransform MatchPanel::rectTransform
	RectTransform_t3704657025 * ___rectTransform_5;
	// System.Boolean MatchPanel::shown
	bool ___shown_6;
	// System.String MatchPanel::oponentName
	String_t* ___oponentName_7;

public:
	inline static int32_t get_offset_of_subtitleLabel_2() { return static_cast<int32_t>(offsetof(MatchPanel_t3284707298, ___subtitleLabel_2)); }
	inline Text_t1901882714 * get_subtitleLabel_2() const { return ___subtitleLabel_2; }
	inline Text_t1901882714 ** get_address_of_subtitleLabel_2() { return &___subtitleLabel_2; }
	inline void set_subtitleLabel_2(Text_t1901882714 * value)
	{
		___subtitleLabel_2 = value;
		Il2CppCodeGenWriteBarrier((&___subtitleLabel_2), value);
	}

	inline static int32_t get_offset_of_background_3() { return static_cast<int32_t>(offsetof(MatchPanel_t3284707298, ___background_3)); }
	inline Image_t2670269651 * get_background_3() const { return ___background_3; }
	inline Image_t2670269651 ** get_address_of_background_3() { return &___background_3; }
	inline void set_background_3(Image_t2670269651 * value)
	{
		___background_3 = value;
		Il2CppCodeGenWriteBarrier((&___background_3), value);
	}

	inline static int32_t get_offset_of_dudeImage_4() { return static_cast<int32_t>(offsetof(MatchPanel_t3284707298, ___dudeImage_4)); }
	inline Image_t2670269651 * get_dudeImage_4() const { return ___dudeImage_4; }
	inline Image_t2670269651 ** get_address_of_dudeImage_4() { return &___dudeImage_4; }
	inline void set_dudeImage_4(Image_t2670269651 * value)
	{
		___dudeImage_4 = value;
		Il2CppCodeGenWriteBarrier((&___dudeImage_4), value);
	}

	inline static int32_t get_offset_of_rectTransform_5() { return static_cast<int32_t>(offsetof(MatchPanel_t3284707298, ___rectTransform_5)); }
	inline RectTransform_t3704657025 * get_rectTransform_5() const { return ___rectTransform_5; }
	inline RectTransform_t3704657025 ** get_address_of_rectTransform_5() { return &___rectTransform_5; }
	inline void set_rectTransform_5(RectTransform_t3704657025 * value)
	{
		___rectTransform_5 = value;
		Il2CppCodeGenWriteBarrier((&___rectTransform_5), value);
	}

	inline static int32_t get_offset_of_shown_6() { return static_cast<int32_t>(offsetof(MatchPanel_t3284707298, ___shown_6)); }
	inline bool get_shown_6() const { return ___shown_6; }
	inline bool* get_address_of_shown_6() { return &___shown_6; }
	inline void set_shown_6(bool value)
	{
		___shown_6 = value;
	}

	inline static int32_t get_offset_of_oponentName_7() { return static_cast<int32_t>(offsetof(MatchPanel_t3284707298, ___oponentName_7)); }
	inline String_t* get_oponentName_7() const { return ___oponentName_7; }
	inline String_t** get_address_of_oponentName_7() { return &___oponentName_7; }
	inline void set_oponentName_7(String_t* value)
	{
		___oponentName_7 = value;
		Il2CppCodeGenWriteBarrier((&___oponentName_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCHPANEL_T3284707298_H
#ifndef FIGHTERRANDOMIZER_T1174288154_H
#define FIGHTERRANDOMIZER_T1174288154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FighterRandomizer
struct  FighterRandomizer_t1174288154  : public MonoBehaviour_t3962482529
{
public:
	// StanceSprites[] FighterRandomizer::pants
	StanceSpritesU5BU5D_t3743853223* ___pants_2;
	// StanceSprites[] FighterRandomizer::tops
	StanceSpritesU5BU5D_t3743853223* ___tops_3;
	// StanceSprites[] FighterRandomizer::hair
	StanceSpritesU5BU5D_t3743853223* ___hair_4;
	// UnityEngine.Color[] FighterRandomizer::skinColors
	ColorU5BU5D_t941916413* ___skinColors_5;
	// UnityEngine.Color[] FighterRandomizer::clothesColors
	ColorU5BU5D_t941916413* ___clothesColors_6;
	// UnityEngine.Color[] FighterRandomizer::hairColors
	ColorU5BU5D_t941916413* ___hairColors_7;
	// Poser FighterRandomizer::player
	Poser_t2653926573 * ___player_8;
	// Poser FighterRandomizer::computer
	Poser_t2653926573 * ___computer_9;

public:
	inline static int32_t get_offset_of_pants_2() { return static_cast<int32_t>(offsetof(FighterRandomizer_t1174288154, ___pants_2)); }
	inline StanceSpritesU5BU5D_t3743853223* get_pants_2() const { return ___pants_2; }
	inline StanceSpritesU5BU5D_t3743853223** get_address_of_pants_2() { return &___pants_2; }
	inline void set_pants_2(StanceSpritesU5BU5D_t3743853223* value)
	{
		___pants_2 = value;
		Il2CppCodeGenWriteBarrier((&___pants_2), value);
	}

	inline static int32_t get_offset_of_tops_3() { return static_cast<int32_t>(offsetof(FighterRandomizer_t1174288154, ___tops_3)); }
	inline StanceSpritesU5BU5D_t3743853223* get_tops_3() const { return ___tops_3; }
	inline StanceSpritesU5BU5D_t3743853223** get_address_of_tops_3() { return &___tops_3; }
	inline void set_tops_3(StanceSpritesU5BU5D_t3743853223* value)
	{
		___tops_3 = value;
		Il2CppCodeGenWriteBarrier((&___tops_3), value);
	}

	inline static int32_t get_offset_of_hair_4() { return static_cast<int32_t>(offsetof(FighterRandomizer_t1174288154, ___hair_4)); }
	inline StanceSpritesU5BU5D_t3743853223* get_hair_4() const { return ___hair_4; }
	inline StanceSpritesU5BU5D_t3743853223** get_address_of_hair_4() { return &___hair_4; }
	inline void set_hair_4(StanceSpritesU5BU5D_t3743853223* value)
	{
		___hair_4 = value;
		Il2CppCodeGenWriteBarrier((&___hair_4), value);
	}

	inline static int32_t get_offset_of_skinColors_5() { return static_cast<int32_t>(offsetof(FighterRandomizer_t1174288154, ___skinColors_5)); }
	inline ColorU5BU5D_t941916413* get_skinColors_5() const { return ___skinColors_5; }
	inline ColorU5BU5D_t941916413** get_address_of_skinColors_5() { return &___skinColors_5; }
	inline void set_skinColors_5(ColorU5BU5D_t941916413* value)
	{
		___skinColors_5 = value;
		Il2CppCodeGenWriteBarrier((&___skinColors_5), value);
	}

	inline static int32_t get_offset_of_clothesColors_6() { return static_cast<int32_t>(offsetof(FighterRandomizer_t1174288154, ___clothesColors_6)); }
	inline ColorU5BU5D_t941916413* get_clothesColors_6() const { return ___clothesColors_6; }
	inline ColorU5BU5D_t941916413** get_address_of_clothesColors_6() { return &___clothesColors_6; }
	inline void set_clothesColors_6(ColorU5BU5D_t941916413* value)
	{
		___clothesColors_6 = value;
		Il2CppCodeGenWriteBarrier((&___clothesColors_6), value);
	}

	inline static int32_t get_offset_of_hairColors_7() { return static_cast<int32_t>(offsetof(FighterRandomizer_t1174288154, ___hairColors_7)); }
	inline ColorU5BU5D_t941916413* get_hairColors_7() const { return ___hairColors_7; }
	inline ColorU5BU5D_t941916413** get_address_of_hairColors_7() { return &___hairColors_7; }
	inline void set_hairColors_7(ColorU5BU5D_t941916413* value)
	{
		___hairColors_7 = value;
		Il2CppCodeGenWriteBarrier((&___hairColors_7), value);
	}

	inline static int32_t get_offset_of_player_8() { return static_cast<int32_t>(offsetof(FighterRandomizer_t1174288154, ___player_8)); }
	inline Poser_t2653926573 * get_player_8() const { return ___player_8; }
	inline Poser_t2653926573 ** get_address_of_player_8() { return &___player_8; }
	inline void set_player_8(Poser_t2653926573 * value)
	{
		___player_8 = value;
		Il2CppCodeGenWriteBarrier((&___player_8), value);
	}

	inline static int32_t get_offset_of_computer_9() { return static_cast<int32_t>(offsetof(FighterRandomizer_t1174288154, ___computer_9)); }
	inline Poser_t2653926573 * get_computer_9() const { return ___computer_9; }
	inline Poser_t2653926573 ** get_address_of_computer_9() { return &___computer_9; }
	inline void set_computer_9(Poser_t2653926573 * value)
	{
		___computer_9 = value;
		Il2CppCodeGenWriteBarrier((&___computer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIGHTERRANDOMIZER_T1174288154_H
#ifndef COMPUTERINPUT_T965195488_H
#define COMPUTERINPUT_T965195488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FighterInput.ComputerInput
struct  ComputerInput_t965195488  : public MonoBehaviour_t3962482529
{
public:
	// FighterInput.Move[][] FighterInput.ComputerInput::combos
	MoveU5BU5DU5BU5D_t1831594223* ___combos_2;
	// FighterInput.Move[] FighterInput.ComputerInput::idleCombo
	MoveU5BU5D_t3649037098* ___idleCombo_3;
	// FightController FighterInput.ComputerInput::controller
	FightController_t483979242 * ___controller_4;
	// FighterInput.Move[] FighterInput.ComputerInput::currentCombo
	MoveU5BU5D_t3649037098* ___currentCombo_5;
	// System.Int32 FighterInput.ComputerInput::comboIndex
	int32_t ___comboIndex_6;
	// System.Single FighterInput.ComputerInput::cooldown
	float ___cooldown_7;

public:
	inline static int32_t get_offset_of_combos_2() { return static_cast<int32_t>(offsetof(ComputerInput_t965195488, ___combos_2)); }
	inline MoveU5BU5DU5BU5D_t1831594223* get_combos_2() const { return ___combos_2; }
	inline MoveU5BU5DU5BU5D_t1831594223** get_address_of_combos_2() { return &___combos_2; }
	inline void set_combos_2(MoveU5BU5DU5BU5D_t1831594223* value)
	{
		___combos_2 = value;
		Il2CppCodeGenWriteBarrier((&___combos_2), value);
	}

	inline static int32_t get_offset_of_idleCombo_3() { return static_cast<int32_t>(offsetof(ComputerInput_t965195488, ___idleCombo_3)); }
	inline MoveU5BU5D_t3649037098* get_idleCombo_3() const { return ___idleCombo_3; }
	inline MoveU5BU5D_t3649037098** get_address_of_idleCombo_3() { return &___idleCombo_3; }
	inline void set_idleCombo_3(MoveU5BU5D_t3649037098* value)
	{
		___idleCombo_3 = value;
		Il2CppCodeGenWriteBarrier((&___idleCombo_3), value);
	}

	inline static int32_t get_offset_of_controller_4() { return static_cast<int32_t>(offsetof(ComputerInput_t965195488, ___controller_4)); }
	inline FightController_t483979242 * get_controller_4() const { return ___controller_4; }
	inline FightController_t483979242 ** get_address_of_controller_4() { return &___controller_4; }
	inline void set_controller_4(FightController_t483979242 * value)
	{
		___controller_4 = value;
		Il2CppCodeGenWriteBarrier((&___controller_4), value);
	}

	inline static int32_t get_offset_of_currentCombo_5() { return static_cast<int32_t>(offsetof(ComputerInput_t965195488, ___currentCombo_5)); }
	inline MoveU5BU5D_t3649037098* get_currentCombo_5() const { return ___currentCombo_5; }
	inline MoveU5BU5D_t3649037098** get_address_of_currentCombo_5() { return &___currentCombo_5; }
	inline void set_currentCombo_5(MoveU5BU5D_t3649037098* value)
	{
		___currentCombo_5 = value;
		Il2CppCodeGenWriteBarrier((&___currentCombo_5), value);
	}

	inline static int32_t get_offset_of_comboIndex_6() { return static_cast<int32_t>(offsetof(ComputerInput_t965195488, ___comboIndex_6)); }
	inline int32_t get_comboIndex_6() const { return ___comboIndex_6; }
	inline int32_t* get_address_of_comboIndex_6() { return &___comboIndex_6; }
	inline void set_comboIndex_6(int32_t value)
	{
		___comboIndex_6 = value;
	}

	inline static int32_t get_offset_of_cooldown_7() { return static_cast<int32_t>(offsetof(ComputerInput_t965195488, ___cooldown_7)); }
	inline float get_cooldown_7() const { return ___cooldown_7; }
	inline float* get_address_of_cooldown_7() { return &___cooldown_7; }
	inline void set_cooldown_7(float value)
	{
		___cooldown_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPUTERINPUT_T965195488_H
#ifndef PROGRESSBAR_T1074804577_H
#define PROGRESSBAR_T1074804577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProgressBar
struct  ProgressBar_t1074804577  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.RectTransform ProgressBar::rectTransform
	RectTransform_t3704657025 * ___rectTransform_2;

public:
	inline static int32_t get_offset_of_rectTransform_2() { return static_cast<int32_t>(offsetof(ProgressBar_t1074804577, ___rectTransform_2)); }
	inline RectTransform_t3704657025 * get_rectTransform_2() const { return ___rectTransform_2; }
	inline RectTransform_t3704657025 ** get_address_of_rectTransform_2() { return &___rectTransform_2; }
	inline void set_rectTransform_2(RectTransform_t3704657025 * value)
	{
		___rectTransform_2 = value;
		Il2CppCodeGenWriteBarrier((&___rectTransform_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROGRESSBAR_T1074804577_H
#ifndef POSER_T2653926573_H
#define POSER_T2653926573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Poser
struct  Poser_t2653926573  : public MonoBehaviour_t3962482529
{
public:
	// StanceSprites Poser::manSprites
	StanceSprites_t3454544338 * ___manSprites_2;
	// UnityEngine.SpriteRenderer Poser::manSpriteRenderer
	SpriteRenderer_t3235626157 * ___manSpriteRenderer_3;
	// StanceSprites Poser::pantsSprites
	StanceSprites_t3454544338 * ___pantsSprites_4;
	// UnityEngine.SpriteRenderer Poser::pantsSpriteRenderer
	SpriteRenderer_t3235626157 * ___pantsSpriteRenderer_5;
	// StanceSprites Poser::shirtSprites
	StanceSprites_t3454544338 * ___shirtSprites_6;
	// UnityEngine.SpriteRenderer Poser::shirtSpriteRenderer
	SpriteRenderer_t3235626157 * ___shirtSpriteRenderer_7;
	// StanceSprites Poser::hairSprites
	StanceSprites_t3454544338 * ___hairSprites_8;
	// UnityEngine.SpriteRenderer Poser::hairSpriteRenderer
	SpriteRenderer_t3235626157 * ___hairSpriteRenderer_9;
	// UnityEngine.Coroutine Poser::stanceTimeout
	Coroutine_t3829159415 * ___stanceTimeout_10;
	// System.Nullable`1<Poser/Stance> Poser::interruptedStance
	Nullable_1_t2067934930  ___interruptedStance_11;
	// UnityEngine.Coroutine Poser::interruptCoroutine
	Coroutine_t3829159415 * ___interruptCoroutine_12;
	// Poser/Stance Poser::stance
	int32_t ___stance_13;

public:
	inline static int32_t get_offset_of_manSprites_2() { return static_cast<int32_t>(offsetof(Poser_t2653926573, ___manSprites_2)); }
	inline StanceSprites_t3454544338 * get_manSprites_2() const { return ___manSprites_2; }
	inline StanceSprites_t3454544338 ** get_address_of_manSprites_2() { return &___manSprites_2; }
	inline void set_manSprites_2(StanceSprites_t3454544338 * value)
	{
		___manSprites_2 = value;
		Il2CppCodeGenWriteBarrier((&___manSprites_2), value);
	}

	inline static int32_t get_offset_of_manSpriteRenderer_3() { return static_cast<int32_t>(offsetof(Poser_t2653926573, ___manSpriteRenderer_3)); }
	inline SpriteRenderer_t3235626157 * get_manSpriteRenderer_3() const { return ___manSpriteRenderer_3; }
	inline SpriteRenderer_t3235626157 ** get_address_of_manSpriteRenderer_3() { return &___manSpriteRenderer_3; }
	inline void set_manSpriteRenderer_3(SpriteRenderer_t3235626157 * value)
	{
		___manSpriteRenderer_3 = value;
		Il2CppCodeGenWriteBarrier((&___manSpriteRenderer_3), value);
	}

	inline static int32_t get_offset_of_pantsSprites_4() { return static_cast<int32_t>(offsetof(Poser_t2653926573, ___pantsSprites_4)); }
	inline StanceSprites_t3454544338 * get_pantsSprites_4() const { return ___pantsSprites_4; }
	inline StanceSprites_t3454544338 ** get_address_of_pantsSprites_4() { return &___pantsSprites_4; }
	inline void set_pantsSprites_4(StanceSprites_t3454544338 * value)
	{
		___pantsSprites_4 = value;
		Il2CppCodeGenWriteBarrier((&___pantsSprites_4), value);
	}

	inline static int32_t get_offset_of_pantsSpriteRenderer_5() { return static_cast<int32_t>(offsetof(Poser_t2653926573, ___pantsSpriteRenderer_5)); }
	inline SpriteRenderer_t3235626157 * get_pantsSpriteRenderer_5() const { return ___pantsSpriteRenderer_5; }
	inline SpriteRenderer_t3235626157 ** get_address_of_pantsSpriteRenderer_5() { return &___pantsSpriteRenderer_5; }
	inline void set_pantsSpriteRenderer_5(SpriteRenderer_t3235626157 * value)
	{
		___pantsSpriteRenderer_5 = value;
		Il2CppCodeGenWriteBarrier((&___pantsSpriteRenderer_5), value);
	}

	inline static int32_t get_offset_of_shirtSprites_6() { return static_cast<int32_t>(offsetof(Poser_t2653926573, ___shirtSprites_6)); }
	inline StanceSprites_t3454544338 * get_shirtSprites_6() const { return ___shirtSprites_6; }
	inline StanceSprites_t3454544338 ** get_address_of_shirtSprites_6() { return &___shirtSprites_6; }
	inline void set_shirtSprites_6(StanceSprites_t3454544338 * value)
	{
		___shirtSprites_6 = value;
		Il2CppCodeGenWriteBarrier((&___shirtSprites_6), value);
	}

	inline static int32_t get_offset_of_shirtSpriteRenderer_7() { return static_cast<int32_t>(offsetof(Poser_t2653926573, ___shirtSpriteRenderer_7)); }
	inline SpriteRenderer_t3235626157 * get_shirtSpriteRenderer_7() const { return ___shirtSpriteRenderer_7; }
	inline SpriteRenderer_t3235626157 ** get_address_of_shirtSpriteRenderer_7() { return &___shirtSpriteRenderer_7; }
	inline void set_shirtSpriteRenderer_7(SpriteRenderer_t3235626157 * value)
	{
		___shirtSpriteRenderer_7 = value;
		Il2CppCodeGenWriteBarrier((&___shirtSpriteRenderer_7), value);
	}

	inline static int32_t get_offset_of_hairSprites_8() { return static_cast<int32_t>(offsetof(Poser_t2653926573, ___hairSprites_8)); }
	inline StanceSprites_t3454544338 * get_hairSprites_8() const { return ___hairSprites_8; }
	inline StanceSprites_t3454544338 ** get_address_of_hairSprites_8() { return &___hairSprites_8; }
	inline void set_hairSprites_8(StanceSprites_t3454544338 * value)
	{
		___hairSprites_8 = value;
		Il2CppCodeGenWriteBarrier((&___hairSprites_8), value);
	}

	inline static int32_t get_offset_of_hairSpriteRenderer_9() { return static_cast<int32_t>(offsetof(Poser_t2653926573, ___hairSpriteRenderer_9)); }
	inline SpriteRenderer_t3235626157 * get_hairSpriteRenderer_9() const { return ___hairSpriteRenderer_9; }
	inline SpriteRenderer_t3235626157 ** get_address_of_hairSpriteRenderer_9() { return &___hairSpriteRenderer_9; }
	inline void set_hairSpriteRenderer_9(SpriteRenderer_t3235626157 * value)
	{
		___hairSpriteRenderer_9 = value;
		Il2CppCodeGenWriteBarrier((&___hairSpriteRenderer_9), value);
	}

	inline static int32_t get_offset_of_stanceTimeout_10() { return static_cast<int32_t>(offsetof(Poser_t2653926573, ___stanceTimeout_10)); }
	inline Coroutine_t3829159415 * get_stanceTimeout_10() const { return ___stanceTimeout_10; }
	inline Coroutine_t3829159415 ** get_address_of_stanceTimeout_10() { return &___stanceTimeout_10; }
	inline void set_stanceTimeout_10(Coroutine_t3829159415 * value)
	{
		___stanceTimeout_10 = value;
		Il2CppCodeGenWriteBarrier((&___stanceTimeout_10), value);
	}

	inline static int32_t get_offset_of_interruptedStance_11() { return static_cast<int32_t>(offsetof(Poser_t2653926573, ___interruptedStance_11)); }
	inline Nullable_1_t2067934930  get_interruptedStance_11() const { return ___interruptedStance_11; }
	inline Nullable_1_t2067934930 * get_address_of_interruptedStance_11() { return &___interruptedStance_11; }
	inline void set_interruptedStance_11(Nullable_1_t2067934930  value)
	{
		___interruptedStance_11 = value;
	}

	inline static int32_t get_offset_of_interruptCoroutine_12() { return static_cast<int32_t>(offsetof(Poser_t2653926573, ___interruptCoroutine_12)); }
	inline Coroutine_t3829159415 * get_interruptCoroutine_12() const { return ___interruptCoroutine_12; }
	inline Coroutine_t3829159415 ** get_address_of_interruptCoroutine_12() { return &___interruptCoroutine_12; }
	inline void set_interruptCoroutine_12(Coroutine_t3829159415 * value)
	{
		___interruptCoroutine_12 = value;
		Il2CppCodeGenWriteBarrier((&___interruptCoroutine_12), value);
	}

	inline static int32_t get_offset_of_stance_13() { return static_cast<int32_t>(offsetof(Poser_t2653926573, ___stance_13)); }
	inline int32_t get_stance_13() const { return ___stance_13; }
	inline int32_t* get_address_of_stance_13() { return &___stance_13; }
	inline void set_stance_13(int32_t value)
	{
		___stance_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSER_T2653926573_H
#ifndef FIGHTERS_T808620833_H
#define FIGHTERS_T808620833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fighters
struct  Fighters_t808620833  : public MonoBehaviour_t3962482529
{
public:
	// Poser Fighters::playerPoser
	Poser_t2653926573 * ___playerPoser_2;
	// ProgressBar Fighters::playerHealthBar
	ProgressBar_t1074804577 * ___playerHealthBar_3;
	// ProgressBar Fighters::playerStaminaBar
	ProgressBar_t1074804577 * ___playerStaminaBar_4;
	// Poser Fighters::computerPoser
	Poser_t2653926573 * ___computerPoser_5;
	// ProgressBar Fighters::computerHealthBar
	ProgressBar_t1074804577 * ___computerHealthBar_6;
	// ProgressBar Fighters::computerStaminaBar
	ProgressBar_t1074804577 * ___computerStaminaBar_7;
	// Fighter Fighters::player
	Fighter_t1911001889 * ___player_8;
	// Fighter Fighters::computer
	Fighter_t1911001889 * ___computer_9;

public:
	inline static int32_t get_offset_of_playerPoser_2() { return static_cast<int32_t>(offsetof(Fighters_t808620833, ___playerPoser_2)); }
	inline Poser_t2653926573 * get_playerPoser_2() const { return ___playerPoser_2; }
	inline Poser_t2653926573 ** get_address_of_playerPoser_2() { return &___playerPoser_2; }
	inline void set_playerPoser_2(Poser_t2653926573 * value)
	{
		___playerPoser_2 = value;
		Il2CppCodeGenWriteBarrier((&___playerPoser_2), value);
	}

	inline static int32_t get_offset_of_playerHealthBar_3() { return static_cast<int32_t>(offsetof(Fighters_t808620833, ___playerHealthBar_3)); }
	inline ProgressBar_t1074804577 * get_playerHealthBar_3() const { return ___playerHealthBar_3; }
	inline ProgressBar_t1074804577 ** get_address_of_playerHealthBar_3() { return &___playerHealthBar_3; }
	inline void set_playerHealthBar_3(ProgressBar_t1074804577 * value)
	{
		___playerHealthBar_3 = value;
		Il2CppCodeGenWriteBarrier((&___playerHealthBar_3), value);
	}

	inline static int32_t get_offset_of_playerStaminaBar_4() { return static_cast<int32_t>(offsetof(Fighters_t808620833, ___playerStaminaBar_4)); }
	inline ProgressBar_t1074804577 * get_playerStaminaBar_4() const { return ___playerStaminaBar_4; }
	inline ProgressBar_t1074804577 ** get_address_of_playerStaminaBar_4() { return &___playerStaminaBar_4; }
	inline void set_playerStaminaBar_4(ProgressBar_t1074804577 * value)
	{
		___playerStaminaBar_4 = value;
		Il2CppCodeGenWriteBarrier((&___playerStaminaBar_4), value);
	}

	inline static int32_t get_offset_of_computerPoser_5() { return static_cast<int32_t>(offsetof(Fighters_t808620833, ___computerPoser_5)); }
	inline Poser_t2653926573 * get_computerPoser_5() const { return ___computerPoser_5; }
	inline Poser_t2653926573 ** get_address_of_computerPoser_5() { return &___computerPoser_5; }
	inline void set_computerPoser_5(Poser_t2653926573 * value)
	{
		___computerPoser_5 = value;
		Il2CppCodeGenWriteBarrier((&___computerPoser_5), value);
	}

	inline static int32_t get_offset_of_computerHealthBar_6() { return static_cast<int32_t>(offsetof(Fighters_t808620833, ___computerHealthBar_6)); }
	inline ProgressBar_t1074804577 * get_computerHealthBar_6() const { return ___computerHealthBar_6; }
	inline ProgressBar_t1074804577 ** get_address_of_computerHealthBar_6() { return &___computerHealthBar_6; }
	inline void set_computerHealthBar_6(ProgressBar_t1074804577 * value)
	{
		___computerHealthBar_6 = value;
		Il2CppCodeGenWriteBarrier((&___computerHealthBar_6), value);
	}

	inline static int32_t get_offset_of_computerStaminaBar_7() { return static_cast<int32_t>(offsetof(Fighters_t808620833, ___computerStaminaBar_7)); }
	inline ProgressBar_t1074804577 * get_computerStaminaBar_7() const { return ___computerStaminaBar_7; }
	inline ProgressBar_t1074804577 ** get_address_of_computerStaminaBar_7() { return &___computerStaminaBar_7; }
	inline void set_computerStaminaBar_7(ProgressBar_t1074804577 * value)
	{
		___computerStaminaBar_7 = value;
		Il2CppCodeGenWriteBarrier((&___computerStaminaBar_7), value);
	}

	inline static int32_t get_offset_of_player_8() { return static_cast<int32_t>(offsetof(Fighters_t808620833, ___player_8)); }
	inline Fighter_t1911001889 * get_player_8() const { return ___player_8; }
	inline Fighter_t1911001889 ** get_address_of_player_8() { return &___player_8; }
	inline void set_player_8(Fighter_t1911001889 * value)
	{
		___player_8 = value;
		Il2CppCodeGenWriteBarrier((&___player_8), value);
	}

	inline static int32_t get_offset_of_computer_9() { return static_cast<int32_t>(offsetof(Fighters_t808620833, ___computer_9)); }
	inline Fighter_t1911001889 * get_computer_9() const { return ___computer_9; }
	inline Fighter_t1911001889 ** get_address_of_computer_9() { return &___computer_9; }
	inline void set_computer_9(Fighter_t1911001889 * value)
	{
		___computer_9 = value;
		Il2CppCodeGenWriteBarrier((&___computer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIGHTERS_T808620833_H
#ifndef FIGHTCONTROLLER_T483979242_H
#define FIGHTCONTROLLER_T483979242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FightController
struct  FightController_t483979242  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AudioSource FightController::audioSource
	AudioSource_t3935305588 * ___audioSource_2;
	// UnityEngine.AudioClip FightController::punchSound
	AudioClip_t3680889665 * ___punchSound_3;
	// UnityEngine.AudioClip FightController::kickSound
	AudioClip_t3680889665 * ___kickSound_4;
	// Fighters FightController::fighters
	Fighters_t808620833 * ___fighters_5;
	// System.Boolean FightController::started
	bool ___started_6;

public:
	inline static int32_t get_offset_of_audioSource_2() { return static_cast<int32_t>(offsetof(FightController_t483979242, ___audioSource_2)); }
	inline AudioSource_t3935305588 * get_audioSource_2() const { return ___audioSource_2; }
	inline AudioSource_t3935305588 ** get_address_of_audioSource_2() { return &___audioSource_2; }
	inline void set_audioSource_2(AudioSource_t3935305588 * value)
	{
		___audioSource_2 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_2), value);
	}

	inline static int32_t get_offset_of_punchSound_3() { return static_cast<int32_t>(offsetof(FightController_t483979242, ___punchSound_3)); }
	inline AudioClip_t3680889665 * get_punchSound_3() const { return ___punchSound_3; }
	inline AudioClip_t3680889665 ** get_address_of_punchSound_3() { return &___punchSound_3; }
	inline void set_punchSound_3(AudioClip_t3680889665 * value)
	{
		___punchSound_3 = value;
		Il2CppCodeGenWriteBarrier((&___punchSound_3), value);
	}

	inline static int32_t get_offset_of_kickSound_4() { return static_cast<int32_t>(offsetof(FightController_t483979242, ___kickSound_4)); }
	inline AudioClip_t3680889665 * get_kickSound_4() const { return ___kickSound_4; }
	inline AudioClip_t3680889665 ** get_address_of_kickSound_4() { return &___kickSound_4; }
	inline void set_kickSound_4(AudioClip_t3680889665 * value)
	{
		___kickSound_4 = value;
		Il2CppCodeGenWriteBarrier((&___kickSound_4), value);
	}

	inline static int32_t get_offset_of_fighters_5() { return static_cast<int32_t>(offsetof(FightController_t483979242, ___fighters_5)); }
	inline Fighters_t808620833 * get_fighters_5() const { return ___fighters_5; }
	inline Fighters_t808620833 ** get_address_of_fighters_5() { return &___fighters_5; }
	inline void set_fighters_5(Fighters_t808620833 * value)
	{
		___fighters_5 = value;
		Il2CppCodeGenWriteBarrier((&___fighters_5), value);
	}

	inline static int32_t get_offset_of_started_6() { return static_cast<int32_t>(offsetof(FightController_t483979242, ___started_6)); }
	inline bool get_started_6() const { return ___started_6; }
	inline bool* get_address_of_started_6() { return &___started_6; }
	inline void set_started_6(bool value)
	{
		___started_6 = value;
	}
};

struct FightController_t483979242_StaticFields
{
public:
	// System.Action FightController::<>f__am$cache0
	Action_t1264377477 * ___U3CU3Ef__amU24cache0_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_7() { return static_cast<int32_t>(offsetof(FightController_t483979242_StaticFields, ___U3CU3Ef__amU24cache0_7)); }
	inline Action_t1264377477 * get_U3CU3Ef__amU24cache0_7() const { return ___U3CU3Ef__amU24cache0_7; }
	inline Action_t1264377477 ** get_address_of_U3CU3Ef__amU24cache0_7() { return &___U3CU3Ef__amU24cache0_7; }
	inline void set_U3CU3Ef__amU24cache0_7(Action_t1264377477 * value)
	{
		___U3CU3Ef__amU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIGHTCONTROLLER_T483979242_H
#ifndef COUNTDOWN_T1688036482_H
#define COUNTDOWN_T1688036482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Countdown
struct  Countdown_t1688036482  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text Countdown::label
	Text_t1901882714 * ___label_2;

public:
	inline static int32_t get_offset_of_label_2() { return static_cast<int32_t>(offsetof(Countdown_t1688036482, ___label_2)); }
	inline Text_t1901882714 * get_label_2() const { return ___label_2; }
	inline Text_t1901882714 ** get_address_of_label_2() { return &___label_2; }
	inline void set_label_2(Text_t1901882714 * value)
	{
		___label_2 = value;
		Il2CppCodeGenWriteBarrier((&___label_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COUNTDOWN_T1688036482_H
#ifndef PHONEMANAGER_T4261849291_H
#define PHONEMANAGER_T4261849291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhoneManager
struct  PhoneManager_t4261849291  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject PhoneManager::tutorial
	GameObject_t1113636619 * ___tutorial_2;
	// UnityEngine.GameObject PhoneManager::swiping
	GameObject_t1113636619 * ___swiping_3;
	// ChatManager PhoneManager::chat
	ChatManager_t1133435335 * ___chat_4;

public:
	inline static int32_t get_offset_of_tutorial_2() { return static_cast<int32_t>(offsetof(PhoneManager_t4261849291, ___tutorial_2)); }
	inline GameObject_t1113636619 * get_tutorial_2() const { return ___tutorial_2; }
	inline GameObject_t1113636619 ** get_address_of_tutorial_2() { return &___tutorial_2; }
	inline void set_tutorial_2(GameObject_t1113636619 * value)
	{
		___tutorial_2 = value;
		Il2CppCodeGenWriteBarrier((&___tutorial_2), value);
	}

	inline static int32_t get_offset_of_swiping_3() { return static_cast<int32_t>(offsetof(PhoneManager_t4261849291, ___swiping_3)); }
	inline GameObject_t1113636619 * get_swiping_3() const { return ___swiping_3; }
	inline GameObject_t1113636619 ** get_address_of_swiping_3() { return &___swiping_3; }
	inline void set_swiping_3(GameObject_t1113636619 * value)
	{
		___swiping_3 = value;
		Il2CppCodeGenWriteBarrier((&___swiping_3), value);
	}

	inline static int32_t get_offset_of_chat_4() { return static_cast<int32_t>(offsetof(PhoneManager_t4261849291, ___chat_4)); }
	inline ChatManager_t1133435335 * get_chat_4() const { return ___chat_4; }
	inline ChatManager_t1133435335 ** get_address_of_chat_4() { return &___chat_4; }
	inline void set_chat_4(ChatManager_t1133435335 * value)
	{
		___chat_4 = value;
		Il2CppCodeGenWriteBarrier((&___chat_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHONEMANAGER_T4261849291_H
#ifndef UTILS_T1444179947_H
#define UTILS_T1444179947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils
struct  Utils_t1444179947  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct Utils_t1444179947_StaticFields
{
public:
	// UnityEngine.KeyCode Utils::punchAction2Key
	int32_t ___punchAction2Key_2;
	// UnityEngine.KeyCode Utils::kickKey
	int32_t ___kickKey_3;
	// UnityEngine.KeyCode Utils::blockPunchAction1Key
	int32_t ___blockPunchAction1Key_4;
	// UnityEngine.KeyCode Utils::blockKickKey
	int32_t ___blockKickKey_5;
	// Utils Utils::instance
	Utils_t1444179947 * ___instance_6;

public:
	inline static int32_t get_offset_of_punchAction2Key_2() { return static_cast<int32_t>(offsetof(Utils_t1444179947_StaticFields, ___punchAction2Key_2)); }
	inline int32_t get_punchAction2Key_2() const { return ___punchAction2Key_2; }
	inline int32_t* get_address_of_punchAction2Key_2() { return &___punchAction2Key_2; }
	inline void set_punchAction2Key_2(int32_t value)
	{
		___punchAction2Key_2 = value;
	}

	inline static int32_t get_offset_of_kickKey_3() { return static_cast<int32_t>(offsetof(Utils_t1444179947_StaticFields, ___kickKey_3)); }
	inline int32_t get_kickKey_3() const { return ___kickKey_3; }
	inline int32_t* get_address_of_kickKey_3() { return &___kickKey_3; }
	inline void set_kickKey_3(int32_t value)
	{
		___kickKey_3 = value;
	}

	inline static int32_t get_offset_of_blockPunchAction1Key_4() { return static_cast<int32_t>(offsetof(Utils_t1444179947_StaticFields, ___blockPunchAction1Key_4)); }
	inline int32_t get_blockPunchAction1Key_4() const { return ___blockPunchAction1Key_4; }
	inline int32_t* get_address_of_blockPunchAction1Key_4() { return &___blockPunchAction1Key_4; }
	inline void set_blockPunchAction1Key_4(int32_t value)
	{
		___blockPunchAction1Key_4 = value;
	}

	inline static int32_t get_offset_of_blockKickKey_5() { return static_cast<int32_t>(offsetof(Utils_t1444179947_StaticFields, ___blockKickKey_5)); }
	inline int32_t get_blockKickKey_5() const { return ___blockKickKey_5; }
	inline int32_t* get_address_of_blockKickKey_5() { return &___blockKickKey_5; }
	inline void set_blockKickKey_5(int32_t value)
	{
		___blockKickKey_5 = value;
	}

	inline static int32_t get_offset_of_instance_6() { return static_cast<int32_t>(offsetof(Utils_t1444179947_StaticFields, ___instance_6)); }
	inline Utils_t1444179947 * get_instance_6() const { return ___instance_6; }
	inline Utils_t1444179947 ** get_address_of_instance_6() { return &___instance_6; }
	inline void set_instance_6(Utils_t1444179947 * value)
	{
		___instance_6 = value;
		Il2CppCodeGenWriteBarrier((&___instance_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTILS_T1444179947_H
#ifndef CHATMANAGER_T1133435335_H
#define CHATMANAGER_T1133435335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChatManager
struct  ChatManager_t1133435335  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.RectTransform ChatManager::chatContent
	RectTransform_t3704657025 * ___chatContent_2;
	// UnityEngine.UI.Text ChatManager::titleLabel
	Text_t1901882714 * ___titleLabel_3;
	// UnityEngine.GameObject ChatManager::sentMessage
	GameObject_t1113636619 * ___sentMessage_4;
	// UnityEngine.GameObject ChatManager::receivedMessage
	GameObject_t1113636619 * ___receivedMessage_5;
	// UnityEngine.GameObject ChatManager::startMessage
	GameObject_t1113636619 * ___startMessage_6;
	// UnityEngine.GameObject ChatManager::endMessage
	GameObject_t1113636619 * ___endMessage_7;
	// UnityEngine.GameObject ChatManager::answer1
	GameObject_t1113636619 * ___answer1_8;
	// UnityEngine.UI.Text ChatManager::answer1Message
	Text_t1901882714 * ___answer1Message_9;
	// UnityEngine.GameObject ChatManager::answer2
	GameObject_t1113636619 * ___answer2_10;
	// UnityEngine.UI.Text ChatManager::answer2Message
	Text_t1901882714 * ___answer2Message_11;
	// System.String ChatManager::oponentName
	String_t* ___oponentName_12;
	// UnityEngine.AudioSource ChatManager::audioSource
	AudioSource_t3935305588 * ___audioSource_13;
	// UnityEngine.AudioClip ChatManager::sentSound
	AudioClip_t3680889665 * ___sentSound_14;
	// UnityEngine.AudioClip ChatManager::receivedSound
	AudioClip_t3680889665 * ___receivedSound_15;
	// Chat/Topic ChatManager::topic
	Topic_t1539434260  ___topic_16;
	// System.String ChatManager::lastReaction
	String_t* ___lastReaction_17;
	// System.Int32 ChatManager::score
	int32_t ___score_18;

public:
	inline static int32_t get_offset_of_chatContent_2() { return static_cast<int32_t>(offsetof(ChatManager_t1133435335, ___chatContent_2)); }
	inline RectTransform_t3704657025 * get_chatContent_2() const { return ___chatContent_2; }
	inline RectTransform_t3704657025 ** get_address_of_chatContent_2() { return &___chatContent_2; }
	inline void set_chatContent_2(RectTransform_t3704657025 * value)
	{
		___chatContent_2 = value;
		Il2CppCodeGenWriteBarrier((&___chatContent_2), value);
	}

	inline static int32_t get_offset_of_titleLabel_3() { return static_cast<int32_t>(offsetof(ChatManager_t1133435335, ___titleLabel_3)); }
	inline Text_t1901882714 * get_titleLabel_3() const { return ___titleLabel_3; }
	inline Text_t1901882714 ** get_address_of_titleLabel_3() { return &___titleLabel_3; }
	inline void set_titleLabel_3(Text_t1901882714 * value)
	{
		___titleLabel_3 = value;
		Il2CppCodeGenWriteBarrier((&___titleLabel_3), value);
	}

	inline static int32_t get_offset_of_sentMessage_4() { return static_cast<int32_t>(offsetof(ChatManager_t1133435335, ___sentMessage_4)); }
	inline GameObject_t1113636619 * get_sentMessage_4() const { return ___sentMessage_4; }
	inline GameObject_t1113636619 ** get_address_of_sentMessage_4() { return &___sentMessage_4; }
	inline void set_sentMessage_4(GameObject_t1113636619 * value)
	{
		___sentMessage_4 = value;
		Il2CppCodeGenWriteBarrier((&___sentMessage_4), value);
	}

	inline static int32_t get_offset_of_receivedMessage_5() { return static_cast<int32_t>(offsetof(ChatManager_t1133435335, ___receivedMessage_5)); }
	inline GameObject_t1113636619 * get_receivedMessage_5() const { return ___receivedMessage_5; }
	inline GameObject_t1113636619 ** get_address_of_receivedMessage_5() { return &___receivedMessage_5; }
	inline void set_receivedMessage_5(GameObject_t1113636619 * value)
	{
		___receivedMessage_5 = value;
		Il2CppCodeGenWriteBarrier((&___receivedMessage_5), value);
	}

	inline static int32_t get_offset_of_startMessage_6() { return static_cast<int32_t>(offsetof(ChatManager_t1133435335, ___startMessage_6)); }
	inline GameObject_t1113636619 * get_startMessage_6() const { return ___startMessage_6; }
	inline GameObject_t1113636619 ** get_address_of_startMessage_6() { return &___startMessage_6; }
	inline void set_startMessage_6(GameObject_t1113636619 * value)
	{
		___startMessage_6 = value;
		Il2CppCodeGenWriteBarrier((&___startMessage_6), value);
	}

	inline static int32_t get_offset_of_endMessage_7() { return static_cast<int32_t>(offsetof(ChatManager_t1133435335, ___endMessage_7)); }
	inline GameObject_t1113636619 * get_endMessage_7() const { return ___endMessage_7; }
	inline GameObject_t1113636619 ** get_address_of_endMessage_7() { return &___endMessage_7; }
	inline void set_endMessage_7(GameObject_t1113636619 * value)
	{
		___endMessage_7 = value;
		Il2CppCodeGenWriteBarrier((&___endMessage_7), value);
	}

	inline static int32_t get_offset_of_answer1_8() { return static_cast<int32_t>(offsetof(ChatManager_t1133435335, ___answer1_8)); }
	inline GameObject_t1113636619 * get_answer1_8() const { return ___answer1_8; }
	inline GameObject_t1113636619 ** get_address_of_answer1_8() { return &___answer1_8; }
	inline void set_answer1_8(GameObject_t1113636619 * value)
	{
		___answer1_8 = value;
		Il2CppCodeGenWriteBarrier((&___answer1_8), value);
	}

	inline static int32_t get_offset_of_answer1Message_9() { return static_cast<int32_t>(offsetof(ChatManager_t1133435335, ___answer1Message_9)); }
	inline Text_t1901882714 * get_answer1Message_9() const { return ___answer1Message_9; }
	inline Text_t1901882714 ** get_address_of_answer1Message_9() { return &___answer1Message_9; }
	inline void set_answer1Message_9(Text_t1901882714 * value)
	{
		___answer1Message_9 = value;
		Il2CppCodeGenWriteBarrier((&___answer1Message_9), value);
	}

	inline static int32_t get_offset_of_answer2_10() { return static_cast<int32_t>(offsetof(ChatManager_t1133435335, ___answer2_10)); }
	inline GameObject_t1113636619 * get_answer2_10() const { return ___answer2_10; }
	inline GameObject_t1113636619 ** get_address_of_answer2_10() { return &___answer2_10; }
	inline void set_answer2_10(GameObject_t1113636619 * value)
	{
		___answer2_10 = value;
		Il2CppCodeGenWriteBarrier((&___answer2_10), value);
	}

	inline static int32_t get_offset_of_answer2Message_11() { return static_cast<int32_t>(offsetof(ChatManager_t1133435335, ___answer2Message_11)); }
	inline Text_t1901882714 * get_answer2Message_11() const { return ___answer2Message_11; }
	inline Text_t1901882714 ** get_address_of_answer2Message_11() { return &___answer2Message_11; }
	inline void set_answer2Message_11(Text_t1901882714 * value)
	{
		___answer2Message_11 = value;
		Il2CppCodeGenWriteBarrier((&___answer2Message_11), value);
	}

	inline static int32_t get_offset_of_oponentName_12() { return static_cast<int32_t>(offsetof(ChatManager_t1133435335, ___oponentName_12)); }
	inline String_t* get_oponentName_12() const { return ___oponentName_12; }
	inline String_t** get_address_of_oponentName_12() { return &___oponentName_12; }
	inline void set_oponentName_12(String_t* value)
	{
		___oponentName_12 = value;
		Il2CppCodeGenWriteBarrier((&___oponentName_12), value);
	}

	inline static int32_t get_offset_of_audioSource_13() { return static_cast<int32_t>(offsetof(ChatManager_t1133435335, ___audioSource_13)); }
	inline AudioSource_t3935305588 * get_audioSource_13() const { return ___audioSource_13; }
	inline AudioSource_t3935305588 ** get_address_of_audioSource_13() { return &___audioSource_13; }
	inline void set_audioSource_13(AudioSource_t3935305588 * value)
	{
		___audioSource_13 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_13), value);
	}

	inline static int32_t get_offset_of_sentSound_14() { return static_cast<int32_t>(offsetof(ChatManager_t1133435335, ___sentSound_14)); }
	inline AudioClip_t3680889665 * get_sentSound_14() const { return ___sentSound_14; }
	inline AudioClip_t3680889665 ** get_address_of_sentSound_14() { return &___sentSound_14; }
	inline void set_sentSound_14(AudioClip_t3680889665 * value)
	{
		___sentSound_14 = value;
		Il2CppCodeGenWriteBarrier((&___sentSound_14), value);
	}

	inline static int32_t get_offset_of_receivedSound_15() { return static_cast<int32_t>(offsetof(ChatManager_t1133435335, ___receivedSound_15)); }
	inline AudioClip_t3680889665 * get_receivedSound_15() const { return ___receivedSound_15; }
	inline AudioClip_t3680889665 ** get_address_of_receivedSound_15() { return &___receivedSound_15; }
	inline void set_receivedSound_15(AudioClip_t3680889665 * value)
	{
		___receivedSound_15 = value;
		Il2CppCodeGenWriteBarrier((&___receivedSound_15), value);
	}

	inline static int32_t get_offset_of_topic_16() { return static_cast<int32_t>(offsetof(ChatManager_t1133435335, ___topic_16)); }
	inline Topic_t1539434260  get_topic_16() const { return ___topic_16; }
	inline Topic_t1539434260 * get_address_of_topic_16() { return &___topic_16; }
	inline void set_topic_16(Topic_t1539434260  value)
	{
		___topic_16 = value;
	}

	inline static int32_t get_offset_of_lastReaction_17() { return static_cast<int32_t>(offsetof(ChatManager_t1133435335, ___lastReaction_17)); }
	inline String_t* get_lastReaction_17() const { return ___lastReaction_17; }
	inline String_t** get_address_of_lastReaction_17() { return &___lastReaction_17; }
	inline void set_lastReaction_17(String_t* value)
	{
		___lastReaction_17 = value;
		Il2CppCodeGenWriteBarrier((&___lastReaction_17), value);
	}

	inline static int32_t get_offset_of_score_18() { return static_cast<int32_t>(offsetof(ChatManager_t1133435335, ___score_18)); }
	inline int32_t get_score_18() const { return ___score_18; }
	inline int32_t* get_address_of_score_18() { return &___score_18; }
	inline void set_score_18(int32_t value)
	{
		___score_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHATMANAGER_T1133435335_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef IMAGE_T2670269651_H
#define IMAGE_T2670269651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image
struct  Image_t2670269651  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t280657092 * ___m_Sprite_29;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t280657092 * ___m_OverrideSprite_30;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_31;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_32;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_33;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_34;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_35;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_36;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_37;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_38;

public:
	inline static int32_t get_offset_of_m_Sprite_29() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Sprite_29)); }
	inline Sprite_t280657092 * get_m_Sprite_29() const { return ___m_Sprite_29; }
	inline Sprite_t280657092 ** get_address_of_m_Sprite_29() { return &___m_Sprite_29; }
	inline void set_m_Sprite_29(Sprite_t280657092 * value)
	{
		___m_Sprite_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sprite_29), value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_30() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_OverrideSprite_30)); }
	inline Sprite_t280657092 * get_m_OverrideSprite_30() const { return ___m_OverrideSprite_30; }
	inline Sprite_t280657092 ** get_address_of_m_OverrideSprite_30() { return &___m_OverrideSprite_30; }
	inline void set_m_OverrideSprite_30(Sprite_t280657092 * value)
	{
		___m_OverrideSprite_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_OverrideSprite_30), value);
	}

	inline static int32_t get_offset_of_m_Type_31() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Type_31)); }
	inline int32_t get_m_Type_31() const { return ___m_Type_31; }
	inline int32_t* get_address_of_m_Type_31() { return &___m_Type_31; }
	inline void set_m_Type_31(int32_t value)
	{
		___m_Type_31 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_32() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_PreserveAspect_32)); }
	inline bool get_m_PreserveAspect_32() const { return ___m_PreserveAspect_32; }
	inline bool* get_address_of_m_PreserveAspect_32() { return &___m_PreserveAspect_32; }
	inline void set_m_PreserveAspect_32(bool value)
	{
		___m_PreserveAspect_32 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_33() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillCenter_33)); }
	inline bool get_m_FillCenter_33() const { return ___m_FillCenter_33; }
	inline bool* get_address_of_m_FillCenter_33() { return &___m_FillCenter_33; }
	inline void set_m_FillCenter_33(bool value)
	{
		___m_FillCenter_33 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_34() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillMethod_34)); }
	inline int32_t get_m_FillMethod_34() const { return ___m_FillMethod_34; }
	inline int32_t* get_address_of_m_FillMethod_34() { return &___m_FillMethod_34; }
	inline void set_m_FillMethod_34(int32_t value)
	{
		___m_FillMethod_34 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_35() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillAmount_35)); }
	inline float get_m_FillAmount_35() const { return ___m_FillAmount_35; }
	inline float* get_address_of_m_FillAmount_35() { return &___m_FillAmount_35; }
	inline void set_m_FillAmount_35(float value)
	{
		___m_FillAmount_35 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_36() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillClockwise_36)); }
	inline bool get_m_FillClockwise_36() const { return ___m_FillClockwise_36; }
	inline bool* get_address_of_m_FillClockwise_36() { return &___m_FillClockwise_36; }
	inline void set_m_FillClockwise_36(bool value)
	{
		___m_FillClockwise_36 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_37() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillOrigin_37)); }
	inline int32_t get_m_FillOrigin_37() const { return ___m_FillOrigin_37; }
	inline int32_t* get_address_of_m_FillOrigin_37() { return &___m_FillOrigin_37; }
	inline void set_m_FillOrigin_37(int32_t value)
	{
		___m_FillOrigin_37 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_38() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_AlphaHitTestMinimumThreshold_38)); }
	inline float get_m_AlphaHitTestMinimumThreshold_38() const { return ___m_AlphaHitTestMinimumThreshold_38; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_38() { return &___m_AlphaHitTestMinimumThreshold_38; }
	inline void set_m_AlphaHitTestMinimumThreshold_38(float value)
	{
		___m_AlphaHitTestMinimumThreshold_38 = value;
	}
};

struct Image_t2670269651_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t340375123 * ___s_ETC1DefaultUI_28;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_t1457185986* ___s_VertScratch_39;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_t1457185986* ___s_UVScratch_40;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t1718750761* ___s_Xy_41;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t1718750761* ___s_Uv_42;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_28() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_ETC1DefaultUI_28)); }
	inline Material_t340375123 * get_s_ETC1DefaultUI_28() const { return ___s_ETC1DefaultUI_28; }
	inline Material_t340375123 ** get_address_of_s_ETC1DefaultUI_28() { return &___s_ETC1DefaultUI_28; }
	inline void set_s_ETC1DefaultUI_28(Material_t340375123 * value)
	{
		___s_ETC1DefaultUI_28 = value;
		Il2CppCodeGenWriteBarrier((&___s_ETC1DefaultUI_28), value);
	}

	inline static int32_t get_offset_of_s_VertScratch_39() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_VertScratch_39)); }
	inline Vector2U5BU5D_t1457185986* get_s_VertScratch_39() const { return ___s_VertScratch_39; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_VertScratch_39() { return &___s_VertScratch_39; }
	inline void set_s_VertScratch_39(Vector2U5BU5D_t1457185986* value)
	{
		___s_VertScratch_39 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertScratch_39), value);
	}

	inline static int32_t get_offset_of_s_UVScratch_40() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_UVScratch_40)); }
	inline Vector2U5BU5D_t1457185986* get_s_UVScratch_40() const { return ___s_UVScratch_40; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_UVScratch_40() { return &___s_UVScratch_40; }
	inline void set_s_UVScratch_40(Vector2U5BU5D_t1457185986* value)
	{
		___s_UVScratch_40 = value;
		Il2CppCodeGenWriteBarrier((&___s_UVScratch_40), value);
	}

	inline static int32_t get_offset_of_s_Xy_41() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Xy_41)); }
	inline Vector3U5BU5D_t1718750761* get_s_Xy_41() const { return ___s_Xy_41; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Xy_41() { return &___s_Xy_41; }
	inline void set_s_Xy_41(Vector3U5BU5D_t1718750761* value)
	{
		___s_Xy_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Xy_41), value);
	}

	inline static int32_t get_offset_of_s_Uv_42() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Uv_42)); }
	inline Vector3U5BU5D_t1718750761* get_s_Uv_42() const { return ___s_Uv_42; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Uv_42() { return &___s_Uv_42; }
	inline void set_s_Uv_42(Vector3U5BU5D_t1718750761* value)
	{
		___s_Uv_42 = value;
		Il2CppCodeGenWriteBarrier((&___s_Uv_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T2670269651_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// Chat/Topic[]
struct TopicU5BU5D_t212031005  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Topic_t1539434260  m_Items[1];

public:
	inline Topic_t1539434260  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Topic_t1539434260 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Topic_t1539434260  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Topic_t1539434260  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Topic_t1539434260 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Topic_t1539434260  value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// FighterInput.Move[]
struct MoveU5BU5D_t3649037098  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// FighterInput.Move[][]
struct MoveU5BU5DU5BU5D_t1831594223  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MoveU5BU5D_t3649037098* m_Items[1];

public:
	inline MoveU5BU5D_t3649037098* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MoveU5BU5D_t3649037098** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MoveU5BU5D_t3649037098* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MoveU5BU5D_t3649037098* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MoveU5BU5D_t3649037098** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MoveU5BU5D_t3649037098* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// StanceSprites[]
struct StanceSpritesU5BU5D_t3743853223  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StanceSprites_t3454544338 * m_Items[1];

public:
	inline StanceSprites_t3454544338 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StanceSprites_t3454544338 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StanceSprites_t3454544338 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline StanceSprites_t3454544338 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StanceSprites_t3454544338 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StanceSprites_t3454544338 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t941916413  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_t2555686324  m_Items[1];

public:
	inline Color_t2555686324  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_t2555686324 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_t2555686324  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_t2555686324  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_t2555686324 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_t2555686324  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2581906349  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_t280657092 * m_Items[1];

public:
	inline Sprite_t280657092 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t280657092 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t280657092 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Sprite_t280657092 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t280657092 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t280657092 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Nullable`1<Chat/Topic>::.ctor(!0)
extern "C"  void Nullable_1__ctor_m884083491_gshared (Nullable_1_t3261996342 * __this, Topic_t1539434260  p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_m1513755678_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C"  RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m2612646359_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<Poser/Stance>::get_HasValue()
extern "C"  bool Nullable_1_get_HasValue_m410045444_gshared (Nullable_1_t2067934930 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<Poser/Stance>::get_Value()
extern "C"  int32_t Nullable_1_get_Value_m395328461_gshared (Nullable_1_t2067934930 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<Poser/Stance>::.ctor(!0)
extern "C"  void Nullable_1__ctor_m2743267308_gshared (Nullable_1_t2067934930 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C"  RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m4054026115 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Chat/Topic::.ctor(System.String,System.String,System.String)
extern "C"  void Topic__ctor_m544863251 (Topic_t1539434260 * __this, String_t* ___supposition0, String_t* ___answer11, String_t* ___answer22, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C"  RuntimeObject* Transform_GetEnumerator_m2717073726 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ChatManager::AddChatMessage(UnityEngine.GameObject,System.String)
extern "C"  void ChatManager_AddChatMessage_m478030932 (ChatManager_t1133435335 * __this, GameObject_t1113636619 * ___prefab0, String_t* ___text1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ChatManager::StartNewTopic(System.Single)
extern "C"  void ChatManager_StartNewTopic_m257331358 (ChatManager_t1133435335 * __this, float ___delay0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Nullable`1<Chat/Topic>::.ctor(!0)
#define Nullable_1__ctor_m884083491(__this, p0, method) ((  void (*) (Nullable_1_t3261996342 *, Topic_t1539434260 , const RuntimeMethod*))Nullable_1__ctor_m884083491_gshared)(__this, p0, method)
// Chat/Topic Chat::RandomTopic(System.Nullable`1<Chat/Topic>)
extern "C"  Topic_t1539434260  Chat_RandomTopic_m514629220 (RuntimeObject * __this /* static, unused */, Nullable_1_t3261996342  ___previousTopic0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C"  void Action__ctor_m2994342681 (Action_t1264377477 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Utils::Delay(System.Single,System.Action)
extern "C"  void Utils_Delay_m1725504855 (RuntimeObject * __this /* static, unused */, float ___delay0, Action_t1264377477 * ___action1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ChatManager/<SelectAnswer>c__AnonStorey0::.ctor()
extern "C"  void U3CSelectAnswerU3Ec__AnonStorey0__ctor_m3528346918 (U3CSelectAnswerU3Ec__AnonStorey0_t2974158987 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C"  void AudioSource_PlayOneShot_m1688286683 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t1113636619_m4070250708(__this /* static, unused */, p0, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
#define GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(__this, method) ((  RectTransform_t3704657025 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C"  void Transform_SetParent_m273471670 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Text>()
#define GameObject_GetComponentInChildren_TisText_t1901882714_m3637202860(__this, method) ((  Text_t1901882714 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_m1513755678_gshared)(__this, method)
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyDown_m17791917 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern "C"  bool GameObject_get_activeInHierarchy_m2006396688 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ChatManager::SelectAnswer(System.Boolean)
extern "C"  void ChatManager_SelectAnswer_m1099509755 (ChatManager_t1133435335 * __this, bool ___first0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Chat::RandomEnding(System.Boolean)
extern "C"  String_t* Chat_RandomEnding_m1508430914 (RuntimeObject * __this /* static, unused */, bool ___isPositive0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Chat::RandomReaction(System.Boolean,System.String)
extern "C"  String_t* Chat_RandomReaction_m3164130441 (RuntimeObject * __this /* static, unused */, bool ___isPositive0, String_t* ___previousReaction1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::FindObjectOfType<PhoneManager>()
#define Object_FindObjectOfType_TisPhoneManager_t4261849291_m3175860931(__this /* static, unused */, method) ((  PhoneManager_t4261849291 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m2612646359_gshared)(__this /* static, unused */, method)
// System.Void PhoneManager::ShowSwiping()
extern "C"  void PhoneManager_ShowSwiping_m1788750612 (PhoneManager_t4261849291 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
#define Component_GetComponent_TisText_t1901882714_m4196288697(__this, method) ((  Text_t1901882714 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Collections.IEnumerator Countdown::CountdownCoroutine()
extern "C"  RuntimeObject* Countdown_CountdownCoroutine_m4265235627 (Countdown_t1688036482 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Countdown/<CountdownCoroutine>c__Iterator0::.ctor()
extern "C"  void U3CCountdownCoroutineU3Ec__Iterator0__ctor_m1501233676 (U3CCountdownCoroutineU3Ec__Iterator0_t2126704546 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C"  void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::FindObjectOfType<FightController>()
#define Object_FindObjectOfType_TisFightController_t483979242_m1819838589(__this /* static, unused */, method) ((  FightController_t483979242 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m2612646359_gshared)(__this /* static, unused */, method)
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C"  void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<Fighters>()
#define Component_GetComponent_TisFighters_t808620833_m1186822352(__this, method) ((  Fighters_t808620833 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void FightController::HandleMove(Fighter,Fighter,FighterInput.Move)
extern "C"  void FightController_HandleMove_m2523282468 (FightController_t483979242 * __this, Fighter_t1911001889 * ___attacker0, Fighter_t1911001889 * ___target1, int32_t ___move2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_time()
extern "C"  float Time_get_time_m2907476221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Poser/Stance Poser::get_CurrentStance()
extern "C"  int32_t Poser_get_CurrentStance_m4100513785 (Poser_t2653926573 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Fighter::get_Stamina()
extern "C"  int32_t Fighter_get_Stamina_m1543692505 (Fighter_t1911001889 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 FighterInput.MoveMethods::StaminaCost(FighterInput.Move)
extern "C"  int32_t MoveMethods_StaminaCost_m2098551359 (RuntimeObject * __this /* static, unused */, int32_t ___move0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single FighterInput.MoveMethods::Cooldown(FighterInput.Move)
extern "C"  float MoveMethods_Cooldown_m1292600930 (RuntimeObject * __this /* static, unused */, int32_t ___move0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Fighter::set_Stamina(System.Int32)
extern "C"  void Fighter_set_Stamina_m3125874422 (Fighter_t1911001889 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Poser/Stance FighterInput.MoveMethods::Stance(FighterInput.Move)
extern "C"  int32_t MoveMethods_Stance_m1856667472 (RuntimeObject * __this /* static, unused */, int32_t ___move0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single FighterInput.MoveMethods::Duration(FighterInput.Move)
extern "C"  float MoveMethods_Duration_m3501436441 (RuntimeObject * __this /* static, unused */, int32_t ___move0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Poser::Take(Poser/Stance,System.Single)
extern "C"  void Poser_Take_m3588067046 (Poser_t2653926573 * __this, int32_t ___stance0, float ___time1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Poser/Stance FighterInput.MoveMethods::CounterStance(FighterInput.Move)
extern "C"  int32_t MoveMethods_CounterStance_m1287149377 (RuntimeObject * __this /* static, unused */, int32_t ___move0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 FighterInput.MoveMethods::Damage(FighterInput.Move)
extern "C"  int32_t MoveMethods_Damage_m3693683156 (RuntimeObject * __this /* static, unused */, int32_t ___move0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void FightController::Damage(Fighter,System.Int32,System.Single)
extern "C"  void FightController_Damage_m3292052364 (FightController_t483979242 * __this, Fighter_t1911001889 * ___target0, int32_t ___damage1, float ___duration2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Fighter::get_Health()
extern "C"  int32_t Fighter_get_Health_m1631018578 (Fighter_t1911001889 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Fighter::set_Health(System.Int32)
extern "C"  void Fighter_set_Health_m648752105 (Fighter_t1911001889 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Poser::InterruptCurrentStance(Poser/Stance,System.Single)
extern "C"  void Poser_InterruptCurrentStance_m2506713111 (Poser_t2653926573 * __this, int32_t ___interruptingStance0, float ___time1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Poser::set_CurrentStance(Poser/Stance)
extern "C"  void Poser_set_CurrentStance_m425755468 (Poser_t2653926573 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ProgressBar::SetValue(System.Int32)
extern "C"  void ProgressBar_SetValue_m1393192738 (ProgressBar_t1074804577 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C"  void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// FighterInput.Move[] FighterInput.ComputerInput::RandomCombo()
extern "C"  MoveU5BU5D_t3649037098* ComputerInput_RandomCombo_m2811777807 (ComputerInput_t965195488 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void FighterInput.ComputerInput::UpdateCooldown()
extern "C"  void ComputerInput_UpdateCooldown_m3118700958 (ComputerInput_t965195488 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void FightController::OnComputerMove(FighterInput.Move)
extern "C"  void FightController_OnComputerMove_m1801124063 (FightController_t483979242 * __this, int32_t ___move0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C"  float Random_Range_m2202990745 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void FightController::OnPlayerMove(FighterInput.Move)
extern "C"  void FightController_OnPlayerMove_m586935552 (FightController_t483979242 * __this, int32_t ___move0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void FighterInput.PlayerInput::InterruptBlock()
extern "C"  void PlayerInput_InterruptBlock_m2724655913 (PlayerInput_t2164750815 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
extern "C"  bool Input_GetKey_m3736388334 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyUp_m2808015270 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void FighterRandomizer::RandomizeFigter(Poser)
extern "C"  void FighterRandomizer_RandomizeFigter_m4276807442 (FighterRandomizer_t1174288154 * __this, Poser_t2653926573 * ___fighter0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
extern "C"  void SpriteRenderer_set_color_m3056777566 (SpriteRenderer_t3235626157 * __this, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Fighter::.ctor()
extern "C"  void Fighter__ctor_m4177725304 (Fighter_t1911001889 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Fighters::RestoreStamina(Fighter)
extern "C"  void Fighters_RestoreStamina_m885260732 (Fighters_t808620833 * __this, Fighter_t1911001889 * ___fighter0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
#define Component_GetComponent_TisRectTransform_t3704657025_m3396022872(__this, method) ((  RectTransform_t3704657025 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void MatchPanel::MoveToStartingPosition()
extern "C"  void MatchPanel_MoveToStartingPosition_m736023816 (MatchPanel_t3284707298 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MatchPanel::OnSendMessageClick()
extern "C"  void MatchPanel_OnSendMessageClick_m1013566159 (MatchPanel_t3284707298 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PhoneManager::ShowChat(System.String)
extern "C"  void PhoneManager_ShowChat_m18460266 (PhoneManager_t4261849291 * __this, String_t* ___oponentName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
extern "C"  void Image_set_sprite_m2369174689 (Image_t2670269651 * __this, Sprite_t280657092 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MatchPanel::AnimateInCoroutine()
extern "C"  RuntimeObject* MatchPanel_AnimateInCoroutine_m1239398478 (MatchPanel_t3284707298 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MatchPanel/<AnimateInCoroutine>c__Iterator0::.ctor()
extern "C"  void U3CAnimateInCoroutineU3Ec__Iterator0__ctor_m3304873356 (U3CAnimateInCoroutineU3Ec__Iterator0_t4015329932 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
extern "C"  void RectTransform_set_pivot_m909387058 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
extern "C"  Vector2_t2156229523  RectTransform_get_pivot_m3425744470 (RectTransform_t3704657025 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
extern "C"  void WaitForEndOfFrame__ctor_m1381314187 (WaitForEndOfFrame_t1314943911 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Nullable`1<Poser/Stance>::get_HasValue()
#define Nullable_1_get_HasValue_m410045444(__this, method) ((  bool (*) (Nullable_1_t2067934930 *, const RuntimeMethod*))Nullable_1_get_HasValue_m410045444_gshared)(__this, method)
// !0 System.Nullable`1<Poser/Stance>::get_Value()
#define Nullable_1_get_Value_m395328461(__this, method) ((  int32_t (*) (Nullable_1_t2067934930 *, const RuntimeMethod*))Nullable_1_get_Value_m395328461_gshared)(__this, method)
// System.Void Poser::SetSprite(Poser/Stance)
extern "C"  void Poser_SetSprite_m3627048953 (Poser_t2653926573 * __this, int32_t ___targetStance0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
extern "C"  void MonoBehaviour_StopCoroutine_m907039165 (MonoBehaviour_t3962482529 * __this, Coroutine_t3829159415 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Poser::ReturnTo(Poser/Stance,System.Single)
extern "C"  RuntimeObject* Poser_ReturnTo_m1670821847 (Poser_t2653926573 * __this, int32_t ___st0, float ___time1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Poser/<ReturnTo>c__Iterator0::.ctor()
extern "C"  void U3CReturnToU3Ec__Iterator0__ctor_m2688021877 (U3CReturnToU3Ec__Iterator0_t3746314890 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Nullable`1<Poser/Stance>::.ctor(!0)
#define Nullable_1__ctor_m2743267308(__this, p0, method) ((  void (*) (Nullable_1_t2067934930 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m2743267308_gshared)(__this, p0, method)
// System.Collections.IEnumerator Poser::ReturnToCurrentStance(System.Single)
extern "C"  RuntimeObject* Poser_ReturnToCurrentStance_m1422296588 (Poser_t2653926573 * __this, float ___time0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Poser/<ReturnToCurrentStance>c__Iterator1::.ctor()
extern "C"  void U3CReturnToCurrentStanceU3Ec__Iterator1__ctor_m2385040848 (U3CReturnToCurrentStanceU3Ec__Iterator1_t3534570174 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Poser::SetSpriteForAllRenderers(System.Int32,Poser/Stance)
extern "C"  void Poser_SetSpriteForAllRenderers_m463568830 (Poser_t2653926573 * __this, int32_t ___order0, int32_t ___targetStance1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite StanceSprites::SpriteForStance(Poser/Stance)
extern "C"  Sprite_t280657092 * StanceSprites_SpriteForStance_m3447838445 (StanceSprites_t3454544338 * __this, int32_t ___stance0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
extern "C"  void SpriteRenderer_set_sprite_m1286893786 (SpriteRenderer_t3235626157 * __this, Sprite_t280657092 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
extern "C"  void Renderer_set_sortingOrder_m549573253 (Renderer_t2627027031 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C"  int32_t Renderer_get_sortingOrder_m344607889 (Renderer_t2627027031 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C"  void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C"  void ScriptableObject__ctor_m1310743131 (ScriptableObject_t2528358522 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponentInChildren<MatchPanel>()
#define Component_GetComponentInChildren_TisMatchPanel_t3284707298_m552025411(__this, method) ((  MatchPanel_t3284707298 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method)
// System.String Names::RandomName(System.String)
extern "C"  String_t* Names_RandomName_m3846965876 (RuntimeObject * __this /* static, unused */, String_t* ___previousName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Names::RandomAge()
extern "C"  int32_t Names_RandomAge_m4118168461 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C"  String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
#define GameObject_GetComponent_TisImage_t2670269651_m2486712510(__this, method) ((  Image_t2670269651 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// UnityEngine.Color UnityEngine.Random::ColorHSV(System.Single,System.Single)
extern "C"  Color_t2555686324  Random_ColorHSV_m1943109089 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite SwipeManager::RandomSprite(UnityEngine.Sprite)
extern "C"  Sprite_t280657092 * SwipeManager_RandomSprite_m272148647 (SwipeManager_t2369055733 * __this, Sprite_t280657092 * ___previousSprite0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.UI.Image::get_sprite()
extern "C"  Sprite_t280657092 * Image_get_sprite_m1811690853 (Image_t2670269651 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SwipeManager::AnimateTopPanel(System.Boolean)
extern "C"  void SwipeManager_AnimateTopPanel_m1451643684 (SwipeManager_t2369055733 * __this, bool ___left0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SwipeManager/<AnimateTopPanel>c__AnonStorey1::.ctor()
extern "C"  void U3CAnimateTopPanelU3Ec__AnonStorey1__ctor_m1989601133 (U3CAnimateTopPanelU3Ec__AnonStorey1_t76819064 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SwipeManager::AnimateTopPanelCoroutine(System.Boolean,System.Action)
extern "C"  RuntimeObject* SwipeManager_AnimateTopPanelCoroutine_m788824251 (SwipeManager_t2369055733 * __this, bool ___left0, Action_t1264377477 * ___action1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SwipeManager/<AnimateTopPanelCoroutine>c__Iterator0::.ctor()
extern "C"  void U3CAnimateTopPanelCoroutineU3Ec__Iterator0__ctor_m3676755584 (U3CAnimateTopPanelCoroutineU3Ec__Iterator0_t2170529847 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MatchPanel::AnimateIn(System.String,UnityEngine.Sprite,UnityEngine.Color)
extern "C"  void MatchPanel_AnimateIn_m2059785970 (MatchPanel_t3284707298 * __this, String_t* ___name0, Sprite_t280657092 * ___dude1, Color_t2555686324  ___color2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C"  Vector3_t3722313464  Transform_get_localPosition_m4234289348 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2156229523  Vector2_Scale_m165605769 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C"  void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::Invoke()
extern "C"  void Action_Invoke_m937035532 (Action_t1264377477 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C"  void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::AddComponent<Utils>()
#define GameObject_AddComponent_TisUtils_t1444179947_m1443986677(__this, method) ((  Utils_t1444179947 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method)
// Utils Utils::get_Instance()
extern "C"  Utils_t1444179947 * Utils_get_Instance_m4005346061 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Utils::DelayCoroutine(System.Single,System.Action)
extern "C"  RuntimeObject* Utils_DelayCoroutine_m3572296006 (Utils_t1444179947 * __this, float ___delay0, Action_t1264377477 * ___action1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Utils/<DelayCoroutine>c__Iterator0::.ctor()
extern "C"  void U3CDelayCoroutineU3Ec__Iterator0__ctor_m1381101770 (U3CDelayCoroutineU3Ec__Iterator0_t2088042557 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Chat::.ctor()
extern "C"  void Chat__ctor_m2722737583 (Chat_t201152076 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// Chat/Topic Chat::RandomTopic(System.Nullable`1<Chat/Topic>)
extern "C"  Topic_t1539434260  Chat_RandomTopic_m514629220 (RuntimeObject * __this /* static, unused */, Nullable_1_t3261996342  ___previousTopic0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Chat_RandomTopic_m514629220_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Topic_t1539434260  V_0;
	memset(&V_0, 0, sizeof(V_0));

IL_0000:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Chat_t201152076_il2cpp_TypeInfo_var);
		TopicU5BU5D_t212031005* L_0 = ((Chat_t201152076_StaticFields*)il2cpp_codegen_static_fields_for(Chat_t201152076_il2cpp_TypeInfo_var))->get_topics_0();
		TopicU5BU5D_t212031005* L_1 = ((Chat_t201152076_StaticFields*)il2cpp_codegen_static_fields_for(Chat_t201152076_il2cpp_TypeInfo_var))->get_topics_0();
		int32_t L_2 = Random_Range_m4054026115(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), /*hidden argument*/NULL);
		V_0 = (*(Topic_t1539434260 *)((L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_2))));
		Nullable_1_t3261996342  L_3 = ___previousTopic0;
		Nullable_1_t3261996342  L_4 = L_3;
		RuntimeObject * L_5 = Box(Nullable_1_t3261996342_il2cpp_TypeInfo_var, &L_4);
		RuntimeObject * L_6 = Box(Topic_t1539434260_il2cpp_TypeInfo_var, (&V_0));
		bool L_7 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_6, L_5);
		V_0 = *(Topic_t1539434260 *)UnBox(L_6);
		if (L_7)
		{
			goto IL_0000;
		}
	}
	{
		Topic_t1539434260  L_8 = V_0;
		return L_8;
	}
}
// System.String Chat::RandomReaction(System.Boolean,System.String)
extern "C"  String_t* Chat_RandomReaction_m3164130441 (RuntimeObject * __this /* static, unused */, bool ___isPositive0, String_t* ___previousReaction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Chat_RandomReaction_m3164130441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t1281789340* V_1 = NULL;
	StringU5BU5D_t1281789340* G_B3_0 = NULL;
	{
		bool L_0 = ___isPositive0;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Chat_t201152076_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_1 = ((Chat_t201152076_StaticFields*)il2cpp_codegen_static_fields_for(Chat_t201152076_il2cpp_TypeInfo_var))->get_positiveReactions_1();
		G_B3_0 = L_1;
		goto IL_0015;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Chat_t201152076_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_2 = ((Chat_t201152076_StaticFields*)il2cpp_codegen_static_fields_for(Chat_t201152076_il2cpp_TypeInfo_var))->get_negativeReactions_2();
		G_B3_0 = L_2;
	}

IL_0015:
	{
		V_1 = G_B3_0;
	}

IL_0016:
	{
		StringU5BU5D_t1281789340* L_3 = V_1;
		StringU5BU5D_t1281789340* L_4 = V_1;
		int32_t L_5 = Random_Range_m4054026115(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))), /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		String_t* L_8 = V_0;
		String_t* L_9 = ___previousReaction1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m920492651(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_11 = V_0;
		return L_11;
	}
}
// System.String Chat::RandomEnding(System.Boolean)
extern "C"  String_t* Chat_RandomEnding_m1508430914 (RuntimeObject * __this /* static, unused */, bool ___isPositive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Chat_RandomEnding_m1508430914_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	StringU5BU5D_t1281789340* G_B3_0 = NULL;
	{
		bool L_0 = ___isPositive0;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Chat_t201152076_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_1 = ((Chat_t201152076_StaticFields*)il2cpp_codegen_static_fields_for(Chat_t201152076_il2cpp_TypeInfo_var))->get_positiveEndings_3();
		G_B3_0 = L_1;
		goto IL_0015;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Chat_t201152076_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_2 = ((Chat_t201152076_StaticFields*)il2cpp_codegen_static_fields_for(Chat_t201152076_il2cpp_TypeInfo_var))->get_negativeEndings_4();
		G_B3_0 = L_2;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		StringU5BU5D_t1281789340* L_3 = V_0;
		StringU5BU5D_t1281789340* L_4 = V_0;
		int32_t L_5 = Random_Range_m4054026115(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))), /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}
}
// System.Void Chat::.cctor()
extern "C"  void Chat__cctor_m2410299612 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Chat__cctor_m2410299612_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TopicU5BU5D_t212031005* L_0 = ((TopicU5BU5D_t212031005*)SZArrayNew(TopicU5BU5D_t212031005_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14)));
		Topic_t1539434260  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Topic__ctor_m544863251((&L_1), _stringLiteral3833672506, _stringLiteral2628605007, _stringLiteral1071783343, /*hidden argument*/NULL);
		*(Topic_t1539434260 *)((L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))) = L_1;
		TopicU5BU5D_t212031005* L_2 = L_0;
		Topic_t1539434260  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Topic__ctor_m544863251((&L_3), _stringLiteral76953107, _stringLiteral2922325545, _stringLiteral1619252321, /*hidden argument*/NULL);
		*(Topic_t1539434260 *)((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1))) = L_3;
		TopicU5BU5D_t212031005* L_4 = L_2;
		Topic_t1539434260  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Topic__ctor_m544863251((&L_5), _stringLiteral2209468938, _stringLiteral4283636805, _stringLiteral887131750, /*hidden argument*/NULL);
		*(Topic_t1539434260 *)((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2))) = L_5;
		TopicU5BU5D_t212031005* L_6 = L_4;
		Topic_t1539434260  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Topic__ctor_m544863251((&L_7), _stringLiteral2286723752, _stringLiteral1196101003, _stringLiteral2919767492, /*hidden argument*/NULL);
		*(Topic_t1539434260 *)((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(3))) = L_7;
		TopicU5BU5D_t212031005* L_8 = L_6;
		Topic_t1539434260  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Topic__ctor_m544863251((&L_9), _stringLiteral3166921570, _stringLiteral1972310141, _stringLiteral1372198265, /*hidden argument*/NULL);
		*(Topic_t1539434260 *)((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(4))) = L_9;
		TopicU5BU5D_t212031005* L_10 = L_8;
		Topic_t1539434260  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Topic__ctor_m544863251((&L_11), _stringLiteral90544535, _stringLiteral1348730277, _stringLiteral827848858, /*hidden argument*/NULL);
		*(Topic_t1539434260 *)((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(5))) = L_11;
		TopicU5BU5D_t212031005* L_12 = L_10;
		Topic_t1539434260  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Topic__ctor_m544863251((&L_13), _stringLiteral2183063145, _stringLiteral4212515392, _stringLiteral3242078396, /*hidden argument*/NULL);
		*(Topic_t1539434260 *)((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(6))) = L_13;
		TopicU5BU5D_t212031005* L_14 = L_12;
		Topic_t1539434260  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Topic__ctor_m544863251((&L_15), _stringLiteral1545177200, _stringLiteral321412887, _stringLiteral1523494579, /*hidden argument*/NULL);
		*(Topic_t1539434260 *)((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(7))) = L_15;
		TopicU5BU5D_t212031005* L_16 = L_14;
		Topic_t1539434260  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Topic__ctor_m544863251((&L_17), _stringLiteral707485977, _stringLiteral2438101102, _stringLiteral1586394652, /*hidden argument*/NULL);
		*(Topic_t1539434260 *)((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(8))) = L_17;
		TopicU5BU5D_t212031005* L_18 = L_16;
		Topic_t1539434260  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Topic__ctor_m544863251((&L_19), _stringLiteral1488841317, _stringLiteral1903411567, _stringLiteral2278359390, /*hidden argument*/NULL);
		*(Topic_t1539434260 *)((L_18)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)))) = L_19;
		TopicU5BU5D_t212031005* L_20 = L_18;
		Topic_t1539434260  L_21;
		memset(&L_21, 0, sizeof(L_21));
		Topic__ctor_m544863251((&L_21), _stringLiteral650805295, _stringLiteral1364506720, _stringLiteral1589828064, /*hidden argument*/NULL);
		*(Topic_t1539434260 *)((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)))) = L_21;
		TopicU5BU5D_t212031005* L_22 = L_20;
		Topic_t1539434260  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Topic__ctor_m544863251((&L_23), _stringLiteral1810451629, _stringLiteral349133746, _stringLiteral1865022541, /*hidden argument*/NULL);
		*(Topic_t1539434260 *)((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)))) = L_23;
		TopicU5BU5D_t212031005* L_24 = L_22;
		Topic_t1539434260  L_25;
		memset(&L_25, 0, sizeof(L_25));
		Topic__ctor_m544863251((&L_25), _stringLiteral2381930926, _stringLiteral396353485, _stringLiteral3413388730, /*hidden argument*/NULL);
		*(Topic_t1539434260 *)((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)))) = L_25;
		TopicU5BU5D_t212031005* L_26 = L_24;
		Topic_t1539434260  L_27;
		memset(&L_27, 0, sizeof(L_27));
		Topic__ctor_m544863251((&L_27), _stringLiteral1374789023, _stringLiteral220201836, _stringLiteral3706592701, /*hidden argument*/NULL);
		*(Topic_t1539434260 *)((L_26)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)))) = L_27;
		((Chat_t201152076_StaticFields*)il2cpp_codegen_static_fields_for(Chat_t201152076_il2cpp_TypeInfo_var))->set_topics_0(L_26);
		StringU5BU5D_t1281789340* L_28 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10)));
		ArrayElementTypeCheck (L_28, _stringLiteral2899140228);
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2899140228);
		StringU5BU5D_t1281789340* L_29 = L_28;
		ArrayElementTypeCheck (L_29, _stringLiteral3580424420);
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3580424420);
		StringU5BU5D_t1281789340* L_30 = L_29;
		ArrayElementTypeCheck (L_30, _stringLiteral2727014147);
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2727014147);
		StringU5BU5D_t1281789340* L_31 = L_30;
		ArrayElementTypeCheck (L_31, _stringLiteral798688716);
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral798688716);
		StringU5BU5D_t1281789340* L_32 = L_31;
		ArrayElementTypeCheck (L_32, _stringLiteral978072501);
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral978072501);
		StringU5BU5D_t1281789340* L_33 = L_32;
		ArrayElementTypeCheck (L_33, _stringLiteral1599550519);
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral1599550519);
		StringU5BU5D_t1281789340* L_34 = L_33;
		ArrayElementTypeCheck (L_34, _stringLiteral2285215388);
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral2285215388);
		StringU5BU5D_t1281789340* L_35 = L_34;
		ArrayElementTypeCheck (L_35, _stringLiteral2790285033);
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral2790285033);
		StringU5BU5D_t1281789340* L_36 = L_35;
		ArrayElementTypeCheck (L_36, _stringLiteral2909841378);
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral2909841378);
		StringU5BU5D_t1281789340* L_37 = L_36;
		ArrayElementTypeCheck (L_37, _stringLiteral3193987027);
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral3193987027);
		((Chat_t201152076_StaticFields*)il2cpp_codegen_static_fields_for(Chat_t201152076_il2cpp_TypeInfo_var))->set_positiveReactions_1(L_37);
		StringU5BU5D_t1281789340* L_38 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)8));
		ArrayElementTypeCheck (L_38, _stringLiteral3706841342);
		(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3706841342);
		StringU5BU5D_t1281789340* L_39 = L_38;
		ArrayElementTypeCheck (L_39, _stringLiteral10143989);
		(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral10143989);
		StringU5BU5D_t1281789340* L_40 = L_39;
		ArrayElementTypeCheck (L_40, _stringLiteral1038851914);
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1038851914);
		StringU5BU5D_t1281789340* L_41 = L_40;
		ArrayElementTypeCheck (L_41, _stringLiteral1273143564);
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral1273143564);
		StringU5BU5D_t1281789340* L_42 = L_41;
		ArrayElementTypeCheck (L_42, _stringLiteral1649102179);
		(L_42)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1649102179);
		StringU5BU5D_t1281789340* L_43 = L_42;
		ArrayElementTypeCheck (L_43, _stringLiteral3457529818);
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral3457529818);
		StringU5BU5D_t1281789340* L_44 = L_43;
		ArrayElementTypeCheck (L_44, _stringLiteral225286342);
		(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral225286342);
		StringU5BU5D_t1281789340* L_45 = L_44;
		ArrayElementTypeCheck (L_45, _stringLiteral3712236819);
		(L_45)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral3712236819);
		((Chat_t201152076_StaticFields*)il2cpp_codegen_static_fields_for(Chat_t201152076_il2cpp_TypeInfo_var))->set_negativeReactions_2(L_45);
		StringU5BU5D_t1281789340* L_46 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_46, _stringLiteral81207281);
		(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral81207281);
		StringU5BU5D_t1281789340* L_47 = L_46;
		ArrayElementTypeCheck (L_47, _stringLiteral3081170729);
		(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3081170729);
		StringU5BU5D_t1281789340* L_48 = L_47;
		ArrayElementTypeCheck (L_48, _stringLiteral1470258178);
		(L_48)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1470258178);
		StringU5BU5D_t1281789340* L_49 = L_48;
		ArrayElementTypeCheck (L_49, _stringLiteral1711521975);
		(L_49)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral1711521975);
		StringU5BU5D_t1281789340* L_50 = L_49;
		ArrayElementTypeCheck (L_50, _stringLiteral1977936775);
		(L_50)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1977936775);
		((Chat_t201152076_StaticFields*)il2cpp_codegen_static_fields_for(Chat_t201152076_il2cpp_TypeInfo_var))->set_positiveEndings_3(L_50);
		StringU5BU5D_t1281789340* L_51 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)6));
		ArrayElementTypeCheck (L_51, _stringLiteral4041807742);
		(L_51)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4041807742);
		StringU5BU5D_t1281789340* L_52 = L_51;
		ArrayElementTypeCheck (L_52, _stringLiteral2374443066);
		(L_52)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2374443066);
		StringU5BU5D_t1281789340* L_53 = L_52;
		ArrayElementTypeCheck (L_53, _stringLiteral3749535866);
		(L_53)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3749535866);
		StringU5BU5D_t1281789340* L_54 = L_53;
		ArrayElementTypeCheck (L_54, _stringLiteral804911640);
		(L_54)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral804911640);
		StringU5BU5D_t1281789340* L_55 = L_54;
		ArrayElementTypeCheck (L_55, _stringLiteral1953043435);
		(L_55)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1953043435);
		StringU5BU5D_t1281789340* L_56 = L_55;
		ArrayElementTypeCheck (L_56, _stringLiteral3721263679);
		(L_56)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral3721263679);
		((Chat_t201152076_StaticFields*)il2cpp_codegen_static_fields_for(Chat_t201152076_il2cpp_TypeInfo_var))->set_negativeEndings_4(L_56);
		return;
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
// Conversion methods for marshalling of: Chat/Topic
extern "C" void Topic_t1539434260_marshal_pinvoke(const Topic_t1539434260& unmarshaled, Topic_t1539434260_marshaled_pinvoke& marshaled)
{
	marshaled.___supposition_0 = il2cpp_codegen_marshal_string(unmarshaled.get_supposition_0());
	marshaled.___answer1_1 = il2cpp_codegen_marshal_string(unmarshaled.get_answer1_1());
	marshaled.___answer2_2 = il2cpp_codegen_marshal_string(unmarshaled.get_answer2_2());
}
extern "C" void Topic_t1539434260_marshal_pinvoke_back(const Topic_t1539434260_marshaled_pinvoke& marshaled, Topic_t1539434260& unmarshaled)
{
	unmarshaled.set_supposition_0(il2cpp_codegen_marshal_string_result(marshaled.___supposition_0));
	unmarshaled.set_answer1_1(il2cpp_codegen_marshal_string_result(marshaled.___answer1_1));
	unmarshaled.set_answer2_2(il2cpp_codegen_marshal_string_result(marshaled.___answer2_2));
}
// Conversion method for clean up from marshalling of: Chat/Topic
extern "C" void Topic_t1539434260_marshal_pinvoke_cleanup(Topic_t1539434260_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___supposition_0);
	marshaled.___supposition_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___answer1_1);
	marshaled.___answer1_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___answer2_2);
	marshaled.___answer2_2 = NULL;
}
// Conversion methods for marshalling of: Chat/Topic
extern "C" void Topic_t1539434260_marshal_com(const Topic_t1539434260& unmarshaled, Topic_t1539434260_marshaled_com& marshaled)
{
	marshaled.___supposition_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_supposition_0());
	marshaled.___answer1_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_answer1_1());
	marshaled.___answer2_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_answer2_2());
}
extern "C" void Topic_t1539434260_marshal_com_back(const Topic_t1539434260_marshaled_com& marshaled, Topic_t1539434260& unmarshaled)
{
	unmarshaled.set_supposition_0(il2cpp_codegen_marshal_bstring_result(marshaled.___supposition_0));
	unmarshaled.set_answer1_1(il2cpp_codegen_marshal_bstring_result(marshaled.___answer1_1));
	unmarshaled.set_answer2_2(il2cpp_codegen_marshal_bstring_result(marshaled.___answer2_2));
}
// Conversion method for clean up from marshalling of: Chat/Topic
extern "C" void Topic_t1539434260_marshal_com_cleanup(Topic_t1539434260_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___supposition_0);
	marshaled.___supposition_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___answer1_1);
	marshaled.___answer1_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___answer2_2);
	marshaled.___answer2_2 = NULL;
}
// System.Void Chat/Topic::.ctor(System.String,System.String,System.String)
extern "C"  void Topic__ctor_m544863251 (Topic_t1539434260 * __this, String_t* ___supposition0, String_t* ___answer11, String_t* ___answer22, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(Topic_t1539434260 ));
		String_t* L_0 = ___supposition0;
		__this->set_supposition_0(L_0);
		String_t* L_1 = ___answer11;
		__this->set_answer1_1(L_1);
		String_t* L_2 = ___answer22;
		__this->set_answer2_2(L_2);
		return;
	}
}
extern "C"  void Topic__ctor_m544863251_AdjustorThunk (RuntimeObject * __this, String_t* ___supposition0, String_t* ___answer11, String_t* ___answer22, const RuntimeMethod* method)
{
	Topic_t1539434260 * _thisAdjusted = reinterpret_cast<Topic_t1539434260 *>(__this + 1);
	Topic__ctor_m544863251(_thisAdjusted, ___supposition0, ___answer11, ___answer22, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ChatManager::.ctor()
extern "C"  void ChatManager__ctor_m1987735676 (ChatManager_t1133435335 * __this, const RuntimeMethod* method)
{
	{
		__this->set_score_18(3);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChatManager::OnEnable()
extern "C"  void ChatManager_OnEnable_m558465284 (ChatManager_t1133435335 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatManager_OnEnable_m558465284_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t3704657025 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RectTransform_t3704657025 * L_0 = __this->get_chatContent_2();
		RuntimeObject* L_1 = Transform_GetEnumerator_m2717073726(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0028;
		}

IL_0011:
		{
			RuntimeObject* L_2 = V_1;
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_2);
			V_0 = ((RectTransform_t3704657025 *)CastclassSealed((RuntimeObject*)L_3, RectTransform_t3704657025_il2cpp_TypeInfo_var));
			RectTransform_t3704657025 * L_4 = V_0;
			GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			Object_Destroy_m565254235(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		}

IL_0028:
		{
			RuntimeObject* L_6 = V_1;
			bool L_7 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_0011;
			}
		}

IL_0033:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_0038);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_8 = V_1;
			RuntimeObject* L_9 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_2 = L_9;
			if (!L_9)
			{
				goto IL_004b;
			}
		}

IL_0045:
		{
			RuntimeObject* L_10 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_10);
		}

IL_004b:
		{
			IL2CPP_END_FINALLY(56)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004c:
	{
		__this->set_score_18(3);
		Text_t1901882714 * L_11 = __this->get_titleLabel_3();
		String_t* L_12 = __this->get_oponentName_12();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_12);
		GameObject_t1113636619 * L_13 = __this->get_startMessage_6();
		String_t* L_14 = __this->get_oponentName_12();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2666699792, L_14, /*hidden argument*/NULL);
		ChatManager_AddChatMessage_m478030932(__this, L_13, L_15, /*hidden argument*/NULL);
		ChatManager_StartNewTopic_m257331358(__this, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChatManager::StartNewTopic(System.Single)
extern "C"  void ChatManager_StartNewTopic_m257331358 (ChatManager_t1133435335 * __this, float ___delay0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatManager_StartNewTopic_m257331358_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_answer1_8();
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = __this->get_answer2_10();
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		Topic_t1539434260  L_2 = __this->get_topic_16();
		Nullable_1_t3261996342  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Nullable_1__ctor_m884083491((&L_3), L_2, /*hidden argument*/Nullable_1__ctor_m884083491_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Chat_t201152076_il2cpp_TypeInfo_var);
		Topic_t1539434260  L_4 = Chat_RandomTopic_m514629220(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->set_topic_16(L_4);
		float L_5 = ___delay0;
		intptr_t L_6 = (intptr_t)ChatManager_U3CStartNewTopicU3Em__0_m3118319763_RuntimeMethod_var;
		Action_t1264377477 * L_7 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_7, __this, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		Utils_Delay_m1725504855(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChatManager::SelectAnswer(System.Boolean)
extern "C"  void ChatManager_SelectAnswer_m1099509755 (ChatManager_t1133435335 * __this, bool ___first0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatManager_SelectAnswer_m1099509755_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CSelectAnswerU3Ec__AnonStorey0_t2974158987 * V_0 = NULL;
	GameObject_t1113636619 * G_B2_0 = NULL;
	ChatManager_t1133435335 * G_B2_1 = NULL;
	GameObject_t1113636619 * G_B1_0 = NULL;
	ChatManager_t1133435335 * G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	GameObject_t1113636619 * G_B3_1 = NULL;
	ChatManager_t1133435335 * G_B3_2 = NULL;
	int32_t G_B5_0 = 0;
	ChatManager_t1133435335 * G_B5_1 = NULL;
	int32_t G_B4_0 = 0;
	ChatManager_t1133435335 * G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	ChatManager_t1133435335 * G_B6_2 = NULL;
	{
		U3CSelectAnswerU3Ec__AnonStorey0_t2974158987 * L_0 = (U3CSelectAnswerU3Ec__AnonStorey0_t2974158987 *)il2cpp_codegen_object_new(U3CSelectAnswerU3Ec__AnonStorey0_t2974158987_il2cpp_TypeInfo_var);
		U3CSelectAnswerU3Ec__AnonStorey0__ctor_m3528346918(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CSelectAnswerU3Ec__AnonStorey0_t2974158987 * L_1 = V_0;
		L_1->set_U24this_1(__this);
		GameObject_t1113636619 * L_2 = __this->get_answer1_8();
		GameObject_SetActive_m796801857(L_2, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = __this->get_answer2_10();
		GameObject_SetActive_m796801857(L_3, (bool)0, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_4 = __this->get_audioSource_13();
		AudioClip_t3680889665 * L_5 = __this->get_sentSound_14();
		AudioSource_PlayOneShot_m1688286683(L_4, L_5, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = __this->get_sentMessage_4();
		bool L_7 = ___first0;
		G_B1_0 = L_6;
		G_B1_1 = __this;
		if (!L_7)
		{
			G_B2_0 = L_6;
			G_B2_1 = __this;
			goto IL_0053;
		}
	}
	{
		Topic_t1539434260 * L_8 = __this->get_address_of_topic_16();
		String_t* L_9 = L_8->get_answer1_1();
		G_B3_0 = L_9;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_005e;
	}

IL_0053:
	{
		Topic_t1539434260 * L_10 = __this->get_address_of_topic_16();
		String_t* L_11 = L_10->get_answer2_2();
		G_B3_0 = L_11;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_005e:
	{
		ChatManager_AddChatMessage_m478030932(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		U3CSelectAnswerU3Ec__AnonStorey0_t2974158987 * L_12 = V_0;
		int32_t L_13 = Random_Range_m4054026115(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		L_12->set_isReactionPositive_0((bool)((((int32_t)L_13) == ((int32_t)1))? 1 : 0));
		int32_t L_14 = __this->get_score_18();
		U3CSelectAnswerU3Ec__AnonStorey0_t2974158987 * L_15 = V_0;
		bool L_16 = L_15->get_isReactionPositive_0();
		G_B4_0 = L_14;
		G_B4_1 = __this;
		if (!L_16)
		{
			G_B5_0 = L_14;
			G_B5_1 = __this;
			goto IL_008b;
		}
	}
	{
		G_B6_0 = (-1);
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_008c;
	}

IL_008b:
	{
		G_B6_0 = 6;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_008c:
	{
		G_B6_2->set_score_18(((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0)));
		U3CSelectAnswerU3Ec__AnonStorey0_t2974158987 * L_17 = V_0;
		intptr_t L_18 = (intptr_t)U3CSelectAnswerU3Ec__AnonStorey0_U3CU3Em__0_m2460797937_RuntimeMethod_var;
		Action_t1264377477 * L_19 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_19, L_17, L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		Utils_Delay_m1725504855(NULL /*static, unused*/, (1.0f), L_19, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChatManager::AddChatMessage(UnityEngine.GameObject,System.String)
extern "C"  void ChatManager_AddChatMessage_m478030932 (ChatManager_t1133435335 * __this, GameObject_t1113636619 * ___prefab0, String_t* ___text1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatManager_AddChatMessage_m478030932_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___prefab0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_1 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_0, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		V_0 = L_1;
		GameObject_t1113636619 * L_2 = V_0;
		RectTransform_t3704657025 * L_3 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_2, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		RectTransform_t3704657025 * L_4 = __this->get_chatContent_2();
		Transform_SetParent_m273471670(L_3, L_4, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_5 = V_0;
		Text_t1901882714 * L_6 = GameObject_GetComponentInChildren_TisText_t1901882714_m3637202860(L_5, /*hidden argument*/GameObject_GetComponentInChildren_TisText_t1901882714_m3637202860_RuntimeMethod_var);
		String_t* L_7 = ___text1;
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_7);
		return;
	}
}
// System.Void ChatManager::Update()
extern "C"  void ChatManager_Update_m1569383110 (ChatManager_t1133435335 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatManager_Update_m1569383110_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->get_blockPunchAction1Key_4();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_answer1_8();
		bool L_3 = GameObject_get_activeInHierarchy_m2006396688(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		ChatManager_SelectAnswer_m1099509755(__this, (bool)1, /*hidden argument*/NULL);
		goto IL_0051;
	}

IL_002b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		int32_t L_4 = ((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->get_punchAction2Key_2();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_5 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		GameObject_t1113636619 * L_6 = __this->get_answer2_10();
		bool L_7 = GameObject_get_activeInHierarchy_m2006396688(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		ChatManager_SelectAnswer_m1099509755(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0051:
	{
		return;
	}
}
// System.Void ChatManager::OnAnswer1Click()
extern "C"  void ChatManager_OnAnswer1Click_m3076749762 (ChatManager_t1133435335 * __this, const RuntimeMethod* method)
{
	{
		ChatManager_SelectAnswer_m1099509755(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChatManager::OnAnswer2Click()
extern "C"  void ChatManager_OnAnswer2Click_m2858318274 (ChatManager_t1133435335 * __this, const RuntimeMethod* method)
{
	{
		ChatManager_SelectAnswer_m1099509755(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChatManager::<StartNewTopic>m__0()
extern "C"  void ChatManager_U3CStartNewTopicU3Em__0_m3118319763 (ChatManager_t1133435335 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatManager_U3CStartNewTopicU3Em__0_m3118319763_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioSource_t3935305588 * L_0 = __this->get_audioSource_13();
		AudioClip_t3680889665 * L_1 = __this->get_receivedSound_15();
		AudioSource_PlayOneShot_m1688286683(L_0, L_1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_receivedMessage_5();
		Topic_t1539434260 * L_3 = __this->get_address_of_topic_16();
		String_t* L_4 = L_3->get_supposition_0();
		ChatManager_AddChatMessage_m478030932(__this, L_2, L_4, /*hidden argument*/NULL);
		intptr_t L_5 = (intptr_t)ChatManager_U3CStartNewTopicU3Em__1_m779667603_RuntimeMethod_var;
		Action_t1264377477 * L_6 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_6, __this, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		Utils_Delay_m1725504855(NULL /*static, unused*/, (1.0f), L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChatManager::<StartNewTopic>m__1()
extern "C"  void ChatManager_U3CStartNewTopicU3Em__1_m779667603 (ChatManager_t1133435335 * __this, const RuntimeMethod* method)
{
	{
		Text_t1901882714 * L_0 = __this->get_answer1Message_9();
		Topic_t1539434260 * L_1 = __this->get_address_of_topic_16();
		String_t* L_2 = L_1->get_answer1_1();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		Text_t1901882714 * L_3 = __this->get_answer2Message_11();
		Topic_t1539434260 * L_4 = __this->get_address_of_topic_16();
		String_t* L_5 = L_4->get_answer2_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		GameObject_t1113636619 * L_6 = __this->get_answer1_8();
		GameObject_SetActive_m796801857(L_6, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_7 = __this->get_answer2_10();
		GameObject_SetActive_m796801857(L_7, (bool)1, /*hidden argument*/NULL);
		return;
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
// System.Void ChatManager/<SelectAnswer>c__AnonStorey0::.ctor()
extern "C"  void U3CSelectAnswerU3Ec__AnonStorey0__ctor_m3528346918 (U3CSelectAnswerU3Ec__AnonStorey0_t2974158987 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChatManager/<SelectAnswer>c__AnonStorey0::<>m__0()
extern "C"  void U3CSelectAnswerU3Ec__AnonStorey0_U3CU3Em__0_m2460797937 (U3CSelectAnswerU3Ec__AnonStorey0_t2974158987 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSelectAnswerU3Ec__AnonStorey0_U3CU3Em__0_m2460797937_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ChatManager_t1133435335 * L_0 = __this->get_U24this_1();
		AudioSource_t3935305588 * L_1 = L_0->get_audioSource_13();
		ChatManager_t1133435335 * L_2 = __this->get_U24this_1();
		AudioClip_t3680889665 * L_3 = L_2->get_receivedSound_15();
		AudioSource_PlayOneShot_m1688286683(L_1, L_3, /*hidden argument*/NULL);
		ChatManager_t1133435335 * L_4 = __this->get_U24this_1();
		int32_t L_5 = L_4->get_score_18();
		if ((((int32_t)L_5) > ((int32_t)1)))
		{
			goto IL_0063;
		}
	}
	{
		ChatManager_t1133435335 * L_6 = __this->get_U24this_1();
		ChatManager_t1133435335 * L_7 = __this->get_U24this_1();
		GameObject_t1113636619 * L_8 = L_7->get_receivedMessage_5();
		IL2CPP_RUNTIME_CLASS_INIT(Chat_t201152076_il2cpp_TypeInfo_var);
		String_t* L_9 = Chat_RandomEnding_m1508430914(NULL /*static, unused*/, (bool)1, /*hidden argument*/NULL);
		ChatManager_AddChatMessage_m478030932(L_6, L_8, L_9, /*hidden argument*/NULL);
		intptr_t L_10 = (intptr_t)U3CSelectAnswerU3Ec__AnonStorey0_U3CU3Em__1_m122145777_RuntimeMethod_var;
		Action_t1264377477 * L_11 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_11, __this, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		Utils_Delay_m1725504855(NULL /*static, unused*/, (1.0f), L_11, /*hidden argument*/NULL);
		goto IL_00fe;
	}

IL_0063:
	{
		ChatManager_t1133435335 * L_12 = __this->get_U24this_1();
		int32_t L_13 = L_12->get_score_18();
		if ((((int32_t)L_13) < ((int32_t)((int32_t)10))))
		{
			goto IL_00ac;
		}
	}
	{
		ChatManager_t1133435335 * L_14 = __this->get_U24this_1();
		ChatManager_t1133435335 * L_15 = __this->get_U24this_1();
		GameObject_t1113636619 * L_16 = L_15->get_receivedMessage_5();
		IL2CPP_RUNTIME_CLASS_INIT(Chat_t201152076_il2cpp_TypeInfo_var);
		String_t* L_17 = Chat_RandomEnding_m1508430914(NULL /*static, unused*/, (bool)0, /*hidden argument*/NULL);
		ChatManager_AddChatMessage_m478030932(L_14, L_16, L_17, /*hidden argument*/NULL);
		intptr_t L_18 = (intptr_t)U3CSelectAnswerU3Ec__AnonStorey0_U3CU3Em__2_m2843134961_RuntimeMethod_var;
		Action_t1264377477 * L_19 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_19, __this, L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		Utils_Delay_m1725504855(NULL /*static, unused*/, (1.0f), L_19, /*hidden argument*/NULL);
		goto IL_00fe;
	}

IL_00ac:
	{
		ChatManager_t1133435335 * L_20 = __this->get_U24this_1();
		bool L_21 = __this->get_isReactionPositive_0();
		ChatManager_t1133435335 * L_22 = __this->get_U24this_1();
		String_t* L_23 = L_22->get_lastReaction_17();
		IL2CPP_RUNTIME_CLASS_INIT(Chat_t201152076_il2cpp_TypeInfo_var);
		String_t* L_24 = Chat_RandomReaction_m3164130441(NULL /*static, unused*/, L_21, L_23, /*hidden argument*/NULL);
		L_20->set_lastReaction_17(L_24);
		ChatManager_t1133435335 * L_25 = __this->get_U24this_1();
		ChatManager_t1133435335 * L_26 = __this->get_U24this_1();
		GameObject_t1113636619 * L_27 = L_26->get_receivedMessage_5();
		ChatManager_t1133435335 * L_28 = __this->get_U24this_1();
		String_t* L_29 = L_28->get_lastReaction_17();
		ChatManager_AddChatMessage_m478030932(L_25, L_27, L_29, /*hidden argument*/NULL);
		ChatManager_t1133435335 * L_30 = __this->get_U24this_1();
		ChatManager_StartNewTopic_m257331358(L_30, (1.0f), /*hidden argument*/NULL);
	}

IL_00fe:
	{
		return;
	}
}
// System.Void ChatManager/<SelectAnswer>c__AnonStorey0::<>m__1()
extern "C"  void U3CSelectAnswerU3Ec__AnonStorey0_U3CU3Em__1_m122145777 (U3CSelectAnswerU3Ec__AnonStorey0_t2974158987 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSelectAnswerU3Ec__AnonStorey0_U3CU3Em__1_m122145777_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float G_B2_0 = 0.0f;
	float G_B1_0 = 0.0f;
	{
		ChatManager_t1133435335 * L_0 = __this->get_U24this_1();
		ChatManager_t1133435335 * L_1 = __this->get_U24this_1();
		GameObject_t1113636619 * L_2 = L_1->get_endMessage_7();
		ChatManager_t1133435335 * L_3 = __this->get_U24this_1();
		String_t* L_4 = L_3->get_oponentName_12();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3937257545(NULL /*static, unused*/, L_4, _stringLiteral4118447765, /*hidden argument*/NULL);
		ChatManager_AddChatMessage_m478030932(L_0, L_2, L_5, /*hidden argument*/NULL);
		Action_t1264377477 * L_6 = ((U3CSelectAnswerU3Ec__AnonStorey0_t2974158987_StaticFields*)il2cpp_codegen_static_fields_for(U3CSelectAnswerU3Ec__AnonStorey0_t2974158987_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_2();
		G_B1_0 = (2.0f);
		if (L_6)
		{
			G_B2_0 = (2.0f);
			goto IL_0048;
		}
	}
	{
		intptr_t L_7 = (intptr_t)U3CSelectAnswerU3Ec__AnonStorey0_U3CU3Em__3_m504482801_RuntimeMethod_var;
		Action_t1264377477 * L_8 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_8, NULL, L_7, /*hidden argument*/NULL);
		((U3CSelectAnswerU3Ec__AnonStorey0_t2974158987_StaticFields*)il2cpp_codegen_static_fields_for(U3CSelectAnswerU3Ec__AnonStorey0_t2974158987_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_2(L_8);
		G_B2_0 = G_B1_0;
	}

IL_0048:
	{
		Action_t1264377477 * L_9 = ((U3CSelectAnswerU3Ec__AnonStorey0_t2974158987_StaticFields*)il2cpp_codegen_static_fields_for(U3CSelectAnswerU3Ec__AnonStorey0_t2974158987_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_2();
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		Utils_Delay_m1725504855(NULL /*static, unused*/, G_B2_0, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChatManager/<SelectAnswer>c__AnonStorey0::<>m__2()
extern "C"  void U3CSelectAnswerU3Ec__AnonStorey0_U3CU3Em__2_m2843134961 (U3CSelectAnswerU3Ec__AnonStorey0_t2974158987 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSelectAnswerU3Ec__AnonStorey0_U3CU3Em__2_m2843134961_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float G_B2_0 = 0.0f;
	float G_B1_0 = 0.0f;
	{
		ChatManager_t1133435335 * L_0 = __this->get_U24this_1();
		ChatManager_t1133435335 * L_1 = __this->get_U24this_1();
		GameObject_t1113636619 * L_2 = L_1->get_endMessage_7();
		ChatManager_AddChatMessage_m478030932(L_0, L_2, _stringLiteral2266424839, /*hidden argument*/NULL);
		Action_t1264377477 * L_3 = ((U3CSelectAnswerU3Ec__AnonStorey0_t2974158987_StaticFields*)il2cpp_codegen_static_fields_for(U3CSelectAnswerU3Ec__AnonStorey0_t2974158987_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_3();
		G_B1_0 = (2.0f);
		if (L_3)
		{
			G_B2_0 = (2.0f);
			goto IL_0038;
		}
	}
	{
		intptr_t L_4 = (intptr_t)U3CSelectAnswerU3Ec__AnonStorey0_U3CU3Em__4_m3225471985_RuntimeMethod_var;
		Action_t1264377477 * L_5 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_5, NULL, L_4, /*hidden argument*/NULL);
		((U3CSelectAnswerU3Ec__AnonStorey0_t2974158987_StaticFields*)il2cpp_codegen_static_fields_for(U3CSelectAnswerU3Ec__AnonStorey0_t2974158987_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_3(L_5);
		G_B2_0 = G_B1_0;
	}

IL_0038:
	{
		Action_t1264377477 * L_6 = ((U3CSelectAnswerU3Ec__AnonStorey0_t2974158987_StaticFields*)il2cpp_codegen_static_fields_for(U3CSelectAnswerU3Ec__AnonStorey0_t2974158987_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_3();
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		Utils_Delay_m1725504855(NULL /*static, unused*/, G_B2_0, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChatManager/<SelectAnswer>c__AnonStorey0::<>m__3()
extern "C"  void U3CSelectAnswerU3Ec__AnonStorey0_U3CU3Em__3_m504482801 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSelectAnswerU3Ec__AnonStorey0_U3CU3Em__3_m504482801_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		PhoneManager_t4261849291 * L_0 = Object_FindObjectOfType_TisPhoneManager_t4261849291_m3175860931(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisPhoneManager_t4261849291_m3175860931_RuntimeMethod_var);
		PhoneManager_ShowSwiping_m1788750612(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChatManager/<SelectAnswer>c__AnonStorey0::<>m__4()
extern "C"  void U3CSelectAnswerU3Ec__AnonStorey0_U3CU3Em__4_m3225471985 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSelectAnswerU3Ec__AnonStorey0_U3CU3Em__4_m3225471985_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral742876739, /*hidden argument*/NULL);
		return;
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
// System.Void Countdown::.ctor()
extern "C"  void Countdown__ctor_m2813593011 (Countdown_t1688036482 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Countdown::Start()
extern "C"  void Countdown_Start_m3176152501 (Countdown_t1688036482 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Countdown_Start_m3176152501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1901882714 * L_0 = Component_GetComponent_TisText_t1901882714_m4196288697(__this, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		__this->set_label_2(L_0);
		RuntimeObject* L_1 = Countdown_CountdownCoroutine_m4265235627(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator Countdown::CountdownCoroutine()
extern "C"  RuntimeObject* Countdown_CountdownCoroutine_m4265235627 (Countdown_t1688036482 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Countdown_CountdownCoroutine_m4265235627_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CCountdownCoroutineU3Ec__Iterator0_t2126704546 * V_0 = NULL;
	{
		U3CCountdownCoroutineU3Ec__Iterator0_t2126704546 * L_0 = (U3CCountdownCoroutineU3Ec__Iterator0_t2126704546 *)il2cpp_codegen_object_new(U3CCountdownCoroutineU3Ec__Iterator0_t2126704546_il2cpp_TypeInfo_var);
		U3CCountdownCoroutineU3Ec__Iterator0__ctor_m1501233676(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CCountdownCoroutineU3Ec__Iterator0_t2126704546 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CCountdownCoroutineU3Ec__Iterator0_t2126704546 * L_2 = V_0;
		return L_2;
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
// System.Void Countdown/<CountdownCoroutine>c__Iterator0::.ctor()
extern "C"  void U3CCountdownCoroutineU3Ec__Iterator0__ctor_m1501233676 (U3CCountdownCoroutineU3Ec__Iterator0_t2126704546 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Countdown/<CountdownCoroutine>c__Iterator0::MoveNext()
extern "C"  bool U3CCountdownCoroutineU3Ec__Iterator0_MoveNext_m2476399835 (U3CCountdownCoroutineU3Ec__Iterator0_t2126704546 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCountdownCoroutineU3Ec__Iterator0_MoveNext_m2476399835_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002d;
			}
			case 1:
			{
				goto IL_0051;
			}
			case 2:
			{
				goto IL_008a;
			}
			case 3:
			{
				goto IL_00c3;
			}
			case 4:
			{
				goto IL_0107;
			}
		}
	}
	{
		goto IL_011f;
	}

IL_002d:
	{
		WaitForSeconds_t1699091251 * L_2 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_2, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_2);
		bool L_3 = __this->get_U24disposing_2();
		if (L_3)
		{
			goto IL_004c;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_004c:
	{
		goto IL_0121;
	}

IL_0051:
	{
		Countdown_t1688036482 * L_4 = __this->get_U24this_0();
		Text_t1901882714 * L_5 = L_4->get_label_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral3452614542);
		WaitForSeconds_t1699091251 * L_6 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_6, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_6);
		bool L_7 = __this->get_U24disposing_2();
		if (L_7)
		{
			goto IL_0085;
		}
	}
	{
		__this->set_U24PC_3(2);
	}

IL_0085:
	{
		goto IL_0121;
	}

IL_008a:
	{
		Countdown_t1688036482 * L_8 = __this->get_U24this_0();
		Text_t1901882714 * L_9 = L_8->get_label_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, _stringLiteral3452614543);
		WaitForSeconds_t1699091251 * L_10 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_10, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_10);
		bool L_11 = __this->get_U24disposing_2();
		if (L_11)
		{
			goto IL_00be;
		}
	}
	{
		__this->set_U24PC_3(3);
	}

IL_00be:
	{
		goto IL_0121;
	}

IL_00c3:
	{
		Countdown_t1688036482 * L_12 = __this->get_U24this_0();
		Text_t1901882714 * L_13 = L_12->get_label_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, _stringLiteral1209586435);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		FightController_t483979242 * L_14 = Object_FindObjectOfType_TisFightController_t483979242_m1819838589(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisFightController_t483979242_m1819838589_RuntimeMethod_var);
		L_14->set_started_6((bool)1);
		WaitForSeconds_t1699091251 * L_15 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_15, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_15);
		bool L_16 = __this->get_U24disposing_2();
		if (L_16)
		{
			goto IL_0102;
		}
	}
	{
		__this->set_U24PC_3(4);
	}

IL_0102:
	{
		goto IL_0121;
	}

IL_0107:
	{
		Countdown_t1688036482 * L_17 = __this->get_U24this_0();
		Text_t1901882714 * L_18 = L_17->get_label_2();
		Behaviour_set_enabled_m20417929(L_18, (bool)0, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_011f:
	{
		return (bool)0;
	}

IL_0121:
	{
		return (bool)1;
	}
}
// System.Object Countdown/<CountdownCoroutine>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CCountdownCoroutineU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2988280463 (U3CCountdownCoroutineU3Ec__Iterator0_t2126704546 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object Countdown/<CountdownCoroutine>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CCountdownCoroutineU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m942529914 (U3CCountdownCoroutineU3Ec__Iterator0_t2126704546 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void Countdown/<CountdownCoroutine>c__Iterator0::Dispose()
extern "C"  void U3CCountdownCoroutineU3Ec__Iterator0_Dispose_m3752655726 (U3CCountdownCoroutineU3Ec__Iterator0_t2126704546 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void Countdown/<CountdownCoroutine>c__Iterator0::Reset()
extern "C"  void U3CCountdownCoroutineU3Ec__Iterator0_Reset_m1577327775 (U3CCountdownCoroutineU3Ec__Iterator0_t2126704546 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCountdownCoroutineU3Ec__Iterator0_Reset_m1577327775_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void FightController::.ctor()
extern "C"  void FightController__ctor_m1880610187 (FightController_t483979242 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FightController::Start()
extern "C"  void FightController_Start_m281628903 (FightController_t483979242 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FightController_Start_m281628903_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Fighters_t808620833 * L_0 = Component_GetComponent_TisFighters_t808620833_m1186822352(__this, /*hidden argument*/Component_GetComponent_TisFighters_t808620833_m1186822352_RuntimeMethod_var);
		__this->set_fighters_5(L_0);
		return;
	}
}
// System.Void FightController::OnPlayerMove(FighterInput.Move)
extern "C"  void FightController_OnPlayerMove_m586935552 (FightController_t483979242 * __this, int32_t ___move0, const RuntimeMethod* method)
{
	{
		Fighters_t808620833 * L_0 = __this->get_fighters_5();
		Fighter_t1911001889 * L_1 = L_0->get_player_8();
		Fighters_t808620833 * L_2 = __this->get_fighters_5();
		Fighter_t1911001889 * L_3 = L_2->get_computer_9();
		int32_t L_4 = ___move0;
		FightController_HandleMove_m2523282468(__this, L_1, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FightController::OnComputerMove(FighterInput.Move)
extern "C"  void FightController_OnComputerMove_m1801124063 (FightController_t483979242 * __this, int32_t ___move0, const RuntimeMethod* method)
{
	{
		Fighters_t808620833 * L_0 = __this->get_fighters_5();
		Fighter_t1911001889 * L_1 = L_0->get_computer_9();
		Fighters_t808620833 * L_2 = __this->get_fighters_5();
		Fighter_t1911001889 * L_3 = L_2->get_player_8();
		int32_t L_4 = ___move0;
		FightController_HandleMove_m2523282468(__this, L_1, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FightController::HandleMove(Fighter,Fighter,FighterInput.Move)
extern "C"  void FightController_HandleMove_m2523282468 (FightController_t483979242 * __this, Fighter_t1911001889 * ___attacker0, Fighter_t1911001889 * ___target1, int32_t ___move2, const RuntimeMethod* method)
{
	AudioSource_t3935305588 * G_B10_0 = NULL;
	AudioSource_t3935305588 * G_B9_0 = NULL;
	AudioClip_t3680889665 * G_B11_0 = NULL;
	AudioSource_t3935305588 * G_B11_1 = NULL;
	{
		bool L_0 = __this->get_started_6();
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		float L_1 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		Fighter_t1911001889 * L_2 = ___attacker0;
		float L_3 = L_2->get_cooldown_1();
		if ((((float)L_1) < ((float)L_3)))
		{
			goto IL_003d;
		}
	}
	{
		Fighter_t1911001889 * L_4 = ___target1;
		Poser_t2653926573 * L_5 = L_4->get_poser_0();
		int32_t L_6 = Poser_get_CurrentStance_m4100513785(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_003d;
		}
	}
	{
		Fighter_t1911001889 * L_7 = ___attacker0;
		Poser_t2653926573 * L_8 = L_7->get_poser_0();
		int32_t L_9 = Poser_get_CurrentStance_m4100513785(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)6))))
		{
			goto IL_003e;
		}
	}

IL_003d:
	{
		return;
	}

IL_003e:
	{
		Fighter_t1911001889 * L_10 = ___attacker0;
		int32_t L_11 = Fighter_get_Stamina_m1543692505(L_10, /*hidden argument*/NULL);
		int32_t L_12 = ___move2;
		int32_t L_13 = MoveMethods_StaminaCost_m2098551359(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_11) <= ((int32_t)L_13)))
		{
			goto IL_00e4;
		}
	}
	{
		int32_t L_14 = ___move2;
		if ((((int32_t)L_14) == ((int32_t)1)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_15 = ___move2;
		if (L_15)
		{
			goto IL_00e4;
		}
	}

IL_005c:
	{
		Fighter_t1911001889 * L_16 = ___attacker0;
		float L_17 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_18 = ___move2;
		float L_19 = MoveMethods_Cooldown_m1292600930(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		L_16->set_cooldown_1(((float)il2cpp_codegen_add((float)L_17, (float)L_19)));
		Fighter_t1911001889 * L_20 = ___attacker0;
		Fighter_t1911001889 * L_21 = L_20;
		int32_t L_22 = Fighter_get_Stamina_m1543692505(L_21, /*hidden argument*/NULL);
		int32_t L_23 = ___move2;
		int32_t L_24 = MoveMethods_StaminaCost_m2098551359(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		Fighter_set_Stamina_m3125874422(L_21, ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_24)), /*hidden argument*/NULL);
		Fighter_t1911001889 * L_25 = ___attacker0;
		Poser_t2653926573 * L_26 = L_25->get_poser_0();
		int32_t L_27 = ___move2;
		int32_t L_28 = MoveMethods_Stance_m1856667472(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		int32_t L_29 = ___move2;
		float L_30 = MoveMethods_Duration_m3501436441(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		Poser_Take_m3588067046(L_26, L_28, L_30, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_31 = __this->get_audioSource_2();
		int32_t L_32 = ___move2;
		G_B9_0 = L_31;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			G_B10_0 = L_31;
			goto IL_00b0;
		}
	}
	{
		AudioClip_t3680889665 * L_33 = __this->get_punchSound_3();
		G_B11_0 = L_33;
		G_B11_1 = G_B9_0;
		goto IL_00b6;
	}

IL_00b0:
	{
		AudioClip_t3680889665 * L_34 = __this->get_kickSound_4();
		G_B11_0 = L_34;
		G_B11_1 = G_B10_0;
	}

IL_00b6:
	{
		AudioSource_PlayOneShot_m1688286683(G_B11_1, G_B11_0, /*hidden argument*/NULL);
		Fighter_t1911001889 * L_35 = ___target1;
		Poser_t2653926573 * L_36 = L_35->get_poser_0();
		int32_t L_37 = Poser_get_CurrentStance_m4100513785(L_36, /*hidden argument*/NULL);
		int32_t L_38 = ___move2;
		int32_t L_39 = MoveMethods_CounterStance_m1287149377(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		if ((((int32_t)L_37) == ((int32_t)L_39)))
		{
			goto IL_00e4;
		}
	}
	{
		Fighter_t1911001889 * L_40 = ___target1;
		int32_t L_41 = ___move2;
		int32_t L_42 = MoveMethods_Damage_m3693683156(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		int32_t L_43 = ___move2;
		float L_44 = MoveMethods_Duration_m3501436441(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
		FightController_Damage_m3292052364(__this, L_40, L_42, L_44, /*hidden argument*/NULL);
	}

IL_00e4:
	{
		int32_t L_45 = ___move2;
		if ((((int32_t)L_45) == ((int32_t)2)))
		{
			goto IL_00f2;
		}
	}
	{
		int32_t L_46 = ___move2;
		if ((!(((uint32_t)L_46) == ((uint32_t)3))))
		{
			goto IL_0109;
		}
	}

IL_00f2:
	{
		Fighter_t1911001889 * L_47 = ___attacker0;
		Poser_t2653926573 * L_48 = L_47->get_poser_0();
		int32_t L_49 = ___move2;
		int32_t L_50 = MoveMethods_Stance_m1856667472(NULL /*static, unused*/, L_49, /*hidden argument*/NULL);
		int32_t L_51 = ___move2;
		float L_52 = MoveMethods_Duration_m3501436441(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
		Poser_Take_m3588067046(L_48, L_50, L_52, /*hidden argument*/NULL);
	}

IL_0109:
	{
		return;
	}
}
// System.Void FightController::Damage(Fighter,System.Int32,System.Single)
extern "C"  void FightController_Damage_m3292052364 (FightController_t483979242 * __this, Fighter_t1911001889 * ___target0, int32_t ___damage1, float ___duration2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FightController_Damage_m3292052364_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float G_B4_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		Fighter_t1911001889 * L_0 = ___target0;
		Fighter_t1911001889 * L_1 = L_0;
		int32_t L_2 = Fighter_get_Health_m1631018578(L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___damage1;
		Fighter_set_Health_m648752105(L_1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)), /*hidden argument*/NULL);
		Fighter_t1911001889 * L_4 = ___target0;
		int32_t L_5 = Fighter_get_Health_m1631018578(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		Fighter_t1911001889 * L_6 = ___target0;
		Poser_t2653926573 * L_7 = L_6->get_poser_0();
		float L_8 = ___duration2;
		Poser_InterruptCurrentStance_m2506713111(L_7, 5, L_8, /*hidden argument*/NULL);
		goto IL_005f;
	}

IL_002c:
	{
		Fighter_t1911001889 * L_9 = ___target0;
		Poser_t2653926573 * L_10 = L_9->get_poser_0();
		Poser_set_CurrentStance_m425755468(L_10, 6, /*hidden argument*/NULL);
		Action_t1264377477 * L_11 = ((FightController_t483979242_StaticFields*)il2cpp_codegen_static_fields_for(FightController_t483979242_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_7();
		G_B3_0 = (3.0f);
		if (L_11)
		{
			G_B4_0 = (3.0f);
			goto IL_0055;
		}
	}
	{
		intptr_t L_12 = (intptr_t)FightController_U3CDamageU3Em__0_m976867632_RuntimeMethod_var;
		Action_t1264377477 * L_13 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_13, NULL, L_12, /*hidden argument*/NULL);
		((FightController_t483979242_StaticFields*)il2cpp_codegen_static_fields_for(FightController_t483979242_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_7(L_13);
		G_B4_0 = G_B3_0;
	}

IL_0055:
	{
		Action_t1264377477 * L_14 = ((FightController_t483979242_StaticFields*)il2cpp_codegen_static_fields_for(FightController_t483979242_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_7();
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		Utils_Delay_m1725504855(NULL /*static, unused*/, G_B4_0, L_14, /*hidden argument*/NULL);
	}

IL_005f:
	{
		return;
	}
}
// System.Void FightController::<Damage>m__0()
extern "C"  void FightController_U3CDamageU3Em__0_m976867632 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FightController_U3CDamageU3Em__0_m976867632_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral3491294978, /*hidden argument*/NULL);
		return;
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
// System.Void Fighter::.ctor()
extern "C"  void Fighter__ctor_m4177725304 (Fighter_t1911001889 * __this, const RuntimeMethod* method)
{
	{
		__this->set_health_3(((int32_t)100));
		__this->set_stamina_6(((int32_t)100));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Fighter::get_Health()
extern "C"  int32_t Fighter_get_Health_m1631018578 (Fighter_t1911001889 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_health_3();
		return L_0;
	}
}
// System.Void Fighter::set_Health(System.Int32)
extern "C"  void Fighter_set_Health_m648752105 (Fighter_t1911001889 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_health_3(L_0);
		ProgressBar_t1074804577 * L_1 = __this->get_healthBar_2();
		int32_t L_2 = __this->get_health_3();
		ProgressBar_SetValue_m1393192738(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Fighter::get_Stamina()
extern "C"  int32_t Fighter_get_Stamina_m1543692505 (Fighter_t1911001889 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_stamina_6();
		return L_0;
	}
}
// System.Void Fighter::set_Stamina(System.Int32)
extern "C"  void Fighter_set_Stamina_m3125874422 (Fighter_t1911001889 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)100))))
		{
			goto IL_000c;
		}
	}
	{
		___value0 = ((int32_t)100);
	}

IL_000c:
	{
		int32_t L_1 = ___value0;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		___value0 = 0;
	}

IL_0016:
	{
		int32_t L_2 = ___value0;
		__this->set_stamina_6(L_2);
		ProgressBar_t1074804577 * L_3 = __this->get_staminaBar_4();
		int32_t L_4 = __this->get_stamina_6();
		ProgressBar_SetValue_m1393192738(L_3, L_4, /*hidden argument*/NULL);
		return;
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
// System.Void FighterInput.ComputerInput::.ctor()
extern "C"  void ComputerInput__ctor_m1134193210 (ComputerInput_t965195488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputerInput__ctor_m1134193210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MoveU5BU5DU5BU5D_t1831594223* L_0 = ((MoveU5BU5DU5BU5D_t1831594223*)SZArrayNew(MoveU5BU5DU5BU5D_t1831594223_il2cpp_TypeInfo_var, (uint32_t)6));
		MoveU5BU5D_t3649037098* L_1 = ((MoveU5BU5D_t3649037098*)SZArrayNew(MoveU5BU5D_t3649037098_il2cpp_TypeInfo_var, (uint32_t)4));
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int32_t)1);
		MoveU5BU5D_t3649037098* L_2 = L_1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (int32_t)2);
		ArrayElementTypeCheck (L_0, L_2);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (MoveU5BU5D_t3649037098*)L_2);
		MoveU5BU5DU5BU5D_t1831594223* L_3 = L_0;
		MoveU5BU5D_t3649037098* L_4 = ((MoveU5BU5D_t3649037098*)SZArrayNew(MoveU5BU5D_t3649037098_il2cpp_TypeInfo_var, (uint32_t)4));
		RuntimeFieldHandle_t1871169219  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255366____U24fieldU2D5AB483684EF9BABABBBE759D201227533D0A9C64_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (MoveU5BU5D_t3649037098*)L_4);
		MoveU5BU5DU5BU5D_t1831594223* L_6 = L_3;
		MoveU5BU5D_t3649037098* L_7 = ((MoveU5BU5D_t3649037098*)SZArrayNew(MoveU5BU5D_t3649037098_il2cpp_TypeInfo_var, (uint32_t)3));
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)2);
		MoveU5BU5D_t3649037098* L_8 = L_7;
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int32_t)2);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (MoveU5BU5D_t3649037098*)L_8);
		MoveU5BU5DU5BU5D_t1831594223* L_9 = L_6;
		MoveU5BU5D_t3649037098* L_10 = ((MoveU5BU5D_t3649037098*)SZArrayNew(MoveU5BU5D_t3649037098_il2cpp_TypeInfo_var, (uint32_t)3));
		RuntimeFieldHandle_t1871169219  L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255366____U24fieldU2D0A619AF7ADBFFBADB610780D9A38974C51F6689A_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_10, L_11, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (MoveU5BU5D_t3649037098*)L_10);
		MoveU5BU5DU5BU5D_t1831594223* L_12 = L_9;
		MoveU5BU5D_t3649037098* L_13 = ((MoveU5BU5D_t3649037098*)SZArrayNew(MoveU5BU5D_t3649037098_il2cpp_TypeInfo_var, (uint32_t)3));
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)1);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (MoveU5BU5D_t3649037098*)L_13);
		MoveU5BU5DU5BU5D_t1831594223* L_14 = L_12;
		MoveU5BU5D_t3649037098* L_15 = ((MoveU5BU5D_t3649037098*)SZArrayNew(MoveU5BU5D_t3649037098_il2cpp_TypeInfo_var, (uint32_t)3));
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		MoveU5BU5D_t3649037098* L_16 = L_15;
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int32_t)1);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (MoveU5BU5D_t3649037098*)L_16);
		__this->set_combos_2(L_14);
		MoveU5BU5D_t3649037098* L_17 = ((MoveU5BU5D_t3649037098*)SZArrayNew(MoveU5BU5D_t3649037098_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)4);
		__this->set_idleCombo_3(L_17);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FighterInput.ComputerInput::Start()
extern "C"  void ComputerInput_Start_m3038780052 (ComputerInput_t965195488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComputerInput_Start_m3038780052_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		FightController_t483979242 * L_0 = Object_FindObjectOfType_TisFightController_t483979242_m1819838589(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisFightController_t483979242_m1819838589_RuntimeMethod_var);
		__this->set_controller_4(L_0);
		MoveU5BU5D_t3649037098* L_1 = __this->get_idleCombo_3();
		__this->set_currentCombo_5(L_1);
		return;
	}
}
// System.Void FighterInput.ComputerInput::Update()
extern "C"  void ComputerInput_Update_m1609404106 (ComputerInput_t965195488 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = __this->get_cooldown_7();
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_2 = __this->get_comboIndex_6();
		__this->set_comboIndex_6(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		int32_t L_3 = __this->get_comboIndex_6();
		MoveU5BU5D_t3649037098* L_4 = __this->get_currentCombo_5();
		if ((((int32_t)L_3) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))))))
		{
			goto IL_0066;
		}
	}
	{
		MoveU5BU5D_t3649037098* L_5 = __this->get_currentCombo_5();
		MoveU5BU5D_t3649037098* L_6 = __this->get_idleCombo_3();
		if ((!(((RuntimeObject*)(MoveU5BU5D_t3649037098*)L_5) == ((RuntimeObject*)(MoveU5BU5D_t3649037098*)L_6))))
		{
			goto IL_0053;
		}
	}
	{
		MoveU5BU5D_t3649037098* L_7 = ComputerInput_RandomCombo_m2811777807(__this, /*hidden argument*/NULL);
		__this->set_currentCombo_5(L_7);
		goto IL_005f;
	}

IL_0053:
	{
		MoveU5BU5D_t3649037098* L_8 = __this->get_idleCombo_3();
		__this->set_currentCombo_5(L_8);
	}

IL_005f:
	{
		__this->set_comboIndex_6(0);
	}

IL_0066:
	{
		ComputerInput_UpdateCooldown_m3118700958(__this, /*hidden argument*/NULL);
	}

IL_006c:
	{
		FightController_t483979242 * L_9 = __this->get_controller_4();
		MoveU5BU5D_t3649037098* L_10 = __this->get_currentCombo_5();
		int32_t L_11 = __this->get_comboIndex_6();
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		FightController_OnComputerMove_m1801124063(L_9, L_13, /*hidden argument*/NULL);
		return;
	}
}
// FighterInput.Move[] FighterInput.ComputerInput::RandomCombo()
extern "C"  MoveU5BU5D_t3649037098* ComputerInput_RandomCombo_m2811777807 (ComputerInput_t965195488 * __this, const RuntimeMethod* method)
{
	{
		MoveU5BU5DU5BU5D_t1831594223* L_0 = __this->get_combos_2();
		MoveU5BU5DU5BU5D_t1831594223* L_1 = __this->get_combos_2();
		int32_t L_2 = Random_Range_m4054026115(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		MoveU5BU5D_t3649037098* L_4 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// System.Void FighterInput.ComputerInput::UpdateCooldown()
extern "C"  void ComputerInput_UpdateCooldown_m3118700958 (ComputerInput_t965195488 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		MoveU5BU5D_t3649037098* L_0 = __this->get_currentCombo_5();
		int32_t L_1 = __this->get_comboIndex_6();
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0027;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_003d;
			}
		}
	}
	{
		goto IL_005d;
	}

IL_0027:
	{
		float L_5 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_cooldown_7(((float)il2cpp_codegen_add((float)L_5, (float)(0.5f))));
		goto IL_0080;
	}

IL_003d:
	{
		float L_6 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = Random_Range_m2202990745(NULL /*static, unused*/, (0.2f), (1.0f), /*hidden argument*/NULL);
		__this->set_cooldown_7(((float)il2cpp_codegen_add((float)L_6, (float)L_7)));
		goto IL_0080;
	}

IL_005d:
	{
		float L_8 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		MoveU5BU5D_t3649037098* L_9 = __this->get_currentCombo_5();
		int32_t L_10 = __this->get_comboIndex_6();
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		float L_13 = MoveMethods_Cooldown_m1292600930(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		__this->set_cooldown_7(((float)il2cpp_codegen_add((float)L_8, (float)L_13)));
		goto IL_0080;
	}

IL_0080:
	{
		return;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 FighterInput.MoveMethods::Damage(FighterInput.Move)
extern "C"  int32_t MoveMethods_Damage_m3693683156 (RuntimeObject * __this /* static, unused */, int32_t ___move0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___move0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___move0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		return 8;
	}

IL_0014:
	{
		return 4;
	}

IL_0016:
	{
		return 0;
	}
}
// System.Single FighterInput.MoveMethods::Cooldown(FighterInput.Move)
extern "C"  float MoveMethods_Cooldown_m1292600930 (RuntimeObject * __this /* static, unused */, int32_t ___move0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___move0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___move0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		goto IL_001e;
	}

IL_0012:
	{
		return (0.3f);
	}

IL_0018:
	{
		return (0.25f);
	}

IL_001e:
	{
		return (0.0f);
	}
}
// System.Int32 FighterInput.MoveMethods::StaminaCost(FighterInput.Move)
extern "C"  int32_t MoveMethods_StaminaCost_m2098551359 (RuntimeObject * __this /* static, unused */, int32_t ___move0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___move0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001e;
			}
			case 2:
			{
				goto IL_0024;
			}
			case 3:
			{
				goto IL_0021;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		return ((int32_t)40);
	}

IL_001e:
	{
		return ((int32_t)30);
	}

IL_0021:
	{
		return ((int32_t)15);
	}

IL_0024:
	{
		return ((int32_t)10);
	}

IL_0027:
	{
		return 0;
	}
}
// System.Single FighterInput.MoveMethods::Duration(FighterInput.Move)
extern "C"  float MoveMethods_Duration_m3501436441 (RuntimeObject * __this /* static, unused */, int32_t ___move0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___move0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0021;
			}
			case 2:
			{
				goto IL_0027;
			}
			case 3:
			{
				goto IL_0027;
			}
		}
	}
	{
		goto IL_002d;
	}

IL_001b:
	{
		return (0.2f);
	}

IL_0021:
	{
		return (0.15f);
	}

IL_0027:
	{
		return (0.1f);
	}

IL_002d:
	{
		return (0.0f);
	}
}
// Poser/Stance FighterInput.MoveMethods::Stance(FighterInput.Move)
extern "C"  int32_t MoveMethods_Stance_m1856667472 (RuntimeObject * __this /* static, unused */, int32_t ___move0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___move0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0021;
			}
			case 2:
			{
				goto IL_0027;
			}
			case 3:
			{
				goto IL_0025;
			}
			case 4:
			{
				goto IL_0023;
			}
		}
	}
	{
		goto IL_0029;
	}

IL_001f:
	{
		return (int32_t)(2);
	}

IL_0021:
	{
		return (int32_t)(1);
	}

IL_0023:
	{
		return (int32_t)(0);
	}

IL_0025:
	{
		return (int32_t)(4);
	}

IL_0027:
	{
		return (int32_t)(3);
	}

IL_0029:
	{
		return (int32_t)(0);
	}
}
// Poser/Stance FighterInput.MoveMethods::CounterStance(FighterInput.Move)
extern "C"  int32_t MoveMethods_CounterStance_m1287149377 (RuntimeObject * __this /* static, unused */, int32_t ___move0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___move0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___move0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		return (int32_t)(4);
	}

IL_0014:
	{
		return (int32_t)(3);
	}

IL_0016:
	{
		return (int32_t)(0);
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
// System.Void FighterInput.PlayerInput::.ctor()
extern "C"  void PlayerInput__ctor_m2963921466 (PlayerInput_t2164750815 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FighterInput.PlayerInput::Start()
extern "C"  void PlayerInput_Start_m595175800 (PlayerInput_t2164750815 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerInput_Start_m595175800_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		FightController_t483979242 * L_0 = Object_FindObjectOfType_TisFightController_t483979242_m1819838589(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisFightController_t483979242_m1819838589_RuntimeMethod_var);
		__this->set_controller_2(L_0);
		return;
	}
}
// System.Void FighterInput.PlayerInput::Update()
extern "C"  void PlayerInput_Update_m1770734208 (PlayerInput_t2164750815 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerInput_Update_m1770734208_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->get_punchAction2Key_2();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		FightController_t483979242 * L_2 = __this->get_controller_2();
		FightController_OnPlayerMove_m586935552(L_2, 1, /*hidden argument*/NULL);
		PlayerInput_InterruptBlock_m2724655913(__this, /*hidden argument*/NULL);
		goto IL_00ae;
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->get_kickKey_3();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_4 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		FightController_t483979242 * L_5 = __this->get_controller_2();
		FightController_OnPlayerMove_m586935552(L_5, 0, /*hidden argument*/NULL);
		PlayerInput_InterruptBlock_m2724655913(__this, /*hidden argument*/NULL);
		goto IL_00ae;
	}

IL_004c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->get_blockPunchAction1Key_4();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_7 = Input_GetKey_m3736388334(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0077;
		}
	}
	{
		bool L_8 = __this->get_interruptedBlock_3();
		if (L_8)
		{
			goto IL_0077;
		}
	}
	{
		FightController_t483979242 * L_9 = __this->get_controller_2();
		FightController_OnPlayerMove_m586935552(L_9, 2, /*hidden argument*/NULL);
		goto IL_00ae;
	}

IL_0077:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		int32_t L_10 = ((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->get_blockKickKey_5();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_11 = Input_GetKey_m3736388334(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00a2;
		}
	}
	{
		bool L_12 = __this->get_interruptedBlock_3();
		if (L_12)
		{
			goto IL_00a2;
		}
	}
	{
		FightController_t483979242 * L_13 = __this->get_controller_2();
		FightController_OnPlayerMove_m586935552(L_13, 3, /*hidden argument*/NULL);
		goto IL_00ae;
	}

IL_00a2:
	{
		FightController_t483979242 * L_14 = __this->get_controller_2();
		FightController_OnPlayerMove_m586935552(L_14, 4, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		int32_t L_15 = ((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->get_blockKickKey_5();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_16 = Input_GetKeyUp_m2808015270(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_00cc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		int32_t L_17 = ((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->get_blockPunchAction1Key_4();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_18 = Input_GetKeyUp_m2808015270(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00d3;
		}
	}

IL_00cc:
	{
		__this->set_interruptedBlock_3((bool)0);
	}

IL_00d3:
	{
		return;
	}
}
// System.Void FighterInput.PlayerInput::InterruptBlock()
extern "C"  void PlayerInput_InterruptBlock_m2724655913 (PlayerInput_t2164750815 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerInput_InterruptBlock_m2724655913_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->get_blockKickKey_5();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKey_m3736388334(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		int32_t L_2 = ((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->get_blockPunchAction1Key_4();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKey_m3736388334(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}

IL_001e:
	{
		__this->set_interruptedBlock_3((bool)1);
	}

IL_0025:
	{
		return;
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
// System.Void FighterRandomizer::.ctor()
extern "C"  void FighterRandomizer__ctor_m844323189 (FighterRandomizer_t1174288154 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FighterRandomizer::Awake()
extern "C"  void FighterRandomizer_Awake_m642287965 (FighterRandomizer_t1174288154 * __this, const RuntimeMethod* method)
{
	{
		Poser_t2653926573 * L_0 = __this->get_player_8();
		FighterRandomizer_RandomizeFigter_m4276807442(__this, L_0, /*hidden argument*/NULL);
		Poser_t2653926573 * L_1 = __this->get_computer_9();
		FighterRandomizer_RandomizeFigter_m4276807442(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FighterRandomizer::RandomizeFigter(Poser)
extern "C"  void FighterRandomizer_RandomizeFigter_m4276807442 (FighterRandomizer_t1174288154 * __this, Poser_t2653926573 * ___fighter0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		StanceSpritesU5BU5D_t3743853223* L_0 = __this->get_pants_2();
		int32_t L_1 = Random_Range_m4054026115(NULL /*static, unused*/, 0, ((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		StanceSpritesU5BU5D_t3743853223* L_3 = __this->get_pants_2();
		if ((((int32_t)L_2) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))))))
		{
			goto IL_0056;
		}
	}
	{
		Poser_t2653926573 * L_4 = ___fighter0;
		StanceSpritesU5BU5D_t3743853223* L_5 = __this->get_pants_2();
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		StanceSprites_t3454544338 * L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		L_4->set_pantsSprites_4(L_8);
		Poser_t2653926573 * L_9 = ___fighter0;
		SpriteRenderer_t3235626157 * L_10 = L_9->get_pantsSpriteRenderer_5();
		ColorU5BU5D_t941916413* L_11 = __this->get_clothesColors_6();
		ColorU5BU5D_t941916413* L_12 = __this->get_clothesColors_6();
		int32_t L_13 = Random_Range_m4054026115(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))), /*hidden argument*/NULL);
		SpriteRenderer_set_color_m3056777566(L_10, (*(Color_t2555686324 *)((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))), /*hidden argument*/NULL);
	}

IL_0056:
	{
		StanceSpritesU5BU5D_t3743853223* L_14 = __this->get_tops_3();
		int32_t L_15 = Random_Range_m4054026115(NULL /*static, unused*/, 0, ((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))), (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_15;
		int32_t L_16 = V_1;
		StanceSpritesU5BU5D_t3743853223* L_17 = __this->get_tops_3();
		if ((((int32_t)L_16) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_00ac;
		}
	}
	{
		Poser_t2653926573 * L_18 = ___fighter0;
		StanceSpritesU5BU5D_t3743853223* L_19 = __this->get_tops_3();
		int32_t L_20 = V_1;
		int32_t L_21 = L_20;
		StanceSprites_t3454544338 * L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		L_18->set_shirtSprites_6(L_22);
		Poser_t2653926573 * L_23 = ___fighter0;
		SpriteRenderer_t3235626157 * L_24 = L_23->get_shirtSpriteRenderer_7();
		ColorU5BU5D_t941916413* L_25 = __this->get_clothesColors_6();
		ColorU5BU5D_t941916413* L_26 = __this->get_clothesColors_6();
		int32_t L_27 = Random_Range_m4054026115(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length)))), /*hidden argument*/NULL);
		SpriteRenderer_set_color_m3056777566(L_24, (*(Color_t2555686324 *)((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_27)))), /*hidden argument*/NULL);
	}

IL_00ac:
	{
		StanceSpritesU5BU5D_t3743853223* L_28 = __this->get_hair_4();
		int32_t L_29 = Random_Range_m4054026115(NULL /*static, unused*/, 0, ((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length)))), (int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_29;
		int32_t L_30 = V_2;
		StanceSpritesU5BU5D_t3743853223* L_31 = __this->get_hair_4();
		if ((((int32_t)L_30) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_31)->max_length)))))))
		{
			goto IL_0102;
		}
	}
	{
		Poser_t2653926573 * L_32 = ___fighter0;
		StanceSpritesU5BU5D_t3743853223* L_33 = __this->get_hair_4();
		int32_t L_34 = V_2;
		int32_t L_35 = L_34;
		StanceSprites_t3454544338 * L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		L_32->set_hairSprites_8(L_36);
		Poser_t2653926573 * L_37 = ___fighter0;
		SpriteRenderer_t3235626157 * L_38 = L_37->get_hairSpriteRenderer_9();
		ColorU5BU5D_t941916413* L_39 = __this->get_hairColors_7();
		ColorU5BU5D_t941916413* L_40 = __this->get_hairColors_7();
		int32_t L_41 = Random_Range_m4054026115(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_40)->max_length)))), /*hidden argument*/NULL);
		SpriteRenderer_set_color_m3056777566(L_38, (*(Color_t2555686324 *)((L_39)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_41)))), /*hidden argument*/NULL);
	}

IL_0102:
	{
		Poser_t2653926573 * L_42 = ___fighter0;
		SpriteRenderer_t3235626157 * L_43 = L_42->get_manSpriteRenderer_3();
		ColorU5BU5D_t941916413* L_44 = __this->get_skinColors_5();
		ColorU5BU5D_t941916413* L_45 = __this->get_skinColors_5();
		int32_t L_46 = Random_Range_m4054026115(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_45)->max_length)))), /*hidden argument*/NULL);
		SpriteRenderer_set_color_m3056777566(L_43, (*(Color_t2555686324 *)((L_44)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_46)))), /*hidden argument*/NULL);
		return;
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
// System.Void Fighters::.ctor()
extern "C"  void Fighters__ctor_m2065656383 (Fighters_t808620833 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Fighters__ctor_m2065656383_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Fighter_t1911001889 * L_0 = (Fighter_t1911001889 *)il2cpp_codegen_object_new(Fighter_t1911001889_il2cpp_TypeInfo_var);
		Fighter__ctor_m4177725304(L_0, /*hidden argument*/NULL);
		__this->set_player_8(L_0);
		Fighter_t1911001889 * L_1 = (Fighter_t1911001889 *)il2cpp_codegen_object_new(Fighter_t1911001889_il2cpp_TypeInfo_var);
		Fighter__ctor_m4177725304(L_1, /*hidden argument*/NULL);
		__this->set_computer_9(L_1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Fighters::Awake()
extern "C"  void Fighters_Awake_m957878838 (Fighters_t808620833 * __this, const RuntimeMethod* method)
{
	{
		Fighter_t1911001889 * L_0 = __this->get_player_8();
		Poser_t2653926573 * L_1 = __this->get_playerPoser_2();
		L_0->set_poser_0(L_1);
		Fighter_t1911001889 * L_2 = __this->get_player_8();
		ProgressBar_t1074804577 * L_3 = __this->get_playerHealthBar_3();
		L_2->set_healthBar_2(L_3);
		Fighter_t1911001889 * L_4 = __this->get_player_8();
		ProgressBar_t1074804577 * L_5 = __this->get_playerStaminaBar_4();
		L_4->set_staminaBar_4(L_5);
		Fighter_t1911001889 * L_6 = __this->get_computer_9();
		Poser_t2653926573 * L_7 = __this->get_computerPoser_5();
		L_6->set_poser_0(L_7);
		Fighter_t1911001889 * L_8 = __this->get_computer_9();
		ProgressBar_t1074804577 * L_9 = __this->get_computerHealthBar_6();
		L_8->set_healthBar_2(L_9);
		Fighter_t1911001889 * L_10 = __this->get_computer_9();
		ProgressBar_t1074804577 * L_11 = __this->get_computerStaminaBar_7();
		L_10->set_staminaBar_4(L_11);
		return;
	}
}
// System.Void Fighters::Update()
extern "C"  void Fighters_Update_m275393469 (Fighters_t808620833 * __this, const RuntimeMethod* method)
{
	{
		Fighter_t1911001889 * L_0 = __this->get_player_8();
		Fighters_RestoreStamina_m885260732(__this, L_0, /*hidden argument*/NULL);
		Fighter_t1911001889 * L_1 = __this->get_computer_9();
		Fighters_RestoreStamina_m885260732(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Fighters::RestoreStamina(Fighter)
extern "C"  void Fighters_RestoreStamina_m885260732 (Fighters_t808620833 * __this, Fighter_t1911001889 * ___fighter0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		float L_0 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		Fighter_t1911001889 * L_1 = ___fighter0;
		float L_2 = L_1->get_cooldown_1();
		if ((!(((float)L_0) < ((float)L_2))))
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		Fighter_t1911001889 * L_3 = ___fighter0;
		Poser_t2653926573 * L_4 = L_3->get_poser_0();
		int32_t L_5 = Poser_get_CurrentStance_m4100513785(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)3)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)4)))
		{
			goto IL_0049;
		}
	}
	{
		goto IL_005c;
	}

IL_0036:
	{
		Fighter_t1911001889 * L_9 = ___fighter0;
		Fighter_t1911001889 * L_10 = L_9;
		int32_t L_11 = Fighter_get_Stamina_m1543692505(L_10, /*hidden argument*/NULL);
		Fighter_set_Stamina_m3125874422(L_10, ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)2)), /*hidden argument*/NULL);
		goto IL_005c;
	}

IL_0049:
	{
		Fighter_t1911001889 * L_12 = ___fighter0;
		Fighter_t1911001889 * L_13 = L_12;
		int32_t L_14 = Fighter_get_Stamina_m1543692505(L_13, /*hidden argument*/NULL);
		Fighter_set_Stamina_m3125874422(L_13, ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)), /*hidden argument*/NULL);
		goto IL_005c;
	}

IL_005c:
	{
		return;
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
// System.Void MatchPanel::.ctor()
extern "C"  void MatchPanel__ctor_m1007701533 (MatchPanel_t3284707298 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MatchPanel::Start()
extern "C"  void MatchPanel_Start_m2727152573 (MatchPanel_t3284707298 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MatchPanel_Start_m2727152573_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RectTransform_t3704657025 * L_0 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		__this->set_rectTransform_5(L_0);
		MatchPanel_MoveToStartingPosition_m736023816(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MatchPanel::Update()
extern "C"  void MatchPanel_Update_m3262592199 (MatchPanel_t3284707298 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MatchPanel_Update_m3262592199_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_shown_6();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->get_blockKickKey_5();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0048;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->get_blockPunchAction1Key_4();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_4 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0048;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		int32_t L_5 = ((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->get_punchAction2Key_2();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_6 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0048;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->get_kickKey_3();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_8 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004e;
		}
	}

IL_0048:
	{
		MatchPanel_OnSendMessageClick_m1013566159(__this, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.Void MatchPanel::OnSendMessageClick()
extern "C"  void MatchPanel_OnSendMessageClick_m1013566159 (MatchPanel_t3284707298 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MatchPanel_OnSendMessageClick_m1013566159_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		PhoneManager_t4261849291 * L_0 = Object_FindObjectOfType_TisPhoneManager_t4261849291_m3175860931(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisPhoneManager_t4261849291_m3175860931_RuntimeMethod_var);
		String_t* L_1 = __this->get_oponentName_7();
		PhoneManager_ShowChat_m18460266(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MatchPanel::AnimateIn(System.String,UnityEngine.Sprite,UnityEngine.Color)
extern "C"  void MatchPanel_AnimateIn_m2059785970 (MatchPanel_t3284707298 * __this, String_t* ___name0, Sprite_t280657092 * ___dude1, Color_t2555686324  ___color2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MatchPanel_AnimateIn_m2059785970_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Image_t2670269651 * L_0 = __this->get_background_3();
		Color_t2555686324  L_1 = ___color2;
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		Image_t2670269651 * L_2 = __this->get_dudeImage_4();
		Sprite_t280657092 * L_3 = ___dude1;
		Image_set_sprite_m2369174689(L_2, L_3, /*hidden argument*/NULL);
		String_t* L_4 = ___name0;
		__this->set_oponentName_7(L_4);
		Text_t1901882714 * L_5 = __this->get_subtitleLabel_2();
		String_t* L_6 = __this->get_oponentName_7();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral4196299889, L_6, _stringLiteral711831920, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_7);
		RuntimeObject* L_8 = MatchPanel_AnimateInCoroutine_m1239398478(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator MatchPanel::AnimateInCoroutine()
extern "C"  RuntimeObject* MatchPanel_AnimateInCoroutine_m1239398478 (MatchPanel_t3284707298 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MatchPanel_AnimateInCoroutine_m1239398478_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CAnimateInCoroutineU3Ec__Iterator0_t4015329932 * V_0 = NULL;
	{
		U3CAnimateInCoroutineU3Ec__Iterator0_t4015329932 * L_0 = (U3CAnimateInCoroutineU3Ec__Iterator0_t4015329932 *)il2cpp_codegen_object_new(U3CAnimateInCoroutineU3Ec__Iterator0_t4015329932_il2cpp_TypeInfo_var);
		U3CAnimateInCoroutineU3Ec__Iterator0__ctor_m3304873356(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CAnimateInCoroutineU3Ec__Iterator0_t4015329932 * L_1 = V_0;
		L_1->set_U24this_3(__this);
		U3CAnimateInCoroutineU3Ec__Iterator0_t4015329932 * L_2 = V_0;
		return L_2;
	}
}
// System.Void MatchPanel::MoveToStartingPosition()
extern "C"  void MatchPanel_MoveToStartingPosition_m736023816 (MatchPanel_t3284707298 * __this, const RuntimeMethod* method)
{
	{
		RectTransform_t3704657025 * L_0 = __this->get_rectTransform_5();
		Vector2_t2156229523  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector2__ctor_m3970636864((&L_1), (0.5f), (1.0f), /*hidden argument*/NULL);
		RectTransform_set_pivot_m909387058(L_0, L_1, /*hidden argument*/NULL);
		__this->set_shown_6((bool)0);
		return;
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
// System.Void MatchPanel/<AnimateInCoroutine>c__Iterator0::.ctor()
extern "C"  void U3CAnimateInCoroutineU3Ec__Iterator0__ctor_m3304873356 (U3CAnimateInCoroutineU3Ec__Iterator0_t4015329932 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MatchPanel/<AnimateInCoroutine>c__Iterator0::MoveNext()
extern "C"  bool U3CAnimateInCoroutineU3Ec__Iterator0_MoveNext_m1645941771 (U3CAnimateInCoroutineU3Ec__Iterator0_t4015329932 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAnimateInCoroutineU3Ec__Iterator0_MoveNext_m1645941771_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24PC_6((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00c8;
			}
		}
	}
	{
		goto IL_0110;
	}

IL_0021:
	{
		MatchPanel_t3284707298 * L_2 = __this->get_U24this_3();
		RectTransform_t3704657025 * L_3 = L_2->get_rectTransform_5();
		Vector2_t2156229523  L_4 = RectTransform_get_pivot_m3425744470(L_3, /*hidden argument*/NULL);
		__this->set_U3CpivotU3E__0_0(L_4);
		__this->set_U3CstepU3E__0_1((0.02f));
		__this->set_U3CminStepU3E__0_2((0.001f));
		goto IL_00c8;
	}

IL_0052:
	{
		Vector2_t2156229523 * L_5 = __this->get_address_of_U3CpivotU3E__0_0();
		Vector2_t2156229523 * L_6 = L_5;
		float L_7 = L_6->get_y_1();
		float L_8 = __this->get_U3CstepU3E__0_1();
		L_6->set_y_1(((float)il2cpp_codegen_subtract((float)L_7, (float)L_8)));
		float L_9 = __this->get_U3CstepU3E__0_1();
		float L_10 = __this->get_U3CminStepU3E__0_2();
		if ((!(((float)L_9) > ((float)L_10))))
		{
			goto IL_0093;
		}
	}
	{
		Vector2_t2156229523 * L_11 = __this->get_address_of_U3CpivotU3E__0_0();
		float L_12 = L_11->get_y_1();
		__this->set_U3CstepU3E__0_1(((float)((float)(((float)((float)L_12)))/(float)(3.0f))));
	}

IL_0093:
	{
		MatchPanel_t3284707298 * L_13 = __this->get_U24this_3();
		RectTransform_t3704657025 * L_14 = L_13->get_rectTransform_5();
		Vector2_t2156229523  L_15 = __this->get_U3CpivotU3E__0_0();
		RectTransform_set_pivot_m909387058(L_14, L_15, /*hidden argument*/NULL);
		WaitForEndOfFrame_t1314943911 * L_16 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_16, /*hidden argument*/NULL);
		__this->set_U24current_4(L_16);
		bool L_17 = __this->get_U24disposing_5();
		if (L_17)
		{
			goto IL_00c3;
		}
	}
	{
		__this->set_U24PC_6(1);
	}

IL_00c3:
	{
		goto IL_0112;
	}

IL_00c8:
	{
		Vector2_t2156229523 * L_18 = __this->get_address_of_U3CpivotU3E__0_0();
		float L_19 = L_18->get_y_1();
		float L_20 = __this->get_U3CstepU3E__0_1();
		if ((((float)L_19) > ((float)L_20)))
		{
			goto IL_0052;
		}
	}
	{
		MatchPanel_t3284707298 * L_21 = __this->get_U24this_3();
		RectTransform_t3704657025 * L_22 = L_21->get_rectTransform_5();
		Vector2_t2156229523  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Vector2__ctor_m3970636864((&L_23), (0.5f), (0.0f), /*hidden argument*/NULL);
		RectTransform_set_pivot_m909387058(L_22, L_23, /*hidden argument*/NULL);
		MatchPanel_t3284707298 * L_24 = __this->get_U24this_3();
		L_24->set_shown_6((bool)1);
		__this->set_U24PC_6((-1));
	}

IL_0110:
	{
		return (bool)0;
	}

IL_0112:
	{
		return (bool)1;
	}
}
// System.Object MatchPanel/<AnimateInCoroutine>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CAnimateInCoroutineU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m263100700 (U3CAnimateInCoroutineU3Ec__Iterator0_t4015329932 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Object MatchPanel/<AnimateInCoroutine>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CAnimateInCoroutineU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1169774936 (U3CAnimateInCoroutineU3Ec__Iterator0_t4015329932 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Void MatchPanel/<AnimateInCoroutine>c__Iterator0::Dispose()
extern "C"  void U3CAnimateInCoroutineU3Ec__Iterator0_Dispose_m3265281217 (U3CAnimateInCoroutineU3Ec__Iterator0_t4015329932 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_5((bool)1);
		__this->set_U24PC_6((-1));
		return;
	}
}
// System.Void MatchPanel/<AnimateInCoroutine>c__Iterator0::Reset()
extern "C"  void U3CAnimateInCoroutineU3Ec__Iterator0_Reset_m295846840 (U3CAnimateInCoroutineU3Ec__Iterator0_t4015329932 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAnimateInCoroutineU3Ec__Iterator0_Reset_m295846840_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void Names::.ctor()
extern "C"  void Names__ctor_m1076300028 (Names_t4168630408 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Names::RandomName(System.String)
extern "C"  String_t* Names_RandomName_m3846965876 (RuntimeObject * __this /* static, unused */, String_t* ___previousName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Names_RandomName_m3846965876_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;

IL_0000:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Names_t4168630408_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_0 = ((Names_t4168630408_StaticFields*)il2cpp_codegen_static_fields_for(Names_t4168630408_il2cpp_TypeInfo_var))->get_names_0();
		StringU5BU5D_t1281789340* L_1 = ((Names_t4168630408_StaticFields*)il2cpp_codegen_static_fields_for(Names_t4168630408_il2cpp_TypeInfo_var))->get_names_0();
		int32_t L_2 = Random_Range_m4054026115(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		String_t* L_5 = V_0;
		String_t* L_6 = ___previousName0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m920492651(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0000;
		}
	}
	{
		String_t* L_8 = V_0;
		return L_8;
	}
}
// System.Int32 Names::RandomAge()
extern "C"  int32_t Names_RandomAge_m4118168461 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Random_Range_m4054026115(NULL /*static, unused*/, ((int32_t)18), ((int32_t)30), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Names::.cctor()
extern "C"  void Names__cctor_m854212717 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Names__cctor_m854212717_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t1281789340* L_0 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)((int32_t)50)));
		ArrayElementTypeCheck (L_0, _stringLiteral432598786);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral432598786);
		StringU5BU5D_t1281789340* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteral1521926510);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral1521926510);
		StringU5BU5D_t1281789340* L_2 = L_1;
		ArrayElementTypeCheck (L_2, _stringLiteral432598801);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral432598801);
		StringU5BU5D_t1281789340* L_3 = L_2;
		ArrayElementTypeCheck (L_3, _stringLiteral540523700);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral540523700);
		StringU5BU5D_t1281789340* L_4 = L_3;
		ArrayElementTypeCheck (L_4, _stringLiteral1477689725);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1477689725);
		StringU5BU5D_t1281789340* L_5 = L_4;
		ArrayElementTypeCheck (L_5, _stringLiteral793792377);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral793792377);
		StringU5BU5D_t1281789340* L_6 = L_5;
		ArrayElementTypeCheck (L_6, _stringLiteral2729332461);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral2729332461);
		StringU5BU5D_t1281789340* L_7 = L_6;
		ArrayElementTypeCheck (L_7, _stringLiteral3899738666);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral3899738666);
		StringU5BU5D_t1281789340* L_8 = L_7;
		ArrayElementTypeCheck (L_8, _stringLiteral2386816767);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral2386816767);
		StringU5BU5D_t1281789340* L_9 = L_8;
		ArrayElementTypeCheck (L_9, _stringLiteral3611410572);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral3611410572);
		StringU5BU5D_t1281789340* L_10 = L_9;
		ArrayElementTypeCheck (L_10, _stringLiteral3184256);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral3184256);
		StringU5BU5D_t1281789340* L_11 = L_10;
		ArrayElementTypeCheck (L_11, _stringLiteral1980059249);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral1980059249);
		StringU5BU5D_t1281789340* L_12 = L_11;
		ArrayElementTypeCheck (L_12, _stringLiteral2021988844);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral2021988844);
		StringU5BU5D_t1281789340* L_13 = L_12;
		ArrayElementTypeCheck (L_13, _stringLiteral3116935996);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral3116935996);
		StringU5BU5D_t1281789340* L_14 = L_13;
		ArrayElementTypeCheck (L_14, _stringLiteral3899542074);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral3899542074);
		StringU5BU5D_t1281789340* L_15 = L_14;
		ArrayElementTypeCheck (L_15, _stringLiteral1086364027);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral1086364027);
		StringU5BU5D_t1281789340* L_16 = L_15;
		ArrayElementTypeCheck (L_16, _stringLiteral359890329);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteral359890329);
		StringU5BU5D_t1281789340* L_17 = L_16;
		ArrayElementTypeCheck (L_17, _stringLiteral1927779500);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)_stringLiteral1927779500);
		StringU5BU5D_t1281789340* L_18 = L_17;
		ArrayElementTypeCheck (L_18, _stringLiteral2743172505);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)_stringLiteral2743172505);
		StringU5BU5D_t1281789340* L_19 = L_18;
		ArrayElementTypeCheck (L_19, _stringLiteral3194631033);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)19)), (String_t*)_stringLiteral3194631033);
		StringU5BU5D_t1281789340* L_20 = L_19;
		ArrayElementTypeCheck (L_20, _stringLiteral812754233);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)20)), (String_t*)_stringLiteral812754233);
		StringU5BU5D_t1281789340* L_21 = L_20;
		ArrayElementTypeCheck (L_21, _stringLiteral3452614620);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)21)), (String_t*)_stringLiteral3452614620);
		StringU5BU5D_t1281789340* L_22 = L_21;
		ArrayElementTypeCheck (L_22, _stringLiteral783656264);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)22)), (String_t*)_stringLiteral783656264);
		StringU5BU5D_t1281789340* L_23 = L_22;
		ArrayElementTypeCheck (L_23, _stringLiteral1168365623);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)23)), (String_t*)_stringLiteral1168365623);
		StringU5BU5D_t1281789340* L_24 = L_23;
		ArrayElementTypeCheck (L_24, _stringLiteral434922575);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)24)), (String_t*)_stringLiteral434922575);
		StringU5BU5D_t1281789340* L_25 = L_24;
		ArrayElementTypeCheck (L_25, _stringLiteral4279992240);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)25)), (String_t*)_stringLiteral4279992240);
		StringU5BU5D_t1281789340* L_26 = L_25;
		ArrayElementTypeCheck (L_26, _stringLiteral808454625);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)26)), (String_t*)_stringLiteral808454625);
		StringU5BU5D_t1281789340* L_27 = L_26;
		ArrayElementTypeCheck (L_27, _stringLiteral4294874508);
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)27)), (String_t*)_stringLiteral4294874508);
		StringU5BU5D_t1281789340* L_28 = L_27;
		ArrayElementTypeCheck (L_28, _stringLiteral486827602);
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)28)), (String_t*)_stringLiteral486827602);
		StringU5BU5D_t1281789340* L_29 = L_28;
		ArrayElementTypeCheck (L_29, _stringLiteral1251501166);
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)29)), (String_t*)_stringLiteral1251501166);
		StringU5BU5D_t1281789340* L_30 = L_29;
		ArrayElementTypeCheck (L_30, _stringLiteral2703564877);
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)30)), (String_t*)_stringLiteral2703564877);
		StringU5BU5D_t1281789340* L_31 = L_30;
		ArrayElementTypeCheck (L_31, _stringLiteral39716468);
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)31)), (String_t*)_stringLiteral39716468);
		StringU5BU5D_t1281789340* L_32 = L_31;
		ArrayElementTypeCheck (L_32, _stringLiteral446415352);
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)32)), (String_t*)_stringLiteral446415352);
		StringU5BU5D_t1281789340* L_33 = L_32;
		ArrayElementTypeCheck (L_33, _stringLiteral1108012802);
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)33)), (String_t*)_stringLiteral1108012802);
		StringU5BU5D_t1281789340* L_34 = L_33;
		ArrayElementTypeCheck (L_34, _stringLiteral2737703039);
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)34)), (String_t*)_stringLiteral2737703039);
		StringU5BU5D_t1281789340* L_35 = L_34;
		ArrayElementTypeCheck (L_35, _stringLiteral809711114);
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)35)), (String_t*)_stringLiteral809711114);
		StringU5BU5D_t1281789340* L_36 = L_35;
		ArrayElementTypeCheck (L_36, _stringLiteral395946812);
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)36)), (String_t*)_stringLiteral395946812);
		StringU5BU5D_t1281789340* L_37 = L_36;
		ArrayElementTypeCheck (L_37, _stringLiteral432992003);
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)37)), (String_t*)_stringLiteral432992003);
		StringU5BU5D_t1281789340* L_38 = L_37;
		ArrayElementTypeCheck (L_38, _stringLiteral228405448);
		(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)38)), (String_t*)_stringLiteral228405448);
		StringU5BU5D_t1281789340* L_39 = L_38;
		ArrayElementTypeCheck (L_39, _stringLiteral1609215296);
		(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)39)), (String_t*)_stringLiteral1609215296);
		StringU5BU5D_t1281789340* L_40 = L_39;
		ArrayElementTypeCheck (L_40, _stringLiteral2743173063);
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)40)), (String_t*)_stringLiteral2743173063);
		StringU5BU5D_t1281789340* L_41 = L_40;
		ArrayElementTypeCheck (L_41, _stringLiteral2470034645);
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)41)), (String_t*)_stringLiteral2470034645);
		StringU5BU5D_t1281789340* L_42 = L_41;
		ArrayElementTypeCheck (L_42, _stringLiteral2947411610);
		(L_42)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)42)), (String_t*)_stringLiteral2947411610);
		StringU5BU5D_t1281789340* L_43 = L_42;
		ArrayElementTypeCheck (L_43, _stringLiteral3042921683);
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)43)), (String_t*)_stringLiteral3042921683);
		StringU5BU5D_t1281789340* L_44 = L_43;
		ArrayElementTypeCheck (L_44, _stringLiteral4166618098);
		(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)44)), (String_t*)_stringLiteral4166618098);
		StringU5BU5D_t1281789340* L_45 = L_44;
		ArrayElementTypeCheck (L_45, _stringLiteral3265940706);
		(L_45)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)45)), (String_t*)_stringLiteral3265940706);
		StringU5BU5D_t1281789340* L_46 = L_45;
		ArrayElementTypeCheck (L_46, _stringLiteral2775075737);
		(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)46)), (String_t*)_stringLiteral2775075737);
		StringU5BU5D_t1281789340* L_47 = L_46;
		ArrayElementTypeCheck (L_47, _stringLiteral2775075982);
		(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)47)), (String_t*)_stringLiteral2775075982);
		StringU5BU5D_t1281789340* L_48 = L_47;
		ArrayElementTypeCheck (L_48, _stringLiteral822240153);
		(L_48)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)48)), (String_t*)_stringLiteral822240153);
		StringU5BU5D_t1281789340* L_49 = L_48;
		ArrayElementTypeCheck (L_49, _stringLiteral28855522);
		(L_49)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)49)), (String_t*)_stringLiteral28855522);
		((Names_t4168630408_StaticFields*)il2cpp_codegen_static_fields_for(Names_t4168630408_il2cpp_TypeInfo_var))->set_names_0(L_49);
		return;
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
// System.Void PhoneManager::.ctor()
extern "C"  void PhoneManager__ctor_m1330645416 (PhoneManager_t4261849291 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PhoneManager::ShowChat(System.String)
extern "C"  void PhoneManager_ShowChat_m18460266 (PhoneManager_t4261849291 * __this, String_t* ___oponentName0, const RuntimeMethod* method)
{
	{
		ChatManager_t1133435335 * L_0 = __this->get_chat_4();
		String_t* L_1 = ___oponentName0;
		L_0->set_oponentName_12(L_1);
		ChatManager_t1133435335 * L_2 = __this->get_chat_4();
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_3, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = __this->get_swiping_3();
		GameObject_SetActive_m796801857(L_4, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_5 = __this->get_tutorial_2();
		GameObject_SetActive_m796801857(L_5, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PhoneManager::ShowSwiping()
extern "C"  void PhoneManager_ShowSwiping_m1788750612 (PhoneManager_t4261849291 * __this, const RuntimeMethod* method)
{
	{
		ChatManager_t1133435335 * L_0 = __this->get_chat_4();
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_swiping_3();
		GameObject_SetActive_m796801857(L_2, (bool)1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = __this->get_tutorial_2();
		GameObject_SetActive_m796801857(L_3, (bool)0, /*hidden argument*/NULL);
		return;
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
// System.Void Poser::.ctor()
extern "C"  void Poser__ctor_m1216088936 (Poser_t2653926573 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// Poser/Stance Poser::get_CurrentStance()
extern "C"  int32_t Poser_get_CurrentStance_m4100513785 (Poser_t2653926573 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_stance_13();
		return L_0;
	}
}
// System.Void Poser::set_CurrentStance(Poser/Stance)
extern "C"  void Poser_set_CurrentStance_m425755468 (Poser_t2653926573 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Poser_set_CurrentStance_m425755468_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t2067934930  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___value0;
		__this->set_stance_13(L_0);
		Nullable_1_t2067934930 * L_1 = __this->get_address_of_interruptedStance_11();
		bool L_2 = Nullable_1_get_HasValue_m410045444(L_1, /*hidden argument*/Nullable_1_get_HasValue_m410045444_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		Nullable_1_t2067934930 * L_3 = __this->get_address_of_interruptedStance_11();
		int32_t L_4 = Nullable_1_get_Value_m395328461(L_3, /*hidden argument*/Nullable_1_get_Value_m395328461_RuntimeMethod_var);
		int32_t L_5 = __this->get_stance_13();
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002e;
		}
	}
	{
		return;
	}

IL_002e:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t2067934930 ));
		Nullable_1_t2067934930  L_6 = V_0;
		__this->set_interruptedStance_11(L_6);
	}

IL_003d:
	{
		int32_t L_7 = __this->get_stance_13();
		Poser_SetSprite_m3627048953(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Poser::Start()
extern "C"  void Poser_Start_m3188246098 (Poser_t2653926573 * __this, const RuntimeMethod* method)
{
	{
		Poser_set_CurrentStance_m425755468(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Poser::Take(Poser/Stance,System.Single)
extern "C"  void Poser_Take_m3588067046 (Poser_t2653926573 * __this, int32_t ___stance0, float ___time1, const RuntimeMethod* method)
{
	{
		Coroutine_t3829159415 * L_0 = __this->get_stanceTimeout_10();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Coroutine_t3829159415 * L_1 = __this->get_stanceTimeout_10();
		MonoBehaviour_StopCoroutine_m907039165(__this, L_1, /*hidden argument*/NULL);
	}

IL_0017:
	{
		int32_t L_2 = ___stance0;
		Poser_set_CurrentStance_m425755468(__this, L_2, /*hidden argument*/NULL);
		float L_3 = ___time1;
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_003d;
		}
	}
	{
		float L_4 = ___time1;
		RuntimeObject* L_5 = Poser_ReturnTo_m1670821847(__this, 0, L_4, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_6 = MonoBehaviour_StartCoroutine_m3411253000(__this, L_5, /*hidden argument*/NULL);
		__this->set_stanceTimeout_10(L_6);
	}

IL_003d:
	{
		return;
	}
}
// System.Collections.IEnumerator Poser::ReturnTo(Poser/Stance,System.Single)
extern "C"  RuntimeObject* Poser_ReturnTo_m1670821847 (Poser_t2653926573 * __this, int32_t ___st0, float ___time1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Poser_ReturnTo_m1670821847_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CReturnToU3Ec__Iterator0_t3746314890 * V_0 = NULL;
	{
		U3CReturnToU3Ec__Iterator0_t3746314890 * L_0 = (U3CReturnToU3Ec__Iterator0_t3746314890 *)il2cpp_codegen_object_new(U3CReturnToU3Ec__Iterator0_t3746314890_il2cpp_TypeInfo_var);
		U3CReturnToU3Ec__Iterator0__ctor_m2688021877(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CReturnToU3Ec__Iterator0_t3746314890 * L_1 = V_0;
		float L_2 = ___time1;
		L_1->set_time_0(L_2);
		U3CReturnToU3Ec__Iterator0_t3746314890 * L_3 = V_0;
		int32_t L_4 = ___st0;
		L_3->set_st_1(L_4);
		U3CReturnToU3Ec__Iterator0_t3746314890 * L_5 = V_0;
		L_5->set_U24this_2(__this);
		U3CReturnToU3Ec__Iterator0_t3746314890 * L_6 = V_0;
		return L_6;
	}
}
// System.Void Poser::InterruptCurrentStance(Poser/Stance,System.Single)
extern "C"  void Poser_InterruptCurrentStance_m2506713111 (Poser_t2653926573 * __this, int32_t ___interruptingStance0, float ___time1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Poser_InterruptCurrentStance_m2506713111_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Coroutine_t3829159415 * L_0 = __this->get_interruptCoroutine_12();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Coroutine_t3829159415 * L_1 = __this->get_interruptCoroutine_12();
		MonoBehaviour_StopCoroutine_m907039165(__this, L_1, /*hidden argument*/NULL);
	}

IL_0017:
	{
		int32_t L_2 = Poser_get_CurrentStance_m4100513785(__this, /*hidden argument*/NULL);
		Nullable_1_t2067934930  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Nullable_1__ctor_m2743267308((&L_3), L_2, /*hidden argument*/Nullable_1__ctor_m2743267308_RuntimeMethod_var);
		__this->set_interruptedStance_11(L_3);
		int32_t L_4 = ___interruptingStance0;
		Poser_SetSprite_m3627048953(__this, L_4, /*hidden argument*/NULL);
		float L_5 = ___time1;
		RuntimeObject* L_6 = Poser_ReturnToCurrentStance_m1422296588(__this, L_5, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_7 = MonoBehaviour_StartCoroutine_m3411253000(__this, L_6, /*hidden argument*/NULL);
		__this->set_interruptCoroutine_12(L_7);
		return;
	}
}
// System.Collections.IEnumerator Poser::ReturnToCurrentStance(System.Single)
extern "C"  RuntimeObject* Poser_ReturnToCurrentStance_m1422296588 (Poser_t2653926573 * __this, float ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Poser_ReturnToCurrentStance_m1422296588_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CReturnToCurrentStanceU3Ec__Iterator1_t3534570174 * V_0 = NULL;
	{
		U3CReturnToCurrentStanceU3Ec__Iterator1_t3534570174 * L_0 = (U3CReturnToCurrentStanceU3Ec__Iterator1_t3534570174 *)il2cpp_codegen_object_new(U3CReturnToCurrentStanceU3Ec__Iterator1_t3534570174_il2cpp_TypeInfo_var);
		U3CReturnToCurrentStanceU3Ec__Iterator1__ctor_m2385040848(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CReturnToCurrentStanceU3Ec__Iterator1_t3534570174 * L_1 = V_0;
		float L_2 = ___time0;
		L_1->set_time_0(L_2);
		U3CReturnToCurrentStanceU3Ec__Iterator1_t3534570174 * L_3 = V_0;
		L_3->set_U24this_1(__this);
		U3CReturnToCurrentStanceU3Ec__Iterator1_t3534570174 * L_4 = V_0;
		return L_4;
	}
}
// System.Void Poser::SetSprite(Poser/Stance)
extern "C"  void Poser_SetSprite_m3627048953 (Poser_t2653926573 * __this, int32_t ___targetStance0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = ___targetStance0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___targetStance0;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0015;
		}
	}

IL_000e:
	{
		G_B4_0 = ((int32_t)10);
		goto IL_0016;
	}

IL_0015:
	{
		G_B4_0 = 0;
	}

IL_0016:
	{
		V_0 = G_B4_0;
		int32_t L_2 = V_0;
		int32_t L_3 = ___targetStance0;
		Poser_SetSpriteForAllRenderers_m463568830(__this, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Poser::SetSpriteForAllRenderers(System.Int32,Poser/Stance)
extern "C"  void Poser_SetSpriteForAllRenderers_m463568830 (Poser_t2653926573 * __this, int32_t ___order0, int32_t ___targetStance1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Poser_SetSpriteForAllRenderers_m463568830_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpriteRenderer_t3235626157 * L_0 = __this->get_manSpriteRenderer_3();
		StanceSprites_t3454544338 * L_1 = __this->get_manSprites_2();
		int32_t L_2 = ___targetStance1;
		Sprite_t280657092 * L_3 = StanceSprites_SpriteForStance_m3447838445(L_1, L_2, /*hidden argument*/NULL);
		SpriteRenderer_set_sprite_m1286893786(L_0, L_3, /*hidden argument*/NULL);
		SpriteRenderer_t3235626157 * L_4 = __this->get_manSpriteRenderer_3();
		int32_t L_5 = ___order0;
		Renderer_set_sortingOrder_m549573253(L_4, L_5, /*hidden argument*/NULL);
		StanceSprites_t3454544338 * L_6 = __this->get_pantsSprites_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0063;
		}
	}
	{
		SpriteRenderer_t3235626157 * L_8 = __this->get_pantsSpriteRenderer_5();
		StanceSprites_t3454544338 * L_9 = __this->get_pantsSprites_4();
		int32_t L_10 = ___targetStance1;
		Sprite_t280657092 * L_11 = StanceSprites_SpriteForStance_m3447838445(L_9, L_10, /*hidden argument*/NULL);
		SpriteRenderer_set_sprite_m1286893786(L_8, L_11, /*hidden argument*/NULL);
		SpriteRenderer_t3235626157 * L_12 = __this->get_pantsSpriteRenderer_5();
		SpriteRenderer_t3235626157 * L_13 = __this->get_manSpriteRenderer_3();
		int32_t L_14 = Renderer_get_sortingOrder_m344607889(L_13, /*hidden argument*/NULL);
		Renderer_set_sortingOrder_m549573253(L_12, ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0063:
	{
		StanceSprites_t3454544338 * L_15 = __this->get_shirtSprites_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_15, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00a3;
		}
	}
	{
		SpriteRenderer_t3235626157 * L_17 = __this->get_shirtSpriteRenderer_7();
		StanceSprites_t3454544338 * L_18 = __this->get_shirtSprites_6();
		int32_t L_19 = ___targetStance1;
		Sprite_t280657092 * L_20 = StanceSprites_SpriteForStance_m3447838445(L_18, L_19, /*hidden argument*/NULL);
		SpriteRenderer_set_sprite_m1286893786(L_17, L_20, /*hidden argument*/NULL);
		SpriteRenderer_t3235626157 * L_21 = __this->get_shirtSpriteRenderer_7();
		SpriteRenderer_t3235626157 * L_22 = __this->get_manSpriteRenderer_3();
		int32_t L_23 = Renderer_get_sortingOrder_m344607889(L_22, /*hidden argument*/NULL);
		Renderer_set_sortingOrder_m549573253(L_21, ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)2)), /*hidden argument*/NULL);
	}

IL_00a3:
	{
		StanceSprites_t3454544338 * L_24 = __this->get_hairSprites_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_25 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_24, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00e3;
		}
	}
	{
		SpriteRenderer_t3235626157 * L_26 = __this->get_hairSpriteRenderer_9();
		StanceSprites_t3454544338 * L_27 = __this->get_hairSprites_8();
		int32_t L_28 = ___targetStance1;
		Sprite_t280657092 * L_29 = StanceSprites_SpriteForStance_m3447838445(L_27, L_28, /*hidden argument*/NULL);
		SpriteRenderer_set_sprite_m1286893786(L_26, L_29, /*hidden argument*/NULL);
		SpriteRenderer_t3235626157 * L_30 = __this->get_hairSpriteRenderer_9();
		SpriteRenderer_t3235626157 * L_31 = __this->get_manSpriteRenderer_3();
		int32_t L_32 = Renderer_get_sortingOrder_m344607889(L_31, /*hidden argument*/NULL);
		Renderer_set_sortingOrder_m549573253(L_30, ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_00e3:
	{
		return;
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
// System.Void Poser/<ReturnTo>c__Iterator0::.ctor()
extern "C"  void U3CReturnToU3Ec__Iterator0__ctor_m2688021877 (U3CReturnToU3Ec__Iterator0_t3746314890 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Poser/<ReturnTo>c__Iterator0::MoveNext()
extern "C"  bool U3CReturnToU3Ec__Iterator0_MoveNext_m3261935355 (U3CReturnToU3Ec__Iterator0_t3746314890 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CReturnToU3Ec__Iterator0_MoveNext_m3261935355_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Nullable_1_t2067934930  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_0083;
	}

IL_0021:
	{
		float L_2 = __this->get_time_0();
		WaitForSeconds_t1699091251 * L_3 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_3, L_2, /*hidden argument*/NULL);
		__this->set_U24current_3(L_3);
		bool L_4 = __this->get_U24disposing_4();
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_0041:
	{
		goto IL_0085;
	}

IL_0046:
	{
		Poser_t2653926573 * L_5 = __this->get_U24this_2();
		int32_t L_6 = Poser_get_CurrentStance_m4100513785(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_0068;
		}
	}
	{
		Poser_t2653926573 * L_7 = __this->get_U24this_2();
		int32_t L_8 = __this->get_st_1();
		Poser_set_CurrentStance_m425755468(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0068:
	{
		Poser_t2653926573 * L_9 = __this->get_U24this_2();
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t2067934930 ));
		Nullable_1_t2067934930  L_10 = V_1;
		L_9->set_interruptedStance_11(L_10);
		__this->set_U24PC_5((-1));
	}

IL_0083:
	{
		return (bool)0;
	}

IL_0085:
	{
		return (bool)1;
	}
}
// System.Object Poser/<ReturnTo>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CReturnToU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2835498000 (U3CReturnToU3Ec__Iterator0_t3746314890 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object Poser/<ReturnTo>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CReturnToU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3599776229 (U3CReturnToU3Ec__Iterator0_t3746314890 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void Poser/<ReturnTo>c__Iterator0::Dispose()
extern "C"  void U3CReturnToU3Ec__Iterator0_Dispose_m3106629598 (U3CReturnToU3Ec__Iterator0_t3746314890 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void Poser/<ReturnTo>c__Iterator0::Reset()
extern "C"  void U3CReturnToU3Ec__Iterator0_Reset_m3626334832 (U3CReturnToU3Ec__Iterator0_t3746314890 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CReturnToU3Ec__Iterator0_Reset_m3626334832_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void Poser/<ReturnToCurrentStance>c__Iterator1::.ctor()
extern "C"  void U3CReturnToCurrentStanceU3Ec__Iterator1__ctor_m2385040848 (U3CReturnToCurrentStanceU3Ec__Iterator1_t3534570174 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Poser/<ReturnToCurrentStance>c__Iterator1::MoveNext()
extern "C"  bool U3CReturnToCurrentStanceU3Ec__Iterator1_MoveNext_m3702374989 (U3CReturnToCurrentStanceU3Ec__Iterator1_t3534570174 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CReturnToCurrentStanceU3Ec__Iterator1_MoveNext_m3702374989_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Nullable_1_t2067934930  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_0077;
	}

IL_0021:
	{
		float L_2 = __this->get_time_0();
		WaitForSeconds_t1699091251 * L_3 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_3, L_2, /*hidden argument*/NULL);
		__this->set_U24current_2(L_3);
		bool L_4 = __this->get_U24disposing_3();
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_0041:
	{
		goto IL_0079;
	}

IL_0046:
	{
		Poser_t2653926573 * L_5 = __this->get_U24this_1();
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t2067934930 ));
		Nullable_1_t2067934930  L_6 = V_1;
		L_5->set_interruptedStance_11(L_6);
		Poser_t2653926573 * L_7 = __this->get_U24this_1();
		Poser_t2653926573 * L_8 = __this->get_U24this_1();
		int32_t L_9 = Poser_get_CurrentStance_m4100513785(L_8, /*hidden argument*/NULL);
		Poser_SetSprite_m3627048953(L_7, L_9, /*hidden argument*/NULL);
		__this->set_U24PC_4((-1));
	}

IL_0077:
	{
		return (bool)0;
	}

IL_0079:
	{
		return (bool)1;
	}
}
// System.Object Poser/<ReturnToCurrentStance>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CReturnToCurrentStanceU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1932702641 (U3CReturnToCurrentStanceU3Ec__Iterator1_t3534570174 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object Poser/<ReturnToCurrentStance>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CReturnToCurrentStanceU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m783723746 (U3CReturnToCurrentStanceU3Ec__Iterator1_t3534570174 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void Poser/<ReturnToCurrentStance>c__Iterator1::Dispose()
extern "C"  void U3CReturnToCurrentStanceU3Ec__Iterator1_Dispose_m1855038187 (U3CReturnToCurrentStanceU3Ec__Iterator1_t3534570174 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void Poser/<ReturnToCurrentStance>c__Iterator1::Reset()
extern "C"  void U3CReturnToCurrentStanceU3Ec__Iterator1_Reset_m4270363208 (U3CReturnToCurrentStanceU3Ec__Iterator1_t3534570174 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CReturnToCurrentStanceU3Ec__Iterator1_Reset_m4270363208_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ProgressBar::.ctor()
extern "C"  void ProgressBar__ctor_m128098776 (ProgressBar_t1074804577 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProgressBar::Start()
extern "C"  void ProgressBar_Start_m3915962046 (ProgressBar_t1074804577 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProgressBar_Start_m3915962046_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RectTransform_t3704657025 * L_0 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		__this->set_rectTransform_2(L_0);
		return;
	}
}
// System.Void ProgressBar::SetValue(System.Int32)
extern "C"  void ProgressBar_SetValue_m1393192738 (ProgressBar_t1074804577 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProgressBar_SetValue_m1393192738_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		___value0 = 0;
	}

IL_000a:
	{
		int32_t L_1 = ___value0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)100))))
		{
			goto IL_0016;
		}
	}
	{
		___value0 = ((int32_t)100);
	}

IL_0016:
	{
		RectTransform_t3704657025 * L_2 = __this->get_rectTransform_2();
		int32_t L_3 = ___value0;
		Vector2_t2156229523  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m3970636864((&L_4), ((float)((float)(((float)((float)L_3)))/(float)(100.0f))), (1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Transform_set_localScale_m3053443106(L_2, L_5, /*hidden argument*/NULL);
		return;
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
// System.Void StanceSprites::.ctor()
extern "C"  void StanceSprites__ctor_m4267262456 (StanceSprites_t3454544338 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m1310743131(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Sprite StanceSprites::SpriteForStance(Poser/Stance)
extern "C"  Sprite_t280657092 * StanceSprites_SpriteForStance_m3447838445 (StanceSprites_t3454544338 * __this, int32_t ___stance0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___stance0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0027;
			}
			case 1:
			{
				goto IL_002e;
			}
			case 2:
			{
				goto IL_0035;
			}
			case 3:
			{
				goto IL_003c;
			}
			case 4:
			{
				goto IL_0043;
			}
			case 5:
			{
				goto IL_004a;
			}
			case 6:
			{
				goto IL_0051;
			}
		}
	}
	{
		goto IL_0058;
	}

IL_0027:
	{
		Sprite_t280657092 * L_1 = __this->get_idleSprite_2();
		return L_1;
	}

IL_002e:
	{
		Sprite_t280657092 * L_2 = __this->get_punchSprite_3();
		return L_2;
	}

IL_0035:
	{
		Sprite_t280657092 * L_3 = __this->get_kickSprite_4();
		return L_3;
	}

IL_003c:
	{
		Sprite_t280657092 * L_4 = __this->get_blockPunchSprite_5();
		return L_4;
	}

IL_0043:
	{
		Sprite_t280657092 * L_5 = __this->get_blockKickSprite_6();
		return L_5;
	}

IL_004a:
	{
		Sprite_t280657092 * L_6 = __this->get_damagedSprite_7();
		return L_6;
	}

IL_0051:
	{
		Sprite_t280657092 * L_7 = __this->get_knockedOutSprite_8();
		return L_7;
	}

IL_0058:
	{
		return (Sprite_t280657092 *)NULL;
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
// System.Void SwipeManager::.ctor()
extern "C"  void SwipeManager__ctor_m451292211 (SwipeManager_t2369055733 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SwipeManager::Start()
extern "C"  void SwipeManager_Start_m1584684223 (SwipeManager_t2369055733 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SwipeManager_Start_m1584684223_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MatchPanel_t3284707298 * L_0 = Component_GetComponentInChildren_TisMatchPanel_t3284707298_m552025411(__this, /*hidden argument*/Component_GetComponentInChildren_TisMatchPanel_t3284707298_m552025411_RuntimeMethod_var);
		__this->set_matchPanel_10(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		IL2CPP_RUNTIME_CLASS_INIT(Names_t4168630408_il2cpp_TypeInfo_var);
		String_t* L_2 = Names_RandomName_m3846965876(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->set_topName_13(L_2);
		GameObject_t1113636619 * L_3 = __this->get_topPanel_2();
		Text_t1901882714 * L_4 = GameObject_GetComponentInChildren_TisText_t1901882714_m3637202860(L_3, /*hidden argument*/GameObject_GetComponentInChildren_TisText_t1901882714_m3637202860_RuntimeMethod_var);
		__this->set_topLabel_4(L_4);
		Text_t1901882714 * L_5 = __this->get_topLabel_4();
		String_t* L_6 = __this->get_topName_13();
		int32_t L_7 = Names_RandomAge_m4118168461(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10 = String_Concat_m1715369213(NULL /*static, unused*/, L_6, _stringLiteral3450517380, L_9, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_10);
		GameObject_t1113636619 * L_11 = __this->get_topPanel_2();
		Image_t2670269651 * L_12 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_11, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		__this->set_topPanelBackground_5(L_12);
		Image_t2670269651 * L_13 = __this->get_topPanelBackground_5();
		Color_t2555686324  L_14 = Random_ColorHSV_m1943109089(NULL /*static, unused*/, (0.1f), (0.9f), /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_14);
		Image_t2670269651 * L_15 = __this->get_topPanelImage_3();
		Sprite_t280657092 * L_16 = SwipeManager_RandomSprite_m272148647(__this, (Sprite_t280657092 *)NULL, /*hidden argument*/NULL);
		Image_set_sprite_m2369174689(L_15, L_16, /*hidden argument*/NULL);
		String_t* L_17 = __this->get_topName_13();
		String_t* L_18 = Names_RandomName_m3846965876(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		__this->set_bottomName_14(L_18);
		GameObject_t1113636619 * L_19 = __this->get_bottomPanel_6();
		Text_t1901882714 * L_20 = GameObject_GetComponentInChildren_TisText_t1901882714_m3637202860(L_19, /*hidden argument*/GameObject_GetComponentInChildren_TisText_t1901882714_m3637202860_RuntimeMethod_var);
		__this->set_bottomLabel_8(L_20);
		Text_t1901882714 * L_21 = __this->get_bottomLabel_8();
		String_t* L_22 = __this->get_bottomName_14();
		int32_t L_23 = Names_RandomAge_m4118168461(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_24 = L_23;
		RuntimeObject * L_25 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_24);
		String_t* L_26 = String_Concat_m1715369213(NULL /*static, unused*/, L_22, _stringLiteral3450517380, L_25, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_26);
		GameObject_t1113636619 * L_27 = __this->get_bottomPanel_6();
		Image_t2670269651 * L_28 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_27, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		__this->set_bottomPanelBackground_9(L_28);
		Image_t2670269651 * L_29 = __this->get_bottomPanelBackground_9();
		Color_t2555686324  L_30 = Random_ColorHSV_m1943109089(NULL /*static, unused*/, (0.1f), (0.9f), /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_29, L_30);
		Image_t2670269651 * L_31 = __this->get_bottomPanelImage_7();
		Image_t2670269651 * L_32 = __this->get_topPanelImage_3();
		Sprite_t280657092 * L_33 = Image_get_sprite_m1811690853(L_32, /*hidden argument*/NULL);
		Sprite_t280657092 * L_34 = SwipeManager_RandomSprite_m272148647(__this, L_33, /*hidden argument*/NULL);
		Image_set_sprite_m2369174689(L_31, L_34, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SwipeManager::Update()
extern "C"  void SwipeManager_Update_m492427647 (SwipeManager_t2369055733 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SwipeManager_Update_m492427647_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_animating_12();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->get_blockPunchAction1Key_4();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		SwipeManager_AnimateTopPanel_m1451643684(__this, (bool)1, /*hidden argument*/NULL);
		goto IL_003d;
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->get_punchAction2Key_2();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_4 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		SwipeManager_AnimateTopPanel_m1451643684(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_003d:
	{
		return;
	}
}
// System.Void SwipeManager::OnDisable()
extern "C"  void SwipeManager_OnDisable_m1258953761 (SwipeManager_t2369055733 * __this, const RuntimeMethod* method)
{
	{
		MatchPanel_t3284707298 * L_0 = __this->get_matchPanel_10();
		MatchPanel_MoveToStartingPosition_m736023816(L_0, /*hidden argument*/NULL);
		__this->set_animating_12((bool)0);
		return;
	}
}
// System.Void SwipeManager::OnFightClick()
extern "C"  void SwipeManager_OnFightClick_m3542366540 (SwipeManager_t2369055733 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_animating_12();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		SwipeManager_AnimateTopPanel_m1451643684(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SwipeManager::OnSkipClick()
extern "C"  void SwipeManager_OnSkipClick_m3112547058 (SwipeManager_t2369055733 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_animating_12();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		SwipeManager_AnimateTopPanel_m1451643684(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SwipeManager::AnimateTopPanel(System.Boolean)
extern "C"  void SwipeManager_AnimateTopPanel_m1451643684 (SwipeManager_t2369055733 * __this, bool ___left0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SwipeManager_AnimateTopPanel_m1451643684_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CAnimateTopPanelU3Ec__AnonStorey1_t76819064 * V_0 = NULL;
	{
		U3CAnimateTopPanelU3Ec__AnonStorey1_t76819064 * L_0 = (U3CAnimateTopPanelU3Ec__AnonStorey1_t76819064 *)il2cpp_codegen_object_new(U3CAnimateTopPanelU3Ec__AnonStorey1_t76819064_il2cpp_TypeInfo_var);
		U3CAnimateTopPanelU3Ec__AnonStorey1__ctor_m1989601133(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CAnimateTopPanelU3Ec__AnonStorey1_t76819064 * L_1 = V_0;
		bool L_2 = ___left0;
		L_1->set_left_0(L_2);
		U3CAnimateTopPanelU3Ec__AnonStorey1_t76819064 * L_3 = V_0;
		L_3->set_U24this_4(__this);
		U3CAnimateTopPanelU3Ec__AnonStorey1_t76819064 * L_4 = V_0;
		String_t* L_5 = __this->get_topName_13();
		L_4->set_matchName_1(L_5);
		U3CAnimateTopPanelU3Ec__AnonStorey1_t76819064 * L_6 = V_0;
		Image_t2670269651 * L_7 = __this->get_topPanelImage_3();
		Sprite_t280657092 * L_8 = Image_get_sprite_m1811690853(L_7, /*hidden argument*/NULL);
		L_6->set_dude_2(L_8);
		U3CAnimateTopPanelU3Ec__AnonStorey1_t76819064 * L_9 = V_0;
		Image_t2670269651 * L_10 = __this->get_topPanelBackground_5();
		Color_t2555686324  L_11 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_10);
		L_9->set_color_3(L_11);
		U3CAnimateTopPanelU3Ec__AnonStorey1_t76819064 * L_12 = V_0;
		bool L_13 = L_12->get_left_0();
		U3CAnimateTopPanelU3Ec__AnonStorey1_t76819064 * L_14 = V_0;
		intptr_t L_15 = (intptr_t)U3CAnimateTopPanelU3Ec__AnonStorey1_U3CU3Em__0_m1717187654_RuntimeMethod_var;
		Action_t1264377477 * L_16 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_16, L_14, L_15, /*hidden argument*/NULL);
		RuntimeObject* L_17 = SwipeManager_AnimateTopPanelCoroutine_m788824251(__this, L_13, L_16, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator SwipeManager::AnimateTopPanelCoroutine(System.Boolean,System.Action)
extern "C"  RuntimeObject* SwipeManager_AnimateTopPanelCoroutine_m788824251 (SwipeManager_t2369055733 * __this, bool ___left0, Action_t1264377477 * ___action1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SwipeManager_AnimateTopPanelCoroutine_m788824251_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CAnimateTopPanelCoroutineU3Ec__Iterator0_t2170529847 * V_0 = NULL;
	{
		U3CAnimateTopPanelCoroutineU3Ec__Iterator0_t2170529847 * L_0 = (U3CAnimateTopPanelCoroutineU3Ec__Iterator0_t2170529847 *)il2cpp_codegen_object_new(U3CAnimateTopPanelCoroutineU3Ec__Iterator0_t2170529847_il2cpp_TypeInfo_var);
		U3CAnimateTopPanelCoroutineU3Ec__Iterator0__ctor_m3676755584(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CAnimateTopPanelCoroutineU3Ec__Iterator0_t2170529847 * L_1 = V_0;
		bool L_2 = ___left0;
		L_1->set_left_4(L_2);
		U3CAnimateTopPanelCoroutineU3Ec__Iterator0_t2170529847 * L_3 = V_0;
		Action_t1264377477 * L_4 = ___action1;
		L_3->set_action_5(L_4);
		U3CAnimateTopPanelCoroutineU3Ec__Iterator0_t2170529847 * L_5 = V_0;
		L_5->set_U24this_6(__this);
		U3CAnimateTopPanelCoroutineU3Ec__Iterator0_t2170529847 * L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Sprite SwipeManager::RandomSprite(UnityEngine.Sprite)
extern "C"  Sprite_t280657092 * SwipeManager_RandomSprite_m272148647 (SwipeManager_t2369055733 * __this, Sprite_t280657092 * ___previousSprite0, const RuntimeMethod* method)
{
	Sprite_t280657092 * V_0 = NULL;

IL_0000:
	{
		SpriteU5BU5D_t2581906349* L_0 = __this->get_dudes_11();
		SpriteU5BU5D_t2581906349* L_1 = __this->get_dudes_11();
		int32_t L_2 = Random_Range_m4054026115(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		Sprite_t280657092 * L_4 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		Sprite_t280657092 * L_5 = V_0;
		Sprite_t280657092 * L_6 = ___previousSprite0;
		bool L_7 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_6);
		if (L_7)
		{
			goto IL_0000;
		}
	}
	{
		Sprite_t280657092 * L_8 = V_0;
		return L_8;
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
// System.Void SwipeManager/<AnimateTopPanel>c__AnonStorey1::.ctor()
extern "C"  void U3CAnimateTopPanelU3Ec__AnonStorey1__ctor_m1989601133 (U3CAnimateTopPanelU3Ec__AnonStorey1_t76819064 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SwipeManager/<AnimateTopPanel>c__AnonStorey1::<>m__0()
extern "C"  void U3CAnimateTopPanelU3Ec__AnonStorey1_U3CU3Em__0_m1717187654 (U3CAnimateTopPanelU3Ec__AnonStorey1_t76819064 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_left_0();
		if (L_0)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_1 = Random_Range_m4054026115(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0045;
		}
	}
	{
		SwipeManager_t2369055733 * L_2 = __this->get_U24this_4();
		L_2->set_animating_12((bool)1);
		SwipeManager_t2369055733 * L_3 = __this->get_U24this_4();
		MatchPanel_t3284707298 * L_4 = L_3->get_matchPanel_10();
		String_t* L_5 = __this->get_matchName_1();
		Sprite_t280657092 * L_6 = __this->get_dude_2();
		Color_t2555686324  L_7 = __this->get_color_3();
		MatchPanel_AnimateIn_m2059785970(L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
	}

IL_0045:
	{
		return;
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
// System.Void SwipeManager/<AnimateTopPanelCoroutine>c__Iterator0::.ctor()
extern "C"  void U3CAnimateTopPanelCoroutineU3Ec__Iterator0__ctor_m3676755584 (U3CAnimateTopPanelCoroutineU3Ec__Iterator0_t2170529847 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SwipeManager/<AnimateTopPanelCoroutine>c__Iterator0::MoveNext()
extern "C"  bool U3CAnimateTopPanelCoroutineU3Ec__Iterator0_MoveNext_m2632426864 (U3CAnimateTopPanelCoroutineU3Ec__Iterator0_t2170529847 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAnimateTopPanelCoroutineU3Ec__Iterator0_MoveNext_m2632426864_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_9();
		V_0 = L_0;
		__this->set_U24PC_9((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_011f;
			}
		}
	}
	{
		goto IL_0282;
	}

IL_0021:
	{
		SwipeManager_t2369055733 * L_2 = __this->get_U24this_6();
		L_2->set_animating_12((bool)1);
		SwipeManager_t2369055733 * L_3 = __this->get_U24this_6();
		GameObject_t1113636619 * L_4 = L_3->get_topPanel_2();
		RectTransform_t3704657025 * L_5 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_4, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		__this->set_U3CrectU3E__0_0(L_5);
		RectTransform_t3704657025 * L_6 = __this->get_U3CrectU3E__0_0();
		Vector3_t3722313464  L_7 = Transform_get_localPosition_m4234289348(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_8 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		__this->set_U3CpositionU3E__0_1(L_8);
		__this->set_U3CstepU3E__0_2((0.1f));
		__this->set_U3CmaxStepU3E__0_3((20.0f));
		goto IL_011f;
	}

IL_0074:
	{
		Vector2_t2156229523 * L_9 = __this->get_address_of_U3CpositionU3E__0_1();
		Vector2_t2156229523 * L_10 = L_9;
		float L_11 = L_10->get_x_0();
		float L_12 = __this->get_U3CstepU3E__0_2();
		L_10->set_x_0(((float)il2cpp_codegen_add((float)L_11, (float)L_12)));
		float L_13 = __this->get_U3CstepU3E__0_2();
		float L_14 = __this->get_U3CmaxStepU3E__0_3();
		if ((!(((float)L_13) < ((float)L_14))))
		{
			goto IL_00b0;
		}
	}
	{
		float L_15 = __this->get_U3CstepU3E__0_2();
		float L_16 = __this->get_U3CstepU3E__0_2();
		__this->set_U3CstepU3E__0_2(((float)il2cpp_codegen_add((float)L_15, (float)L_16)));
	}

IL_00b0:
	{
		bool L_17 = __this->get_left_4();
		if (!L_17)
		{
			goto IL_00ea;
		}
	}
	{
		RectTransform_t3704657025 * L_18 = __this->get_U3CrectU3E__0_0();
		Vector2_t2156229523  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Vector2__ctor_m3970636864((&L_19), (-1.0f), (1.0f), /*hidden argument*/NULL);
		Vector2_t2156229523  L_20 = __this->get_U3CpositionU3E__0_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_21 = Vector2_Scale_m165605769(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		Vector3_t3722313464  L_22 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		Transform_set_localPosition_m4128471975(L_18, L_22, /*hidden argument*/NULL);
		goto IL_0100;
	}

IL_00ea:
	{
		RectTransform_t3704657025 * L_23 = __this->get_U3CrectU3E__0_0();
		Vector2_t2156229523  L_24 = __this->get_U3CpositionU3E__0_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_25 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		Transform_set_localPosition_m4128471975(L_23, L_25, /*hidden argument*/NULL);
	}

IL_0100:
	{
		WaitForEndOfFrame_t1314943911 * L_26 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_26, /*hidden argument*/NULL);
		__this->set_U24current_7(L_26);
		bool L_27 = __this->get_U24disposing_8();
		if (L_27)
		{
			goto IL_011a;
		}
	}
	{
		__this->set_U24PC_9(1);
	}

IL_011a:
	{
		goto IL_0284;
	}

IL_011f:
	{
		Vector2_t2156229523 * L_28 = __this->get_address_of_U3CpositionU3E__0_1();
		float L_29 = L_28->get_x_0();
		if ((((float)L_29) < ((float)(240.0f))))
		{
			goto IL_0074;
		}
	}
	{
		SwipeManager_t2369055733 * L_30 = __this->get_U24this_6();
		Image_t2670269651 * L_31 = L_30->get_topPanelImage_3();
		SwipeManager_t2369055733 * L_32 = __this->get_U24this_6();
		Image_t2670269651 * L_33 = L_32->get_bottomPanelImage_7();
		Sprite_t280657092 * L_34 = Image_get_sprite_m1811690853(L_33, /*hidden argument*/NULL);
		Image_set_sprite_m2369174689(L_31, L_34, /*hidden argument*/NULL);
		SwipeManager_t2369055733 * L_35 = __this->get_U24this_6();
		Image_t2670269651 * L_36 = L_35->get_topPanelBackground_5();
		SwipeManager_t2369055733 * L_37 = __this->get_U24this_6();
		Image_t2670269651 * L_38 = L_37->get_bottomPanelBackground_9();
		Color_t2555686324  L_39 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_38);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_36, L_39);
		SwipeManager_t2369055733 * L_40 = __this->get_U24this_6();
		Text_t1901882714 * L_41 = L_40->get_topLabel_4();
		SwipeManager_t2369055733 * L_42 = __this->get_U24this_6();
		Text_t1901882714 * L_43 = L_42->get_bottomLabel_8();
		String_t* L_44 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_43);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_41, L_44);
		Vector2_t2156229523 * L_45 = __this->get_address_of_U3CpositionU3E__0_1();
		L_45->set_x_0((0.0f));
		RectTransform_t3704657025 * L_46 = __this->get_U3CrectU3E__0_0();
		Vector2_t2156229523  L_47 = __this->get_U3CpositionU3E__0_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_48 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		Transform_set_localPosition_m4128471975(L_46, L_48, /*hidden argument*/NULL);
		SwipeManager_t2369055733 * L_49 = __this->get_U24this_6();
		SwipeManager_t2369055733 * L_50 = __this->get_U24this_6();
		String_t* L_51 = L_50->get_bottomName_14();
		L_49->set_topName_13(L_51);
		SwipeManager_t2369055733 * L_52 = __this->get_U24this_6();
		SwipeManager_t2369055733 * L_53 = __this->get_U24this_6();
		String_t* L_54 = L_53->get_topName_13();
		IL2CPP_RUNTIME_CLASS_INIT(Names_t4168630408_il2cpp_TypeInfo_var);
		String_t* L_55 = Names_RandomName_m3846965876(NULL /*static, unused*/, L_54, /*hidden argument*/NULL);
		L_52->set_bottomName_14(L_55);
		SwipeManager_t2369055733 * L_56 = __this->get_U24this_6();
		Text_t1901882714 * L_57 = L_56->get_bottomLabel_8();
		SwipeManager_t2369055733 * L_58 = __this->get_U24this_6();
		String_t* L_59 = L_58->get_bottomName_14();
		int32_t L_60 = Names_RandomAge_m4118168461(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_61 = L_60;
		RuntimeObject * L_62 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_61);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_63 = String_Concat_m1715369213(NULL /*static, unused*/, L_59, _stringLiteral3450517380, L_62, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_57, L_63);
		SwipeManager_t2369055733 * L_64 = __this->get_U24this_6();
		Image_t2670269651 * L_65 = L_64->get_bottomPanelBackground_9();
		Color_t2555686324  L_66 = Random_ColorHSV_m1943109089(NULL /*static, unused*/, (0.1f), (0.9f), /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_65, L_66);
		SwipeManager_t2369055733 * L_67 = __this->get_U24this_6();
		Image_t2670269651 * L_68 = L_67->get_bottomPanelImage_7();
		SwipeManager_t2369055733 * L_69 = __this->get_U24this_6();
		SwipeManager_t2369055733 * L_70 = __this->get_U24this_6();
		Image_t2670269651 * L_71 = L_70->get_topPanelImage_3();
		Sprite_t280657092 * L_72 = Image_get_sprite_m1811690853(L_71, /*hidden argument*/NULL);
		Sprite_t280657092 * L_73 = SwipeManager_RandomSprite_m272148647(L_69, L_72, /*hidden argument*/NULL);
		Image_set_sprite_m2369174689(L_68, L_73, /*hidden argument*/NULL);
		SwipeManager_t2369055733 * L_74 = __this->get_U24this_6();
		L_74->set_animating_12((bool)0);
		Action_t1264377477 * L_75 = __this->get_action_5();
		Action_Invoke_m937035532(L_75, /*hidden argument*/NULL);
		__this->set_U24PC_9((-1));
	}

IL_0282:
	{
		return (bool)0;
	}

IL_0284:
	{
		return (bool)1;
	}
}
// System.Object SwipeManager/<AnimateTopPanelCoroutine>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CAnimateTopPanelCoroutineU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1346924749 (U3CAnimateTopPanelCoroutineU3Ec__Iterator0_t2170529847 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_7();
		return L_0;
	}
}
// System.Object SwipeManager/<AnimateTopPanelCoroutine>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CAnimateTopPanelCoroutineU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3763141005 (U3CAnimateTopPanelCoroutineU3Ec__Iterator0_t2170529847 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_7();
		return L_0;
	}
}
// System.Void SwipeManager/<AnimateTopPanelCoroutine>c__Iterator0::Dispose()
extern "C"  void U3CAnimateTopPanelCoroutineU3Ec__Iterator0_Dispose_m1204992928 (U3CAnimateTopPanelCoroutineU3Ec__Iterator0_t2170529847 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_8((bool)1);
		__this->set_U24PC_9((-1));
		return;
	}
}
// System.Void SwipeManager/<AnimateTopPanelCoroutine>c__Iterator0::Reset()
extern "C"  void U3CAnimateTopPanelCoroutineU3Ec__Iterator0_Reset_m533587568 (U3CAnimateTopPanelCoroutineU3Ec__Iterator0_t2170529847 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAnimateTopPanelCoroutineU3Ec__Iterator0_Reset_m533587568_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void TutorialController::.ctor()
extern "C"  void TutorialController__ctor_m3440229000 (TutorialController_t1549000916 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TutorialController::Update()
extern "C"  void TutorialController_Update_m1392229390 (TutorialController_t1549000916 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TutorialController_Update_m1392229390_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->get_blockKickKey_5();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		int32_t L_2 = ((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->get_blockPunchAction1Key_4();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		int32_t L_4 = ((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->get_punchAction2Key_2();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_5 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->get_kickKey_3();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_7 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}

IL_003c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		PhoneManager_t4261849291 * L_8 = Object_FindObjectOfType_TisPhoneManager_t4261849291_m3175860931(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisPhoneManager_t4261849291_m3175860931_RuntimeMethod_var);
		PhoneManager_ShowSwiping_m1788750612(L_8, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
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
// System.Void Utils::.ctor()
extern "C"  void Utils__ctor_m2052061147 (Utils_t1444179947 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// Utils Utils::get_Instance()
extern "C"  Utils_t1444179947 * Utils_get_Instance_m4005346061 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utils_get_Instance_m4005346061_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		Utils_t1444179947 * L_0 = ((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->get_instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		GameObject_t1113636619 * L_2 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_2, _stringLiteral439355553, /*hidden argument*/NULL);
		V_0 = L_2;
		GameObject_t1113636619 * L_3 = V_0;
		Utils_t1444179947 * L_4 = GameObject_AddComponent_TisUtils_t1444179947_m1443986677(L_3, /*hidden argument*/GameObject_AddComponent_TisUtils_t1444179947_m1443986677_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->set_instance_6(L_4);
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		Utils_t1444179947 * L_5 = ((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->get_instance_6();
		return L_5;
	}
}
// System.Void Utils::Delay(System.Single,System.Action)
extern "C"  void Utils_Delay_m1725504855 (RuntimeObject * __this /* static, unused */, float ___delay0, Action_t1264377477 * ___action1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utils_Delay_m1725504855_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t1444179947_il2cpp_TypeInfo_var);
		Utils_t1444179947 * L_0 = Utils_get_Instance_m4005346061(NULL /*static, unused*/, /*hidden argument*/NULL);
		Utils_t1444179947 * L_1 = Utils_get_Instance_m4005346061(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = ___delay0;
		Action_t1264377477 * L_3 = ___action1;
		RuntimeObject* L_4 = Utils_DelayCoroutine_m3572296006(L_1, L_2, L_3, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(L_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator Utils::DelayCoroutine(System.Single,System.Action)
extern "C"  RuntimeObject* Utils_DelayCoroutine_m3572296006 (Utils_t1444179947 * __this, float ___delay0, Action_t1264377477 * ___action1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utils_DelayCoroutine_m3572296006_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CDelayCoroutineU3Ec__Iterator0_t2088042557 * V_0 = NULL;
	{
		U3CDelayCoroutineU3Ec__Iterator0_t2088042557 * L_0 = (U3CDelayCoroutineU3Ec__Iterator0_t2088042557 *)il2cpp_codegen_object_new(U3CDelayCoroutineU3Ec__Iterator0_t2088042557_il2cpp_TypeInfo_var);
		U3CDelayCoroutineU3Ec__Iterator0__ctor_m1381101770(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDelayCoroutineU3Ec__Iterator0_t2088042557 * L_1 = V_0;
		float L_2 = ___delay0;
		L_1->set_delay_0(L_2);
		U3CDelayCoroutineU3Ec__Iterator0_t2088042557 * L_3 = V_0;
		Action_t1264377477 * L_4 = ___action1;
		L_3->set_action_1(L_4);
		U3CDelayCoroutineU3Ec__Iterator0_t2088042557 * L_5 = V_0;
		return L_5;
	}
}
// System.Void Utils::.cctor()
extern "C"  void Utils__cctor_m1792585047 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utils__cctor_m1792585047_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->set_punchAction2Key_2(((int32_t)106));
		((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->set_kickKey_3(((int32_t)107));
		((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->set_blockPunchAction1Key_4(((int32_t)102));
		((Utils_t1444179947_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t1444179947_il2cpp_TypeInfo_var))->set_blockKickKey_5(((int32_t)100));
		return;
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
// System.Void Utils/<DelayCoroutine>c__Iterator0::.ctor()
extern "C"  void U3CDelayCoroutineU3Ec__Iterator0__ctor_m1381101770 (U3CDelayCoroutineU3Ec__Iterator0_t2088042557 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Utils/<DelayCoroutine>c__Iterator0::MoveNext()
extern "C"  bool U3CDelayCoroutineU3Ec__Iterator0_MoveNext_m95047675 (U3CDelayCoroutineU3Ec__Iterator0_t2088042557 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDelayCoroutineU3Ec__Iterator0_MoveNext_m95047675_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_0058;
	}

IL_0021:
	{
		float L_2 = __this->get_delay_0();
		WaitForSeconds_t1699091251 * L_3 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_3, L_2, /*hidden argument*/NULL);
		__this->set_U24current_2(L_3);
		bool L_4 = __this->get_U24disposing_3();
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_0041:
	{
		goto IL_005a;
	}

IL_0046:
	{
		Action_t1264377477 * L_5 = __this->get_action_1();
		Action_Invoke_m937035532(L_5, /*hidden argument*/NULL);
		__this->set_U24PC_4((-1));
	}

IL_0058:
	{
		return (bool)0;
	}

IL_005a:
	{
		return (bool)1;
	}
}
// System.Object Utils/<DelayCoroutine>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CDelayCoroutineU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m389836667 (U3CDelayCoroutineU3Ec__Iterator0_t2088042557 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object Utils/<DelayCoroutine>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CDelayCoroutineU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1061107532 (U3CDelayCoroutineU3Ec__Iterator0_t2088042557 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void Utils/<DelayCoroutine>c__Iterator0::Dispose()
extern "C"  void U3CDelayCoroutineU3Ec__Iterator0_Dispose_m3650539441 (U3CDelayCoroutineU3Ec__Iterator0_t2088042557 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void Utils/<DelayCoroutine>c__Iterator0::Reset()
extern "C"  void U3CDelayCoroutineU3Ec__Iterator0_Reset_m1903744395 (U3CDelayCoroutineU3Ec__Iterator0_t2088042557 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDelayCoroutineU3Ec__Iterator0_Reset_m1903744395_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

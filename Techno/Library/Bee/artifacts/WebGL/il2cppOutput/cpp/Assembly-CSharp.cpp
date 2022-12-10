#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEnumerable`1<IDataPerisitans>
struct IEnumerable_1_tD87890732AFA4357C2126A3A95A03ECF1BBBDF37;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<IDataPerisitans>
struct List_1_t323746BA83FE0FE3ECE1D8B591CC0A4948C3EC2F;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// IDataPerisitans[]
struct IDataPerisitansU5BU5D_tBDB641EB45AB0BCD5D0871D9CCC764EDF5D662B2;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// Button
struct Button_t08E85812946542C2FD1F37BA7C97825101832DC8;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DataPersistenceManager
struct DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// FileDataHandler
struct FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// GameData
struct GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GetControl
struct GetControl_tDFC1FF392C93C7082611AF2092D3AF621BF91E83;
// Hexagon1
struct Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204;
// IDataPerisitans
struct IDataPerisitans_t03FBC25C19C57753BA5287C889D332DADCC9302D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// LevelMagiger
struct LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148;
// Levels
struct Levels_t03F4F6AB75FBE170D0A96E193BD66E2C4254BD39;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MousClick
struct MousClick_tAA84C6A05F9CE25148ADD1CA8213F4DA367088AE;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PlayerControler
struct PlayerControler_t42AD4F7B8F453B96AD48215A5BF5CEA1E0FD2B1F;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// RobInstructions
struct RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A;
// RobotControler
struct RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25;
// RobotFinich
struct RobotFinich_tC8EAB1BEF82389849D9C352F96B500EBEF007367;
// RobotJump
struct RobotJump_t3856EA68452050FDEA33E8B27423EAFE11B0580A;
// RobotMove
struct RobotMove_t3C21C3E05CBECAA09164983FDD0B28F4450EB5CC;
// RobotTurn
struct RobotTurn_t69C7CBABA3509E364BBA3AD7C75AD7FBCFEEB6C8;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SceneManiger
struct SceneManiger_t35B9947BE24684119D7C9721B38E63630F5068E3;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// SetControl
struct SetControl_t0F3999877E64A162F50302FD01B595AB98BEE614;
// SetRobotStartPosition
struct SetRobotStartPosition_t775FDD10E8D7044822DF4BC4A04B5C7926DE9731;
// StateSwitcher
struct StateSwitcher_t5EA74C0687DFFDB3EABEC4299B7A7C5C5EF97BD4;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// TimeDisplay
struct TimeDisplay_t3B58C3B36F948EC77EF74BAD6F76FE12DF8628C1;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Tutchbutton
struct Tutchbutton_tC94C63E935D5D1AFB0D1692981D10DDE539A0AA5;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Hexagon1/<HandelActionState>d__19
struct U3CHandelActionStateU3Ed__19_t5B007F61ED0D57364D3F5D3856EECB69903FA326;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// RobotControler/<TimeForAction>d__31
struct U3CTimeForActionU3Ed__31_tE54DDFE29AB1AADF35E526D3D7C946318159C541;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDataPerisitans_t03FBC25C19C57753BA5287C889D332DADCC9302D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t323746BA83FE0FE3ECE1D8B591CC0A4948C3EC2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RobotFinich_tC8EAB1BEF82389849D9C352F96B500EBEF007367_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RobotJump_t3856EA68452050FDEA33E8B27423EAFE11B0580A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RobotMove_t3C21C3E05CBECAA09164983FDD0B28F4450EB5CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RobotTurn_t69C7CBABA3509E364BBA3AD7C75AD7FBCFEEB6C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CHandelActionStateU3Ed__19_t5B007F61ED0D57364D3F5D3856EECB69903FA326_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTimeForActionU3Ed__31_tE54DDFE29AB1AADF35E526D3D7C946318159C541_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1EBDA390298AD919BA8A4F87689878CBF71AC9FF;
IL2CPP_EXTERN_C String_t* _stringLiteral21C4DF46B3426B973393131667AAAE772D570FF3;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1;
IL2CPP_EXTERN_C String_t* _stringLiteral488F5963598EA99EC156E2EF1DD00D66C3409D9D;
IL2CPP_EXTERN_C String_t* _stringLiteral49C2C4CBD74690CC3F0B4127393BEA222F0A5B31;
IL2CPP_EXTERN_C String_t* _stringLiteral524DBB544BC574C9512EDD43D56865DC611B0CB2;
IL2CPP_EXTERN_C String_t* _stringLiteral55FA54A30E87EE981C8A53727B6D35F2459E443A;
IL2CPP_EXTERN_C String_t* _stringLiteral5E95267A4EC223293004FABA85BF10B6E4146DF6;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral9817253071976111AD0DB47307FE33DCB0D06673;
IL2CPP_EXTERN_C String_t* _stringLiteralA81B91B774988EFB6666141F202FE47A96E8E690;
IL2CPP_EXTERN_C String_t* _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD;
IL2CPP_EXTERN_C String_t* _stringLiteralB6189909980318AB859DB30E377C0E57C1645FCE;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCBB11617944AA76BC68B044DAC2C88A1EDBA6CA6;
IL2CPP_EXTERN_C String_t* _stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDF62ABB73EF9B8AA42D37E4DD18B352C36F71CE3;
IL2CPP_EXTERN_C String_t* _stringLiteralE9E78AA8C485B95AB31446E55F31064840D75D9B;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t08E85812946542C2FD1F37BA7C97825101832DC8_mD409EE01137B3FC796D331C457DB5620375C09AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLevels_t03F4F6AB75FBE170D0A96E193BD66E2C4254BD39_m6497C9CCF8952C61AB8114A7336A8D4AD8ADEE1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OfType_TisIDataPerisitans_t03FBC25C19C57753BA5287C889D332DADCC9302D_m43A3C441B130D6EB8E18CAC7844648D27F379AC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m147B08BFB6CA2AA77C34C570E22D9F6674EB1558_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE8E6AB8D12D876C025D586CA79BB9F72D80546A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m32C117ED0BF46E41A291C8C2ED802C82A339C889_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148_m1830AE7D9B86D27DC6B7EA51B69BFE2A109B20AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisGameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_mA26EC7D424EA3D870035D10DF80D8BD3F6FD8DE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mBC24CCAC70B7A420D26CC5758142628D5A247247_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6565562AC60FBACC6E7F16833356CDF96DACF1BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m6A72B7648178616800F05C13DB492E4EDB866B7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_mDF62FF06EFCF4912EC4EA0E6AB3CFEF74507E58C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CHandelActionStateU3Ed__19_System_Collections_IEnumerator_Reset_m5C7325C27B23FE7DEDC0320E8A8F9F81D071E8B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTimeForActionU3Ed__31_System_Collections_IEnumerator_Reset_m4745C4E001CD5F5C6BC009AF0D6D852A6141E61A_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<IDataPerisitans>
struct List_1_t323746BA83FE0FE3ECE1D8B591CC0A4948C3EC2F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IDataPerisitansU5BU5D_tBDB641EB45AB0BCD5D0871D9CCC764EDF5D662B2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t323746BA83FE0FE3ECE1D8B591CC0A4948C3EC2F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IDataPerisitansU5BU5D_tBDB641EB45AB0BCD5D0871D9CCC764EDF5D662B2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// FileDataHandler
struct FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA  : public RuntimeObject
{
	// System.String FileDataHandler::dataDirPath
	String_t* ___dataDirPath_0;
	// System.String FileDataHandler::dataFileName
	String_t* ___dataFileName_1;
};

// GameData
struct GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6  : public RuntimeObject
{
	// System.Single GameData::fastisTime
	float ___fastisTime_0;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// RobotFinich
struct RobotFinich_tC8EAB1BEF82389849D9C352F96B500EBEF007367  : public RuntimeObject
{
	// RobotControler RobotFinich::rbc
	RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* ___rbc_0;
};

// RobotJump
struct RobotJump_t3856EA68452050FDEA33E8B27423EAFE11B0580A  : public RuntimeObject
{
	// RobotControler RobotJump::rbc
	RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* ___rbc_0;
	// System.Single RobotJump::startY
	float ___startY_1;
};

// RobotMove
struct RobotMove_t3C21C3E05CBECAA09164983FDD0B28F4450EB5CC  : public RuntimeObject
{
	// RobotControler RobotMove::rbc
	RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* ___rbc_0;
};

// RobotTurn
struct RobotTurn_t69C7CBABA3509E364BBA3AD7C75AD7FBCFEEB6C8  : public RuntimeObject
{
	// RobotControler RobotTurn::rbc
	RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* ___rbc_0;
};

// SceneManiger
struct SceneManiger_t35B9947BE24684119D7C9721B38E63630F5068E3  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Hexagon1/<HandelActionState>d__19
struct U3CHandelActionStateU3Ed__19_t5B007F61ED0D57364D3F5D3856EECB69903FA326  : public RuntimeObject
{
	// System.Int32 Hexagon1/<HandelActionState>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Hexagon1/<HandelActionState>d__19::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Hexagon1 Hexagon1/<HandelActionState>d__19::<>4__this
	Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* ___U3CU3E4__this_2;
};

// RobotControler/<TimeForAction>d__31
struct U3CTimeForActionU3Ed__31_tE54DDFE29AB1AADF35E526D3D7C946318159C541  : public RuntimeObject
{
	// System.Int32 RobotControler/<TimeForAction>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RobotControler/<TimeForAction>d__31::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// RobotControler RobotControler/<TimeForAction>d__31::<>4__this
	RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* ___U3CU3E4__this_2;
};

// System.Collections.Generic.List`1/Enumerator<IDataPerisitans>
struct Enumerator_t9D2232BD4A785A03591F2D8ABEBA44A9FB9CA452 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t323746BA83FE0FE3ECE1D8B591CC0A4948C3EC2F* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine_3;
	// System.String System.IO.TextWriter::CoreNewLineStr
	String_t* ___CoreNewLineStr_4;
	// System.IFormatProvider System.IO.TextWriter::_internalFormatProvider
	RuntimeObject* ____internalFormatProvider_5;
};

struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null_1;
	// System.Char[] System.IO.TextWriter::s_coreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine_2;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
};

// System.ByReference`1<System.Char>
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// RobInstructions
struct RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A  : public RuntimeObject
{
	// RobotControler RobInstructions::rbc
	RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* ___rbc_0;
	// System.Collections.Generic.List`1<System.String> RobInstructions::instructions
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___instructions_1;
	// System.Int32 RobInstructions::curentInstruction
	int32_t ___curentInstruction_3;
	// System.Int32 RobInstructions::instructionsCount
	int32_t ___instructionsCount_4;
	// UnityEngine.Vector3 RobInstructions::startPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPosition_5;
	// UnityEngine.Quaternion RobInstructions::startRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___startRotation_6;
};

struct RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A_StaticFields
{
	// System.Boolean RobInstructions::isPlayeing
	bool ___isPlayeing_2;
};

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_3;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_4;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_5;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_6;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_7;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_8;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_9;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_10;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_11;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_12;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_13;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_14;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_15;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_17;
};

struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
};

// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4  : public TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3
{
	// System.IO.Stream System.IO.StreamWriter::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_7;
	// System.Text.Encoding System.IO.StreamWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_8;
	// System.Text.Encoder System.IO.StreamWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_9;
	// System.Byte[] System.IO.StreamWriter::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_10;
	// System.Char[] System.IO.StreamWriter::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_11;
	// System.Int32 System.IO.StreamWriter::_charPos
	int32_t ____charPos_12;
	// System.Int32 System.IO.StreamWriter::_charLen
	int32_t ____charLen_13;
	// System.Boolean System.IO.StreamWriter::_autoFlush
	bool ____autoFlush_14;
	// System.Boolean System.IO.StreamWriter::_haveWrittenPreamble
	bool ____haveWrittenPreamble_15;
	// System.Boolean System.IO.StreamWriter::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamWriter::_asyncWriteTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncWriteTask_17;
};

struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_StaticFields
{
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* ___Null_6;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// System.ReadOnlySpan`1<System.Char>
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Button
struct Button_t08E85812946542C2FD1F37BA7C97825101832DC8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator Button::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_4;
	// UnityEngine.Events.UnityEvent Button::unityEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___unityEvent_5;
	// UnityEngine.AudioSource Button::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_6;
};

// DataPersistenceManager
struct DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String DataPersistenceManager::fileName
	String_t* ___fileName_4;
	// GameData DataPersistenceManager::gameData
	GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* ___gameData_5;
	// FileDataHandler DataPersistenceManager::fileDataHandler
	FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA* ___fileDataHandler_6;
	// System.Collections.Generic.List`1<IDataPerisitans> DataPersistenceManager::dataPersistenceOvjects
	List_1_t323746BA83FE0FE3ECE1D8B591CC0A4948C3EC2F* ___dataPersistenceOvjects_8;
};

struct DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_StaticFields
{
	// DataPersistenceManager DataPersistenceManager::<instance>k__BackingField
	DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* ___U3CinstanceU3Ek__BackingField_7;
};

// GetControl
struct GetControl_tDFC1FF392C93C7082611AF2092D3AF621BF91E83  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GetControl::rotationPannel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rotationPannel_4;
	// UnityEngine.GameObject GetControl::startLocation
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___startLocation_5;
	// System.Single GetControl::rowOfset
	float ___rowOfset_6;
	// System.Single GetControl::colomOfset
	float ___colomOfset_7;
	// System.Single GetControl::timeForTurn
	float ___timeForTurn_8;
	// System.Int32 GetControl::NUMBER_OF_ROWS
	int32_t ___NUMBER_OF_ROWS_9;
	// System.Int32 GetControl::NUMBER_OF_COLOMS
	int32_t ___NUMBER_OF_COLOMS_10;
};

// Hexagon1
struct Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Hexagon1::timeForRotation
	float ___timeForRotation_4;
	// System.Int32 Hexagon1::CurentActionControler
	int32_t ___CurentActionControler_5;
	// System.Int32 Hexagon1::curentFunction
	int32_t ___curentFunction_6;
	// RobotControler Hexagon1::robotControler
	RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* ___robotControler_7;
	// UnityEngine.AudioSource Hexagon1::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_9;
	// UnityEngine.Quaternion Hexagon1::curentRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___curentRotation_10;
	// UnityEngine.Quaternion Hexagon1::startRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___startRotation_11;
	// System.Single Hexagon1::xRotationPerFrame
	float ___xRotationPerFrame_12;
	// System.Single Hexagon1::xRotationPerFrameReset
	float ___xRotationPerFrameReset_13;
	// System.Int32 Hexagon1::derection
	int32_t ___derection_14;
	// System.Boolean Hexagon1::isTurning
	bool ___isTurning_15;
	// System.Boolean Hexagon1::onResetPrest
	bool ___onResetPrest_16;
	// System.Int32 Hexagon1::NUMBER_OF_FRAMS_IN_FIXEDUPDATE
	int32_t ___NUMBER_OF_FRAMS_IN_FIXEDUPDATE_17;
	// System.Int32 Hexagon1::ANGEL_DEGRY_FOR_HEXSAGON
	int32_t ___ANGEL_DEGRY_FOR_HEXSAGON_18;
};

struct Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204_StaticFields
{
	// System.Boolean Hexagon1::isResetting
	bool ___isResetting_8;
};

// LevelMagiger
struct LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform LevelMagiger::instantiateLocation
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___instantiateLocation_4;
	// UnityEngine.GameObject LevelMagiger::curentLevelGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___curentLevelGameObject_5;
	// Levels LevelMagiger::levels
	Levels_t03F4F6AB75FBE170D0A96E193BD66E2C4254BD39* ___levels_6;
	// System.Int32 LevelMagiger::curentLevelInt
	int32_t ___curentLevelInt_7;
};

struct LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148_StaticFields
{
	// System.Boolean LevelMagiger::allLeffelsCompleed
	bool ___allLeffelsCompleed_8;
};

// Levels
struct Levels_t03F4F6AB75FBE170D0A96E193BD66E2C4254BD39  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Levels::levels
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___levels_4;
};

// MousClick
struct MousClick_tAA84C6A05F9CE25148ADD1CA8213F4DA367088AE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera MousClick::camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera_4;
};

// PlayerControler
struct PlayerControler_t42AD4F7B8F453B96AD48215A5BF5CEA1E0FD2B1F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PlayerControler::walkSpeed
	float ___walkSpeed_4;
	// System.Single PlayerControler::runSpeed
	float ___runSpeed_5;
	// System.Single PlayerControler::grafity
	float ___grafity_6;
	// System.Single PlayerControler::lookSpeedY
	float ___lookSpeedY_7;
	// System.Single PlayerControler::lookSpeedX
	float ___lookSpeedX_8;
	// System.Single PlayerControler::upperLookLimit
	float ___upperLookLimit_9;
	// System.Single PlayerControler::lowerLookLimit
	float ___lowerLookLimit_10;
	// UnityEngine.Camera PlayerControler::playerCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___playerCamera_11;
	// UnityEngine.CharacterController PlayerControler::characterController
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___characterController_12;
	// UnityEngine.Vector3 PlayerControler::MoveDerection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___MoveDerection_13;
	// System.Single PlayerControler::InputHorizontal
	float ___InputHorizontal_14;
	// System.Single PlayerControler::InputVertical
	float ___InputVertical_15;
	// System.Single PlayerControler::rotationX
	float ___rotationX_16;
};

// RobotControler
struct RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single RobotControler::timeForAction
	float ___timeForAction_4;
	// System.Single RobotControler::moveDistance
	float ___moveDistance_5;
	// System.Single RobotControler::maxJumpHeight
	float ___maxJumpHeight_6;
	// System.Single RobotControler::timeBetweenAction
	float ___timeBetweenAction_7;
	// UnityEngine.AudioClip[] RobotControler::audioClip
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___audioClip_8;
	// GetControl RobotControler::getControl
	GetControl_tDFC1FF392C93C7082611AF2092D3AF621BF91E83* ___getControl_9;
	// SetControl RobotControler::setControl
	SetControl_t0F3999877E64A162F50302FD01B595AB98BEE614* ___setControl_10;
	// TimeDisplay RobotControler::timeDisplay
	TimeDisplay_t3B58C3B36F948EC77EF74BAD6F76FE12DF8628C1* ___timeDisplay_11;
	// UnityEngine.LayerMask RobotControler::layerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask_12;
	// System.Int32 RobotControler::CurentFunction
	int32_t ___CurentFunction_13;
	// System.Boolean RobotControler::isMoving
	bool ___isMoving_14;
	// System.Boolean RobotControler::isJumping
	bool ___isJumping_15;
	// System.Boolean RobotControler::isTurning
	bool ___isTurning_16;
	// UnityEngine.Animator RobotControler::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_17;
	// UnityEngine.AudioSource RobotControler::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_18;
	// RobotJump RobotControler::robotJump
	RobotJump_t3856EA68452050FDEA33E8B27423EAFE11B0580A* ___robotJump_19;
	// RobotMove RobotControler::robotMove
	RobotMove_t3C21C3E05CBECAA09164983FDD0B28F4450EB5CC* ___robotMove_20;
	// RobotTurn RobotControler::robotTurn
	RobotTurn_t69C7CBABA3509E364BBA3AD7C75AD7FBCFEEB6C8* ___robotTurn_21;
	// RobotFinich RobotControler::robotFinich
	RobotFinich_tC8EAB1BEF82389849D9C352F96B500EBEF007367* ___robotFinich_22;
	// LevelMagiger RobotControler::levelMagiger
	LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148* ___levelMagiger_23;
	// RobInstructions RobotControler::robInstructions
	RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A* ___robInstructions_24;
	// System.Single RobotControler::actionMultiplier
	float ___actionMultiplier_25;
	// System.Single RobotControler::scaleMultiplier
	float ___scaleMultiplier_26;
	// System.Int32 RobotControler::NUMBER_OF_FRAMS_IN_FIXED_UPDATE
	int32_t ___NUMBER_OF_FRAMS_IN_FIXED_UPDATE_27;
	// System.Int32 RobotControler::framesCount
	int32_t ___framesCount_28;
	// UnityEngine.Vector3 RobotControler::lastPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastPosition_29;
};

// SetControl
struct SetControl_t0F3999877E64A162F50302FD01B595AB98BEE614  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SetControl::controlPannels
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___controlPannels_4;
	// RobotControler SetControl::robotControler
	RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* ___robotControler_5;
};

// SetRobotStartPosition
struct SetRobotStartPosition_t775FDD10E8D7044822DF4BC4A04B5C7926DE9731  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform SetRobotStartPosition::startPosition
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___startPosition_4;
	// System.Int32 SetRobotStartPosition::moveDistance
	int32_t ___moveDistance_5;
};

// StateSwitcher
struct StateSwitcher_t5EA74C0687DFFDB3EABEC4299B7A7C5C5EF97BD4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 StateSwitcher::curentState
	int32_t ___curentState_4;
	// System.Boolean StateSwitcher::isInSetAiria
	bool ___isInSetAiria_5;
	// System.Single StateSwitcher::MaxsSwitchDistans
	float ___MaxsSwitchDistans_6;
	// UnityEngine.GameObject StateSwitcher::Player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Player_7;
	// UnityEngine.GameObject StateSwitcher::StaticCamera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___StaticCamera_8;
	// UnityEngine.GameObject StateSwitcher::CrosAir
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___CrosAir_9;
	// UnityEngine.GameObject StateSwitcher::Tip
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Tip_10;
	// UnityEngine.AudioSource StateSwitcher::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_11;
};

// TimeDisplay
struct TimeDisplay_t3B58C3B36F948EC77EF74BAD6F76FE12DF8628C1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TimeDisplay::NumberOfDesemols
	float ___NumberOfDesemols_4;
	// TMPro.TextMeshProUGUI TimeDisplay::time
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___time_5;
	// TMPro.TextMeshProUGUI TimeDisplay::fastisTime
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___fastisTime_6;
	// UnityEngine.AudioSource TimeDisplay::clockTick
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___clockTick_7;
	// System.Single TimeDisplay::curentTime
	float ___curentTime_8;
	// System.Single TimeDisplay::FastisTime
	float ___FastisTime_9;
};

// Tutchbutton
struct Tutchbutton_tC94C63E935D5D1AFB0D1692981D10DDE539A0AA5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera Tutchbutton::palyer
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___palyer_4;
	// System.Single Tutchbutton::klickDistans
	float ___klickDistans_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7  : public RuntimeArray
{
	ALIGN_FIELD (8) MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* m_Items[1];

	inline MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared (const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType<System.Object>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OfType_TisRuntimeObject_m159512A788C6571FEF13C708CB20374087C762DD_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Hexagon1::SetValus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon1_SetValus_m8800888004E8125937941AD9EF65B3A6A404B663 (Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Hexagon1::HandelHexagon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon1_HandelHexagon_mED3F53B5106775397E091D4A06D30BEAAFFE5F0A (Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* __this, const RuntimeMethod* method) ;
// System.Void Hexagon1::OnResetPrest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon1_OnResetPrest_m6B007FCAE008655656092E805DAC91CE19E5D049 (Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* __this, const RuntimeMethod* method) ;
// System.Void Hexagon1::HandelReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon1_HandelReset_mA6131AFE3FE8CD9FD12FD43ED31D8FFCB523F6F7 (Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Hexagon1::HandelActionState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hexagon1_HandelActionState_m7E5083118326F9084A60A49120033885BB9EE6DE (Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Hexagon1/<HandelActionState>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandelActionStateU3Ed__19__ctor_mB390088BAE75D301F4E5614466BEF5250FE4EA6E (U3CHandelActionStateU3Ed__19_t5B007F61ED0D57364D3F5D3856EECB69903FA326* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Hexagon1::CalculatesQuaternion(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Hexagon1_CalculatesQuaternion_m471959C8A22B8AE1EF34A0A9774741B1816626F4 (Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____Hexsagon0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_m4EC1EF263D0E42432A301F85CB52028D2973F5DA_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Void Hexagon1::CurentFunction(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon1_CurentFunction_mBE23521E0FB6E28E001AFA9BFCE8E6AA296081D8 (Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void RobotControler::OnChangeInstruction(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotControler_OnChangeInstruction_mD151D1454888477D936AF468384C1478A90B52EA (RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* __this, int32_t ___i0, String_t* ____Name1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void TimeDisplay::HandelTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeDisplay_HandelTime_m344F1601E1E042EDC5A1ED7CDC1CA7337701A7C0 (TimeDisplay_t3B58C3B36F948EC77EF74BAD6F76FE12DF8628C1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.String TimeDisplay::FormatSeconds(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimeDisplay_FormatSeconds_mB1EE6D13D1FDBDF25BB8B6C3CAA129045A47F99A (TimeDisplay_t3B58C3B36F948EC77EF74BAD6F76FE12DF8628C1* __this, float ___elapsed0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Levels>()
inline Levels_t03F4F6AB75FBE170D0A96E193BD66E2C4254BD39* Component_GetComponent_TisLevels_t03F4F6AB75FBE170D0A96E193BD66E2C4254BD39_m6497C9CCF8952C61AB8114A7336A8D4AD8ADEE1A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Levels_t03F4F6AB75FBE170D0A96E193BD66E2C4254BD39* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void LevelMagiger::OnChangeLefel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelMagiger_OnChangeLefel_m9360DBA6D9217D5F2F7CB19136F09E432D30969D (LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___original0, ___parent1, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Void MousClick::Klick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MousClick_Klick_m0A956EF351FC43F939F6179AC7A0ADD875790577 (MousClick_tAA84C6A05F9CE25148ADD1CA8213F4DA367088AE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_m796C039D0BD9962E19368C08CE76E8257DD45C5F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, float ___duration3, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Button>()
inline Button_t08E85812946542C2FD1F37BA7C97825101832DC8* Component_GetComponent_TisButton_t08E85812946542C2FD1F37BA7C97825101832DC8_mD409EE01137B3FC796D331C457DB5620375C09AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t08E85812946542C2FD1F37BA7C97825101832DC8* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Button::DoIets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_DoIets_m6A5605D513070AA92FE1C5906B0839C57CDC9BAF (Button_t08E85812946542C2FD1F37BA7C97825101832DC8* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void PlayerControler::HnadelInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControler_HnadelInput_mBA21384F4A1765ED4D4B68E63B3369B2FDAAA78E (PlayerControler_t42AD4F7B8F453B96AD48215A5BF5CEA1E0FD2B1F* __this, const RuntimeMethod* method) ;
// System.Void PlayerControler::HandelMousLook()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControler_HandelMousLook_m2221374CFF6C0B0F136BAA475063EA2BCDD037D8 (PlayerControler_t42AD4F7B8F453B96AD48215A5BF5CEA1E0FD2B1F* __this, const RuntimeMethod* method) ;
// System.Void PlayerControler::HandelMovment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControler_HandelMovment_m31CE9073E8997786986C5E1619ED8C3B1950529C (PlayerControler_t42AD4F7B8F453B96AD48215A5BF5CEA1E0FD2B1F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.CharacterController::get_isGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___motion0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void Tutchbutton::Klick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutchbutton_Klick_m5EDC000034BF8AC492F3FCEAA22228B02783B262 (Tutchbutton_tC94C63E935D5D1AFB0D1692981D10DDE539A0AA5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method) ;
// System.Void RobInstructions::ResetInstructions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobInstructions_ResetInstructions_mF2573A9B6E6BD5CE0F0654A6559DE9EC2A944702 (RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void RobInstructions::StartOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobInstructions_StartOver_mDE1B4738F3CCA62D5E72E2D91CCB859525E8FE8C (RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.ReadOnlySpan`1<System.Char> System.String::op_Implicit(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 String_op_Implicit_m7D7FE0449303AF92D8B2A85A06ADC6933B2ECC3A_inline (String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m1618CF9F1145C9832FC830A4BD6DD96A540012F8 (String_t* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::set_Item(System.Int32,T)
inline void List_1_set_Item_m6A72B7648178616800F05C13DB492E4EDB866B7C (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, String_t*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// System.Void RobInstructions::HandelPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobInstructions_HandelPlay_m26AEB1624BED5F2637EBC57D514C6915B0D61003 (RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void RobotControler::OnChangeFunction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotControler_OnChangeFunction_m6D5C06D266DA54DC5CF6323712FED65409478B11 (RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* __this, String_t* ___NextFunction0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void RobotJump::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotJump__ctor_mBF5BB95284966044E84C4E85A916DD83856470A8 (RobotJump_t3856EA68452050FDEA33E8B27423EAFE11B0580A* __this, const RuntimeMethod* method) ;
// System.Void RobotMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotMove__ctor_mE6B304B431EC2B29ECEA066E89B07B86CFF91F27 (RobotMove_t3C21C3E05CBECAA09164983FDD0B28F4450EB5CC* __this, const RuntimeMethod* method) ;
// System.Void RobotTurn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotTurn__ctor_mDF16A44F0C84D6C987B37F31AFDCCB59151A53A4 (RobotTurn_t69C7CBABA3509E364BBA3AD7C75AD7FBCFEEB6C8* __this, const RuntimeMethod* method) ;
// System.Void RobotFinich::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotFinich__ctor_mB77F6FEAA94F9F8B132BBA699AA40C3EDE86047E (RobotFinich_tC8EAB1BEF82389849D9C352F96B500EBEF007367* __this, const RuntimeMethod* method) ;
// System.Void RobInstructions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobInstructions__ctor_m7558A8186A61A5D8C32AB9C848FBA0A44B9B65C2 (RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<LevelMagiger>()
inline LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148* GameObject_GetComponent_TisLevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148_m1830AE7D9B86D27DC6B7EA51B69BFE2A109B20AC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void RobInstructions::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobInstructions_Awake_m13F0AACB00EF3D043BAE992EFFCBC946337EAE06 (RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A* __this, const RuntimeMethod* method) ;
// System.Void RobotControler::SwitchFunctions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotControler_SwitchFunctions_mD515B5274BC0F8EAA6286107371F02DD66CC5D8B (RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Boolean RobotControler::IsWalkable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RobotControler_IsWalkable_m8CE7EFF783ECFEBCF3DC7284809D6B50C8D7E3C4 (RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* __this, const RuntimeMethod* method) ;
// System.Void RobotControler::PlayAudio(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotControler_PlayAudio_mB5D88553503FFDFCE2BF973ED733AF8A9F5870D6 (RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// System.Boolean RobotControler::IsJumpable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RobotControler_IsJumpable_mDCB0DA42C8B1F07251B41625B1A749930057C2D5 (RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* __this, const RuntimeMethod* method) ;
// System.Void RobotFinich::OnFinich()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotFinich_OnFinich_mE4BA9A5BE7319F87CF0483FA0B779BF1080ADA06 (RobotFinich_tC8EAB1BEF82389849D9C352F96B500EBEF007367* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator RobotControler::TimeForAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RobotControler_TimeForAction_m062C6AE6B37E7E5FE5C3A00B982633A1FE32F06E (RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* __this, const RuntimeMethod* method) ;
// System.Void RobotTurn::HandelRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotTurn_HandelRotation_mCCCCCDE1C1AB0125EB8C9674620A3EACD6B6721D (RobotTurn_t69C7CBABA3509E364BBA3AD7C75AD7FBCFEEB6C8* __this, float ____Angel0, const RuntimeMethod* method) ;
// System.Void RobotMove::HandelMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotMove_HandelMovement_m8E6D5D4EB48A7914A5B6E3CA725062258AEEE816 (RobotMove_t3C21C3E05CBECAA09164983FDD0B28F4450EB5CC* __this, const RuntimeMethod* method) ;
// System.Void RobotJump::HandelJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotJump_HandelJump_m52BB35AB96B41AA4D367736D5F0E8ADDA57D2158 (RobotJump_t3856EA68452050FDEA33E8B27423EAFE11B0580A* __this, const RuntimeMethod* method) ;
// System.Void RobotControler/<TimeForAction>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimeForActionU3Ed__31__ctor_m05AAE23093B2A0F6EACB51A264762A7A566F2002 (U3CTimeForActionU3Ed__31_tE54DDFE29AB1AADF35E526D3D7C946318159C541* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Single RobotJump::HeightObjectBelow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RobotJump_HeightObjectBelow_m22AD30CF53E0B205256262194AE4882E3E4FB798 (RobotJump_t3856EA68452050FDEA33E8B27423EAFE11B0580A* __this, const RuntimeMethod* method) ;
// System.Boolean RobotControler::IsSomethingFront()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RobotControler_IsSomethingFront_mBEAC5098C672382D80D7DA624FC34D96B63F3803 (RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* __this, const RuntimeMethod* method) ;
// System.Boolean RobotControler::IsSomethingBelowFront(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RobotControler_IsSomethingBelowFront_mE4E5A348622B6153E3C9CBB9FEAD13BF90143B9A (RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* __this, float ____Lenht0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m0679FB03C9AFC1E803B8F8AE6CAB409670D31377 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// System.Void RobInstructions::OnPlayPrest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobInstructions_OnPlayPrest_mFAD955BB728D115797A6A6019301F82F65EAC756 (RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A* __this, const RuntimeMethod* method) ;
// System.Void RobInstructions::OnChangeInstruction(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobInstructions_OnChangeInstruction_m6D70E1F3260CBCD9B5685618B7D760DAC0351486 (RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A* __this, int32_t ___i0, String_t* ____Name1, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// System.Void RobotControler::SetBasis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotControler_SetBasis_m03F1D867F9287B085B9CCE3471BF0A33B586C79E (RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// DataPersistenceManager DataPersistenceManager::get_instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* DataPersistenceManager_get_instance_m01C3F5BCC51E7FABA894C34501EC63C4B82E8A5B_inline (const RuntimeMethod* method) ;
// System.Void DataPersistenceManager::set_instance(DataPersistenceManager)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataPersistenceManager_set_instance_m745574F1B7D025B6EAA022465F9516AFC237A5D7_inline (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.Void FileDataHandler::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDataHandler__ctor_m9996C2867C7A406598D422A8D29131406E1A22AC (FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA* __this, String_t* ___dataDirPath0, String_t* ___dataFileName1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<IDataPerisitans> DataPersistenceManager::FindAllDataPersistenceObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t323746BA83FE0FE3ECE1D8B591CC0A4948C3EC2F* DataPersistenceManager_FindAllDataPersistenceObjects_mF337132E08F64DBC0D26AE7E212F2AC0BB0D02A8 (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* __this, const RuntimeMethod* method) ;
// System.Void DataPersistenceManager::LoadGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPersistenceManager_LoadGame_mE5BFE59CFA8765A35449DA66918D46E347D5CC64 (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* __this, const RuntimeMethod* method) ;
// System.Void DataPersistenceManager::SaveGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPersistenceManager_SaveGame_m404977BEBEFAE09E0AA1948AD2D9E2C2DB87B97C (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* __this, const RuntimeMethod* method) ;
// System.Void GameData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData__ctor_mA9048174D2C20A10AD865A4B919045878E27099A (GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* __this, const RuntimeMethod* method) ;
// GameData FileDataHandler::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* FileDataHandler_Load_m0A73AE206E58A13E321446D52A62AD3E440480AD (FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void DataPersistenceManager::NewGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPersistenceManager_NewGame_m1F7A0A953C2CC8EFA03D66B5F3E2809211DFF5C5 (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<IDataPerisitans>::GetEnumerator()
inline Enumerator_t9D2232BD4A785A03591F2D8ABEBA44A9FB9CA452 List_1_GetEnumerator_mBC24CCAC70B7A420D26CC5758142628D5A247247 (List_1_t323746BA83FE0FE3ECE1D8B591CC0A4948C3EC2F* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9D2232BD4A785A03591F2D8ABEBA44A9FB9CA452 (*) (List_1_t323746BA83FE0FE3ECE1D8B591CC0A4948C3EC2F*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<IDataPerisitans>::Dispose()
inline void Enumerator_Dispose_m147B08BFB6CA2AA77C34C570E22D9F6674EB1558 (Enumerator_t9D2232BD4A785A03591F2D8ABEBA44A9FB9CA452* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9D2232BD4A785A03591F2D8ABEBA44A9FB9CA452*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<IDataPerisitans>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m32C117ED0BF46E41A291C8C2ED802C82A339C889_inline (Enumerator_t9D2232BD4A785A03591F2D8ABEBA44A9FB9CA452* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9D2232BD4A785A03591F2D8ABEBA44A9FB9CA452*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<IDataPerisitans>::MoveNext()
inline bool Enumerator_MoveNext_mE8E6AB8D12D876C025D586CA79BB9F72D80546A0 (Enumerator_t9D2232BD4A785A03591F2D8ABEBA44A9FB9CA452* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9D2232BD4A785A03591F2D8ABEBA44A9FB9CA452*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void FileDataHandler::Save(GameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDataHandler_Save_m506ED54491F48C87E4A9C37A3E7B94FBF07D6B41 (FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA* __this, GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* ___data0, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<UnityEngine.MonoBehaviour>()
inline MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* Object_FindObjectsOfType_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_mDF62FF06EFCF4912EC4EA0E6AB3CFEF74507E58C (const RuntimeMethod* method)
{
	return ((  MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared)(method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType<IDataPerisitans>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_OfType_TisIDataPerisitans_t03FBC25C19C57753BA5287C889D332DADCC9302D_m43A3C441B130D6EB8E18CAC7844648D27F379AC7 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_OfType_TisRuntimeObject_m159512A788C6571FEF13C708CB20374087C762DD_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.List`1<IDataPerisitans>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m6565562AC60FBACC6E7F16833356CDF96DACF1BD (List_1_t323746BA83FE0FE3ECE1D8B591CC0A4948C3EC2F* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t323746BA83FE0FE3ECE1D8B591CC0A4948C3EC2F*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6 (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<GameData>(System.String)
inline GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* JsonUtility_FromJson_TisGameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_mA26EC7D424EA3D870035D10DF80D8BD3F6FD8DE8 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___json0, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6 (String_t* ___path0, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F (String_t* ___path0, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m53A1FEE0D388CF3A629E093C04B5E1A6D5463B53 (RuntimeObject* ___obj0, bool ___prettyPrint1, const RuntimeMethod* method) ;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriter__ctor_m54CE9C47ED974C0589400DA9BC2AB3F7F481595B (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.SceneManager::get_sceneCountInBuildSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneManager_get_sceneCountInBuildSettings_m414CDE36617596AC75C8E1A03DA65752A09A8944 (const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Equality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Char& System.String::GetRawStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(T&,System.Int32)
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Il2CppChar*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___dot0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
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
// System.Void Button::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_Awake_m4384AFF4859CCEC3B71C84006EC22920667DA5D2 (Button_t08E85812946542C2FD1F37BA7C97825101832DC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_4), (void*)L_0);
		// audioSource=GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void Button::DoIets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_DoIets_m6A5605D513070AA92FE1C5906B0839C57CDC9BAF (Button_t08E85812946542C2FD1F37BA7C97825101832DC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral524DBB544BC574C9512EDD43D56865DC611B0CB2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetTrigger("ButtonPrest");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_4;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral524DBB544BC574C9512EDD43D56865DC611B0CB2, NULL);
		// unityEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = __this->___unityEvent_5;
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_1, NULL);
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___audioSource_6;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// }
		return;
	}
}
// System.Void Button::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button__ctor_m6CC103D3CBE7ABCDC685DCC02F320D62DCC05D16 (Button_t08E85812946542C2FD1F37BA7C97825101832DC8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GetControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetControl__ctor_m4BEE8665DCD6475F3390D62CD19808B21FFC1978 (GetControl_tDFC1FF392C93C7082611AF2092D3AF621BF91E83* __this, const RuntimeMethod* method) 
{
	{
		// public float timeForTurn =1;
		__this->___timeForTurn_8 = (1.0f);
		// public int NUMBER_OF_ROWS = 3;
		__this->___NUMBER_OF_ROWS_9 = 3;
		// public int NUMBER_OF_COLOMS = 8;
		__this->___NUMBER_OF_COLOMS_10 = 8;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Hexagon1::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon1_Awake_mD8E0A699918F764DE593BE3BF1950B1E4552F3EE (Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* __this, const RuntimeMethod* method) 
{
	{
		// SetValus();
		Hexagon1_SetValus_m8800888004E8125937941AD9EF65B3A6A404B663(__this, NULL);
		// }
		return;
	}
}
// System.Void Hexagon1::SetValus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon1_SetValus_m8800888004E8125937941AD9EF65B3A6A404B663 (Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_9), (void*)L_0);
		// startRotation = transform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_1, NULL);
		__this->___startRotation_11 = L_2;
		// xRotationPerFrame = ANGEL_DEGRY_FOR_HEXSAGON  / (NUMBER_OF_FRAMS_IN_FIXEDUPDATE * timeForRotation);
		int32_t L_3 = __this->___ANGEL_DEGRY_FOR_HEXSAGON_18;
		int32_t L_4 = __this->___NUMBER_OF_FRAMS_IN_FIXEDUPDATE_17;
		float L_5 = __this->___timeForRotation_4;
		__this->___xRotationPerFrame_12 = ((float)(((float)L_3)/((float)il2cpp_codegen_multiply(((float)L_4), L_5))));
		// audioSource.pitch = 1/timeForRotation;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___audioSource_9;
		float L_7 = __this->___timeForRotation_4;
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_6, ((float)((1.0f)/L_7)), NULL);
		// }
		return;
	}
}
// System.Void Hexagon1::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon1_FixedUpdate_m07934455E1FD844B002536EB7704AE81E79AAFA0 (Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(isTurning && !isResetting) HandelHexagon();
		bool L_0 = __this->___isTurning_15;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = ((Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204_StaticFields*)il2cpp_codegen_static_fields_for(Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204_il2cpp_TypeInfo_var))->___isResetting_8;
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		// if(isTurning && !isResetting) HandelHexagon();
		Hexagon1_HandelHexagon_mED3F53B5106775397E091D4A06D30BEAAFFE5F0A(__this, NULL);
		return;
	}

IL_0016:
	{
		// else if(isResetting)
		bool L_2 = ((Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204_StaticFields*)il2cpp_codegen_static_fields_for(Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204_il2cpp_TypeInfo_var))->___isResetting_8;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// if(!onResetPrest )OnResetPrest();
		bool L_3 = __this->___onResetPrest_16;
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		// if(!onResetPrest )OnResetPrest();
		Hexagon1_OnResetPrest_m6B007FCAE008655656092E805DAC91CE19E5D049(__this, NULL);
	}

IL_002b:
	{
		// HandelReset();
		Hexagon1_HandelReset_mA6131AFE3FE8CD9FD12FD43ED31D8FFCB523F6F7(__this, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Hexagon1::OnTurnPrest(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon1_OnTurnPrest_m9E9008BC224ED121FBB0608C8F086C5029CC325D (Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* __this, int32_t ____Derection0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!isTurning && !isResetting && RobInstructions.isPlayeing == false)
		bool L_0 = __this->___isTurning_15;
		if (L_0)
		{
			goto IL_003c;
		}
	}
	{
		bool L_1 = ((Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204_StaticFields*)il2cpp_codegen_static_fields_for(Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204_il2cpp_TypeInfo_var))->___isResetting_8;
		if (L_1)
		{
			goto IL_003c;
		}
	}
	{
		bool L_2 = ((RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A_StaticFields*)il2cpp_codegen_static_fields_for(RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A_il2cpp_TypeInfo_var))->___isPlayeing_2;
		if (L_2)
		{
			goto IL_003c;
		}
	}
	{
		// {   audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___audioSource_9;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_3, NULL);
		// derection = _Derection;
		int32_t L_4 = ____Derection0;
		__this->___derection_14 = L_4;
		// isTurning = true;
		__this->___isTurning_15 = (bool)1;
		// StartCoroutine(HandelActionState());
		RuntimeObject* L_5;
		L_5 = Hexagon1_HandelActionState_m7E5083118326F9084A60A49120033885BB9EE6DE(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Hexagon1::HandelActionState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hexagon1_HandelActionState_m7E5083118326F9084A60A49120033885BB9EE6DE (Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CHandelActionStateU3Ed__19_t5B007F61ED0D57364D3F5D3856EECB69903FA326_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CHandelActionStateU3Ed__19_t5B007F61ED0D57364D3F5D3856EECB69903FA326* L_0 = (U3CHandelActionStateU3Ed__19_t5B007F61ED0D57364D3F5D3856EECB69903FA326*)il2cpp_codegen_object_new(U3CHandelActionStateU3Ed__19_t5B007F61ED0D57364D3F5D3856EECB69903FA326_il2cpp_TypeInfo_var);
		U3CHandelActionStateU3Ed__19__ctor_mB390088BAE75D301F4E5614466BEF5250FE4EA6E(L_0, 0, NULL);
		U3CHandelActionStateU3Ed__19_t5B007F61ED0D57364D3F5D3856EECB69903FA326* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Hexagon1::HandelHexagon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon1_HandelHexagon_mED3F53B5106775397E091D4A06D30BEAAFFE5F0A (Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* __this, const RuntimeMethod* method) 
{
	{
		// transform.localRotation = CalculatesQuaternion(transform.localRotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_1, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Hexagon1_CalculatesQuaternion_m471959C8A22B8AE1EF34A0A9774741B1816626F4(__this, L_2, NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_0, L_3, NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion Hexagon1::CalculatesQuaternion(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Hexagon1_CalculatesQuaternion_m471959C8A22B8AE1EF34A0A9774741B1816626F4 (Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____Hexsagon0, const RuntimeMethod* method) 
{
	{
		// curentRotation = _Hexsagon;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ____Hexsagon0;
		__this->___curentRotation_10 = L_0;
		// Vector3 NextRotation = new Vector3(xRotationPerFrame,0,0) * derection;
		float L_1 = __this->___xRotationPerFrame_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), L_1, (0.0f), (0.0f), /*hidden argument*/NULL);
		int32_t L_3 = __this->___derection_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, ((float)L_3), NULL);
		// _Hexsagon = Quaternion.Euler(NextRotation) * curentRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = __this->___curentRotation_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_5, L_6, NULL);
		____Hexsagon0 = L_7;
		// return _Hexsagon;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ____Hexsagon0;
		return L_8;
	}
}
// System.Void Hexagon1::OnResetPrest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon1_OnResetPrest_m6B007FCAE008655656092E805DAC91CE19E5D049 (Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// onResetPrest = true;
		__this->___onResetPrest_16 = (bool)1;
		// if(transform.localRotation != startRotation)  audioSource.Play();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_0, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = __this->___startRotation_11;
		bool L_3;
		L_3 = Quaternion_op_Inequality_m4EC1EF263D0E42432A301F85CB52028D2973F5DA_inline(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// if(transform.localRotation != startRotation)  audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___audioSource_9;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_4, NULL);
	}

IL_002a:
	{
		// derection = 0;
		__this->___derection_14 = 0;
		// curentFunction = 0;
		__this->___curentFunction_6 = 0;
		// StartCoroutine(HandelActionState());
		RuntimeObject* L_5;
		L_5 = Hexagon1_HandelActionState_m7E5083118326F9084A60A49120033885BB9EE6DE(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// xRotationPerFrameReset = (transform.localRotation.eulerAngles.x - startRotation.eulerAngles.x)  / (NUMBER_OF_FRAMS_IN_FIXEDUPDATE * timeForRotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_7, NULL);
		V_0 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		float L_10 = L_9.___x_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_11 = (&__this->___startRotation_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_11, NULL);
		float L_13 = L_12.___x_2;
		int32_t L_14 = __this->___NUMBER_OF_FRAMS_IN_FIXEDUPDATE_17;
		float L_15 = __this->___timeForRotation_4;
		__this->___xRotationPerFrameReset_13 = ((float)(((float)il2cpp_codegen_subtract(L_10, L_13))/((float)il2cpp_codegen_multiply(((float)L_14), L_15))));
		// }
		return;
	}
}
// System.Void Hexagon1::HandelReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon1_HandelReset_mA6131AFE3FE8CD9FD12FD43ED31D8FFCB523F6F7 (Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 NextRotation = new Vector3(xRotationPerFrameReset,0,0);
		float L_0 = __this->___xRotationPerFrameReset_13;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_0, (0.0f), (0.0f), NULL);
		// transform.localRotation = Quaternion.Euler(NextRotation) * transform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_3, L_5, NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_1, L_6, NULL);
		// }
		return;
	}
}
// System.Void Hexagon1::CurentFunction(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon1_CurentFunction_mBE23521E0FB6E28E001AFA9BFCE8E6AA296081D8 (Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21C4DF46B3426B973393131667AAAE772D570FF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBB11617944AA76BC68B044DAC2C88A1EDBA6CA6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// {   curentFunction -=i;
		int32_t L_0 = __this->___curentFunction_6;
		int32_t L_1 = ___i0;
		__this->___curentFunction_6 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// switch(curentFunction)
		int32_t L_2 = __this->___curentFunction_6;
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_3, (-1))))
		{
			case 0:
			{
				goto IL_003e;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_00ba;
			}
			case 3:
			{
				goto IL_00a3;
			}
			case 4:
			{
				goto IL_008c;
			}
			case 5:
			{
				goto IL_0075;
			}
			case 6:
			{
				goto IL_005e;
			}
			case 7:
			{
				goto IL_00d1;
			}
		}
	}
	{
		return;
	}

IL_003e:
	{
		// CurentFunction(-6);
		Hexagon1_CurentFunction_mBE23521E0FB6E28E001AFA9BFCE8E6AA296081D8(__this, ((int32_t)-6), NULL);
		// break;
		return;
	}

IL_0047:
	{
		// robotControler.OnChangeInstruction(CurentActionControler, "Emty");
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_4 = __this->___robotControler_7;
		int32_t L_5 = __this->___CurentActionControler_5;
		RobotControler_OnChangeInstruction_mD151D1454888477D936AF468384C1478A90B52EA(L_4, L_5, _stringLiteralCBB11617944AA76BC68B044DAC2C88A1EDBA6CA6, NULL);
		// break;
		return;
	}

IL_005e:
	{
		// robotControler.OnChangeInstruction(CurentActionControler, "Finich");
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_6 = __this->___robotControler_7;
		int32_t L_7 = __this->___CurentActionControler_5;
		RobotControler_OnChangeInstruction_mD151D1454888477D936AF468384C1478A90B52EA(L_6, L_7, _stringLiteral21C4DF46B3426B973393131667AAAE772D570FF3, NULL);
		// break;
		return;
	}

IL_0075:
	{
		// robotControler.OnChangeInstruction(CurentActionControler, "Left");
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_8 = __this->___robotControler_7;
		int32_t L_9 = __this->___CurentActionControler_5;
		RobotControler_OnChangeInstruction_mD151D1454888477D936AF468384C1478A90B52EA(L_8, L_9, _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD, NULL);
		// break;
		return;
	}

IL_008c:
	{
		// robotControler.OnChangeInstruction(CurentActionControler, "Right");
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_10 = __this->___robotControler_7;
		int32_t L_11 = __this->___CurentActionControler_5;
		RobotControler_OnChangeInstruction_mD151D1454888477D936AF468384C1478A90B52EA(L_10, L_11, _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA, NULL);
		// break;
		return;
	}

IL_00a3:
	{
		// robotControler.OnChangeInstruction(CurentActionControler, "Jump");
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_12 = __this->___robotControler_7;
		int32_t L_13 = __this->___CurentActionControler_5;
		RobotControler_OnChangeInstruction_mD151D1454888477D936AF468384C1478A90B52EA(L_12, L_13, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		// break;
		return;
	}

IL_00ba:
	{
		// robotControler.OnChangeInstruction(CurentActionControler, "Move");
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_14 = __this->___robotControler_7;
		int32_t L_15 = __this->___CurentActionControler_5;
		RobotControler_OnChangeInstruction_mD151D1454888477D936AF468384C1478A90B52EA(L_14, L_15, _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1, NULL);
		// break;
		return;
	}

IL_00d1:
	{
		// CurentFunction(6);
		Hexagon1_CurentFunction_mBE23521E0FB6E28E001AFA9BFCE8E6AA296081D8(__this, 6, NULL);
		// }
		return;
	}
}
// System.Void Hexagon1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon1__ctor_mDEAF06C619A679C9DCADB2A6CB28942F4860647E (Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* __this, const RuntimeMethod* method) 
{
	{
		// [HideInInspector]public float timeForRotation = 1;
		__this->___timeForRotation_4 = (1.0f);
		// int NUMBER_OF_FRAMS_IN_FIXEDUPDATE = 50;
		__this->___NUMBER_OF_FRAMS_IN_FIXEDUPDATE_17 = ((int32_t)50);
		// int ANGEL_DEGRY_FOR_HEXSAGON = 60;
		__this->___ANGEL_DEGRY_FOR_HEXSAGON_18 = ((int32_t)60);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Hexagon1/<HandelActionState>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandelActionStateU3Ed__19__ctor_mB390088BAE75D301F4E5614466BEF5250FE4EA6E (U3CHandelActionStateU3Ed__19_t5B007F61ED0D57364D3F5D3856EECB69903FA326* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Hexagon1/<HandelActionState>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandelActionStateU3Ed__19_System_IDisposable_Dispose_mECEFC070D2C256B427F4676580ED77C4660A7C34 (U3CHandelActionStateU3Ed__19_t5B007F61ED0D57364D3F5D3856EECB69903FA326* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Hexagon1/<HandelActionState>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CHandelActionStateU3Ed__19_MoveNext_mF06F129AB8189BFAB2972FC2F731F9600D658657 (U3CHandelActionStateU3Ed__19_t5B007F61ED0D57364D3F5D3856EECB69903FA326* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(timeForRotation);
		Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* L_4 = V_1;
		float L_5 = L_4->___timeForRotation_4;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isTurning = false;
		Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* L_7 = V_1;
		L_7->___isTurning_15 = (bool)0;
		// if(onResetPrest)
		Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* L_8 = V_1;
		bool L_9 = L_8->___onResetPrest_16;
		if (!L_9)
		{
			goto IL_006c;
		}
	}
	{
		// {   transform.localRotation = startRotation;
		Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* L_10 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* L_12 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = L_12->___startRotation_11;
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_11, L_13, NULL);
		// onResetPrest =false;
		Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* L_14 = V_1;
		L_14->___onResetPrest_16 = (bool)0;
		// isResetting = false;
		((Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204_StaticFields*)il2cpp_codegen_static_fields_for(Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204_il2cpp_TypeInfo_var))->___isResetting_8 = (bool)0;
	}

IL_006c:
	{
		// CurentFunction(derection);
		Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* L_15 = V_1;
		Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* L_16 = V_1;
		int32_t L_17 = L_16->___derection_14;
		Hexagon1_CurentFunction_mBE23521E0FB6E28E001AFA9BFCE8E6AA296081D8(L_15, L_17, NULL);
		// Vector3 v = new Vector3( Mathf.Round((transform.localRotation.eulerAngles.x) / ANGEL_DEGRY_FOR_HEXSAGON) *ANGEL_DEGRY_FOR_HEXSAGON , transform.localRotation.eulerAngles.y , transform.localRotation.eulerAngles.z);
		Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* L_18 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_19, NULL);
		V_3 = L_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_3), NULL);
		float L_22 = L_21.___x_2;
		Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* L_23 = V_1;
		int32_t L_24 = L_23->___ANGEL_DEGRY_FOR_HEXSAGON_18;
		float L_25;
		L_25 = bankers_roundf(((float)(L_22/((float)L_24))));
		Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* L_26 = V_1;
		int32_t L_27 = L_26->___ANGEL_DEGRY_FOR_HEXSAGON_18;
		Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* L_28 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30;
		L_30 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_29, NULL);
		V_3 = L_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_3), NULL);
		float L_32 = L_31.___y_3;
		Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* L_33 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_33, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35;
		L_35 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_34, NULL);
		V_3 = L_35;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_3), NULL);
		float L_37 = L_36.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), ((float)il2cpp_codegen_multiply(L_25, ((float)L_27))), L_32, L_37, NULL);
		// transform.localRotation = Quaternion.Euler( v );
		Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204* L_38 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_41;
		L_41 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_40, NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_39, L_41, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Hexagon1/<HandelActionState>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CHandelActionStateU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m83A2918F1F206FA401499057F582BD87D1DA7B66 (U3CHandelActionStateU3Ed__19_t5B007F61ED0D57364D3F5D3856EECB69903FA326* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Hexagon1/<HandelActionState>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandelActionStateU3Ed__19_System_Collections_IEnumerator_Reset_m5C7325C27B23FE7DEDC0320E8A8F9F81D071E8B0 (U3CHandelActionStateU3Ed__19_t5B007F61ED0D57364D3F5D3856EECB69903FA326* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CHandelActionStateU3Ed__19_System_Collections_IEnumerator_Reset_m5C7325C27B23FE7DEDC0320E8A8F9F81D071E8B0_RuntimeMethod_var)));
	}
}
// System.Object Hexagon1/<HandelActionState>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CHandelActionStateU3Ed__19_System_Collections_IEnumerator_get_Current_m391236E1B062690D446F1A57E55A671139A91967 (U3CHandelActionStateU3Ed__19_t5B007F61ED0D57364D3F5D3856EECB69903FA326* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void SetControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetControl__ctor_m37E233C7AF792C9E8D973315DE4114098991B9F8 (SetControl_t0F3999877E64A162F50302FD01B595AB98BEE614* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public  List<GameObject> controlPannels=new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___controlPannels_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controlPannels_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TimeDisplay::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeDisplay_Awake_mCC7B420725133F82DE5CC11E3D38E33A8CB6D25C (TimeDisplay_t3B58C3B36F948EC77EF74BAD6F76FE12DF8628C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// time = GetComponent<TextMeshProUGUI>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0;
		L_0 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(__this, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		__this->___time_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___time_5), (void*)L_0);
		// clockTick = GetComponent<AudioSource> ();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___clockTick_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clockTick_7), (void*)L_1);
		// NumberOfDesemols *=10;
		float L_2 = __this->___NumberOfDesemols_4;
		__this->___NumberOfDesemols_4 = ((float)il2cpp_codegen_multiply(L_2, (10.0f)));
		// }
		return;
	}
}
// System.Void TimeDisplay::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeDisplay_FixedUpdate_mEE9768D8940E68CDB54442E9F0AD615D4692F039 (TimeDisplay_t3B58C3B36F948EC77EF74BAD6F76FE12DF8628C1* __this, const RuntimeMethod* method) 
{
	{
		// HandelTime();
		TimeDisplay_HandelTime_m344F1601E1E042EDC5A1ED7CDC1CA7337701A7C0(__this, NULL);
		// }
		return;
	}
}
// System.Void TimeDisplay::HandelTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeDisplay_HandelTime_m344F1601E1E042EDC5A1ED7CDC1CA7337701A7C0 (TimeDisplay_t3B58C3B36F948EC77EF74BAD6F76FE12DF8628C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49C2C4CBD74690CC3F0B4127393BEA222F0A5B31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E95267A4EC223293004FABA85BF10B6E4146DF6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(LevelMagiger.allLeffelsCompleed == false)
		bool L_0 = ((LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148_StaticFields*)il2cpp_codegen_static_fields_for(LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148_il2cpp_TypeInfo_var))->___allLeffelsCompleed_8;
		if (L_0)
		{
			goto IL_0047;
		}
	}
	{
		// curentTime += Time.deltaTime;
		float L_1 = __this->___curentTime_8;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___curentTime_8 = ((float)il2cpp_codegen_add(L_1, L_2));
		// time.text = "Time:" + FormatSeconds(curentTime);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___time_5;
		float L_4 = __this->___curentTime_8;
		String_t* L_5;
		L_5 = TimeDisplay_FormatSeconds_mB1EE6D13D1FDBDF25BB8B6C3CAA129045A47F99A(__this, L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral49C2C4CBD74690CC3F0B4127393BEA222F0A5B31, L_5, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_6);
		// clockTick.enabled = true;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = __this->___clockTick_7;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_7, (bool)1, NULL);
		return;
	}

IL_0047:
	{
		// if(FastisTime > curentTime && curentTime != 0 ) FastisTime = curentTime ;
		float L_8 = __this->___FastisTime_9;
		float L_9 = __this->___curentTime_8;
		if ((!(((float)L_8) > ((float)L_9))))
		{
			goto IL_006e;
		}
	}
	{
		float L_10 = __this->___curentTime_8;
		if ((((float)L_10) == ((float)(0.0f))))
		{
			goto IL_006e;
		}
	}
	{
		// if(FastisTime > curentTime && curentTime != 0 ) FastisTime = curentTime ;
		float L_11 = __this->___curentTime_8;
		__this->___FastisTime_9 = L_11;
	}

IL_006e:
	{
		// if(FastisTime != Mathf.Infinity) fastisTime.text = "Fastis Time: " + FormatSeconds(FastisTime);
		float L_12 = __this->___FastisTime_9;
		if ((((float)L_12) == ((float)(std::numeric_limits<float>::infinity()))))
		{
			goto IL_009c;
		}
	}
	{
		// if(FastisTime != Mathf.Infinity) fastisTime.text = "Fastis Time: " + FormatSeconds(FastisTime);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_13 = __this->___fastisTime_6;
		float L_14 = __this->___FastisTime_9;
		String_t* L_15;
		L_15 = TimeDisplay_FormatSeconds_mB1EE6D13D1FDBDF25BB8B6C3CAA129045A47F99A(__this, L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5E95267A4EC223293004FABA85BF10B6E4146DF6, L_15, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_13, L_16);
	}

IL_009c:
	{
		// curentTime = 0;
		__this->___curentTime_8 = (0.0f);
		// clockTick.enabled = false;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_17 = __this->___clockTick_7;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_17, (bool)0, NULL);
		// }
		return;
	}
}
// System.String TimeDisplay::FormatSeconds(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimeDisplay_FormatSeconds_mB1EE6D13D1FDBDF25BB8B6C3CAA129045A47F99A (TimeDisplay_t3B58C3B36F948EC77EF74BAD6F76FE12DF8628C1* __this, float ___elapsed0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EBDA390298AD919BA8A4F87689878CBF71AC9FF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int d = (int)(elapsed * 100.0f);
		float L_0 = ___elapsed0;
		// int minutes = d / (60 * 100);
		int32_t L_1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_0, (100.0f))));
		V_0 = ((int32_t)(L_1/((int32_t)6000)));
		// int seconds = (d % (60 * 100)) / 100;
		int32_t L_2 = L_1;
		V_1 = ((int32_t)(((int32_t)(L_2%((int32_t)6000)))/((int32_t)100)));
		// int hundredths = d % 100;
		V_2 = ((int32_t)(L_2%((int32_t)100)));
		// return string.Format("{0:00}m:{1:00},{2:00}s", minutes, seconds, hundredths);
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		int32_t L_9 = V_2;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral1EBDA390298AD919BA8A4F87689878CBF71AC9FF, L_5, L_8, L_11, NULL);
		return L_12;
	}
}
// System.Void TimeDisplay::LoadData(GameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeDisplay_LoadData_m7ECA2BC771CEEB0B1A5E2E71B120272906873DDE (TimeDisplay_t3B58C3B36F948EC77EF74BAD6F76FE12DF8628C1* __this, GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E95267A4EC223293004FABA85BF10B6E4146DF6);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// this.FastisTime = data.fastisTime;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_0 = ___data0;
		float L_1 = L_0->___fastisTime_0;
		__this->___FastisTime_9 = L_1;
		// if(FastisTime != Mathf.Infinity)fastisTime.text = "Fastis Time: " + Mathf.Round(FastisTime* NumberOfDesemols)/NumberOfDesemols;
		float L_2 = __this->___FastisTime_9;
		if ((((float)L_2) == ((float)(std::numeric_limits<float>::infinity()))))
		{
			goto IL_004f;
		}
	}
	{
		// if(FastisTime != Mathf.Infinity)fastisTime.text = "Fastis Time: " + Mathf.Round(FastisTime* NumberOfDesemols)/NumberOfDesemols;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___fastisTime_6;
		float L_4 = __this->___FastisTime_9;
		float L_5 = __this->___NumberOfDesemols_4;
		float L_6;
		L_6 = bankers_roundf(((float)il2cpp_codegen_multiply(L_4, L_5)));
		float L_7 = __this->___NumberOfDesemols_4;
		V_0 = ((float)(L_6/L_7));
		String_t* L_8;
		L_8 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5E95267A4EC223293004FABA85BF10B6E4146DF6, L_8, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_9);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void TimeDisplay::SaveData(GameData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeDisplay_SaveData_mC068A343BEAB547CEAAD27854FB7CBF7542D2560 (TimeDisplay_t3B58C3B36F948EC77EF74BAD6F76FE12DF8628C1* __this, GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** ___data0, const RuntimeMethod* method) 
{
	{
		// data.fastisTime = this.FastisTime;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_0 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_1 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_0);
		float L_2 = __this->___FastisTime_9;
		L_1->___fastisTime_0 = L_2;
		// }
		return;
	}
}
// System.Void TimeDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeDisplay__ctor_m5A6F792B2C60AAA9FFDBAC3BBA2325E116B10F8F (TimeDisplay_t3B58C3B36F948EC77EF74BAD6F76FE12DF8628C1* __this, const RuntimeMethod* method) 
{
	{
		// public float NumberOfDesemols = 1;
		__this->___NumberOfDesemols_4 = (1.0f);
		// float FastisTime = Mathf.Infinity;
		__this->___FastisTime_9 = (std::numeric_limits<float>::infinity());
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LevelMagiger::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelMagiger_Awake_m0BD1FC366725129B575AD8A19144914FB57DC72D (LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLevels_t03F4F6AB75FBE170D0A96E193BD66E2C4254BD39_m6497C9CCF8952C61AB8114A7336A8D4AD8ADEE1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// allLeffelsCompleed = true;
		((LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148_StaticFields*)il2cpp_codegen_static_fields_for(LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148_il2cpp_TypeInfo_var))->___allLeffelsCompleed_8 = (bool)1;
		// levels = GetComponent<Levels>();
		Levels_t03F4F6AB75FBE170D0A96E193BD66E2C4254BD39* L_0;
		L_0 = Component_GetComponent_TisLevels_t03F4F6AB75FBE170D0A96E193BD66E2C4254BD39_m6497C9CCF8952C61AB8114A7336A8D4AD8ADEE1A(__this, Component_GetComponent_TisLevels_t03F4F6AB75FBE170D0A96E193BD66E2C4254BD39_m6497C9CCF8952C61AB8114A7336A8D4AD8ADEE1A_RuntimeMethod_var);
		__this->___levels_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___levels_6), (void*)L_0);
		// curentLevelInt = -1;
		__this->___curentLevelInt_7 = (-1);
		// OnChangeLefel();
		LevelMagiger_OnChangeLefel_m9360DBA6D9217D5F2F7CB19136F09E432D30969D(__this, NULL);
		// }
		return;
	}
}
// System.Void LevelMagiger::OnChangeLefel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelMagiger_OnChangeLefel_m9360DBA6D9217D5F2F7CB19136F09E432D30969D (LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(curentLevelGameObject != null) DestroyImmediate(curentLevelGameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___curentLevelGameObject_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if(curentLevelGameObject != null) DestroyImmediate(curentLevelGameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___curentLevelGameObject_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_2, NULL);
	}

IL_0019:
	{
		// if( curentLevelInt < levels.levels.Count  -1) curentLevelInt++;
		int32_t L_3 = __this->___curentLevelInt_7;
		Levels_t03F4F6AB75FBE170D0A96E193BD66E2C4254BD39* L_4 = __this->___levels_6;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = L_4->___levels_4;
		int32_t L_6;
		L_6 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_5, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, 1)))))
		{
			goto IL_0043;
		}
	}
	{
		// if( curentLevelInt < levels.levels.Count  -1) curentLevelInt++;
		int32_t L_7 = __this->___curentLevelInt_7;
		__this->___curentLevelInt_7 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		goto IL_0050;
	}

IL_0043:
	{
		// curentLevelInt = 0;
		__this->___curentLevelInt_7 = 0;
		// allLeffelsCompleed = true;
		((LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148_StaticFields*)il2cpp_codegen_static_fields_for(LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148_il2cpp_TypeInfo_var))->___allLeffelsCompleed_8 = (bool)1;
	}

IL_0050:
	{
		// curentLevelGameObject = Instantiate(levels.levels[curentLevelInt], instantiateLocation);
		Levels_t03F4F6AB75FBE170D0A96E193BD66E2C4254BD39* L_8 = __this->___levels_6;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = L_8->___levels_4;
		int32_t L_10 = __this->___curentLevelInt_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_9, L_10, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___instantiateLocation_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_11, L_12, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		__this->___curentLevelGameObject_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curentLevelGameObject_5), (void*)L_13);
		// }
		return;
	}
}
// System.Void LevelMagiger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelMagiger__ctor_m0A888A158AD260B84F396FF957D6AF29A80F9C09 (LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Levels::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Levels__ctor_mEBD74F84ADAB8AC24649E600A1540049B1950AB4 (Levels_t03F4F6AB75FBE170D0A96E193BD66E2C4254BD39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> levels = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___levels_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___levels_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MousClick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MousClick_Start_m844224BD492F9886A3136398D54196EF3F5536DC (MousClick_tAA84C6A05F9CE25148ADD1CA8213F4DA367088AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// camera = GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		__this->___camera_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___camera_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void MousClick::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MousClick_Update_m0E9A932CC89757D6BB4647A635D66BCBF771A4D0 (MousClick_tAA84C6A05F9CE25148ADD1CA8213F4DA367088AE* __this, const RuntimeMethod* method) 
{
	{
		// if(Input.GetMouseButtonDown(0)) Klick();
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if(Input.GetMouseButtonDown(0)) Klick();
		MousClick_Klick_m0A956EF351FC43F939F6179AC7A0ADD875790577(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void MousClick::Klick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MousClick_Klick_m0A956EF351FC43F939F6179AC7A0ADD875790577 (MousClick_tAA84C6A05F9CE25148ADD1CA8213F4DA367088AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t08E85812946542C2FD1F37BA7C97825101832DC8_mD409EE01137B3FC796D331C457DB5620375C09AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(Physics.Raycast(camera.ScreenPointToRay(Input.mousePosition), out hit))
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___camera_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_2;
		L_2 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_0, L_1, NULL);
		bool L_3;
		L_3 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_2, (&V_0), NULL);
		if (!L_3)
		{
			goto IL_0094;
		}
	}
	{
		// if(hit.collider.tag == "Button" && hit.collider != null)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4;
		L_4 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		String_t* L_5;
		L_5 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_4, NULL);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870, NULL);
		if (!L_6)
		{
			goto IL_0073;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7;
		L_7 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0073;
		}
	}
	{
		// Debug.DrawLine(transform.position, hit.point, Color.green,1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m796C039D0BD9962E19368C08CE76E8257DD45C5F(L_10, L_11, L_12, (1.0f), NULL);
		// hit.collider.GetComponent<Button>().DoIets();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_13;
		L_13 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		Button_t08E85812946542C2FD1F37BA7C97825101832DC8* L_14;
		L_14 = Component_GetComponent_TisButton_t08E85812946542C2FD1F37BA7C97825101832DC8_mD409EE01137B3FC796D331C457DB5620375C09AA(L_13, Component_GetComponent_TisButton_t08E85812946542C2FD1F37BA7C97825101832DC8_mD409EE01137B3FC796D331C457DB5620375C09AA_RuntimeMethod_var);
		Button_DoIets_m6A5605D513070AA92FE1C5906B0839C57CDC9BAF(L_14, NULL);
		return;
	}

IL_0073:
	{
		// else Debug.DrawLine(transform.position, hit.point, Color.red,1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m796C039D0BD9962E19368C08CE76E8257DD45C5F(L_16, L_17, L_18, (1.0f), NULL);
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void MousClick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MousClick__ctor_m7E1D2DA2D2D92375BF50754FF9531E7A542C755C (MousClick_tAA84C6A05F9CE25148ADD1CA8213F4DA367088AE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlayerControler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControler_Awake_m766F7D47761595B7B23507592562F1933C0D3FF1 (PlayerControler_t42AD4F7B8F453B96AD48215A5BF5CEA1E0FD2B1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// characterController = GetComponent<CharacterController>();
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0;
		L_0 = Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040(__this, Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		__this->___characterController_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___characterController_12), (void*)L_0);
		// playerCamera = GetComponentInChildren<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0(__this, Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		__this->___playerCamera_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerCamera_11), (void*)L_1);
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(1, NULL);
		// }
		return;
	}
}
// System.Void PlayerControler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControler_Update_m3E7CEB4F477522C380CBB15B627A9990869825D2 (PlayerControler_t42AD4F7B8F453B96AD48215A5BF5CEA1E0FD2B1F* __this, const RuntimeMethod* method) 
{
	{
		// HnadelInput();
		PlayerControler_HnadelInput_mBA21384F4A1765ED4D4B68E63B3369B2FDAAA78E(__this, NULL);
		// HandelMousLook();
		PlayerControler_HandelMousLook_m2221374CFF6C0B0F136BAA475063EA2BCDD037D8(__this, NULL);
		// HandelMovment();
		PlayerControler_HandelMovment_m31CE9073E8997786986C5E1619ED8C3B1950529C(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayerControler::HnadelInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControler_HnadelInput_mBA21384F4A1765ED4D4B68E63B3369B2FDAAA78E (PlayerControler_t42AD4F7B8F453B96AD48215A5BF5CEA1E0FD2B1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InputHorizontal = Input.GetAxis("Horizontal");
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		__this->___InputHorizontal_14 = L_0;
		// InputVertical = Input.GetAxis("Vertical");
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		__this->___InputVertical_15 = L_1;
		// }
		return;
	}
}
// System.Void PlayerControler::HandelMousLook()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControler_HandelMousLook_m2221374CFF6C0B0F136BAA475063EA2BCDD037D8 (PlayerControler_t42AD4F7B8F453B96AD48215A5BF5CEA1E0FD2B1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rotationX -= Input.GetAxis("Mouse Y") * lookSpeedY;
		float L_0 = __this->___rotationX_16;
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_2 = __this->___lookSpeedY_7;
		__this->___rotationX_16 = ((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_1, L_2))));
		// rotationX = Mathf.Clamp(rotationX, -lowerLookLimit, upperLookLimit);
		float L_3 = __this->___rotationX_16;
		float L_4 = __this->___lowerLookLimit_10;
		float L_5 = __this->___upperLookLimit_9;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_3, ((-L_4)), L_5, NULL);
		__this->___rotationX_16 = L_6;
		// playerCamera.transform.localRotation =  Quaternion.Euler(rotationX ,0 ,0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = __this->___playerCamera_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		float L_9 = __this->___rotationX_16;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_9, (0.0f), (0.0f), NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_8, L_10, NULL);
		// transform.rotation *=  Quaternion.Euler(0 ,Input.GetAxis("Mouse X") * lookSpeedX,0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = L_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_12, NULL);
		float L_14;
		L_14 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_15 = __this->___lookSpeedX_8;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), ((float)il2cpp_codegen_multiply(L_14, L_15)), (0.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_13, L_16, NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_12, L_17, NULL);
		// }
		return;
	}
}
// System.Void PlayerControler::HandelMovment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControler_HandelMovment_m31CE9073E8997786986C5E1619ED8C3B1950529C (PlayerControler_t42AD4F7B8F453B96AD48215A5BF5CEA1E0FD2B1F* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// MoveDerection = ((InputHorizontal * transform.right + InputVertical * transform.forward)).normalized ;
		float L_0 = __this->___InputHorizontal_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_0, L_2, NULL);
		float L_4 = __this->___InputVertical_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_4, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_7, NULL);
		V_0 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		__this->___MoveDerection_13 = L_9;
		// if(!characterController.isGrounded)
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_10 = __this->___characterController_12;
		bool L_11;
		L_11 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_10, NULL);
		if (L_11)
		{
			goto IL_0061;
		}
	}
	{
		// MoveDerection.y -= grafity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&__this->___MoveDerection_13);
		float* L_13 = (&L_12->___y_3);
		float* L_14 = L_13;
		float L_15 = *((float*)L_14);
		float L_16 = __this->___grafity_6;
		*((float*)L_14) = (float)((float)il2cpp_codegen_subtract(L_15, L_16));
	}

IL_0061:
	{
		// characterController.Move(MoveDerection * walkSpeed * Time.deltaTime);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_17 = __this->___characterController_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___MoveDerection_13;
		float L_19 = __this->___walkSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_19, NULL);
		float L_21;
		L_21 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, L_21, NULL);
		int32_t L_23;
		L_23 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_17, L_22, NULL);
		// }
		return;
	}
}
// System.Void PlayerControler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControler__ctor_mE515769B271666E0FEA504136A07B4A929367829 (PlayerControler_t42AD4F7B8F453B96AD48215A5BF5CEA1E0FD2B1F* __this, const RuntimeMethod* method) 
{
	{
		// public float walkSpeed = 3;
		__this->___walkSpeed_4 = (3.0f);
		// public float runSpeed = 6;
		__this->___runSpeed_5 = (6.0f);
		// public float grafity = 30;
		__this->___grafity_6 = (30.0f);
		// [Range(0,10)] public float lookSpeedY = 5;
		__this->___lookSpeedY_7 = (5.0f);
		// [Range(0,10)] public float lookSpeedX =5;
		__this->___lookSpeedX_8 = (5.0f);
		// [Range(0,180)] public float upperLookLimit = 80;
		__this->___upperLookLimit_9 = (80.0f);
		// [Range(0,180)] public float lowerLookLimit = 80;
		__this->___lowerLookLimit_10 = (80.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void StateSwitcher::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateSwitcher_Awake_mFFC7A8D713D3B3DB0E340E6C95C46C788D7E72D4 (StateSwitcher_t5EA74C0687DFFDB3EABEC4299B7A7C5C5EF97BD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_11), (void*)L_0);
		// }
		return;
	}
}
// System.Void StateSwitcher::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateSwitcher_Update_m3955BEFD5CB8395761BA70E6A1A4C1A7974C743D (StateSwitcher_t5EA74C0687DFFDB3EABEC4299B7A7C5C5EF97BD4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// isInSetAiria = (Vector3.Distance(Player.transform.position, transform.position) < MaxsSwitchDistans);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Player_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5;
		L_5 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_2, L_4, NULL);
		float L_6 = __this->___MaxsSwitchDistans_6;
		__this->___isInSetAiria_5 = (bool)((((float)L_5) < ((float)L_6))? 1 : 0);
		// if(isInSetAiria && curentState == 1)Tip.SetActive(true);
		bool L_7 = __this->___isInSetAiria_5;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_8 = __this->___curentState_4;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_004d;
		}
	}
	{
		// if(isInSetAiria && curentState == 1)Tip.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___Tip_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		goto IL_0059;
	}

IL_004d:
	{
		// else Tip.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___Tip_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
	}

IL_0059:
	{
		// if(Input.GetKeyDown(KeyCode.E) && isInSetAiria)
		bool L_11;
		L_11 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)101), NULL);
		if (!L_11)
		{
			goto IL_00ea;
		}
	}
	{
		bool L_12 = __this->___isInSetAiria_5;
		if (!L_12)
		{
			goto IL_00ea;
		}
	}
	{
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_13 = __this->___audioSource_11;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_13, NULL);
		// switch(curentState)
		int32_t L_14 = __this->___curentState_4;
		V_0 = L_14;
		int32_t L_15 = V_0;
		if (!L_15)
		{
			goto IL_0087;
		}
	}
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)1)))
		{
			goto IL_00b9;
		}
	}
	{
		return;
	}

IL_0087:
	{
		// curentState = 1;
		__this->___curentState_4 = 1;
		// Player.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___Player_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)1, NULL);
		// StaticCamera.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___StaticCamera_8;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)0, NULL);
		// CrosAir.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___CrosAir_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)1, NULL);
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(1, NULL);
		// break;
		return;
	}

IL_00b9:
	{
		// curentState = 0;
		__this->___curentState_4 = 0;
		// Player.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___Player_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)0, NULL);
		// StaticCamera.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___StaticCamera_8;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)1, NULL);
		// CrosAir.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___CrosAir_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)0, NULL);
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(0, NULL);
	}

IL_00ea:
	{
		// }
		return;
	}
}
// System.Void StateSwitcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateSwitcher__ctor_m3EB4D547C30ABBAC2092649FAB8B116A0F0F6627 (StateSwitcher_t5EA74C0687DFFDB3EABEC4299B7A7C5C5EF97BD4* __this, const RuntimeMethod* method) 
{
	{
		// int curentState =1;
		__this->___curentState_4 = 1;
		// public float MaxsSwitchDistans = 5;
		__this->___MaxsSwitchDistans_6 = (5.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Tutchbutton::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutchbutton_Awake_mF2120E4EC0A5858DB379735B7BD2D48EEF30DE6E (Tutchbutton_tC94C63E935D5D1AFB0D1692981D10DDE539A0AA5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// palyer = GetComponentInChildren<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0(__this, Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		__this->___palyer_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___palyer_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Tutchbutton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutchbutton_Update_m41B433E23889601FB2B3BBF80DEB61B2B873915C (Tutchbutton_tC94C63E935D5D1AFB0D1692981D10DDE539A0AA5* __this, const RuntimeMethod* method) 
{
	{
		// if(Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Klick();
		Tutchbutton_Klick_m5EDC000034BF8AC492F3FCEAA22228B02783B262(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void Tutchbutton::Klick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutchbutton_Klick_m5EDC000034BF8AC492F3FCEAA22228B02783B262 (Tutchbutton_tC94C63E935D5D1AFB0D1692981D10DDE539A0AA5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t08E85812946542C2FD1F37BA7C97825101832DC8_mD409EE01137B3FC796D331C457DB5620375C09AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(Physics.Raycast(palyer.transform.position, palyer.transform.forward,  out hit, klickDistans))
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___palyer_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___palyer_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_4, NULL);
		float L_6 = __this->___klickDistans_5;
		bool L_7;
		L_7 = Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33(L_2, L_5, (&V_0), L_6, NULL);
		if (!L_7)
		{
			goto IL_00b2;
		}
	}
	{
		// if(hit.collider.tag == "Button" && hit.collider != null)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8;
		L_8 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		String_t* L_9;
		L_9 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_8, NULL);
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870, NULL);
		if (!L_10)
		{
			goto IL_0091;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_11;
		L_11 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0091;
		}
	}
	{
		// Debug.DrawLine(palyer.transform.position, hit.point, Color.green,1);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13 = __this->___palyer_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		L_17 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m796C039D0BD9962E19368C08CE76E8257DD45C5F(L_15, L_16, L_17, (1.0f), NULL);
		// hit.collider.GetComponent<Button>().DoIets();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_18;
		L_18 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		Button_t08E85812946542C2FD1F37BA7C97825101832DC8* L_19;
		L_19 = Component_GetComponent_TisButton_t08E85812946542C2FD1F37BA7C97825101832DC8_mD409EE01137B3FC796D331C457DB5620375C09AA(L_18, Component_GetComponent_TisButton_t08E85812946542C2FD1F37BA7C97825101832DC8_mD409EE01137B3FC796D331C457DB5620375C09AA_RuntimeMethod_var);
		Button_DoIets_m6A5605D513070AA92FE1C5906B0839C57CDC9BAF(L_19, NULL);
		return;
	}

IL_0091:
	{
		// else Debug.DrawLine(transform.position, hit.point, Color.red,1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23;
		L_23 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m796C039D0BD9962E19368C08CE76E8257DD45C5F(L_21, L_22, L_23, (1.0f), NULL);
	}

IL_00b2:
	{
		// }
		return;
	}
}
// System.Void Tutchbutton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutchbutton__ctor_m0267FA28C202E4DEBE1B3C0F19ACAED93FF0BCB5 (Tutchbutton_tC94C63E935D5D1AFB0D1692981D10DDE539A0AA5* __this, const RuntimeMethod* method) 
{
	{
		// public float klickDistans = 2;
		__this->___klickDistans_5 = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void RobInstructions::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobInstructions_Awake_m13F0AACB00EF3D043BAE992EFFCBC946337EAE06 (RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A* __this, const RuntimeMethod* method) 
{
	{
		// ResetInstructions();
		RobInstructions_ResetInstructions_mF2573A9B6E6BD5CE0F0654A6559DE9EC2A944702(__this, NULL);
		// }
		return;
	}
}
// System.Void RobInstructions::ResetInstructions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobInstructions_ResetInstructions_mF2573A9B6E6BD5CE0F0654A6559DE9EC2A944702 (RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instructions = new List<String>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___instructions_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___instructions_1), (void*)L_0);
		// Hexagon1.isResetting = true;
		((Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204_StaticFields*)il2cpp_codegen_static_fields_for(Hexagon1_tC5102767FA0EC4C8ADA90F4AF246C09E9B33F204_il2cpp_TypeInfo_var))->___isResetting_8 = (bool)1;
		// StartOver();
		RobInstructions_StartOver_mDE1B4738F3CCA62D5E72E2D91CCB859525E8FE8C(__this, NULL);
		// instructionsCount=0;
		__this->___instructionsCount_4 = 0;
		// }
		return;
	}
}
// System.Void RobInstructions::StartOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobInstructions_StartOver_mDE1B4738F3CCA62D5E72E2D91CCB859525E8FE8C (RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rbc.transform.position = startPosition;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_0 = __this->___rbc_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___startPosition_5;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_2, NULL);
		// rbc.transform.rotation = startRotation;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_3 = __this->___rbc_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = __this->___startRotation_6;
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_4, L_5, NULL);
		// curentInstruction=0;
		__this->___curentInstruction_3 = 0;
		// isPlayeing = false;
		((RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A_StaticFields*)il2cpp_codegen_static_fields_for(RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A_il2cpp_TypeInfo_var))->___isPlayeing_2 = (bool)0;
		// }
		return;
	}
}
// System.Void RobInstructions::OnChangeInstruction(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobInstructions_OnChangeInstruction_m6D70E1F3260CBCD9B5685618B7D760DAC0351486 (RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A* __this, int32_t ___i0, String_t* ____Name1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m6A72B7648178616800F05C13DB492E4EDB866B7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBB11617944AA76BC68B044DAC2C88A1EDBA6CA6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(instructions.Count < rbc.getControl.NUMBER_OF_COLOMS * rbc.getControl.NUMBER_OF_ROWS)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___instructions_1;
		int32_t L_1;
		L_1 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_0, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_2 = __this->___rbc_0;
		GetControl_tDFC1FF392C93C7082611AF2092D3AF621BF91E83* L_3 = L_2->___getControl_9;
		int32_t L_4 = L_3->___NUMBER_OF_COLOMS_10;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_5 = __this->___rbc_0;
		GetControl_tDFC1FF392C93C7082611AF2092D3AF621BF91E83* L_6 = L_5->___getControl_9;
		int32_t L_7 = L_6->___NUMBER_OF_ROWS_9;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(L_4, L_7)))))
		{
			goto IL_0045;
		}
	}
	{
		// instructions.Add(new String(_Name));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = __this->___instructions_1;
		String_t* L_9 = ____Name1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_10;
		L_10 = String_op_Implicit_m7D7FE0449303AF92D8B2A85A06ADC6933B2ECC3A_inline(L_9, NULL);
		String_t* L_11;
		L_11 = String_CreateString_m1618CF9F1145C9832FC830A4BD6DD96A540012F8(NULL, L_10, NULL);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_8, L_11, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		return;
	}

IL_0045:
	{
		// if( _Name !="Emty")
		String_t* L_12 = ____Name1;
		bool L_13;
		L_13 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_12, _stringLiteralCBB11617944AA76BC68B044DAC2C88A1EDBA6CA6, NULL);
		if (!L_13)
		{
			goto IL_0089;
		}
	}
	{
		// if(LevelMagiger.allLeffelsCompleed == true) LevelMagiger.allLeffelsCompleed = false;
		bool L_14 = ((LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148_StaticFields*)il2cpp_codegen_static_fields_for(LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148_il2cpp_TypeInfo_var))->___allLeffelsCompleed_8;
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		// if(LevelMagiger.allLeffelsCompleed == true) LevelMagiger.allLeffelsCompleed = false;
		((LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148_StaticFields*)il2cpp_codegen_static_fields_for(LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148_il2cpp_TypeInfo_var))->___allLeffelsCompleed_8 = (bool)0;
	}

IL_005f:
	{
		// if(instructions[i-1] == "Emty" ) instructionsCount ++;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15 = __this->___instructions_1;
		int32_t L_16 = ___i0;
		String_t* L_17;
		L_17 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_15, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralCBB11617944AA76BC68B044DAC2C88A1EDBA6CA6, NULL);
		if (!L_18)
		{
			goto IL_00be;
		}
	}
	{
		// if(instructions[i-1] == "Emty" ) instructionsCount ++;
		int32_t L_19 = __this->___instructionsCount_4;
		__this->___instructionsCount_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		goto IL_00be;
	}

IL_0089:
	{
		// else if( instructions[i-1] != "Emty" &&_Name == "Emty")instructionsCount --;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_20 = __this->___instructions_1;
		int32_t L_21 = ___i0;
		String_t* L_22;
		L_22 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_20, ((int32_t)il2cpp_codegen_subtract(L_21, 1)), List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		bool L_23;
		L_23 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_22, _stringLiteralCBB11617944AA76BC68B044DAC2C88A1EDBA6CA6, NULL);
		if (!L_23)
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_24 = ____Name1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralCBB11617944AA76BC68B044DAC2C88A1EDBA6CA6, NULL);
		if (!L_25)
		{
			goto IL_00be;
		}
	}
	{
		// else if( instructions[i-1] != "Emty" &&_Name == "Emty")instructionsCount --;
		int32_t L_26 = __this->___instructionsCount_4;
		__this->___instructionsCount_4 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
	}

IL_00be:
	{
		// instructions[i -1] = _Name;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_27 = __this->___instructions_1;
		int32_t L_28 = ___i0;
		String_t* L_29 = ____Name1;
		List_1_set_Item_m6A72B7648178616800F05C13DB492E4EDB866B7C(L_27, ((int32_t)il2cpp_codegen_subtract(L_28, 1)), L_29, List_1_set_Item_m6A72B7648178616800F05C13DB492E4EDB866B7C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void RobInstructions::OnPlayPrest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobInstructions_OnPlayPrest_mFAD955BB728D115797A6A6019301F82F65EAC756 (RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!isPlayeing && instructionsCount > 0 )
		bool L_0 = ((RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A_StaticFields*)il2cpp_codegen_static_fields_for(RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A_il2cpp_TypeInfo_var))->___isPlayeing_2;
		if (L_0)
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_1 = __this->___instructionsCount_4;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		// HandelPlay();
		RobInstructions_HandelPlay_m26AEB1624BED5F2637EBC57D514C6915B0D61003(__this, NULL);
		// isPlayeing = true;
		((RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A_StaticFields*)il2cpp_codegen_static_fields_for(RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A_il2cpp_TypeInfo_var))->___isPlayeing_2 = (bool)1;
		// startPosition = rbc.transform.position;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_2 = __this->___rbc_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		__this->___startPosition_5 = L_4;
		// startRotation = rbc.transform.rotation;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_5 = __this->___rbc_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		__this->___startRotation_6 = L_7;
		// rbc.robotJump.startY = rbc.transform.position.y;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_8 = __this->___rbc_0;
		RobotJump_t3856EA68452050FDEA33E8B27423EAFE11B0580A* L_9 = L_8->___robotJump_19;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_10 = __this->___rbc_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___y_3;
		L_9->___startY_1 = L_13;
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void RobInstructions::HandelPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobInstructions_HandelPlay_m26AEB1624BED5F2637EBC57D514C6915B0D61003 (RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBB11617944AA76BC68B044DAC2C88A1EDBA6CA6);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Exception_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	Exception_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	String_t* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	{
		// if((curentInstruction <  instructions.Count))
		int32_t L_0 = __this->___curentInstruction_3;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->___instructions_1;
		int32_t L_2;
		L_2 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_1, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_00d3;
		}
	}
	try
	{// begin try (depth: 1)
		{
			goto IL_0046_1;
		}

IL_0018_1:
		{
			// if(curentInstruction >=  instructions.Count -1)
			int32_t L_3 = __this->___curentInstruction_3;
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = __this->___instructions_1;
			int32_t L_5;
			L_5 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_4, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
			if ((((int32_t)L_3) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, 1)))))
			{
				goto IL_0038_1;
			}
		}
		{
			// StartOver();
			RobInstructions_StartOver_mDE1B4738F3CCA62D5E72E2D91CCB859525E8FE8C(__this, NULL);
			// return;
			goto IL_00d9;
		}

IL_0038_1:
		{
			// else curentInstruction++;
			int32_t L_6 = __this->___curentInstruction_3;
			__this->___curentInstruction_3 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		}

IL_0046_1:
		{
			// while(instructions[curentInstruction] == "Emty")
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = __this->___instructions_1;
			int32_t L_8 = __this->___curentInstruction_3;
			String_t* L_9;
			L_9 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_7, L_8, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
			bool L_10;
			L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteralCBB11617944AA76BC68B044DAC2C88A1EDBA6CA6, NULL);
			if (L_10)
			{
				goto IL_0018_1;
			}
		}
		{
			// rbc.setControl.controlPannels[curentInstruction].GetComponent<ParticleSystem>().Play();
			RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_11 = __this->___rbc_0;
			SetControl_t0F3999877E64A162F50302FD01B595AB98BEE614* L_12 = L_11->___setControl_10;
			List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_13 = L_12->___controlPannels_4;
			int32_t L_14 = __this->___curentInstruction_3;
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
			L_15 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_13, L_14, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
			ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_16;
			L_16 = GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA(L_15, GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
			ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_16, NULL);
			// rbc.OnChangeFunction(instructions[curentInstruction]);
			RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_17 = __this->___rbc_0;
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18 = __this->___instructions_1;
			int32_t L_19 = __this->___curentInstruction_3;
			String_t* L_20;
			L_20 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_18, L_19, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
			RobotControler_OnChangeFunction_m6D5C06D266DA54DC5CF6323712FED65409478B11(L_17, L_20, NULL);
			// curentInstruction++;
			int32_t L_21 = __this->___curentInstruction_3;
			__this->___curentInstruction_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
			// }
			goto IL_00d9;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b4;
		}
		throw e;
	}

CATCH_00b4:
	{// begin catch(System.Exception)
		{
			// catch (Exception e)
			V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// Debug.LogError("Oud of range" + e);
			Exception_t* L_22 = V_0;
			Exception_t* L_23 = L_22;
			G_B8_0 = L_23;
			G_B8_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB6189909980318AB859DB30E377C0E57C1645FCE));
			if (L_23)
			{
				G_B9_0 = L_23;
				G_B9_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB6189909980318AB859DB30E377C0E57C1645FCE));
				goto IL_00c2;
			}
		}
		{
			G_B10_0 = ((String_t*)(NULL));
			G_B10_1 = G_B8_1;
			goto IL_00c7;
		}

IL_00c2:
		{
			String_t* L_24;
			L_24 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B9_0);
			G_B10_0 = L_24;
			G_B10_1 = G_B9_1;
		}

IL_00c7:
		{
			String_t* L_25;
			L_25 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B10_1, G_B10_0, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_25, NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00d9;
		}
	}// end catch (depth: 1)

IL_00d3:
	{
		// StartOver();
		RobInstructions_StartOver_mDE1B4738F3CCA62D5E72E2D91CCB859525E8FE8C(__this, NULL);
	}

IL_00d9:
	{
		// }
		return;
	}
}
// System.Void RobInstructions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobInstructions__ctor_m7558A8186A61A5D8C32AB9C848FBA0A44B9B65C2 (RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<String> instructions =  new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___instructions_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___instructions_1), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void RobotControler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotControler_Awake_mA0B281E99A439E08234931BDF88FD793156EC8FB (RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148_m1830AE7D9B86D27DC6B7EA51B69BFE2A109B20AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RobotFinich_tC8EAB1BEF82389849D9C352F96B500EBEF007367_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RobotJump_t3856EA68452050FDEA33E8B27423EAFE11B0580A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RobotMove_t3C21C3E05CBECAA09164983FDD0B28F4450EB5CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RobotTurn_t69C7CBABA3509E364BBA3AD7C75AD7FBCFEEB6C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9E78AA8C485B95AB31446E55F31064840D75D9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// robotJump = new RobotJump();
		RobotJump_t3856EA68452050FDEA33E8B27423EAFE11B0580A* L_0 = (RobotJump_t3856EA68452050FDEA33E8B27423EAFE11B0580A*)il2cpp_codegen_object_new(RobotJump_t3856EA68452050FDEA33E8B27423EAFE11B0580A_il2cpp_TypeInfo_var);
		RobotJump__ctor_mBF5BB95284966044E84C4E85A916DD83856470A8(L_0, NULL);
		__this->___robotJump_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___robotJump_19), (void*)L_0);
		// robotJump.rbc = this;
		RobotJump_t3856EA68452050FDEA33E8B27423EAFE11B0580A* L_1 = __this->___robotJump_19;
		L_1->___rbc_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___rbc_0), (void*)__this);
		// robotMove = new RobotMove();
		RobotMove_t3C21C3E05CBECAA09164983FDD0B28F4450EB5CC* L_2 = (RobotMove_t3C21C3E05CBECAA09164983FDD0B28F4450EB5CC*)il2cpp_codegen_object_new(RobotMove_t3C21C3E05CBECAA09164983FDD0B28F4450EB5CC_il2cpp_TypeInfo_var);
		RobotMove__ctor_mE6B304B431EC2B29ECEA066E89B07B86CFF91F27(L_2, NULL);
		__this->___robotMove_20 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___robotMove_20), (void*)L_2);
		// robotMove.rbc = this;
		RobotMove_t3C21C3E05CBECAA09164983FDD0B28F4450EB5CC* L_3 = __this->___robotMove_20;
		L_3->___rbc_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___rbc_0), (void*)__this);
		// robotTurn = new RobotTurn();
		RobotTurn_t69C7CBABA3509E364BBA3AD7C75AD7FBCFEEB6C8* L_4 = (RobotTurn_t69C7CBABA3509E364BBA3AD7C75AD7FBCFEEB6C8*)il2cpp_codegen_object_new(RobotTurn_t69C7CBABA3509E364BBA3AD7C75AD7FBCFEEB6C8_il2cpp_TypeInfo_var);
		RobotTurn__ctor_mDF16A44F0C84D6C987B37F31AFDCCB59151A53A4(L_4, NULL);
		__this->___robotTurn_21 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___robotTurn_21), (void*)L_4);
		// robotTurn.rbc = this;
		RobotTurn_t69C7CBABA3509E364BBA3AD7C75AD7FBCFEEB6C8* L_5 = __this->___robotTurn_21;
		L_5->___rbc_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___rbc_0), (void*)__this);
		// robotFinich = new RobotFinich();
		RobotFinich_tC8EAB1BEF82389849D9C352F96B500EBEF007367* L_6 = (RobotFinich_tC8EAB1BEF82389849D9C352F96B500EBEF007367*)il2cpp_codegen_object_new(RobotFinich_tC8EAB1BEF82389849D9C352F96B500EBEF007367_il2cpp_TypeInfo_var);
		RobotFinich__ctor_mB77F6FEAA94F9F8B132BBA699AA40C3EDE86047E(L_6, NULL);
		__this->___robotFinich_22 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___robotFinich_22), (void*)L_6);
		// robotFinich.rbc = this;
		RobotFinich_tC8EAB1BEF82389849D9C352F96B500EBEF007367* L_7 = __this->___robotFinich_22;
		L_7->___rbc_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___rbc_0), (void*)__this);
		// robInstructions = new RobInstructions();
		RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A* L_8 = (RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A*)il2cpp_codegen_object_new(RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A_il2cpp_TypeInfo_var);
		RobInstructions__ctor_m7558A8186A61A5D8C32AB9C848FBA0A44B9B65C2(L_8, NULL);
		__this->___robInstructions_24 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___robInstructions_24), (void*)L_8);
		// robInstructions.rbc = this;
		RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A* L_9 = __this->___robInstructions_24;
		L_9->___rbc_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___rbc_0), (void*)__this);
		// levelMagiger = GameObject.Find("LevelManiger").GetComponent<LevelMagiger>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralE9E78AA8C485B95AB31446E55F31064840D75D9B, NULL);
		LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148* L_11;
		L_11 = GameObject_GetComponent_TisLevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148_m1830AE7D9B86D27DC6B7EA51B69BFE2A109B20AC(L_10, GameObject_GetComponent_TisLevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148_m1830AE7D9B86D27DC6B7EA51B69BFE2A109B20AC_RuntimeMethod_var);
		__this->___levelMagiger_23 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___levelMagiger_23), (void*)L_11);
		// animator = GetComponentInChildren<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12;
		L_12 = Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000(__this, Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		__this->___animator_17 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_17), (void*)L_12);
		// actionMultiplier = NUMBER_OF_FRAMS_IN_FIXED_UPDATE / (NUMBER_OF_FRAMS_IN_FIXED_UPDATE * timeForAction);
		int32_t L_13 = __this->___NUMBER_OF_FRAMS_IN_FIXED_UPDATE_27;
		int32_t L_14 = __this->___NUMBER_OF_FRAMS_IN_FIXED_UPDATE_27;
		float L_15 = __this->___timeForAction_4;
		__this->___actionMultiplier_25 = ((float)(((float)L_13)/((float)il2cpp_codegen_multiply(((float)L_14), L_15))));
		// scaleMultiplier = (transform.localScale.x );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_16, NULL);
		float L_18 = L_17.___x_2;
		__this->___scaleMultiplier_26 = L_18;
		// moveDistance =  transform.localScale.x * moveDistance;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_19, NULL);
		float L_21 = L_20.___x_2;
		float L_22 = __this->___moveDistance_5;
		__this->___moveDistance_5 = ((float)il2cpp_codegen_multiply(L_21, L_22));
		// animator.speed = 1/timeForAction;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_23 = __this->___animator_17;
		float L_24 = __this->___timeForAction_4;
		Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC(L_23, ((float)((1.0f)/L_24)), NULL);
		// }
		return;
	}
}
// System.Void RobotControler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotControler_Start_m8B15D191FB1413FD0D9D245D4CBDF405A6029325 (RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* __this, const RuntimeMethod* method) 
{
	{
		// robInstructions.startPosition = transform.position;
		RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A* L_0 = __this->___robInstructions_24;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		L_0->___startPosition_5 = L_2;
		// robInstructions.startRotation = transform.rotation;
		RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A* L_3 = __this->___robInstructions_24;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		L_3->___startRotation_6 = L_5;
		// robInstructions.Awake();
		RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A* L_6 = __this->___robInstructions_24;
		RobInstructions_Awake_m13F0AACB00EF3D043BAE992EFFCBC946337EAE06(L_6, NULL);
		// }
		return;
	}
}
// System.Void RobotControler::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotControler_FixedUpdate_mF4E29791A423E4EF7DCCF94A3E79C9DCA2D46AAF (RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SwitchFunctions();
		RobotControler_SwitchFunctions_mD515B5274BC0F8EAA6286107371F02DD66CC5D8B(__this, NULL);
		// Debug.DrawLine(lastPosition , transform.position, Color.red,5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___lastPosition_29;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m796C039D0BD9962E19368C08CE76E8257DD45C5F(L_0, L_2, L_3, (5.0f), NULL);
		// lastPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		__this->___lastPosition_29 = L_5;
		// }
		return;
	}
}
// System.Void RobotControler::OnChangeFunction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotControler_OnChangeFunction_m6D5C06D266DA54DC5CF6323712FED65409478B11 (RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* __this, String_t* ___NextFunction0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21C4DF46B3426B973393131667AAAE772D570FF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF62ABB73EF9B8AA42D37E4DD18B352C36F71CE3);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___NextFunction0;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA, NULL);
		if (L_1)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_2 = ___NextFunction0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA, NULL);
		if (L_3)
		{
			goto IL_00c3;
		}
	}
	{
		String_t* L_4 = ___NextFunction0;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD, NULL);
		if (L_5)
		{
			goto IL_00e0;
		}
	}
	{
		String_t* L_6 = ___NextFunction0;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1, NULL);
		if (L_7)
		{
			goto IL_00fd;
		}
	}
	{
		String_t* L_8 = ___NextFunction0;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (L_9)
		{
			goto IL_012d;
		}
	}
	{
		String_t* L_10 = ___NextFunction0;
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteral21C4DF46B3426B973393131667AAAE772D570FF3, NULL);
		if (L_11)
		{
			goto IL_0166;
		}
	}
	{
		goto IL_0182;
	}

IL_0062:
	{
		// CurentFunction = 0; // idle
		__this->___CurentFunction_13 = 0;
		// transform.rotation = Quaternion.AngleAxis( Mathf.Round( (transform.rotation.eulerAngles.y)/ 90) * 90, transform.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		V_0 = L_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		float L_16 = L_15.___y_3;
		float L_17;
		L_17 = bankers_roundf(((float)(L_16/(90.0f))));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_18, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_multiply(L_17, (90.0f))), L_19, NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_12, L_20, NULL);
		// animator.SetInteger("CurentState",0 );
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_21 = __this->___animator_17;
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_21, _stringLiteralDF62ABB73EF9B8AA42D37E4DD18B352C36F71CE3, 0, NULL);
		// break;
		goto IL_0182;
	}

IL_00c3:
	{
		// CurentFunction = 2; // turn rhit
		__this->___CurentFunction_13 = 2;
		// animator.SetInteger("CurentState",0 );
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_22 = __this->___animator_17;
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_22, _stringLiteralDF62ABB73EF9B8AA42D37E4DD18B352C36F71CE3, 0, NULL);
		// break;
		goto IL_0182;
	}

IL_00e0:
	{
		// CurentFunction = 1; // turn left
		__this->___CurentFunction_13 = 1;
		// animator.SetInteger("CurentState",0 );
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_23 = __this->___animator_17;
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_23, _stringLiteralDF62ABB73EF9B8AA42D37E4DD18B352C36F71CE3, 0, NULL);
		// break;
		goto IL_0182;
	}

IL_00fd:
	{
		// if(IsWalkable())CurentFunction = 3; // move
		bool L_24;
		L_24 = RobotControler_IsWalkable_m8CE7EFF783ECFEBCF3DC7284809D6B50C8D7E3C4(__this, NULL);
		if (!L_24)
		{
			goto IL_010c;
		}
	}
	{
		// if(IsWalkable())CurentFunction = 3; // move
		__this->___CurentFunction_13 = 3;
	}

IL_010c:
	{
		// animator.SetInteger("CurentState",3 );
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_25 = __this->___animator_17;
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_25, _stringLiteralDF62ABB73EF9B8AA42D37E4DD18B352C36F71CE3, 3, NULL);
		// PlayAudio(audioClip[1]);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_26 = __this->___audioClip_8;
		int32_t L_27 = 1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_28 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		RobotControler_PlayAudio_mB5D88553503FFDFCE2BF973ED733AF8A9F5870D6(__this, L_28, NULL);
		// break;
		goto IL_0182;
	}

IL_012d:
	{
		// if(IsJumpable())CurentFunction = 4; // Jump
		bool L_29;
		L_29 = RobotControler_IsJumpable_mDCB0DA42C8B1F07251B41625B1A749930057C2D5(__this, NULL);
		if (!L_29)
		{
			goto IL_013e;
		}
	}
	{
		// if(IsJumpable())CurentFunction = 4; // Jump
		__this->___CurentFunction_13 = 4;
		goto IL_0145;
	}

IL_013e:
	{
		// else CurentFunction = 5;
		__this->___CurentFunction_13 = 5;
	}

IL_0145:
	{
		// animator.SetInteger("CurentState",4 );
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_30 = __this->___animator_17;
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_30, _stringLiteralDF62ABB73EF9B8AA42D37E4DD18B352C36F71CE3, 4, NULL);
		// PlayAudio(audioClip[2]);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_31 = __this->___audioClip_8;
		int32_t L_32 = 2;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_33 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		RobotControler_PlayAudio_mB5D88553503FFDFCE2BF973ED733AF8A9F5870D6(__this, L_33, NULL);
		// break;
		goto IL_0182;
	}

IL_0166:
	{
		// robotFinich.OnFinich();
		RobotFinich_tC8EAB1BEF82389849D9C352F96B500EBEF007367* L_34 = __this->___robotFinich_22;
		RobotFinich_OnFinich_mE4BA9A5BE7319F87CF0483FA0B779BF1080ADA06(L_34, NULL);
		// animator.SetInteger("CurentState",5 );
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_35 = __this->___animator_17;
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_35, _stringLiteralDF62ABB73EF9B8AA42D37E4DD18B352C36F71CE3, 5, NULL);
	}

IL_0182:
	{
		// if(NextFunction != "Idle") StartCoroutine(TimeForAction());
		String_t* L_36 = ___NextFunction0;
		bool L_37;
		L_37 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_36, _stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA, NULL);
		if (!L_37)
		{
			goto IL_019c;
		}
	}
	{
		// if(NextFunction != "Idle") StartCoroutine(TimeForAction());
		RuntimeObject* L_38;
		L_38 = RobotControler_TimeForAction_m062C6AE6B37E7E5FE5C3A00B982633A1FE32F06E(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_39;
		L_39 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_38, NULL);
	}

IL_019c:
	{
		// }
		return;
	}
}
// System.Void RobotControler::SwitchFunctions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotControler_SwitchFunctions_mD515B5274BC0F8EAA6286107371F02DD66CC5D8B (RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch(CurentFunction)
		int32_t L_0 = __this->___CurentFunction_13;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0076;
			}
			case 1:
			{
				goto IL_0026;
			}
			case 2:
			{
				goto IL_0037;
			}
			case 3:
			{
				goto IL_0048;
			}
			case 4:
			{
				goto IL_0054;
			}
			case 5:
			{
				goto IL_006b;
			}
		}
	}
	{
		return;
	}

IL_0026:
	{
		// robotTurn.HandelRotation(-90); // turn rhite
		RobotTurn_t69C7CBABA3509E364BBA3AD7C75AD7FBCFEEB6C8* L_2 = __this->___robotTurn_21;
		RobotTurn_HandelRotation_mCCCCCDE1C1AB0125EB8C9674620A3EACD6B6721D(L_2, (-90.0f), NULL);
		// break;
		return;
	}

IL_0037:
	{
		// robotTurn.HandelRotation(90);// turn left
		RobotTurn_t69C7CBABA3509E364BBA3AD7C75AD7FBCFEEB6C8* L_3 = __this->___robotTurn_21;
		RobotTurn_HandelRotation_mCCCCCDE1C1AB0125EB8C9674620A3EACD6B6721D(L_3, (90.0f), NULL);
		// break;
		return;
	}

IL_0048:
	{
		// robotMove.HandelMovement();
		RobotMove_t3C21C3E05CBECAA09164983FDD0B28F4450EB5CC* L_4 = __this->___robotMove_20;
		RobotMove_HandelMovement_m8E6D5D4EB48A7914A5B6E3CA725062258AEEE816(L_4, NULL);
		// break;
		return;
	}

IL_0054:
	{
		// robotJump.HandelJump();
		RobotJump_t3856EA68452050FDEA33E8B27423EAFE11B0580A* L_5 = __this->___robotJump_19;
		RobotJump_HandelJump_m52BB35AB96B41AA4D367736D5F0E8ADDA57D2158(L_5, NULL);
		// robotMove.HandelMovement();
		RobotMove_t3C21C3E05CBECAA09164983FDD0B28F4450EB5CC* L_6 = __this->___robotMove_20;
		RobotMove_HandelMovement_m8E6D5D4EB48A7914A5B6E3CA725062258AEEE816(L_6, NULL);
		// break;
		return;
	}

IL_006b:
	{
		// robotJump.HandelJump();
		RobotJump_t3856EA68452050FDEA33E8B27423EAFE11B0580A* L_7 = __this->___robotJump_19;
		RobotJump_HandelJump_m52BB35AB96B41AA4D367736D5F0E8ADDA57D2158(L_7, NULL);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator RobotControler::TimeForAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RobotControler_TimeForAction_m062C6AE6B37E7E5FE5C3A00B982633A1FE32F06E (RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTimeForActionU3Ed__31_tE54DDFE29AB1AADF35E526D3D7C946318159C541_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTimeForActionU3Ed__31_tE54DDFE29AB1AADF35E526D3D7C946318159C541* L_0 = (U3CTimeForActionU3Ed__31_tE54DDFE29AB1AADF35E526D3D7C946318159C541*)il2cpp_codegen_object_new(U3CTimeForActionU3Ed__31_tE54DDFE29AB1AADF35E526D3D7C946318159C541_il2cpp_TypeInfo_var);
		U3CTimeForActionU3Ed__31__ctor_m05AAE23093B2A0F6EACB51A264762A7A566F2002(L_0, 0, NULL);
		U3CTimeForActionU3Ed__31_tE54DDFE29AB1AADF35E526D3D7C946318159C541* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void RobotControler::SetBasis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotControler_SetBasis_m03F1D867F9287B085B9CCE3471BF0A33B586C79E (RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 rot = new Vector3();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// rot.x = ((int)(transform.rotation.eulerAngles.x/ 90) )* 90;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		V_1 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_1), NULL);
		float L_3 = L_2.___x_2;
		(&V_0)->___x_2 = ((float)((int32_t)il2cpp_codegen_multiply(il2cpp_codegen_cast_double_to_int<int32_t>(((float)(L_3/(90.0f)))), ((int32_t)90))));
		// rot.y = ((int)(transform.rotation.eulerAngles.y / 90) )* 90;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		V_1 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_1), NULL);
		float L_7 = L_6.___y_3;
		(&V_0)->___y_3 = ((float)((int32_t)il2cpp_codegen_multiply(il2cpp_codegen_cast_double_to_int<int32_t>(((float)(L_7/(90.0f)))), ((int32_t)90))));
		// rot.z = ((int)(transform.rotation.eulerAngles.z / 90) )* 90;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_8, NULL);
		V_1 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_1), NULL);
		float L_11 = L_10.___z_4;
		(&V_0)->___z_4 = ((float)((int32_t)il2cpp_codegen_multiply(il2cpp_codegen_cast_double_to_int<int32_t>(((float)(L_11/(90.0f)))), ((int32_t)90))));
		// transform.rotation = Quaternion.Euler(rot);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_13, NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_12, L_14, NULL);
		// transform.position = new Vector3( Mathf.Round(transform.position.x / scaleMultiplier)*scaleMultiplier, robotJump.HeightObjectBelow() ,Mathf.Round(transform.position.z/  scaleMultiplier)*scaleMultiplier );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		float L_18 = L_17.___x_2;
		float L_19 = __this->___scaleMultiplier_26;
		float L_20;
		L_20 = bankers_roundf(((float)(L_18/L_19)));
		float L_21 = __this->___scaleMultiplier_26;
		RobotJump_t3856EA68452050FDEA33E8B27423EAFE11B0580A* L_22 = __this->___robotJump_19;
		float L_23;
		L_23 = RobotJump_HeightObjectBelow_m22AD30CF53E0B205256262194AE4882E3E4FB798(L_22, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		float L_26 = L_25.___z_4;
		float L_27 = __this->___scaleMultiplier_26;
		float L_28;
		L_28 = bankers_roundf(((float)(L_26/L_27)));
		float L_29 = __this->___scaleMultiplier_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_30), ((float)il2cpp_codegen_multiply(L_20, L_21)), L_23, ((float)il2cpp_codegen_multiply(L_28, L_29)), /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_15, L_30, NULL);
		// }
		return;
	}
}
// System.Boolean RobotControler::IsWalkable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RobotControler_IsWalkable_m8CE7EFF783ECFEBCF3DC7284809D6B50C8D7E3C4 (RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* __this, const RuntimeMethod* method) 
{
	{
		// if(!(!IsSomethingFront() && IsSomethingBelowFront(0.5f)))
		bool L_0;
		L_0 = RobotControler_IsSomethingFront_mBEAC5098C672382D80D7DA624FC34D96B63F3803(__this, NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1;
		L_1 = RobotControler_IsSomethingBelowFront_mE4E5A348622B6153E3C9CBB9FEAD13BF90143B9A(__this, (0.5f), NULL);
		if (L_1)
		{
			goto IL_0023;
		}
	}

IL_0015:
	{
		// PlayAudio(audioClip[3]);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_2 = __this->___audioClip_8;
		int32_t L_3 = 3;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		RobotControler_PlayAudio_mB5D88553503FFDFCE2BF973ED733AF8A9F5870D6(__this, L_4, NULL);
	}

IL_0023:
	{
		// return !IsSomethingFront() && IsSomethingBelowFront(0.5f);
		bool L_5;
		L_5 = RobotControler_IsSomethingFront_mBEAC5098C672382D80D7DA624FC34D96B63F3803(__this, NULL);
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		bool L_6;
		L_6 = RobotControler_IsSomethingBelowFront_mE4E5A348622B6153E3C9CBB9FEAD13BF90143B9A(__this, (0.5f), NULL);
		return L_6;
	}

IL_0037:
	{
		return (bool)0;
	}
}
// System.Boolean RobotControler::IsJumpable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RobotControler_IsJumpable_mDCB0DA42C8B1F07251B41625B1A749930057C2D5 (RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* __this, const RuntimeMethod* method) 
{
	{
		// if(!(IsSomethingBelowFront(maxJumpHeight + 1* transform.localScale.x)))
		float L_0 = __this->___maxJumpHeight_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		float L_3 = L_2.___x_2;
		bool L_4;
		L_4 = RobotControler_IsSomethingBelowFront_mE4E5A348622B6153E3C9CBB9FEAD13BF90143B9A(__this, ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply((1.0f), L_3)))), NULL);
		if (L_4)
		{
			goto IL_0033;
		}
	}
	{
		// PlayAudio(audioClip[3]);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_5 = __this->___audioClip_8;
		int32_t L_6 = 3;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		RobotControler_PlayAudio_mB5D88553503FFDFCE2BF973ED733AF8A9F5870D6(__this, L_7, NULL);
	}

IL_0033:
	{
		// return IsSomethingBelowFront(maxJumpHeight + 1* transform.localScale.x);
		float L_8 = __this->___maxJumpHeight_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_9, NULL);
		float L_11 = L_10.___x_2;
		bool L_12;
		L_12 = RobotControler_IsSomethingBelowFront_mE4E5A348622B6153E3C9CBB9FEAD13BF90143B9A(__this, ((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply((1.0f), L_11)))), NULL);
		return L_12;
	}
}
// System.Boolean RobotControler::IsSomethingFront()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RobotControler_IsSomethingFront_mBEAC5098C672382D80D7DA624FC34D96B63F3803 (RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* __this, const RuntimeMethod* method) 
{
	{
		// Vector3 startPosition =transform.position  + new Vector3(0, 0.5f, 0) * scaleMultiplier;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.0f), (0.5f), (0.0f), /*hidden argument*/NULL);
		float L_3 = __this->___scaleMultiplier_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_4, NULL);
		// return Physics.Raycast(startPosition, transform.forward, 1 * scaleMultiplier, layerMask);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_6, NULL);
		float L_8 = __this->___scaleMultiplier_26;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_9 = __this->___layerMask_12;
		int32_t L_10;
		L_10 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_9, NULL);
		bool L_11;
		L_11 = Physics_Raycast_m0679FB03C9AFC1E803B8F8AE6CAB409670D31377(L_5, L_7, ((float)il2cpp_codegen_multiply((1.0f), L_8)), L_10, NULL);
		return L_11;
	}
}
// System.Boolean RobotControler::IsSomethingBelowFront(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RobotControler_IsSomethingBelowFront_mE4E5A348622B6153E3C9CBB9FEAD13BF90143B9A (RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* __this, float ____Lenht0, const RuntimeMethod* method) 
{
	{
		// Vector3 startPosition =transform.position + transform.forward * (1f *   scaleMultiplier) + new Vector3(0, 1.5f, 0)  * scaleMultiplier;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		float L_4 = __this->___scaleMultiplier_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, ((float)il2cpp_codegen_multiply((1.0f), L_4)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), (0.0f), (1.5f), (0.0f), /*hidden argument*/NULL);
		float L_8 = __this->___scaleMultiplier_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_9, NULL);
		// return Physics.Raycast(startPosition, -transform.up, (_Lenht + 1.5f)  * scaleMultiplier, layerMask);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_12, NULL);
		float L_14 = ____Lenht0;
		float L_15 = __this->___scaleMultiplier_26;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_16 = __this->___layerMask_12;
		int32_t L_17;
		L_17 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_16, NULL);
		bool L_18;
		L_18 = Physics_Raycast_m0679FB03C9AFC1E803B8F8AE6CAB409670D31377(L_10, L_13, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_14, (1.5f))), L_15)), L_17, NULL);
		return L_18;
	}
}
// System.Void RobotControler::OnPlaye()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotControler_OnPlaye_m29471E96F4993186D165201B46D17BB989DF29BA (RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* __this, const RuntimeMethod* method) 
{
	{
		// robInstructions.OnPlayPrest();
		RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A* L_0 = __this->___robInstructions_24;
		RobInstructions_OnPlayPrest_mFAD955BB728D115797A6A6019301F82F65EAC756(L_0, NULL);
		// }
		return;
	}
}
// System.Void RobotControler::OnChangeInstruction(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotControler_OnChangeInstruction_mD151D1454888477D936AF468384C1478A90B52EA (RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* __this, int32_t ___i0, String_t* ____Name1, const RuntimeMethod* method) 
{
	{
		// robInstructions.OnChangeInstruction(i, _Name);
		RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A* L_0 = __this->___robInstructions_24;
		int32_t L_1 = ___i0;
		String_t* L_2 = ____Name1;
		RobInstructions_OnChangeInstruction_m6D70E1F3260CBCD9B5685618B7D760DAC0351486(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void RobotControler::ResetInstructions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotControler_ResetInstructions_m8BBC52C944E54A50907728D90DCFF9ACFF3A2CC1 (RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* __this, const RuntimeMethod* method) 
{
	{
		// robInstructions.ResetInstructions();
		RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A* L_0 = __this->___robInstructions_24;
		RobInstructions_ResetInstructions_mF2573A9B6E6BD5CE0F0654A6559DE9EC2A944702(L_0, NULL);
		// }
		return;
	}
}
// System.Void RobotControler::OnResetCompleed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotControler_OnResetCompleed_m8098745B81C00C34A38988BD0463A584301C13CE (RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_1, NULL);
		// }
		return;
	}
}
// System.Void RobotControler::PlayAudio(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotControler_PlayAudio_mB5D88553503FFDFCE2BF973ED733AF8A9F5870D6 (RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var Audio = gameObject.AddComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14(L_0, GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		// Audio.clip = clip;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = L_1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = ___clip0;
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_2, L_3, NULL);
		// Audio.pitch = 1/timeForAction;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = L_2;
		float L_5 = __this->___timeForAction_4;
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_4, ((float)((1.0f)/L_5)), NULL);
		// Audio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = L_4;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_6, NULL);
		// Destroy(Audio,timeForAction);
		float L_7 = __this->___timeForAction_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void RobotControler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotControler__ctor_m997F8ED9EFB98E9528D011962E4BFB72F95EB607 (RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* __this, const RuntimeMethod* method) 
{
	{
		// [HideInInspector] public int NUMBER_OF_FRAMS_IN_FIXED_UPDATE = 50;
		__this->___NUMBER_OF_FRAMS_IN_FIXED_UPDATE_27 = ((int32_t)50);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void RobotControler/<TimeForAction>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimeForActionU3Ed__31__ctor_m05AAE23093B2A0F6EACB51A264762A7A566F2002 (U3CTimeForActionU3Ed__31_tE54DDFE29AB1AADF35E526D3D7C946318159C541* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void RobotControler/<TimeForAction>d__31::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimeForActionU3Ed__31_System_IDisposable_Dispose_mF8734829813DBB4DE5EBE38524E6FE65161503F0 (U3CTimeForActionU3Ed__31_tE54DDFE29AB1AADF35E526D3D7C946318159C541* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean RobotControler/<TimeForAction>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTimeForActionU3Ed__31_MoveNext_m932B899A2E7F27E76D1A179F8A435A5DA54F0494 (U3CTimeForActionU3Ed__31_tE54DDFE29AB1AADF35E526D3D7C946318159C541* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0043;
			}
			case 2:
			{
				goto IL_007c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(timeForAction);
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_3 = V_1;
		float L_4 = L_3->___timeForAction_4;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0043:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// framesCount = 0;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_6 = V_1;
		L_6->___framesCount_28 = 0;
		// OnChangeFunction("Idle");
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_7 = V_1;
		RobotControler_OnChangeFunction_m6D5C06D266DA54DC5CF6323712FED65409478B11(L_7, _stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA, NULL);
		// SetBasis();
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_8 = V_1;
		RobotControler_SetBasis_m03F1D867F9287B085B9CCE3471BF0A33B586C79E(L_8, NULL);
		// yield return new WaitForSeconds(timeBetweenAction);
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_9 = V_1;
		float L_10 = L_9->___timeBetweenAction_7;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_11 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_11, L_10, NULL);
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_007c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// robInstructions.HandelPlay();
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_12 = V_1;
		RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A* L_13 = L_12->___robInstructions_24;
		RobInstructions_HandelPlay_m26AEB1624BED5F2637EBC57D514C6915B0D61003(L_13, NULL);
		// }
		return (bool)0;
	}
}
// System.Object RobotControler/<TimeForAction>d__31::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTimeForActionU3Ed__31_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBBF4ED27B575279AF3C9996F910CFAFD0FFA2B51 (U3CTimeForActionU3Ed__31_tE54DDFE29AB1AADF35E526D3D7C946318159C541* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void RobotControler/<TimeForAction>d__31::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimeForActionU3Ed__31_System_Collections_IEnumerator_Reset_m4745C4E001CD5F5C6BC009AF0D6D852A6141E61A (U3CTimeForActionU3Ed__31_tE54DDFE29AB1AADF35E526D3D7C946318159C541* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTimeForActionU3Ed__31_System_Collections_IEnumerator_Reset_m4745C4E001CD5F5C6BC009AF0D6D852A6141E61A_RuntimeMethod_var)));
	}
}
// System.Object RobotControler/<TimeForAction>d__31::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTimeForActionU3Ed__31_System_Collections_IEnumerator_get_Current_mF9A34A03ED8615378A5D72B96D9DA72429B86532 (U3CTimeForActionU3Ed__31_tE54DDFE29AB1AADF35E526D3D7C946318159C541* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void RobotFinich::OnFinich()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotFinich_OnFinich_mE4BA9A5BE7319F87CF0483FA0B779BF1080ADA06 (RobotFinich_tC8EAB1BEF82389849D9C352F96B500EBEF007367* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21C4DF46B3426B973393131667AAAE772D570FF3);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(Physics.Raycast(rbc.transform.position + new Vector3(0,0.5f,0)  * rbc.scaleMultiplier, -rbc.transform.up,out hit, 1 ))
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_0 = __this->___rbc_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (0.0f), (0.5f), (0.0f), /*hidden argument*/NULL);
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_4 = __this->___rbc_0;
		float L_5 = L_4->___scaleMultiplier_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_6, NULL);
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_8 = __this->___rbc_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_10, NULL);
		bool L_12;
		L_12 = Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33(L_7, L_11, (&V_0), (1.0f), NULL);
		if (!L_12)
		{
			goto IL_00c5;
		}
	}
	{
		// if(hit.collider.tag == "Finich")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_13;
		L_13 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		String_t* L_14;
		L_14 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_13, NULL);
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteral21C4DF46B3426B973393131667AAAE772D570FF3, NULL);
		if (!L_15)
		{
			goto IL_00ad;
		}
	}
	{
		// rbc.robInstructions.ResetInstructions();
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_16 = __this->___rbc_0;
		RobInstructions_tA1E3C022DBC92FC7DB82E51A45820DB724EBE03A* L_17 = L_16->___robInstructions_24;
		RobInstructions_ResetInstructions_mF2573A9B6E6BD5CE0F0654A6559DE9EC2A944702(L_17, NULL);
		// rbc.levelMagiger.OnChangeLefel();
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_18 = __this->___rbc_0;
		LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148* L_19 = L_18->___levelMagiger_23;
		LevelMagiger_OnChangeLefel_m9360DBA6D9217D5F2F7CB19136F09E432D30969D(L_19, NULL);
		// rbc.PlayAudio(rbc.audioClip[0]);
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_20 = __this->___rbc_0;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_21 = __this->___rbc_0;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_22 = L_21->___audioClip_8;
		int32_t L_23 = 0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_24 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		RobotControler_PlayAudio_mB5D88553503FFDFCE2BF973ED733AF8A9F5870D6(L_20, L_24, NULL);
		return;
	}

IL_00ad:
	{
		// rbc.PlayAudio(rbc.audioClip[3]);
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_25 = __this->___rbc_0;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_26 = __this->___rbc_0;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_27 = L_26->___audioClip_8;
		int32_t L_28 = 3;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_29 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		RobotControler_PlayAudio_mB5D88553503FFDFCE2BF973ED733AF8A9F5870D6(L_25, L_29, NULL);
	}

IL_00c5:
	{
		// }
		return;
	}
}
// System.Void RobotFinich::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotFinich__ctor_mB77F6FEAA94F9F8B132BBA699AA40C3EDE86047E (RobotFinich_tC8EAB1BEF82389849D9C352F96B500EBEF007367* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void RobotJump::HandelJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotJump_HandelJump_m52BB35AB96B41AA4D367736D5F0E8ADDA57D2158 (RobotJump_t3856EA68452050FDEA33E8B27423EAFE11B0580A* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float numberOfFremsToDessertDestination = rbc.NUMBER_OF_FRAMS_IN_FIXED_UPDATE * rbc.timeForAction;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_0 = __this->___rbc_0;
		int32_t L_1 = L_0->___NUMBER_OF_FRAMS_IN_FIXED_UPDATE_27;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_2 = __this->___rbc_0;
		float L_3 = L_2->___timeForAction_4;
		V_0 = ((float)il2cpp_codegen_multiply(((float)L_1), L_3));
		// rbc.framesCount++;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_4 = __this->___rbc_0;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_5 = L_4;
		int32_t L_6 = L_5->___framesCount_28;
		L_5->___framesCount_28 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		// if (rbc.framesCount >= numberOfFremsToDessertDestination || rbc.transform.position.y <= HeightObjectBelow() && rbc.framesCount >= numberOfFremsToDessertDestination / 2)
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_7 = __this->___rbc_0;
		int32_t L_8 = L_7->___framesCount_28;
		float L_9 = V_0;
		if ((((float)((float)L_8)) >= ((float)L_9)))
		{
			goto IL_006d;
		}
	}
	{
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_10 = __this->___rbc_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___y_3;
		float L_14;
		L_14 = RobotJump_HeightObjectBelow_m22AD30CF53E0B205256262194AE4882E3E4FB798(__this, NULL);
		if ((!(((float)L_13) <= ((float)L_14))))
		{
			goto IL_00ce;
		}
	}
	{
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_15 = __this->___rbc_0;
		int32_t L_16 = L_15->___framesCount_28;
		float L_17 = V_0;
		if ((!(((float)((float)L_16)) >= ((float)((float)(L_17/(2.0f)))))))
		{
			goto IL_00ce;
		}
	}

IL_006d:
	{
		// rbc.transform.position = new Vector3(rbc.transform.position.x,HeightObjectBelow(),rbc.transform.position.z);
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_18 = __this->___rbc_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_20 = __this->___rbc_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		float L_23 = L_22.___x_2;
		float L_24;
		L_24 = RobotJump_HeightObjectBelow_m22AD30CF53E0B205256262194AE4882E3E4FB798(__this, NULL);
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_25 = __this->___rbc_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		float L_28 = L_27.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_29), L_23, L_24, L_28, /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_19, L_29, NULL);
		// startY = rbc.transform.position.y;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_30 = __this->___rbc_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_31, NULL);
		float L_33 = L_32.___y_3;
		__this->___startY_1 = L_33;
		return;
	}

IL_00ce:
	{
		// float StartValu = -Mathf.Sqrt(rbc.maxJumpHeight);
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_34 = __this->___rbc_0;
		float L_35 = L_34->___maxJumpHeight_6;
		float L_36;
		L_36 = sqrtf(L_35);
		// float NextYHight =(-Mathf.Pow((StartValu +((-StartValu * 2) / numberOfFremsToDessertDestination) *rbc.framesCount),2) +rbc.maxJumpHeight) *rbc.scaleMultiplier; // Formule: https://www.geogebra.org/classic/gg8vqdys
		float L_37 = ((-L_36));
		float L_38 = V_0;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_39 = __this->___rbc_0;
		int32_t L_40 = L_39->___framesCount_28;
		float L_41;
		L_41 = powf(((float)il2cpp_codegen_add(L_37, ((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_multiply(((-L_37)), (2.0f)))/L_38)), ((float)L_40))))), (2.0f));
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_42 = __this->___rbc_0;
		float L_43 = L_42->___maxJumpHeight_6;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_44 = __this->___rbc_0;
		float L_45 = L_44->___scaleMultiplier_26;
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((-L_41)), L_43)), L_45));
		// rbc.transform.position = new Vector3(rbc.transform.position.x,NextYHight + startY , rbc.transform.position.z);
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_46 = __this->___rbc_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_46, NULL);
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_48 = __this->___rbc_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_48, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_49, NULL);
		float L_51 = L_50.___x_2;
		float L_52 = V_1;
		float L_53 = __this->___startY_1;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_54 = __this->___rbc_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_54, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_55, NULL);
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), L_51, ((float)il2cpp_codegen_add(L_52, L_53)), L_57, /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_47, L_58, NULL);
		// }
		return;
	}
}
// System.Single RobotJump::HeightObjectBelow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RobotJump_HeightObjectBelow_m22AD30CF53E0B205256262194AE4882E3E4FB798 (RobotJump_t3856EA68452050FDEA33E8B27423EAFE11B0580A* __this, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Physics.Raycast(rbc.transform.position + new Vector3(0, 1, 0) * rbc.scaleMultiplier ,-rbc.transform.up ,out hit ,(rbc.maxJumpHeight+2)  * rbc.scaleMultiplier ,rbc.layerMask);
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_0 = __this->___rbc_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_4 = __this->___rbc_0;
		float L_5 = L_4->___scaleMultiplier_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_6, NULL);
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_8 = __this->___rbc_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_10, NULL);
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_12 = __this->___rbc_0;
		float L_13 = L_12->___maxJumpHeight_6;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_14 = __this->___rbc_0;
		float L_15 = L_14->___scaleMultiplier_26;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_16 = __this->___rbc_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_17 = L_16->___layerMask_12;
		int32_t L_18;
		L_18 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_17, NULL);
		bool L_19;
		L_19 = Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12(L_7, L_11, (&V_0), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_13, (2.0f))), L_15)), L_18, NULL);
		// return rbc.transform.position.y - hit.distance + 1 *rbc.scaleMultiplier;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_20 = __this->___rbc_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		float L_23 = L_22.___y_3;
		float L_24;
		L_24 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_0), NULL);
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_25 = __this->___rbc_0;
		float L_26 = L_25->___scaleMultiplier_26;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_23, L_24)), ((float)il2cpp_codegen_multiply((1.0f), L_26))));
	}
}
// System.Void RobotJump::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotJump__ctor_mBF5BB95284966044E84C4E85A916DD83856470A8 (RobotJump_t3856EA68452050FDEA33E8B27423EAFE11B0580A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void RobotMove::HandelMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotMove_HandelMovement_m8E6D5D4EB48A7914A5B6E3CA725062258AEEE816 (RobotMove_t3C21C3E05CBECAA09164983FDD0B28F4450EB5CC* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float ChangePositionOnEachFrame = rbc.moveDistance / rbc.NUMBER_OF_FRAMS_IN_FIXED_UPDATE;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_0 = __this->___rbc_0;
		float L_1 = L_0->___moveDistance_5;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_2 = __this->___rbc_0;
		int32_t L_3 = L_2->___NUMBER_OF_FRAMS_IN_FIXED_UPDATE_27;
		V_0 = ((float)(L_1/((float)L_3)));
		// Vector3 nextPosition =(rbc.transform.forward * ChangePositionOnEachFrame * rbc.actionMultiplier);
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_4 = __this->___rbc_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_5, NULL);
		float L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_7, NULL);
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_9 = __this->___rbc_0;
		float L_10 = L_9->___actionMultiplier_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, L_10, NULL);
		V_1 = L_11;
		// Vector3 currentMovePosition = rbc.transform.position + nextPosition;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_12 = __this->___rbc_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_14, L_15, NULL);
		V_2 = L_16;
		// rbc.transform.position = currentMovePosition;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_17 = __this->___rbc_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_2;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_18, L_19, NULL);
		// }
		return;
	}
}
// System.Void RobotMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotMove__ctor_mE6B304B431EC2B29ECEA066E89B07B86CFF91F27 (RobotMove_t3C21C3E05CBECAA09164983FDD0B28F4450EB5CC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void RobotTurn::HandelRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotTurn_HandelRotation_mCCCCCDE1C1AB0125EB8C9674620A3EACD6B6721D (RobotTurn_t69C7CBABA3509E364BBA3AD7C75AD7FBCFEEB6C8* __this, float ____Angel0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float ChangeAngelOnEachFrame = _Angel / rbc.NUMBER_OF_FRAMS_IN_FIXED_UPDATE;
		float L_0 = ____Angel0;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_1 = __this->___rbc_0;
		int32_t L_2 = L_1->___NUMBER_OF_FRAMS_IN_FIXED_UPDATE_27;
		// float NextRotationY = ChangeAngelOnEachFrame * rbc.actionMultiplier;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_3 = __this->___rbc_0;
		float L_4 = L_3->___actionMultiplier_25;
		V_0 = ((float)il2cpp_codegen_multiply(((float)(L_0/((float)L_2))), L_4));
		// float currentRoationY =  rbc.transform.rotation.eulerAngles.y+ NextRotationY;
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_5 = __this->___rbc_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		V_2 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_2), NULL);
		float L_9 = L_8.___y_3;
		float L_10 = V_0;
		V_1 = ((float)il2cpp_codegen_add(L_9, L_10));
		// rbc.transform.rotation =Quaternion.AngleAxis((currentRoationY), Vector3.up);
		RobotControler_t18A0045D2F6221D2F85AA22407E442566E191D25* L_11 = __this->___rbc_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		float L_13 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_13, L_14, NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_12, L_15, NULL);
		// }
		return;
	}
}
// System.Void RobotTurn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotTurn__ctor_mDF16A44F0C84D6C987B37F31AFDCCB59151A53A4 (RobotTurn_t69C7CBABA3509E364BBA3AD7C75AD7FBCFEEB6C8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void SetRobotStartPosition::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetRobotStartPosition_Start_mC8C9967EE97A8546CBDCFD78609005DC8BBA0D41 (SetRobotStartPosition_t775FDD10E8D7044822DF4BC4A04B5C7926DE9731* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var player = GameObject.FindGameObjectWithTag("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		// player.transform.localPosition = startPosition.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___startPosition_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void SetRobotStartPosition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetRobotStartPosition__ctor_mA2C07F4F29AB5A49AF60A224B58A1783D6AF3DA4 (SetRobotStartPosition_t775FDD10E8D7044822DF4BC4A04B5C7926DE9731* __this, const RuntimeMethod* method) 
{
	{
		// public int moveDistance = 1;
		__this->___moveDistance_5 = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// DataPersistenceManager DataPersistenceManager::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* DataPersistenceManager_get_instance_m01C3F5BCC51E7FABA894C34501EC63C4B82E8A5B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DataPersistenceManager instance {get; private set;}
		DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* L_0 = ((DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_StaticFields*)il2cpp_codegen_static_fields_for(DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void DataPersistenceManager::set_instance(DataPersistenceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPersistenceManager_set_instance_m745574F1B7D025B6EAA022465F9516AFC237A5D7 (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DataPersistenceManager instance {get; private set;}
		DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* L_0 = ___value0;
		((DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_StaticFields*)il2cpp_codegen_static_fields_for(DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_StaticFields*)il2cpp_codegen_static_fields_for(DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Void DataPersistenceManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPersistenceManager_Awake_mD1A199C3C5F494791FB01EED137D5BCD3831DB01 (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55FA54A30E87EE981C8A53727B6D35F2459E443A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(instance !=null)
		DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* L_0;
		L_0 = DataPersistenceManager_get_instance_m01C3F5BCC51E7FABA894C34501EC63C4B82E8A5B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Debug.LogError("Found more than one Data persistence Manager in the scene");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral55FA54A30E87EE981C8A53727B6D35F2459E443A, NULL);
	}

IL_0017:
	{
		// instance = this;
		DataPersistenceManager_set_instance_m745574F1B7D025B6EAA022465F9516AFC237A5D7_inline(__this, NULL);
		// }
		return;
	}
}
// System.Void DataPersistenceManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPersistenceManager_Start_m24F9E645EC6E1FAA4AE256B3F1EB4FDEA7228194 (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.fileDataHandler = new FileDataHandler(Application.persistentDataPath, fileName);
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		String_t* L_1 = __this->___fileName_4;
		FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA* L_2 = (FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA*)il2cpp_codegen_object_new(FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA_il2cpp_TypeInfo_var);
		FileDataHandler__ctor_m9996C2867C7A406598D422A8D29131406E1A22AC(L_2, L_0, L_1, NULL);
		__this->___fileDataHandler_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fileDataHandler_6), (void*)L_2);
		// this.dataPersistenceOvjects = FindAllDataPersistenceObjects();
		List_1_t323746BA83FE0FE3ECE1D8B591CC0A4948C3EC2F* L_3;
		L_3 = DataPersistenceManager_FindAllDataPersistenceObjects_mF337132E08F64DBC0D26AE7E212F2AC0BB0D02A8(__this, NULL);
		__this->___dataPersistenceOvjects_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataPersistenceOvjects_8), (void*)L_3);
		// LoadGame();
		DataPersistenceManager_LoadGame_mE5BFE59CFA8765A35449DA66918D46E347D5CC64(__this, NULL);
		// }
		return;
	}
}
// System.Void DataPersistenceManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPersistenceManager_Update_m41F9BBCDDA81E149E4A266D612FE3964517598AB (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(LevelMagiger.allLeffelsCompleed == true) SaveGame();
		bool L_0 = ((LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148_StaticFields*)il2cpp_codegen_static_fields_for(LevelMagiger_t3469CD442C417B6CAA19230FAB87E6F38C686148_il2cpp_TypeInfo_var))->___allLeffelsCompleed_8;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// if(LevelMagiger.allLeffelsCompleed == true) SaveGame();
		DataPersistenceManager_SaveGame_m404977BEBEFAE09E0AA1948AD2D9E2C2DB87B97C(__this, NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void DataPersistenceManager::NewGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPersistenceManager_NewGame_m1F7A0A953C2CC8EFA03D66B5F3E2809211DFF5C5 (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.gameData = new GameData();
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_0 = (GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6*)il2cpp_codegen_object_new(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var);
		GameData__ctor_mA9048174D2C20A10AD865A4B919045878E27099A(L_0, NULL);
		__this->___gameData_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameData_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void DataPersistenceManager::LoadGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPersistenceManager_LoadGame_mE5BFE59CFA8765A35449DA66918D46E347D5CC64 (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m147B08BFB6CA2AA77C34C570E22D9F6674EB1558_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE8E6AB8D12D876C025D586CA79BB9F72D80546A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m32C117ED0BF46E41A291C8C2ED802C82A339C889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataPerisitans_t03FBC25C19C57753BA5287C889D332DADCC9302D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mBC24CCAC70B7A420D26CC5758142628D5A247247_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA81B91B774988EFB6666141F202FE47A96E8E690);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9D2232BD4A785A03591F2D8ABEBA44A9FB9CA452 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// this.gameData =fileDataHandler.Load();
		FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA* L_0 = __this->___fileDataHandler_6;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_1;
		L_1 = FileDataHandler_Load_m0A73AE206E58A13E321446D52A62AD3E440480AD(L_0, NULL);
		__this->___gameData_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameData_5), (void*)L_1);
		// if (this.gameData == null)
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_2 = __this->___gameData_5;
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		// Debug.Log("No data was found. Initailizing data to defalts.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA81B91B774988EFB6666141F202FE47A96E8E690, NULL);
		// NewGame();
		DataPersistenceManager_NewGame_m1F7A0A953C2CC8EFA03D66B5F3E2809211DFF5C5(__this, NULL);
	}

IL_0029:
	{
		// foreach (IDataPerisitans dataPerisitansObj in dataPersistenceOvjects)
		List_1_t323746BA83FE0FE3ECE1D8B591CC0A4948C3EC2F* L_3 = __this->___dataPersistenceOvjects_8;
		Enumerator_t9D2232BD4A785A03591F2D8ABEBA44A9FB9CA452 L_4;
		L_4 = List_1_GetEnumerator_mBC24CCAC70B7A420D26CC5758142628D5A247247(L_3, List_1_GetEnumerator_mBC24CCAC70B7A420D26CC5758142628D5A247247_RuntimeMethod_var);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m147B08BFB6CA2AA77C34C570E22D9F6674EB1558((&V_0), Enumerator_Dispose_m147B08BFB6CA2AA77C34C570E22D9F6674EB1558_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0049_1;
			}

IL_0037_1:
			{
				// foreach (IDataPerisitans dataPerisitansObj in dataPersistenceOvjects)
				RuntimeObject* L_5;
				L_5 = Enumerator_get_Current_m32C117ED0BF46E41A291C8C2ED802C82A339C889_inline((&V_0), Enumerator_get_Current_m32C117ED0BF46E41A291C8C2ED802C82A339C889_RuntimeMethod_var);
				// dataPerisitansObj.LoadData(gameData);
				GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_6 = __this->___gameData_5;
				InterfaceActionInvoker1< GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* >::Invoke(0 /* System.Void IDataPerisitans::LoadData(GameData) */, IDataPerisitans_t03FBC25C19C57753BA5287C889D332DADCC9302D_il2cpp_TypeInfo_var, L_5, L_6);
			}

IL_0049_1:
			{
				// foreach (IDataPerisitans dataPerisitansObj in dataPersistenceOvjects)
				bool L_7;
				L_7 = Enumerator_MoveNext_mE8E6AB8D12D876C025D586CA79BB9F72D80546A0((&V_0), Enumerator_MoveNext_mE8E6AB8D12D876C025D586CA79BB9F72D80546A0_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0037_1;
				}
			}
			{
				goto IL_0062;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void DataPersistenceManager::SaveGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPersistenceManager_SaveGame_m404977BEBEFAE09E0AA1948AD2D9E2C2DB87B97C (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m147B08BFB6CA2AA77C34C570E22D9F6674EB1558_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE8E6AB8D12D876C025D586CA79BB9F72D80546A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m32C117ED0BF46E41A291C8C2ED802C82A339C889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataPerisitans_t03FBC25C19C57753BA5287C889D332DADCC9302D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mBC24CCAC70B7A420D26CC5758142628D5A247247_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9D2232BD4A785A03591F2D8ABEBA44A9FB9CA452 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (IDataPerisitans dataPerisitansObj in dataPersistenceOvjects)
		List_1_t323746BA83FE0FE3ECE1D8B591CC0A4948C3EC2F* L_0 = __this->___dataPersistenceOvjects_8;
		Enumerator_t9D2232BD4A785A03591F2D8ABEBA44A9FB9CA452 L_1;
		L_1 = List_1_GetEnumerator_mBC24CCAC70B7A420D26CC5758142628D5A247247(L_0, List_1_GetEnumerator_mBC24CCAC70B7A420D26CC5758142628D5A247247_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m147B08BFB6CA2AA77C34C570E22D9F6674EB1558((&V_0), Enumerator_Dispose_m147B08BFB6CA2AA77C34C570E22D9F6674EB1558_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0020_1;
			}

IL_000e_1:
			{
				// foreach (IDataPerisitans dataPerisitansObj in dataPersistenceOvjects)
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_m32C117ED0BF46E41A291C8C2ED802C82A339C889_inline((&V_0), Enumerator_get_Current_m32C117ED0BF46E41A291C8C2ED802C82A339C889_RuntimeMethod_var);
				// dataPerisitansObj.SaveData(ref gameData);
				GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_3 = (&__this->___gameData_5);
				InterfaceActionInvoker1< GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** >::Invoke(1 /* System.Void IDataPerisitans::SaveData(GameData&) */, IDataPerisitans_t03FBC25C19C57753BA5287C889D332DADCC9302D_il2cpp_TypeInfo_var, L_2, L_3);
			}

IL_0020_1:
			{
				// foreach (IDataPerisitans dataPerisitansObj in dataPersistenceOvjects)
				bool L_4;
				L_4 = Enumerator_MoveNext_mE8E6AB8D12D876C025D586CA79BB9F72D80546A0((&V_0), Enumerator_MoveNext_mE8E6AB8D12D876C025D586CA79BB9F72D80546A0_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0039;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		// fileDataHandler.Save(gameData);
		FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA* L_5 = __this->___fileDataHandler_6;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_6 = __this->___gameData_5;
		FileDataHandler_Save_m506ED54491F48C87E4A9C37A3E7B94FBF07D6B41(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<IDataPerisitans> DataPersistenceManager::FindAllDataPersistenceObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t323746BA83FE0FE3ECE1D8B591CC0A4948C3EC2F* DataPersistenceManager_FindAllDataPersistenceObjects_mF337132E08F64DBC0D26AE7E212F2AC0BB0D02A8 (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OfType_TisIDataPerisitans_t03FBC25C19C57753BA5287C889D332DADCC9302D_m43A3C441B130D6EB8E18CAC7844648D27F379AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6565562AC60FBACC6E7F16833356CDF96DACF1BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t323746BA83FE0FE3ECE1D8B591CC0A4948C3EC2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_mDF62FF06EFCF4912EC4EA0E6AB3CFEF74507E58C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IEnumerable<IDataPerisitans> dataPersistenceObjects = FindObjectsOfType<MonoBehaviour>().OfType<IDataPerisitans>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* L_0;
		L_0 = Object_FindObjectsOfType_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_mDF62FF06EFCF4912EC4EA0E6AB3CFEF74507E58C(Object_FindObjectsOfType_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_mDF62FF06EFCF4912EC4EA0E6AB3CFEF74507E58C_RuntimeMethod_var);
		RuntimeObject* L_1;
		L_1 = Enumerable_OfType_TisIDataPerisitans_t03FBC25C19C57753BA5287C889D332DADCC9302D_m43A3C441B130D6EB8E18CAC7844648D27F379AC7((RuntimeObject*)L_0, Enumerable_OfType_TisIDataPerisitans_t03FBC25C19C57753BA5287C889D332DADCC9302D_m43A3C441B130D6EB8E18CAC7844648D27F379AC7_RuntimeMethod_var);
		// return new List<IDataPerisitans>(dataPersistenceObjects);
		List_1_t323746BA83FE0FE3ECE1D8B591CC0A4948C3EC2F* L_2 = (List_1_t323746BA83FE0FE3ECE1D8B591CC0A4948C3EC2F*)il2cpp_codegen_object_new(List_1_t323746BA83FE0FE3ECE1D8B591CC0A4948C3EC2F_il2cpp_TypeInfo_var);
		List_1__ctor_m6565562AC60FBACC6E7F16833356CDF96DACF1BD(L_2, L_1, List_1__ctor_m6565562AC60FBACC6E7F16833356CDF96DACF1BD_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void DataPersistenceManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPersistenceManager__ctor_m710F03D37E8A60D705899421142CDD4762C2194D (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FileDataHandler::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDataHandler__ctor_m9996C2867C7A406598D422A8D29131406E1A22AC (FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA* __this, String_t* ___dataDirPath0, String_t* ___dataFileName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string dataDirPath = "";
		__this->___dataDirPath_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataDirPath_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// string dataFileName = "";
		__this->___dataFileName_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataFileName_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public FileDataHandler(string dataDirPath, string dataFileName)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.dataDirPath = dataDirPath;
		String_t* L_0 = ___dataDirPath0;
		__this->___dataDirPath_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataDirPath_0), (void*)L_0);
		// this.dataFileName = dataFileName;
		String_t* L_1 = ___dataFileName1;
		__this->___dataFileName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataFileName_1), (void*)L_1);
		// }
		return;
	}
}
// GameData FileDataHandler::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* FileDataHandler_Load_m0A73AE206E58A13E321446D52A62AD3E440480AD (FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisGameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_mA26EC7D424EA3D870035D10DF80D8BD3F6FD8DE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* V_1 = NULL;
	String_t* V_2 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_3 = NULL;
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_4 = NULL;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Exception_t* G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	String_t* G_B14_2 = NULL;
	String_t* G_B14_3 = NULL;
	Exception_t* G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	String_t* G_B13_2 = NULL;
	String_t* G_B13_3 = NULL;
	String_t* G_B15_0 = NULL;
	String_t* G_B15_1 = NULL;
	String_t* G_B15_2 = NULL;
	String_t* G_B15_3 = NULL;
	{
		// string fullPath = Path.Combine(dataDirPath, dataFileName);
		String_t* L_0 = __this->___dataDirPath_0;
		String_t* L_1 = __this->___dataFileName_1;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_0, L_1, NULL);
		V_0 = L_2;
		// GameData LodetData = null;
		V_1 = (GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6*)NULL;
		// if(File.Exists(fullPath))
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0084;
		}
	}
	try
	{// begin try (depth: 1)
		{
			// string dataToLoat = "";
			V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			// using(FileStream steam = new FileStream(fullPath, FileMode.Open))
			String_t* L_5 = V_0;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_6 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
			FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6(L_6, L_5, 3, NULL);
			V_3 = L_6;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_004a_1:
				{// begin finally (depth: 2)
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_7 = V_3;
						if (!L_7)
						{
							goto IL_0053_1;
						}
					}
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_8 = V_3;
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
					}

IL_0053_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					// using(StreamReader reader= new StreamReader(steam))
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_9 = V_3;
					StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_10 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
					StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(L_10, L_9, NULL);
					V_4 = L_10;
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_003c_2:
						{// begin finally (depth: 3)
							{
								StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_11 = V_4;
								if (!L_11)
								{
									goto IL_0047_2;
								}
							}
							{
								StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_12 = V_4;
								InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
							}

IL_0047_2:
							{
								return;
							}
						}// end finally (depth: 3)
					});
					try
					{// begin try (depth: 3)
						// dataToLoat = reader.ReadToEnd();
						StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_13 = V_4;
						String_t* L_14;
						L_14 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadToEnd() */, L_13);
						V_2 = L_14;
						// }
						goto IL_0048_2;
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_0048_2:
				{
					// }
					goto IL_0054_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0054_1:
		{
			// LodetData = JsonUtility.FromJson<GameData>(dataToLoat);
			String_t* L_15 = V_2;
			GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_16;
			L_16 = JsonUtility_FromJson_TisGameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_mA26EC7D424EA3D870035D10DF80D8BD3F6FD8DE8(L_15, JsonUtility_FromJson_TisGameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_mA26EC7D424EA3D870035D10DF80D8BD3F6FD8DE8_RuntimeMethod_var);
			V_1 = L_16;
			// }
			goto IL_0084;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005d;
		}
		throw e;
	}

CATCH_005d:
	{// begin catch(System.Exception)
		{
			// catch ( Exception e)
			V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// Debug.LogError("Error Occurd when trying to load dat from file " + fullPath + "\n" + e);
			String_t* L_17 = V_0;
			Exception_t* L_18 = V_5;
			Exception_t* L_19 = L_18;
			G_B13_0 = L_19;
			G_B13_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD));
			G_B13_2 = L_17;
			G_B13_3 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral488F5963598EA99EC156E2EF1DD00D66C3409D9D));
			if (L_19)
			{
				G_B14_0 = L_19;
				G_B14_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD));
				G_B14_2 = L_17;
				G_B14_3 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral488F5963598EA99EC156E2EF1DD00D66C3409D9D));
				goto IL_0073;
			}
		}
		{
			G_B15_0 = ((String_t*)(NULL));
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_0078;
		}

IL_0073:
		{
			String_t* L_20;
			L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B14_0);
			G_B15_0 = L_20;
			G_B15_1 = G_B14_1;
			G_B15_2 = G_B14_2;
			G_B15_3 = G_B14_3;
		}

IL_0078:
		{
			String_t* L_21;
			L_21 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B15_3, G_B15_2, G_B15_1, G_B15_0, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_21, NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0084;
		}
	}// end catch (depth: 1)

IL_0084:
	{
		// return LodetData;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_22 = V_1;
		return L_22;
	}
}
// System.Void FileDataHandler::Save(GameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDataHandler_Save_m506ED54491F48C87E4A9C37A3E7B94FBF07D6B41 (FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA* __this, GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_2 = NULL;
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Exception_t* G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	String_t* G_B14_2 = NULL;
	String_t* G_B14_3 = NULL;
	Exception_t* G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	String_t* G_B13_2 = NULL;
	String_t* G_B13_3 = NULL;
	String_t* G_B15_0 = NULL;
	String_t* G_B15_1 = NULL;
	String_t* G_B15_2 = NULL;
	String_t* G_B15_3 = NULL;
	{
		// string fullPath = Path.Combine(dataDirPath, dataFileName);
		String_t* L_0 = __this->___dataDirPath_0;
		String_t* L_1 = __this->___dataFileName_1;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_0, L_1, NULL);
		V_0 = L_2;
	}
	try
	{// begin try (depth: 1)
		{
			// Directory.CreateDirectory(Path.GetDirectoryName(fullPath));
			String_t* L_3 = V_0;
			il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
			String_t* L_4;
			L_4 = Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6(L_3, NULL);
			DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_5;
			L_5 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_4, NULL);
			// string dataToStore = JsonUtility.ToJson(data, true);
			GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_6 = ___data0;
			String_t* L_7;
			L_7 = JsonUtility_ToJson_m53A1FEE0D388CF3A629E093C04B5E1A6D5463B53(L_6, (bool)1, NULL);
			V_1 = L_7;
			// using(FileStream steam = new FileStream(fullPath, FileMode.Create))
			String_t* L_8 = V_0;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_9 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
			FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6(L_9, L_8, 2, NULL);
			V_2 = L_9;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_004a_1:
				{// begin finally (depth: 2)
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_10 = V_2;
						if (!L_10)
						{
							goto IL_0053_1;
						}
					}
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_11 = V_2;
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
					}

IL_0053_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					// using(StreamWriter writer= new StreamWriter(steam))
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_12 = V_2;
					StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_13 = (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4*)il2cpp_codegen_object_new(StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
					StreamWriter__ctor_m54CE9C47ED974C0589400DA9BC2AB3F7F481595B(L_13, L_12, NULL);
					V_3 = L_13;
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_003e_2:
						{// begin finally (depth: 3)
							{
								StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_14 = V_3;
								if (!L_14)
								{
									goto IL_0047_2;
								}
							}
							{
								StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_15 = V_3;
								InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_15);
							}

IL_0047_2:
							{
								return;
							}
						}// end finally (depth: 3)
					});
					try
					{// begin try (depth: 3)
						// writer.Write(dataToStore);
						StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_16 = V_3;
						String_t* L_17 = V_1;
						VirtualActionInvoker1< String_t* >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.String) */, L_16, L_17);
						// }
						goto IL_0048_2;
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_0048_2:
				{
					// }
					goto IL_0054_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0054_1:
		{
			// }
			goto IL_007d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0056;
		}
		throw e;
	}

CATCH_0056:
	{// begin catch(System.Exception)
		{
			// catch(Exception e)
			V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// Debug.LogError("Error occured when trying to save data to file: " + fullPath +"\n" + e);
			String_t* L_18 = V_0;
			Exception_t* L_19 = V_4;
			Exception_t* L_20 = L_19;
			G_B13_0 = L_20;
			G_B13_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD));
			G_B13_2 = L_18;
			G_B13_3 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9817253071976111AD0DB47307FE33DCB0D06673));
			if (L_20)
			{
				G_B14_0 = L_20;
				G_B14_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD));
				G_B14_2 = L_18;
				G_B14_3 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9817253071976111AD0DB47307FE33DCB0D06673));
				goto IL_006c;
			}
		}
		{
			G_B15_0 = ((String_t*)(NULL));
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_0071;
		}

IL_006c:
		{
			String_t* L_21;
			L_21 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B14_0);
			G_B15_0 = L_21;
			G_B15_1 = G_B14_1;
			G_B15_2 = G_B14_2;
			G_B15_3 = G_B14_3;
		}

IL_0071:
		{
			String_t* L_22;
			L_22 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B15_3, G_B15_2, G_B15_1, G_B15_0, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_22, NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_007d;
		}
	}// end catch (depth: 1)

IL_007d:
	{
		// }
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
// System.Void GameData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData__ctor_mA9048174D2C20A10AD865A4B919045878E27099A (GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* __this, const RuntimeMethod* method) 
{
	{
		// public GameData()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.fastisTime = Mathf.Infinity;
		__this->___fastisTime_0 = (std::numeric_limits<float>::infinity());
		// }
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
// System.Void SceneManiger::ChangeScen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManiger_ChangeScen_m5429B2F8C7C615F3EEFDB2F9885C5EFFD1FC0C2C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_1, NULL);
		// }
		return;
	}
}
// System.Void SceneManiger::ChangeScen(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManiger_ChangeScen_m7594E53B9EE2E536521E0826DD4EC1CD4471B9CC (int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(SceneManager.GetActiveScene().buildIndex >= SceneManager.sceneCountInBuildSettings -1) SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		int32_t L_2;
		L_2 = SceneManager_get_sceneCountInBuildSettings_m414CDE36617596AC75C8E1A03DA65752A09A8944(NULL);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, 1)))))
		{
			goto IL_001d;
		}
	}
	{
		// if(SceneManager.GetActiveScene().buildIndex >= SceneManager.sceneCountInBuildSettings -1) SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		return;
	}

IL_001d:
	{
		// else SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex +i);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_3;
		L_3 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		int32_t L_5 = ___i0;
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(((int32_t)il2cpp_codegen_add(L_4, L_5)), NULL);
		// }
		return;
	}
}
// System.Void SceneManiger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManiger__ctor_mB5C91A1AE31E37734F8086E569899346E7748E9E (SceneManiger_t35B9947BE24684119D7C9721B38E63630F5068E3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_m4EC1EF263D0E42432A301F85CB52028D2973F5DA_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rhs1;
		bool L_2;
		L_2 = Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 String_op_Implicit_m7D7FE0449303AF92D8B2A85A06ADC6933B2ECC3A_inline (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		String_t* L_2 = ___value0;
		Il2CppChar* L_3;
		L_3 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_2, NULL);
		String_t* L_4 = ___value0;
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_6;
		memset((&L_6), 0, sizeof(L_6));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_6), L_3, L_5, /*hidden argument*/ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* DataPersistenceManager_get_instance_m01C3F5BCC51E7FABA894C34501EC63C4B82E8A5B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DataPersistenceManager instance {get; private set;}
		DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* L_0 = ((DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_StaticFields*)il2cpp_codegen_static_fields_for(DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataPersistenceManager_set_instance_m745574F1B7D025B6EAA022465F9516AFC237A5D7_inline (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DataPersistenceManager instance {get; private set;}
		DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* L_0 = ___value0;
		((DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_StaticFields*)il2cpp_codegen_static_fields_for(DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_StaticFields*)il2cpp_codegen_static_fields_for(DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rhs1;
		float L_2;
		L_2 = Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline(L_0, L_1, NULL);
		bool L_3;
		L_3 = Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline(L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___ptr0;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___a0;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___b1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___a0;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___b1;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___dot0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___dot0;
		V_0 = (bool)((((float)L_0) > ((float)(0.999998987f)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}

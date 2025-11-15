// 函数: sub_545cf0
// 地址: 0x545cf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** result =
    sub_4f6900(arg3)
struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** result_1 =
    result

if (result_1 != 0)
    int32_t* ecx = result_1[0x1d]
    
    if (ecx != 0)
        result = (*(*ecx + 8))(1)
        
        if (result == 0xa)
            result = sub_4ef780(result_1)
            
            if (result != 0)
                int32_t var_20_1 = result[0x68]
                int32_t var_38_1 = result[0x62]
                int32_t var_1c_1 = result[0x69]
                int128_t xmm0_3 = *(result + 0x1a8)
                int32_t var_34_1 = result[0x63]
                struct textsurface::CTextSurfaceProperty::VTable* const var_3c =
                    &textsurface::CTextSurfaceProperty::`vftable'
                int128_t var_18_1 = xmm0_3
                void var_4c
                int128_t var_30_1 = *sub_402f50(&var_4c, arg2, arg4, arg5, 0xff)
                return sub_4bec70(&result[0x2e], &var_3c)

return result

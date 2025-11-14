// 函数: sub_544ff0
// 地址: 0x544ff0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct sealengine::CDrawInstance::sealengine::CMotionObjectShadowSphere::VTable** result

if (*(arg1 + 8) != 0)
    result = *(arg1 + 4) - 1
    
    switch (result)
        case nullptr, 9
            if (sub_545430(arg1, arg2, arg6, arg7, arg9).b == 0)
                result.b = 0
                return result
        case 1, 0xa
            if (*(arg1 + 0x18) != 0)
                result = sub_546030(arg1, arg2, arg6, arg7, arg9, arg11)
            
            if (*(arg1 + 0x18) != 0 && result.b == 0)
                result.b = 0
                return result
            
            int32_t eax_4
            
            if (((*(arg8 + 8) - *(arg8 + 4)) & 0xfffffffc) s> 8)
                eax_4 = *(*(arg8 + 4) + 8)
            else
                eax_4 = 0
            
            eax_4.b = eax_4 != 0
            result = sub_5464b0(arg1, eax_4.b, arg10)
            
            if (result.b == 0)
                return result
        case 2
            result = sub_546770(arg1, arg2, arg4, arg5, arg6)
            
            if (result.b == 0)
                return result
        case 7
            result = sub_546c40(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg9, arg10)
            
            if (result.b == 0)
                return result
        case 8
            result = sub_545120(arg1, arg2, arg10)
            
            if (result.b == 0)
                return result

result.b = 1
return result

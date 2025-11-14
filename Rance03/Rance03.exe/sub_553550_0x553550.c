// 函数: sub_553550
// 地址: 0x553550
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_5536b0(arg1)

if (sub_548900(arg1 + 0x18, arg2, arg4) != 0
        && sub_549b30(arg1 + 0x24, arg2, arg1 + 0x18, 1, 0) != 0)
    int32_t* eax_1 = *(arg1 + 0x28)
    int32_t edx = *(arg1 + 0x2c)
    
    if (eax_1 == edx)
    label_5535b3:
        eax_1.b = 0
    else
        while (*(*eax_1 + 0x20) == 0)
            eax_1 = &eax_1[1]
            
            if (eax_1 == edx)
                goto label_5535b3
        
        eax_1.b = 1
    
    *(arg1 + 0x128) = eax_1.b
    *(arg1 + 0x129) = sub_548a30(arg1 + 0x18)
    *(arg1 + 0xfc) = sub_57e060(arg2)
    int32_t ecx_6 = arg2[0x11] - arg2[0x10]
    *(arg1 + 0x120) = *(arg1 + 0x11c)
    sub_544300(arg1 + 0x11c, ecx_6 s/ 0x3c)
    *(arg1 + 0x134) = arg3
    *(arg1 + 0x14) = arg2
    EnterCriticalSection(arg2[3] + 4)
    arg2[1] += 1
    LeaveCriticalSection(arg2[3] + 4)
    int32_t result
    result.b = 1
    return result

return 0

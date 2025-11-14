// 函数: sub_5bfea0
// 地址: 0x5bfea0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax
int32_t edx

if (arg3 != 0)
    int32_t eax_2
    int32_t* ecx
    int32_t edx_1
    eax_2, ecx, edx_1 = sub_5c0150(arg1, arg2)
    
    if (eax_2.b == 0)
        sub_5c24e0(eax_2, edx_1, ecx, arg1, "MainSystem")
        int32_t* eax_3
        eax_3.b = 0
        return eax_3
    
    if (sub_5d11f0(&arg1[0xc]) == 0)
        sub_64b530(0x6e6554)
        enum MESSAGEBOX_RESULT eax_5
        eax_5.b = 0
        return eax_5
    
    if (sub_5c01f0(arg1, arg2) == 0)
        sub_64b530(0x6e6538)
        enum MESSAGEBOX_RESULT eax_7
        eax_7.b = 0
        return eax_7
    
    if ((**arg3)() != 0)
        sub_5c0e90()
        
        if (sub_5c0770(arg1) != 0 && sub_5c2db0(arg1) != 0 && sub_5c0ae0(arg1) != 0)
            if (sub_5c06d0() != 0)
                arg1[0x87].b = 0
                sub_5c22c0(arg1)
            
            return 1
else
    sub_5c24e0(eax, edx, arg1, arg1, "MainSystem")
return false

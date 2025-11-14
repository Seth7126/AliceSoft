// 函数: sub_521ad0
// 地址: 0x521ad0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax

if (*(arg1 + 0xe4) == 0)
    eax.b = 0
    return eax

if (arg2 == 0)
    eax.b = 0
    return eax

int32_t* ecx = *(arg1 + 8)
struct chipmunk::CTexture::VTable** eax_1 = *(arg1 + 0xdc)
int32_t* ebx = *(arg2 + 0xd8)
bool edx = ecx == ebx

if (eax_1 != 0)
label_521b13:
    eax_1.b = eax_1[3].b
    eax_1.b = eax_1.b == *(arg2 + 0xc1)
label_521b23:
    
    if (edx == 0 || eax_1.b == 0)
        if (ecx != 0)
            (*(*ecx + 4))()
        
        *(arg1 + 8) = ebx
        
        if (ebx != 0)
            (**ebx)()
        
        int32_t* ecx_2 = *(arg1 + 0xdc)
        
        if (ecx_2 != 0)
            ecx_2[1] -= 1
            
            if (ecx_2[1] s<= 0)
                (**ecx_2)(1)
            
            *(arg1 + 0xdc) = 0
        
        int32_t* ecx_3 = *(arg1 + 8)
        int32_t var_10_1
        
        if (ecx_3 != 0)
            if (sub_521be0(ecx_3) == 0)
                var_10_1 = *(arg2 + 8)
                sub_64b6b0(0x6e3230)
            else
                int32_t ecx_4 = *(arg1 + 8)
                arg2.b = *(arg2 + 0xc1)
                
                if (ecx_4 != 0)
                    eax_1 = sub_524340(ecx_4, arg2, arg3)
                else
                    eax_1 = nullptr
                
                *(arg1 + 0xdc) = eax_1
                
                if (eax_1 == 0)
                    sub_64b530(0x6e3210)
                    enum MESSAGEBOX_RESULT eax_6
                    eax_6.b = 0
                    return eax_6
        else
            sub_64b6b0(0x6e32b4)
            var_10_1 = *(arg2 + 8)
            sub_64b6b0(0x6e3230)
else if (edx == 0)
    if (eax_1 != 0)
        goto label_521b13
    
    eax_1.b = 0
    goto label_521b23

eax_1.b = 1
return eax_1

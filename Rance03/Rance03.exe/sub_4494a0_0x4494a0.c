// 函数: sub_4494a0
// 地址: 0x4494a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** eax = arg4

if (eax == arg5)
    *arg3 = eax
    return arg3

do
    void** ecx = &eax[2]
    int32_t* var_c_1
    int32_t* ebx_1
    
    if (arg6[5] u< 0x10)
        ebx_1 = arg6
        var_c_1 = arg6
    else
        ebx_1 = *arg6
        var_c_1 = ebx_1
    
    int32_t edi_1 = ecx[4]
    
    if (ecx[5] u>= 0x10)
        ecx = *ecx
    
    int32_t ebp_1 = arg6[4]
    
    if (edi_1 u< ebp_1)
        ebp_1 = edi_1
    
    if (ebp_1 == 0)
    label_449553:
        int32_t ebx_2 = arg6[4]
        
        if (edi_1 u>= ebx_2)
            int32_t ecx_3
            ecx_3.b = edi_1 != ebx_2
            
            if (ecx_3 == 0)
                break
    else
        int32_t i_1 = ebp_1 - 4
        
        if (ebp_1 u>= 4)
            int32_t i
            
            do
                if (*ecx != *ebx_1)
                    goto label_449515
                
                ebx_1 = &ebx_1[1]
                ecx = &ecx[1]
                var_c_1 = ebx_1
                i = i_1
                i_1 -= 4
            while (i u>= 4)
        
        int32_t ecx_2
        
        if (i_1 == 0xfffffffc)
            ecx_2 = 0
        else
        label_449515:
            ebx_1.b = *ecx
            char temp1_1 = *var_c_1
            
            if (ebx_1.b != temp1_1)
                ecx_2 = sbb.d(ecx, ecx, ebx_1.b u< temp1_1) | 1
            else if (i_1 == 0xfffffffd)
                ecx_2 = 0
            else
                ebx_1.b = *(ecx + 1)
                char temp3_1 = *(var_c_1 + 1)
                
                if (ebx_1.b != temp3_1)
                    ecx_2 = sbb.d(ecx, ecx, ebx_1.b u< temp3_1) | 1
                else if (i_1 == 0xfffffffe)
                    ecx_2 = 0
                else
                    ebx_1.b = *(ecx + 2)
                    char temp4_1 = *(var_c_1 + 2)
                    
                    if (ebx_1.b != temp4_1)
                        ecx_2 = sbb.d(ecx, ecx, ebx_1.b u< temp4_1) | 1
                    else if (i_1 == 0xffffffff)
                        ecx_2 = 0
                    else
                        ecx.b = *(ecx + 3)
                        char temp5_1 = *(var_c_1 + 3)
                        
                        if (ecx.b == temp5_1)
                            ecx_2 = 0
                        else
                            ecx_2 = sbb.d(ecx, ecx, ecx.b u< temp5_1) | 1
        
        if (ecx_2 == 0)
            goto label_449553
    
    eax = *eax
    arg4 = eax
while (eax != arg5)

*arg3 = eax
return arg3

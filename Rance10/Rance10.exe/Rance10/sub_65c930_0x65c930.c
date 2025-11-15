// 函数: sub_65c930
// 地址: 0x65c930
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_20
int32_t eax_1 = __security_cookie ^ &var_20
int32_t* ebx = arg1[6]
int32_t esi = ebx[1]
char* edi = *ebx

if (esi != 0)
    goto label_65c97c

uint32_t eax_3

if (ebx[3](arg1).b != 0)
    edi = *ebx
    esi = ebx[1]
label_65c97c:
    void* edi_1 = &edi[1]
    uint32_t edx_2 = zx.d(*edi) << 8
    var_20 = edx_2
    int32_t esi_1 = esi - 1
    
    if (esi != 1)
        goto label_65c9a5
    
    if (ebx[3](arg1).b != 0)
        edi_1 = *ebx
        esi_1 = ebx[1]
        edx_2 = var_20
    label_65c9a5:
        uint32_t edx_4 = edx_2 - 2 + zx.d(*edi_1)
        int32_t esi_2 = esi_1 - 1
        void* edi_2 = edi_1 + 1
        var_20 = edx_4
        char var_14[0x10]
        int32_t var_1c_1
        uint32_t var_18_1
        int32_t ecx_3
        
        if (edx_4 s< 0xe)
            eax_3 = 0
            
            if (edx_4 s> 0)
                eax_3 = edx_4
            
            ecx_3 = 0
            var_18_1 = eax_3
            var_1c_1 = 0
            
            if (eax_3 != 0)
                goto label_65ca08
        else
            ecx_3 = 0
            var_18_1 = 0xe
            var_1c_1 = 0
        label_65ca08:
            
            do
                if (esi_2 == 0)
                    if (ebx[3](arg1).b == 0)
                        goto label_65c962
                    
                    edi_2 = *ebx
                    esi_2 = ebx[1]
                    ecx_3 = var_1c_1
                
                eax_3.b = *edi_2
                esi_2 -= 1
                var_14[ecx_3] = eax_3.b
                edi_2 += 1
                eax_3 = var_18_1
                ecx_3 += 1
                var_1c_1 = ecx_3
            while (ecx_3 u< eax_3)
            
            edx_4 = var_20
        int32_t ecx_4 = arg1[0x65]
        uint32_t edx_5 = edx_4 - eax_3
        var_20 = edx_5
        
        if (ecx_4 == 0xe0)
            sub_65c610(eax_3, &var_14, arg1, eax_3, edx_5)
        else if (ecx_4 == 0xee)
            sub_65c860(eax_3, &var_14, arg1, eax_3, edx_5)
        else
            *(*arg1 + 0x14) = 0x46
            *(*arg1 + 0x18) = arg1[0x65]
            (**arg1)(arg1)
        
        uint32_t ecx_10 = var_20
        *ebx = edi_2
        ebx[1] = esi_2
        
        if (ecx_10 s> 0)
            (*(arg1[6] + 0x10))(arg1, ecx_10)
        
        int32_t eax_10
        eax_10.b = 1
        @__security_check_cookie@4(eax_1 ^ &var_20)
        return eax_10

label_65c962:
eax_3.b = 0
@__security_check_cookie@4(eax_1 ^ &var_20)
return eax_3

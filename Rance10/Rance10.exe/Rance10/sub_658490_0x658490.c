// 函数: sub_658490
// 地址: 0x658490
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_48
int32_t eax_1 = __security_cookie ^ &var_48
void* ebp = *(arg1 + 0x1b0)
void* var_44 = ebp
char var_20 = (*(arg1 + 0x184)).b
void* eax_3

if (*(arg1 + 0xfc) != 0 && *(ebp + 0x2c) == 0)
    eax_3 = sub_658400(arg1)
    
    if (eax_3.b == 0)
        @__security_check_cookie@4(eax_1 ^ &var_48)
        return eax_3

if (*(ebp + 0x28) == 0)
    int32_t* eax_4 = *(arg1 + 0x18)
    int128_t xmm0_1 = *(ebp + 0x14)
    int32_t edx_1 = *(ebp + 0xc)
    int32_t edi_1 = *(ebp + 0x10)
    int32_t ecx_4 = *eax_4
    int32_t esi_1 = eax_4[1]
    void* eax_5 = *(ebp + 0x24)
    var_48 = eax_5
    int32_t i = 0
    void* var_2c_1 = arg1
    int32_t var_3c = ecx_4
    int128_t var_18 = xmm0_1
    int32_t i_1 = 0
    
    if (*(arg1 + 0x14c) s> 0)
        void* ecx_5 = arg1 + 0x150
        var_48 = ecx_5
        
        do
            int16_t* eax_6 = *(arg2 + (i << 2))
            int32_t eax_7 = *ecx_5
            int32_t eax_9 = *(*(arg1 + (eax_7 << 2) + 0x134) + 0x14)
            int32_t esi_3 = *(ebp + (eax_9 << 2) + 0x30)
            int32_t var_34
            int32_t var_30
            uint32_t eax_10
            int32_t eax_11
            
            if (edi_1 s< 8)
                if (sub_6581f0(eax_9, edx_1, &var_3c, edi_1, 0).b == 0)
                label_6586a7:
                    eax_10.b = 0
                    @__security_check_cookie@4(eax_1 ^ &var_48)
                    return eax_10
                
                edi_1 = var_30
                edx_1 = var_34
                
                if (edi_1 s>= 8)
                    goto label_658597
                
                eax_11 = 1
                goto label_6585bd
            
        label_658597:
            eax_10 = zx.d((edx_1 s>> (edi_1.b - 8)).b)
            int32_t ecx_8 = *(esi_3 + (eax_10 << 2) + 0x90)
            uint32_t esi_4
            
            if (ecx_8 == 0)
                eax_11 = 9
            label_6585bd:
                eax_10 = sub_658310(eax_11, edx_1, &var_3c, edi_1, esi_3, eax_11)
                esi_4 = eax_10
                
                if (esi_4 s< 0)
                    goto label_6586a7
                
                edx_1 = var_34
                edi_1 = var_30
            else
                esi_4 = zx.d(*(eax_10 + esi_3 + 0x490))
                edi_1 -= ecx_8
            
            if (esi_4 != 0)
                if (edi_1 s< esi_4)
                    if (sub_6581f0(eax_10, edx_1, &var_3c, edi_1, esi_4).b == 0)
                        goto label_6586a7
                    
                    edx_1 = var_34
                    edi_1 = var_30
                
                int32_t ebp_1 = *((esi_4 << 2) + &data_76e550)
                void* eax_14 = (esi_4 << 2) + &data_76e550
                edi_1 -= esi_4
                esi_4 = edx_1 s>> edi_1.b & ebp_1
                
                if (esi_4 s<= *(eax_14 - 4))
                    esi_4 -= ebp_1
                
                ebp = var_44
            
            *(&var_18:4 + (eax_7 << 2)) += esi_4
            *eax_6 = (*(&var_18:4 + (eax_7 << 2))).w << var_20
            i = i_1 + 1
            ecx_5 = var_48 + 4
            i_1 = i
            var_48 = ecx_5
        while (i s< *(arg1 + 0x14c))
        
        ecx_4 = var_3c
        xmm0_1 = var_18
        var_48 = eax_5
    
    **(arg1 + 0x18) = ecx_4
    *(*(arg1 + 0x18) + 4) = esi_1
    eax_3 = var_48
    *(ebp + 0x14) = xmm0_1
    *(ebp + 0xc) = edx_1
    *(ebp + 0x10) = edi_1
    *(ebp + 0x24) = eax_3

*(ebp + 0x2c) -= 1
eax_3.b = 1
@__security_check_cookie@4(eax_1 ^ &var_48)
return eax_3

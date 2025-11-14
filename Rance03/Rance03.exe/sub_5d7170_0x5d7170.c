// 函数: sub_5d7170
// 地址: 0x5d7170
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_1c
int32_t eax_1 = __security_cookie ^ &var_1c
var_1c = arg3

if (arg2 u< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
    uint32_t edi_1 = *(*(arg1 + 8) + (arg2 << 2))
    
    if (edi_1 != 0)
        int32_t eax_6 = sub_5d5dc0(arg1)
        *(*(arg1 + 8) + (eax_6 << 2)) = sub_5d5980(arg1 + 0x1c)
        *var_1c = eax_6
        
        if (eax_6 s>= 0 && eax_6 u< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
            void* esi_3 = *(*(arg1 + 8) + (eax_6 << 2))
            
            if (esi_3 != 0)
                *(esi_3 + 0x44) = *(edi_1 + 0x44)
                *(esi_3 + 0x38) = *(edi_1 + 0x38)
                *(esi_3 + 0x3c) = *(edi_1 + 0x3c)
                *(esi_3 + 0x40) = *(edi_1 + 0x40)
                
                if (*(edi_1 + 0x48) == 0)
                    int32_t eax_14
                    eax_14.b = 1
                    sub_69a5bc(eax_1 ^ &var_1c)
                    return eax_14
                
                void var_18
                
                if (sub_5d46f0(edi_1, &var_18).b != 0
                        && sub_5d4340(esi_3, *(edi_1 + 0x44), &var_18, 0).b != 0)
                    bool eax_15 = sub_5d4760(esi_3, edi_1) != 0
                    sub_69a5bc(eax_1 ^ &var_1c)
                    return eax_15

int32_t eax_5
eax_5.b = 0
sub_69a5bc(eax_1 ^ &var_1c)
return eax_5

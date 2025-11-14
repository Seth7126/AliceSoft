// 函数: sub_5d9e40
// 地址: 0x5d9e40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_3c
int32_t eax_1 = __security_cookie ^ &var_3c
void* ebp = arg1
void* var_28 = ebp
int32_t result
int32_t edx_2
edx_2:result = muls.dp.d(0x55555556, *(arg3 + 0xc) u>> 2)
int32_t i_1 = (edx_2 u>> 0x1f) + edx_2

if (i_1 s> 0)
    void* edi_1
    
    if (*(arg3 + 0xc) != 0)
        edi_1 = *(arg3 + 8)
    else
        edi_1 = nullptr
    
    if (i_1 s> 0)
        int32_t* edi_2 = edi_1 + 4
        int32_t i
        
        do
            int32_t esi_1 = *edi_2
            int32_t eax_3
            int32_t edx_3
            edx_3:eax_3 = muls.dp.d(0x2aaaaaab, *(ebp + 8) - *(ebp + 4))
            int32_t edx_4 = edx_3 s>> 2
            result = (edx_4 u>> 0x1f) + edx_4
            
            if (esi_1 u< result)
                int32_t var_c_1 = 0xf
                void** eax_7 = *(ebp + 4) + esi_1 * 0x18
                int32_t var_10_1 = 0
                char var_20 = 0
                sub_401ff0(&var_20, eax_7, 0, 0xffffffff)
                void** eax_8 = sub_417ed0(arg2 + 0x114, &var_20)
                void*** eax_11
                void** var_34
                
                if (eax_8 == *(arg2 + 0x114))
                    var_34 = *(arg2 + 0x114)
                    eax_11 = &var_34
                else if (sub_40c3a0(&var_20, &eax_8[4]) != 0)
                    var_34 = *(arg2 + 0x114)
                    eax_11 = &var_34
                else
                    void** var_2c = eax_8
                    eax_11 = &var_2c
                void** eax_13 = *eax_11
                int32_t result_1
                int32_t result_2
                
                if (eax_13 != *(arg2 + 0x114))
                    result_1 = eax_13[0xa]
                    eax_13.b = 1
                    result_2 = result_1
                else
                    result_1 = result_2
                    eax_13.b = 0
                bool var_35_1 = eax_13.b == 0
                
                if (var_c_1 u>= 0x10)
                    j__free(var_20.d)
                
                result = result_1
                ebp = var_28
                
                if (var_35_1 != 0)
                    result = 0
                
                *edi_2 = result
            else
                *edi_2 = 0
            
            edi_2 = &edi_2[3]
            i = i_1
            i_1 -= 1
        while (i != 1)

sub_69a5bc(eax_1 ^ &var_3c)
return result

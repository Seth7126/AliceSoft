// 函数: sub_627e30
// 地址: 0x627e30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_20
int32_t eax_1 = __security_cookie ^ &var_20
int32_t eax_2 = *(arg3 + 0x20)
var_20 = arg4
uint32_t eax_3

if (arg4 s< (*(eax_2 + 8))())
    if (*(arg1 + 0x34) u<= 0)
        switch (*(arg1 + 0x2c) - 0xc)
            case 0
                void* esi_1 = *(arg1 + 0x24)
                void* eax_11 = sub_6227b0(esi_1, sub_600800(arg1, arg2))
                eax_3 = sub_6227b0(esi_1, sub_600800(arg3, var_20))
                
                if (eax_11 != 0 && eax_3 != 0)
                    char* eax_13
                    
                    if (*(eax_3 + 0x14) != 0)
                        eax_13 = *(eax_3 + 0x10)
                    else
                        eax_13 = nullptr
                    
                    void var_1c
                    sub_403360(&var_1c, eax_13)
                    void* ebx
                    ebx.b = sub_625800(eax_11, &var_1c)
                    sub_403320(&var_1c)
                    char* eax_15
                    eax_15.b = ebx.b
                    @__security_check_cookie@4(eax_1 ^ &var_20)
                    return eax_15
            case 1
                void* esi_2 = *(arg1 + 0x24)
                void* eax_17 = sub_6228d0(esi_2, sub_600800(arg1, arg2))
                eax_3 = sub_6228d0(esi_2, sub_600800(arg3, var_20))
                
                if (eax_17 != 0 && eax_3 != 0)
                    int32_t eax_21 = (*(*(eax_17 + 0x20) + 4))(eax_3 + 0x20)
                    @__security_check_cookie@4(eax_1 ^ &var_20)
                    return eax_21
            case 6, 7, 0x27, 0x4d, 0x51
                if (sub_627950(arg1, arg2).b != 0)
                    int32_t edx_2 = arg4 * 2
                    void* esi_5 = *(arg1 + 0x20)
                    int32_t eax_28 = sub_600800(arg3, edx_2 + 1)
                    int32_t eax_31 = (*(esi_5 + 0x3c))(arg2, sub_600800(arg3, edx_2), eax_28)
                    @__security_check_cookie@4(eax_1 ^ &var_20)
                    return eax_31
            case 8, 9, 0x37
                if (sub_627950(arg1, arg2).b != 0)
                    int32_t eax_34 = (*(*(arg1 + 0x20) + 0x38))(arg2, sub_600800(arg3, var_20))
                    @__security_check_cookie@4(eax_1 ^ &var_20)
                    return eax_34
            case 0x33
                void* esi_3 = *(arg1 + 0x24)
                void* eax_23 = sub_622960(esi_3, sub_600800(arg1, arg2))
                eax_3 = sub_622960(esi_3, sub_600800(arg3, var_20))
                
                if (eax_23 != 0 && eax_3 != 0)
                    (**(eax_23 + 0x20))()
                    char* eax_26 = sub_5ff490(eax_23, eax_3)
                    @__security_check_cookie@4(eax_1 ^ &var_20)
                    return eax_26
            default
                int32_t edx_3
                
                if (*(arg3 + 0x14) != 0)
                    edx_3 = *(arg3 + 0x10)
                else
                    edx_3 = 0
                
                if (arg2 u< *(arg1 + 0x14) u>> 2)
                    *(*(arg1 + 0x10) + (arg2 << 2)) = *(edx_3 + (arg4 << 2))
                    int32_t eax_36
                    eax_36.b = 1
                    @__security_check_cookie@4(eax_1 ^ &var_20)
                    return eax_36
    else
        int32_t eax_4
        
        if (*(arg1 + 0x14) != 0)
            eax_4 = *(arg1 + 0x10)
        else
            eax_4 = 0
        
        void* ecx_3 = *(arg1 + 0x24)
        int32_t var_34_1 = *(eax_4 + (arg2 << 2))
        var_20 = ecx_3
        int32_t* eax_5 = sub_622840(ecx_3, var_34_1)
        int32_t ecx_4
        
        if (*(arg3 + 0x14) != 0)
            ecx_4 = *(arg3 + 0x10)
        else
            ecx_4 = 0
        
        eax_3 = sub_622840(var_20, *(ecx_4 + (arg4 << 2)))
        
        if (eax_5 != 0 && eax_3 != 0)
            uint32_t eax_6 = sub_627ce0(eax_5, eax_3)
            @__security_check_cookie@4(eax_1 ^ &var_20)
            return eax_6

eax_3.b = 0
@__security_check_cookie@4(eax_1 ^ &var_20)
return eax_3

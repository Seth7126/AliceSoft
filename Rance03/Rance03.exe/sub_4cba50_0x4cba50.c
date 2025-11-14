// 函数: sub_4cba50
// 地址: 0x4cba50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6beca5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_ec
int32_t eax_2 = __security_cookie ^ &var_ec
int32_t __saved_edi
int32_t var_fc = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInterface::VTable** var_e8 = arg2
struct IInterface::VTable** var_100 = arg2
int32_t* result = sub_4a55e0(*arg1[6] + 0x104)

if (result.b != 0)
    int32_t var_b0_1 = 0xf
    int32_t var_b4_1 = 0
    char var_c4 = 0
    int32_t* eax_7 = sub_402110(&var_c4, 0x6da51f, nullptr)
    int32_t var_c_1 = 0
    int32_t** esi_1 = arg1[3]
    int32_t var_e0
    int32_t* eax_8 = sub_410930(eax_7, &var_c4, &var_e0, "\r\n")
    var_c_1.b = 1
    sub_403110(*esi_1, eax_8, nullptr, 0xffffffff)
    int32_t var_cc
    
    if (var_cc u>= 0x10)
        j__free(var_e0)
    
    int32_t var_c_2 = 0xffffffff
    
    if (var_b0_1 u>= 0x10)
        j__free(var_c4.d)
    
    arg1[5]
    void* var_34
    sub_4cd860(&var_34, &var_e8)
    int32_t var_c_3 = 2
    int32_t var_94
    char* eax_9 = sub_4cb830(&var_94, &var_34)
    var_c_3.b = 3
    char var_ac
    int32_t* eax_10 = sub_410930(eax_9, arg3, &var_ac, U""")
    var_c_3.b = 4
    char* eax_11 = sub_410a20(eax_10, eax_10, &var_c4, eax_9)
    var_c_3.b = 5
    char var_7c
    char* eax_12 = sub_410a80(eax_11.b, eax_11, &var_7c, U""")
    var_c_3.b = 6
    int32_t** esi_3 = arg1[3]
    int32_t* eax_13 = sub_410930(eax_12, eax_12, &var_e0, "\r\n")
    var_c_3.b = 7
    int32_t* eax_14 = sub_403110(*esi_3, eax_13, nullptr, 0xffffffff)
    
    if (var_cc u>= 0x10)
        eax_14 = j__free(var_e0)
    
    int32_t var_68
    
    if (var_68 u>= 0x10)
        eax_14 = j__free(var_7c.d)
    
    int32_t var_68_1 = 0xf
    int32_t var_6c_1 = 0
    var_7c = 0
    
    if (var_b0_1 u>= 0x10)
        eax_14 = j__free(var_c4.d)
    
    int32_t var_b0_2 = 0xf
    int32_t var_b4_2 = 0
    var_c4 = 0
    int32_t var_98
    
    if (var_98 u>= 0x10)
        eax_14 = j__free(var_ac.d)
    
    var_c_3.b = 2
    int32_t var_98_1 = 0xf
    int32_t var_9c_1 = 0
    var_ac = 0
    int32_t var_80
    
    if (var_80 u>= 0x10)
        eax_14 = j__free(var_94)
    
    char var_4c
    sub_410930(eax_14, arg3, &var_4c, "*\t")
    var_c_3.b = 8
    sub_4cd890(&var_e0, arg1[5])
    var_c_3.b = 9
    struct IInterface::VTable** esi_4 = var_e8
    struct IInterface::VTable** var_100_12 = esi_4
    struct partsengine::CPartsList::VTable** eax_16 = sub_4a52a0(*arg1[6] + 0x104)
    int32_t edi_1
    
    if (eax_16 != 0)
        edi_1 = eax_16[2]
    
    struct IInterface::VTable** vFunc_0
    
    if (eax_16 == 0 || esi_4 s< edi_1 || eax_16[1] + edi_1 s<= esi_4)
        vFunc_0 = nullptr
    else
        vFunc_0 = eax_16[3][esi_4 - edi_1].vFunc_0
        
        if (vFunc_0 == 0)
            vFunc_0 = sub_4e7720(eax_16, esi_4)
    
    var_c_3.b = 8
    result.b = sub_4a4ac0(vFunc_0, &var_4c, *arg1, &var_e0).b == 0
    char var_e9_1 = result.b
    int32_t* var_d0
    
    if (var_d0 != 0)
        (*(*var_d0 + 0x10))(var_d0 != &var_e0)
        result.b = var_e9_1
    
    int32_t** ebx
    
    if (result.b != 0)
        ebx.b = 0
    else
        int32_t* esi_5 = sub_410930(result, &var_4c, &var_e0, 0x6e177c)
        var_c_3.b = 0xa
        
        if (esi_5[5] u>= 0x10)
            esi_5 = *esi_5
        
        int32_t ecx_22
        ecx_22.b = sub_4c9de0(arg1[1], &var_34) != 0
        int32_t var_100_17 = ecx_22
        void** eax_24 = sub_4691f0(&var_ac, esi_5)
        var_c_3.b = 0xb
        sub_4cb7a0(arg1[3], eax_24)
        
        if (var_98_1 u>= 0x10)
            j__free(var_ac.d)
        
        var_c_3.b = 8
        int32_t var_98_2 = 0xf
        int32_t var_9c_2 = 0
        var_ac = 0
        
        if (var_cc u>= 0x10)
            j__free(var_e0)
        
        if (sub_4ca9c0(arg1[1], &var_34, &var_4c, *arg1).b == 0)
            ebx.b = 0
        else
            var_c4.d = 0
            int32_t var_c0_1 = 0
            int32_t var_bc_1 = 0
            var_c_3.b = 0xc
            bool cond:7_1 = sub_4c99f0(arg1[1], &var_c4, var_e8, *arg1[6]) != 0
            result = var_c4.d
            
            if (not(cond:7_1))
                ebx.b = 0
            else if (result != var_c0_1)
                int32_t var_68_2 = 0xf
                int32_t var_6c_2 = 0
                var_7c = 0
                var_c_3.b = 0xd
                int32_t* result_1 = result
                int32_t var_e4
                int32_t var_64
                int32_t var_50
                int32_t* eax_32
                
                do
                    arg1[5]
                    var_e4 = *result_1
                    var_c_3.b = 0xe
                    char* eax_29 = sub_4cb830(&var_e0, sub_4cd860(&var_64, &var_e4))
                    var_c_3.b = 0xf
                    char* eax_30 = sub_421670(eax_29.b, 0x6e17b8, &var_94, eax_29)
                    var_c_3.b = 0x10
                    var_c_3.b = 0x11
                    eax_32 = sub_403110(&var_7c, sub_410a80(eax_30.b, eax_30, &var_ac, "", "), 
                        nullptr, 0xffffffff)
                    
                    if (var_98_2 u>= 0x10)
                        eax_32 = j__free(var_ac.d)
                    
                    var_98_2 = 0xf
                    int32_t var_9c_3 = 0
                    var_ac = 0
                    
                    if (var_80 u>= 0x10)
                        eax_32 = j__free(var_94)
                    
                    var_80 = 0xf
                    int32_t var_84_1 = 0
                    var_94.b = 0
                    
                    if (var_cc u>= 0x10)
                        eax_32 = j__free(var_e0)
                    
                    var_c_3.b = 0xd
                    var_cc = 0xf
                    int32_t var_d0_1 = 0
                    var_e0.b = 0
                    
                    if (var_50 u>= 0x10)
                        eax_32 = j__free(var_64)
                    
                    result_1 = &result_1[1]
                while (result_1 != var_c0_1)
                
                int32_t* eax_33 = sub_410930(eax_32, &var_4c, &var_64, 0x6e1798)
                var_c_3.b = 0x12
                char* eax_34 = sub_410ad0(eax_33, eax_33, &var_94, &var_7c)
                var_c_3.b = 0x13
                char* eax_35 = sub_410a80(eax_34.b, eax_34, &var_e0, U"]")
                var_c_3.b = 0x14
                int32_t* eax_36 = sub_4cb7a0(arg1[3], eax_35)
                
                if (var_cc u>= 0x10)
                    eax_36 = j__free(var_e0)
                
                int32_t var_cc_1 = 0xf
                int32_t var_d0_2 = 0
                var_e0.b = 0
                
                if (var_80 u>= 0x10)
                    eax_36 = j__free(var_94)
                
                var_c_3.b = 0xd
                int32_t var_80_1 = 0xf
                int32_t var_84_2 = 0
                var_94.b = 0
                
                if (var_50 u>= 0x10)
                    eax_36 = j__free(var_64)
                
                int32_t* eax_37 = sub_410930(eax_36, &var_4c, &var_64, 0x6e17ac)
                var_c_3.b = 0x15
                int32_t* eax_38 = sub_4cb7a0(arg1[3], eax_37)
                var_c_3.b = 0xd
                
                if (var_50 u>= 0x10)
                    eax_38 = j__free(var_64)
                
                int32_t* esi_6 = var_c4.d
                
                while (true)
                    int32_t edi_3 = *esi_6
                    int32_t* eax_39 = sub_410930(eax_38, &var_4c, &var_64, "*\t")
                    var_c_3.b = 0x16
                    void* ecx_37 = arg1[2]
                    var_e4 = edi_3
                    int32_t* ecx_38 = *(ecx_37 + 0x10)
                    
                    if (ecx_38 == 0)
                        sub_69a52d()
                        noreturn
                    
                    var_c_3.b = 0xd
                    eax_38.b = (*(*ecx_38 + 8))(&var_e4, eax_39).b == 0
                    char var_e9_2 = eax_38.b
                    
                    if (var_50 u>= 0x10)
                        j__free(var_64)
                        eax_38.b = var_e9_2
                    
                    if (eax_38.b != 0)
                        ebx.b = 0
                        break
                    
                    esi_6 = &esi_6[1]
                    
                    if (esi_6 == var_c0_1)
                        ebx.b = 1
                        break
                
                if (var_68_2 u>= 0x10)
                    j__free(var_7c.d)
                
                result = var_c4.d
            else
                ebx.b = 1
            
            if (result != 0)
                j__free(result)
    
    int32_t var_38
    
    if (var_38 u>= 0x10)
        j__free(var_4c.d)
    
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    var_4c = 0
    int32_t var_20
    
    if (var_20 u>= 0x10)
        j__free(var_34)
    
    result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_ec)
return result

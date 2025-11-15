// 函数: sub_619e80
// 地址: 0x619e80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7444ca
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_894 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = arg1[0x74]
int32_t edi = *eax_3
arg1[0x74] = &eax_3[1]
int32_t var_880 = edi
int32_t ecx = eax_3[1]
arg1[0x74] = &eax_3[2]
int32_t eax_6
int32_t edx
edx:eax_6 = muls.dp.d(0x4bda12f7, arg1[0x22] - arg1[0x21])
int32_t edx_1 = edx s>> 5
int32_t edi_1
void* edi_2

if (edi u< (edx_1 u>> 0x1f) + edx_1)
    edi_1 = edi * 0x6c
    edi_2 = edi_1 + arg1[0x21]

struct _EXCEPTION_REGISTRATION_RECORD** result
char var_844
char var_82c
struct _EXCEPTION_REGISTRATION_RECORD** result_2
int32_t var_86c
int32_t var_860

if (edi u>= (edx_1 u>> 0x1f) + edx_1 || edi_1 == neg.d(arg1[0x21]))
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = 0xf
    int32_t var_834_1 = 0
    var_844 = 0
    sub_403490(&var_844, "delegate", 0x2c)
    int32_t var_8_11 = 0
    var_8_11.b = 1
    sub_612230(arg1, "DG_CALL", sub_409350(&var_880, &var_844, &var_82c, &var_880))
    
    if (result_2 u>= 0x10)
        sub_403160(var_82c.d, result_2 + 1, 1)
    
    result = result_1
    int32_t var_818 = 0xf
    int32_t var_81c_1 = 0
    var_82c = 0
    
    if (result u>= 0x10)
        int32_t var_898_26 = 1
        result = sub_403160(var_844.d, result + 1, 1)
else if (sub_61afc0(arg1, *(edi_2 + 0x38), &var_860, &var_86c) != 0)
    int32_t ecx_6 = arg1[0x7f]
    int32_t edx_2 = *(arg1[0x7e] + (ecx_6 << 2) - 4)
    int32_t var_868 = edx_2
    arg1[0x7f] = ecx_6 - 1
    void* eax_14 = sub_622960(&arg1[0x52], edx_2)
    char const* const var_89c_3
    char* var_898_5
    
    if (eax_14 != 0)
        uint32_t var_414[0x100]
        sub_6290c0(&arg1[0x7d], &var_414, *(edi_2 + 0x4c))
        uint32_t (* var_89c_6)[0x100] = &var_414
        int32_t var_87c
        int32_t var_870
        int32_t var_864
        uint32_t var_814[0x100]
        
        if (sub_5ff7e0(eax_14, &var_87c, &var_864, &var_870) != 0)
            if (sub_61b140(arg1, &var_814, var_89c_6, edi_2) != 0)
                sub_629050(&arg1[0x7d], &var_814, *(edi_2 + 0x4c))
                int32_t ecx_28 = sub_405d30(&arg1[0x7d], var_868)
                
                if (var_864 s> 0)
                    int32_t var_898_17 = ecx_28
                    
                    if (sub_61b0a0(arg1, *(edi_2 + 0x38), var_860) != 0)
                        int32_t eax_23 = sub_609d60(&arg1[0x11], var_864)
                        
                        if (eax_23 == 0)
                            sub_403360(&var_82c, 0x76d4a4)
                            int32_t var_8_8 = 0xa
                            var_898_5 = sub_409350(&var_864, &var_82c, &var_844, &var_864)
                            var_8_8.b = 0xb
                            var_89c_3 = "DG_CALL"
                            goto label_619fe3
                        
                        int32_t ecx_40 = var_87c
                        int32_t var_898_21 = var_870
                        
                        if (ecx_40 == 0xffffffff)
                            result = sub_616a80(arg1, eax_23, &var_414, var_898_21)
                            
                            if (result.b == 0)
                                void var_85c
                                sub_403360(&var_85c, 0x76d450)
                                int32_t var_8_10 = 0xd
                                sub_612230(arg1, "DG_CALL", &var_85c)
                                result = sub_403320(&var_85c)
                        else
                            result = sub_616b40(arg1, eax_23, ecx_40, &var_414, var_898_21)
                            
                            if (result.b == 0)
                                sub_403360(&var_82c, 0x76d478)
                                int32_t var_8_9 = 0xc
                                sub_612230(arg1, "DG_CALL", &var_82c)
                                result = sub_403320(&var_82c)
                    else
                        sub_403360(&var_82c, 0x76d4d8)
                        int32_t var_8_7 = 9
                        sub_612230(arg1, "DG_CALL", &var_82c)
                        result = sub_403320(&var_82c)
                else
                    result = sub_61aef0(arg1, *(edi_2 + 0x38), var_860, var_86c)
                    
                    if (result.b == 0)
                        sub_403360(&var_82c, 0x76d018)
                        int32_t var_8_6 = 8
                        sub_612230(arg1, "DG_CALL", &var_82c)
                        result = sub_403320(&var_82c)
            else
                sub_403360(&var_82c, 0x76d040)
                int32_t var_8_5 = 7
                sub_612230(arg1, "DG_CALL", &var_82c)
                result = sub_403320(&var_82c)
        else if (sub_61b250(arg1, var_89c_6, edi_2) != 0)
            if (sub_61aef0(arg1, *(edi_2 + 0x38), var_860, var_86c) != 0)
                result = arg1[0x75] + ecx
                arg1[0x74] = result
            else
                sub_403360(&var_82c, 0x76d064)
                int32_t var_8_4 = 6
                sub_612230(arg1, "DG_CALL", &var_82c)
                result = sub_403320(&var_82c)
        else
            sub_403360(&var_82c, 0x76d08c)
            int32_t var_8_3 = 5
            sub_612230(arg1, "DG_CALL", &var_82c)
            result = sub_403320(&var_82c)
    else
        sub_403360(&var_82c, 0x76cf54)
        int32_t var_8_2 = 3
        var_898_5 = sub_409350(&var_868, &var_82c, &var_844, &var_868)
        var_8_2.b = 4
        var_89c_3 = "DG_CALL"
    label_619fe3:
        sub_612230(arg1, var_89c_3, var_898_5)
        sub_403320(&var_844)
        result = sub_403320(&var_82c)
else
    sub_403360(&var_82c, 0x76cf80)
    int32_t var_8_1 = 2
    sub_612230(arg1, "DG_CALL", &var_82c)
    result = result_2
    
    if (result u>= 0x10)
        int32_t var_898_2 = 1
        result = sub_403160(var_82c.d, result + 1, 1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result

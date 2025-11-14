// 函数: sub_57c1e0
// 地址: 0x57c1e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c6d10
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx_2

if (arg3 s>= 0)
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = muls.dp.d(0x78787879, arg2[7] - arg2[6])
    edx_2 = edx_1 s>> 5

int32_t* eax_10

if (arg3 s< 0 || arg3 s>= (edx_2 u>> 0x1f) + edx_2)
    eax_10 = 0xffffffff
else
    eax_10 = *(arg2[6] + arg3 * 0x44 + 0x18)

int32_t* var_3c = eax_10
int32_t* result_1
sub_42f3d0(arg1 + 0x34, &result_1, &var_3c)
int32_t* result = result_1
bool var_44

if (result != *(arg1 + 0x34))
    void* ecx_6 = result[5]
    var_44 = ((*(ecx_6 + 0x4c) - *(ecx_6 + 0x48)) & 0xfffffffc) s> 0
else
    var_44 = false

int32_t edx_4

if (arg3 s>= 0)
    int32_t eax_12
    int32_t edx_3
    edx_3:eax_12 = muls.dp.d(0x78787879, arg2[7] - arg2[6])
    edx_4 = edx_3 s>> 5

if (arg3 s< 0 || arg3 s>= (edx_4 u>> 0x1f) + edx_4)
    result_1.b = 0
else
    result.b = arg2[6][arg3 * 0x11 + 0x10].b
    result_1.b = result.b

int32_t edx_6

if (arg3 s>= 0)
    int32_t eax_15
    int32_t edx_5
    edx_5:eax_15 = muls.dp.d(0x78787879, arg2[7] - arg2[6])
    edx_6 = edx_5 s>> 5

if (arg3 s< 0 || arg3 s>= (edx_6 u>> 0x1f) + edx_6)
    var_3c.b = 0
else
    result.b = *(&arg2[6][arg3 * 0x11] + 0x41)
    var_3c.b = result.b

int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
int32_t var_4 = 0
int32_t* ebx

if (arg3 s< 0)
    ebx.b = 0
else
    int32_t eax_18
    int32_t edx_7
    edx_7:eax_18 = muls.dp.d(0x78787879, arg2[7] - arg2[6])
    int32_t edx_8 = edx_7 s>> 5
    
    if (arg3 s>= (edx_8 u>> 0x1f) + edx_8)
        ebx.b = 0
    else
        void** eax_22 = arg2[6] + arg3 * 0x44
        char* ecx_22 = &var_28
        
        if (&var_28 != eax_22)
            ecx_22 = sub_401ff0(ecx_22, eax_22, 0, 0xffffffff)
        
        int32_t var_60_1 = 6
        void* eax_23 = sub_4294e0(&var_28, "(both)", ecx_22)
        int32_t ecx_24 = *(arg1 + 0x5c)
        bool var_2c = eax_23 != 0xffffffff
        int32_t eax_24
        int32_t edx_9
        edx_9:eax_24 = muls.dp.d(0x38e38e39, ecx_24 - *(arg1 + 0x58))
        int32_t edx_10 = edx_9 s>> 3
        
        if (sub_57c7e0(arg1, arg2, arg3).b == 0)
            ebx.b = 0
        else
            int32_t* var_38 = nullptr
            int32_t var_34_1 = 0
            var_38 = sub_458460()
            var_4.b = 1
            int32_t* ecx_28
            
            if (sub_57c8d0(arg1, &var_38, arg2, arg3, &var_28, (edx_10 u>> 0x1f) + edx_10, 
                (var_2c.d).b, (var_44.d).b) == 0)
            label_57c42b:
                ecx_28 = var_38
                ebx.b = 0
            else
                ecx_28 = var_38
                void* eax_27 = *ecx_28
                var_44.d = eax_27
                
                if (eax_27 != ecx_28)
                    char result_2 = result_1.b
                    ebx = var_3c
                    
                    do
                        void* var_60_4 = eax_27 + 0x14
                        
                        if (sub_57c4b0(arg1, &var_28, eax_10, (*(eax_27 + 0x10)).b, result_2, ebx)
                                == 0)
                            goto label_57c42b
                        
                        sub_418380(&var_44)
                        eax_27 = var_44.d
                        ecx_28 = var_38
                    while (eax_27 != ecx_28)
                
                ebx.b = 1
            
            sub_57f7c0(&var_38, &var_2c, *ecx_28, ecx_28)
            j__free(var_38)

if (var_14 u>= 0x10)
    j__free(var_28.d)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result

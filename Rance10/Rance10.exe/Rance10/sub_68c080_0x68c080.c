// 函数: sub_68c080
// 地址: 0x68c080
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$?wait_for_one@agent@Concurrency@@SAXIPAPAV12@AAW4agent_status@2@AAII@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3
eax_3.b = arg5
char var_30 = eax_3.b
char var_25 = eax_3.b
struct IShaderParam::graphengine::CShaderParam::VTable* var_68
sub_683210(&var_68, arg4, var_30)
int32_t var_8_1 = 0

if (sub_683350(arg1 + 0x50, &var_68) != 0)
    goto label_68c14c

int32_t* ecx_2 = *(arg1 + 0x4c)

if (ecx_2 != 0)
    (*(*ecx_2 + 4))(eax_2)
    *(arg1 + 0x4c) = 0

int32_t* ecx_3 = *(arg1 + 0x48)

if (ecx_3 != 0)
    (*(*ecx_3 + 4))(eax_2)
    *(arg1 + 0x48) = 0

sub_683600(arg1 + 0x50)
void* var_1bc_2 = arg1 + 0x50
bool result

if (sub_68cd00(arg1, arg4) == 0)
labelid_1:
    result = false
else if (sub_68cda0(arg1, arg4, var_30) == 0)
labelid_1:
    result = false
else
    sub_683440(arg1 + 0x50, &var_68)
label_68c14c:
    long double x87_r0
    long double x87_r1
    long double x87_r2
    
    if ((*(*arg4 + 4))(eax_2) != 1)
        long double x87_r3
        long double x87_r4
        long double x87_r5
        long double x87_r6
        long double x87_r7
        
        if (sub_68f8e0(arg1, x87_r0, x87_r1, x87_r2, arg2) == 0)
        labelid_1:
            result = false
        else if (sub_68fbc0(arg1, x87_r3, x87_r4, x87_r5, x87_r6, x87_r7, arg2, arg3, arg4) == 0)
        labelid_1:
            result = false
        else if (sub_68fd00(arg3, arg4) == 0)
        labelid_1:
            result = false
        else
            int32_t* var_1bc_17 = arg4
            
            if (sub_68fdc0(arg2, arg3) == 0)
            labelid_1:
                result = false
            else
                int32_t var_1bc_18 = arg7
                int32_t var_1c0_11 = arg6
                
                if (sub_690780(arg1, x87_r0, x87_r1, x87_r2, x87_r3, x87_r4, x87_r5, x87_r6, 
                    x87_r7, arg2, arg3) == 0)
                labelid_1:
                    result = false
                else
                    int32_t i = 0
                    void* ebx_1 = arg1 + 0x98
                    
                    do
                        if (sub_684c10(ebx_1, i, *(arg1 + 4)) == 0)
                            goto label_68c292_1
                        
                        i += 1
                        ebx_1 += 0x14
                    while (i s< 4)
                    
                    if (sub_684c60(arg1 + 0xe8, *(arg1 + 4)) == 0)
                    labelid_1:
                        result = false
                    else
                        result = true
    else
        void var_168
        void var_128
        void var_e8
        int128_t* eax_18 = sub_6cad30(&var_168, 
            (**arg3)(sub_6cad30(&var_128, 
                (*(*arg2 + 0xc))(sub_6cad30(&var_e8, (*(*arg2 + 0x18))())))))
        float var_1a8[0x4][0x4]
        float (* eax_19)[0x4] = sub_6cb020(eax_18, eax_18, &var_1a8)
        float var_a8[0x4][0x4]
        sub_6cb020(eax_19, eax_19, &var_a8)
        
        if (sub_68cdf0(arg1, &var_a8) == 0)
        labelid_1:
            result = false
        else
            int32_t ecx_21
            result, ecx_21 = sub_68ce90((*(*arg3 + 4))((*(*arg3 + 8))(arg4)))
            
            if (result == 0)
            labelid_1:
                result = false
            else if (sub_68cff0(arg2, arg3, ecx_21) == 0)
            labelid_1:
                result = false
            else if (sub_684c10(arg1 + 0xfc, 0, *(arg1 + 4)) == 0)
            labelid_1:
                result = false
            else if (sub_684c10(arg1 + 0x110, 1, *(arg1 + 4)) == 0)
            labelid_1:
                result = false
            else if (sub_684c10(arg1 + 0x124, 3, *(arg1 + 4)) == 0)
            labelid_1:
                result = false
            else if (var_25 == 0)
                result = true
            else
                void* eax_24 = *(arg1 + 4)
                int32_t var_24 = arg6
                int32_t var_20_1 = 0
                int32_t var_1c_1 = 0
                int32_t var_18_1 = 0
                
                if (sub_684cb0(arg1 + 0x138, &var_24, *(eax_24 + 0x38)) == 0)
                label_68c292:
                    result = false
                else if (sub_684c60(arg1 + 0x138, *(arg1 + 4)) != 0)
                    result = true
                else
                label_68c292_1:
                    result = false

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result

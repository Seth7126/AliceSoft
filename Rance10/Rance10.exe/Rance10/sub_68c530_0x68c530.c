// 函数: sub_68c530
// 地址: 0x68c530
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_21c = 0xffffffff
int32_t (* var_220)(void* arg1) = sub_747488
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_218
int32_t eax_2 = __security_cookie ^ &var_218
fsbase->NtTib.ExceptionList = &ExceptionList
void var_268
void* ecx = &var_268
sub_683180(ecx)
int32_t var_21c_1 = 0
char result

if (sub_683540(ecx) == 0)
    result = 0
else
    if (sub_683350(arg1 + 0x50, &var_268) != 0)
        goto label_68c617
    
    int32_t* ecx_2 = *(arg1 + 0x4c)
    
    if (ecx_2 != 0)
        (*(*ecx_2 + 4))(eax_2)
        *(arg1 + 0x4c) = 0
    
    int32_t* ecx_3 = *(arg1 + 0x48)
    
    if (ecx_3 != 0)
        (*(*ecx_3 + 4))(eax_2)
        *(arg1 + 0x48) = 0
    
    sub_683600(arg1 + 0x50)
    void* var_27c_2 = arg1 + 0x50
    
    if (sub_68cd00(arg1, &var_268) == 0)
        result = 0
    else if (sub_68cda0(arg1, &var_268, 0) == 0)
        result = 0
    else
        sub_683440(arg1 + 0x50, &var_268)
    label_68c617:
        float xmm0_1 = 1f / arg5
        void* eax_6 = *(arg1 + 4)
        int32_t var_10_1 = 0xbf800000
        int32_t var_c_1 = 0x3f800000
        float var_18 = xmm0_1 + xmm0_1
        float var_14_1 = -2f / arg6
        
        if (sub_684cb0(arg1 + 0x14c, &var_18, *(eax_6 + 0x38)) == 0)
            result = 0
        else
            float xmm1_2 = arg2 * arg3
            float xmm0_4 = (zx.o(0)).d
            __builtin_memset(&var_218, 0, 0x200)
            xmm1_2 f- 0
            int32_t eax_7
            eax_7:1.b = (xmm1_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_2, 0f) ? 1 : 0) << 2
                | (xmm1_2 < 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                xmm0_4 = arg4 * arg4 / xmm1_2 * arg5 * 27.7777767f
            
            void* eax_8 = *(arg1 + 4)
            int32_t xmm1
            var_218 = xmm1
            float var_214_1 = arg2
            float var_210_1 = xmm0_4
            
            if (sub_684cb0(arg1 + 0x160, &var_218, *(eax_8 + 0x38)) == 0)
                result = 0
            else if (sub_684c10(arg1 + 0x14c, 0, *(arg1 + 4)) == 0)
                result = 0
            else if (sub_684c60(arg1 + 0x160, *(arg1 + 4)) == 0)
                result = 0
            else
                result = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_218)
return result

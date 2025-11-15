// 函数: sub_5ac200
// 地址: 0x5ac200
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f0f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg2
int32_t var_20 = 0
int32_t* edi = arg5
int32_t var_8_1 = 0

if (ebx != arg4 && edi != arg6)
    bool cond:1_1
    
    do
        int32_t* esi_1 = *ebx
        (*(**edi + 0xc))(eax_2)
        float var_18_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
        unimplemented  {fstp dword [ebp-0x14], st0}
        (*(*esi_1 + 0xc))()
        void* ecx_2 = arg8
        float var_1c_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
        unimplemented  {fstp dword [ebp-0x18], st0}
        int16_t top = top + 2
        int32_t* edx = *(ecx_2 + 4)
        
        if (var_18_1 <= var_1c_1)
            if (edx u>= *(ecx_2 + 8))
                if (edx != 0)
                    *edx = *ebx
                    ecx_2 = arg8
                
                *(ecx_2 + 4) += 4
                *(arg8 + 8) = *(ecx_2 + 4)
            else
                *edx = *ebx
                *(arg8 + 4) += 4
            
            ebx = &ebx[1]
            cond:1_1 = ebx != arg4
        else if (edx u>= *(ecx_2 + 8))
            if (edx != 0)
                *edx = *edi
                ecx_2 = arg8
            
            *(ecx_2 + 4) += 4
            edi = &edi[1]
            cond:1_1 = edi != arg6
            *(arg8 + 8) = *(ecx_2 + 4)
        else
            int32_t eax_7 = *edi
            edi = &edi[1]
            *edx = eax_7
            *(arg8 + 4) += 4
            cond:1_1 = edi != arg6
    while (cond:1_1)

int32_t var_50 = 0
int32_t var_4c = 0
void* var_48 = arg8
int32_t var_34
arg8 = sub_5772b0(arg8, ebx, &var_34, arg4, 0, 0)[4]
int32_t eax_18 = var_34

if (eax_18 != 0)
    _free(eax_18)

if (arg9 == 0)
    int32_t var_50_1 = 0
    int32_t var_4c_1 = 0
    void* var_48_2 = arg8
    arg8 = sub_5772b0(arg8, edi, &var_34, arg6, 0, 0)[4]
    int32_t eax_22 = var_34
    
    if (eax_22 != 0)
        _free(eax_22)

arg3[4] = arg8
*arg3 = 0
arg3[1] = 0
arg3[2] = 0
arg3[3] = 0

if (arg7 != 0)
    _free(arg7)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3

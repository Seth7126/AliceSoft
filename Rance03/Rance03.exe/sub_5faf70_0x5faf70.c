// 函数: sub_5faf70
// 地址: 0x5faf70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc2f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
fsbase->NtTib.ExceptionList = &ExceptionList
struct viewtrans::CWriteVB::VTable* const var_10_1 = &viewtrans::CWriteVB::`vftable'
int32_t var_4 = 0
int32_t __saved_edi
int32_t* edx = (*(**(arg1 + 0x64) + 0x18))(__security_cookie ^ &__saved_edi)
int32_t* result

if (edx != 0)
    void* i = *(arg1 + 0x54)
    
    if (i != *(arg1 + 0x58))
        void* esi_1 = i + 0x24
        
        do
            int32_t xmm0_1 = *(esi_1 - 4)
            int32_t xmm1_1 = *esi_1
            *edx = *(esi_1 - 8)
            edx[1] = xmm0_1
            edx[2] = xmm1_1
            __builtin_memset(&edx[3], 0, 0x18)
            edx[9] = 0xffffffff
            edx[0xa] = 0xffffffff
            int32_t xmm0_2 = *(esi_1 + 8)
            edx[0xb] = *(esi_1 + 4)
            edx[0xc] = xmm0_2
            __builtin_memset(&edx[0xd], 0, 0x24)
            int32_t xmm0_3 = *(esi_1 + 0x1c)
            int32_t xmm1_2 = *(esi_1 + 0x20)
            edx[0x16] = *(esi_1 + 0x18)
            edx[0x17] = xmm0_3
            edx[0x18] = xmm1_2
            __builtin_memset(&edx[0x19], 0, 0x18)
            edx[0x1f] = 0xffffffff
            edx[0x20] = 0xffffffff
            int32_t xmm0_4 = *(esi_1 + 0x28)
            edx[0x21] = *(esi_1 + 0x24)
            edx[0x22] = xmm0_4
            __builtin_memset(&edx[0x23], 0, 0x24)
            int32_t xmm0_5 = *(esi_1 + 0x3c)
            int32_t xmm1_3 = *(esi_1 + 0x40)
            edx[0x2c] = *(esi_1 + 0x38)
            edx[0x2d] = xmm0_5
            edx[0x2e] = xmm1_3
            __builtin_memset(&edx[0x2f], 0, 0x18)
            edx[0x35] = 0xffffffff
            edx[0x36] = 0xffffffff
            int32_t xmm0_6 = *(esi_1 + 0x48)
            edx[0x37] = *(esi_1 + 0x44)
            edx[0x38] = xmm0_6
            __builtin_memset(&edx[0x39], 0, 0x24)
            i += 0x78
            edx = &edx[0x42]
            esi_1 += 0x78
        while (i != *(arg1 + 0x58))
    
    if ((*(**(arg1 + 0x64) + 0x1c))().b != 0)
        result.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result

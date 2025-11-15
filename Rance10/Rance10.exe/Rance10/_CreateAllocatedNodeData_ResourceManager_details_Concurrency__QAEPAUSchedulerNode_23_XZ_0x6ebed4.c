// 函数: ?CreateAllocatedNodeData@ResourceManager@details@Concurrency@@QAEPAUSchedulerNode@23@XZ
// 地址: 0x6ebed4
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x24
int32_t (* var_c)(void* arg1) = __ehhandler$?CreateAllocatedNodeData@ResourceManager@details@Concurrency@@QAEPAUSchedulerNode@23@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
void* const var_48_7 = &data_6ebee0
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
void* var_28 = esi
int32_t eax = *(esi + 0x18)
int32_t var_48 = 0x34
int32_t ecx
ecx.b = mulu.dp.d(eax, 0x34) u>> 0x20 != 0
int32_t var_48_1 = neg.d(ecx) | (eax * 0x34)
uint32_t (* result)[0x4] = sub_6e8787()
_memset(result, 0, *(esi + 0x18) * 0x34)
int32_t i_1 = 0

if (*(esi + 0x18) u> 0)
    int32_t ecx_4 = 0
    uint32_t* ebx = &(*result)[1]
    int32_t var_20_1 = 0
    int32_t i
    
    do
        void* eax_4 = *(esi + 0x48) + ecx_4
        int32_t var_48_2 = 6
        __builtin_memcpy(&ebx[-1], eax_4, 0x18)
        uint32_t edi_2 = *ebx
        int32_t var_48_3 = 0x34
        uint32_t var_30_1 = edi_2
        int32_t ecx_5
        ecx_5.b = mulu.dp.d(edi_2, 0x34) u>> 0x20 != 0
        int32_t var_48_4 = neg.d(ecx_5) | (edi_2 * 0x34)
        uint32_t (* esi_2)[0x4] = sub_6e8787()
        uint32_t (* var_34_1)[0x4] = esi_2
        int32_t var_8 = 0
        
        if (esi_2 == 0)
            esi_2 = nullptr
        else
            int32_t var_50_1 = 0x34
            sub_448310(esi_2, 0x34, edi_2, Concurrency::details::SchedulerCore::SchedulerCore)
        
        void* eax_8 = *ebx * 0x34
        int32_t var_8_1 = 0xffffffff
        ebx[0xb] = esi_2
        _memset(esi_2, 0, eax_8)
        int32_t j_1 = 0
        
        if (*ebx u<= 0)
            int32_t var_48_6 = 0x34
        else
            int32_t* edx_1 = nullptr
            int32_t edi_3 = 0
            int32_t var_18_1 = 0
            int32_t j
            
            do
                int32_t* esi_4 = *(eax_4 + 0x20) + edi_3
                int32_t* edi_5 = ebx[0xb] + edx_1
                *edi_5 = *esi_4
                void* edi_6 = &edi_5[1]
                void* esi_5 = &esi_4[1]
                *edi_6 = *esi_5
                *(edi_6 + 4) = *(esi_5 + 4)
                *(edx_1 + ebx[0xb]) = 1
                int32_t ecx_12 = *(eax_4 + 0x20) + 0x10 + var_18_1
                edi_3 = var_18_1 + 0x24
                var_18_1 = edi_3
                *(edx_1 + ebx[0xb] + 0x14) = ecx_12
                j = j_1 + 1
                edx_1 = &edx_1[0xd]
                j_1 = j
            while (j u< *ebx)
        
        ebx = &ebx[0xd]
        esi = var_28
        i = i_1 + 1
        ecx_4 = var_20_1 + 0x28
        i_1 = i
        var_20_1 = ecx_4
    while (i u< *(esi + 0x18))

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6ec00a
return result

// 函数: sub_6f1499
// 地址: 0x6f1499
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x58
int32_t (* var_c)(void* arg1) = sub_74a9ab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_6c_16 = ebx
int32_t esi
int32_t var_70_7 = esi
int32_t edi
int32_t var_74_3 = edi
int32_t __saved_ebp
int32_t eax_73 = __security_cookie ^ &__saved_ebp
void* const var_7c_6 = &data_6f14a5
int32_t var_8_4 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx_1 = arg1
int32_t* var_48 = ebx_1
void* edi_1 = nullptr
ebx_1[0x6d] = 0
ebx_1[5] = 0
ebx_1[0xb] = 0
ebx_1[0x6a] = j_Concurrency::details::ResourceManager::CreateSingleton()
ebx_1[0x5d] = Concurrency::details::platform::GetNextAsyncId()
ebx_1[0xb] = j_sub_6ed724()
int32_t var_7c = 0x10
int32_t esi_1 = Concurrency::details::platform::__GetNumaHighestNodeNumber() + 1
ebx_1[0xa] = esi_1
int32_t var_7c_1 = 4
int32_t ecx
ecx.b = mulu.dp.d(esi_1, 0x10) u>> 0x20 != 0
int32_t var_3c = esi_1
int32_t ecx_2 = neg.d(ecx) | (esi_1 * 0x10)
int32_t eax_6
eax_6.b = ecx_2 + 4 u< ecx_2
int32_t var_7c_2 = neg.d(eax_6) | (ecx_2 + 4)
int32_t* eax_9 = sub_6e8787()
int32_t* var_38 = eax_9
int32_t var_8 = 0

if (eax_9 != 0)
    int32_t (__fastcall* var_7c_3)(void* arg1) =
        Concurrency::details::SchedulerBase::NumaInformation::~NumaInformation
    edi_1 = &eax_9[1]
    *eax_9 = esi_1
    `eh vector constructor iterator'(edi_1, 0x10, esi_1, sub_6ef796)

int32_t eax_10 = ebx_1[0xb]
int32_t var_8_1 = 0xffffffff
int32_t var_7c_4 = 4
ebx_1[7] = edi_1
int32_t ecx_5
ecx_5.b = mulu.dp.d(eax_10, 4) u>> 0x20 != 0
int32_t var_7c_5 = neg.d(ecx_5) | (eax_10 * 4)
ebx_1[9] = sub_6e8787()
int32_t eax_13 = ebx_1[0xb]
int32_t ecx_8
ecx_8.b = mulu.dp.d(eax_13, 4) u>> 0x20 != 0
int32_t var_80 = neg.d(ecx_8) | (eax_13 * 4)
ebx_1[8] = sub_6e8787()
_memset(ebx_1[9], 0, ebx_1[0xb] << 2)
_memset(ebx_1[8], 0, ebx_1[0xb] << 2)
int32_t esi_2 = *(*ebx_1 + 0x24)
j_sub_4033e0()
void* eax_21 = esi_2(eax_73)
int32_t esi_3 = 0
ebx_1[0x2c] = eax_21
int32_t var_18 = 0
int32_t var_30 = 0
*(eax_21 + 0x30) |= 4
int32_t eax_22 = j_Concurrency::details::ResourceManager::GetCoreCount()
int32_t i = 0

if (ebx_1[0xa] s> 0)
    do
        Concurrency::details::QuickBitSet::Grow(ebx_1[7] + esi_3, ebx_1[0xb])
        Concurrency::details::QuickBitSet::Grow(ebx_1[7] + 8 + esi_3, eax_22)
        i += 1
        esi_3 += 0x10
    while (i s< ebx_1[0xa])

int32_t esi_4 = *(*ebx_1[0x6a] + 0x10)
j_sub_4033e0()
int32_t* i_1 = esi_4()
int32_t* i_2 = i_1

if (i_1 != 0)
    int32_t edi_3 = var_18
    
    do
        void var_58
        Concurrency::details::QuickBitSet::QuickBitSet(&var_58, eax_22)
        int32_t var_8_2 = 1
        int32_t esi_5 = *(*i_1 + 4)
        j_sub_4033e0()
        int32_t var_20 = esi_5()
        int32_t esi_6 = *(*i_2 + 8)
        j_sub_4033e0()
        int32_t eax_28 = esi_6()
        int32_t eax_29 = eax_28 << 4
        uint32_t esi_8 = var_20 u>> 5
        int32_t var_24_1 = edi_3
        int32_t edx_1 = *(ebx_1[7] + eax_29 + 4)
        *(edx_1 + (esi_8 << 2)) |= 1 << ((var_20 & 0x1f) u% 0x20)
        int32_t esi_9 = *(*i_2 + 0x10)
        j_sub_4033e0()
        int32_t* j_5 = esi_9()
        int32_t* j_2 = j_5
        int32_t* j = j_5
        int32_t* j_3 = j
        int32_t var_54
        
        if (j_5 != 0)
            do
                int32_t esi_10 = *(*j + 4)
                j_sub_4033e0()
                int32_t var_2c = esi_10()
                Concurrency::details::Hash<uint32_t,uint32_t>::Insert(&ebx_1[0x57], &var_2c, 
                    &var_20)
                Concurrency::details::Hash<uint32_t,uint32_t>::Insert(&ebx_1[0x5a], &var_2c, 
                    &var_30)
                uint32_t edi_4 = edi_3 u>> 5
                int32_t esi_12 = var_18 & 0x1f
                *(var_54 + (edi_4 << 2)) |= 1 << (esi_12 u% 0x20)
                int32_t edx_2 = *(eax_29 + ebx_1[7] + 0xc)
                *(edx_2 + (edi_4 << 2)) |= 1 << (esi_12 u% 0x20)
                edi_3 = var_18 + 1
                var_18 = edi_3
                int32_t* eax_43 = *j_3
                var_30 = edi_3
                int32_t esi_13 = *eax_43
                j_sub_4033e0()
                int32_t* j_4 = esi_13()
                j = j_4
                j_3 = j_4
            while (j != 0)
            
            j_5 = j_2
        
        int32_t* eax_44 = sub_6e810c(0xc0)
        int32_t* var_4c_1 = eax_44
        var_8_2.b = 2
        int32_t* var_1c_1
        
        if (eax_44 == 0)
            var_1c_1 = nullptr
        else
            var_1c_1 = Concurrency::details::SchedulingRing::SchedulingRing(eax_44, ebx_1, var_20)
        
        var_8_2.b = 1
        int32_t* eax_46 = sub_6e810c(0x88)
        int32_t* var_50_1 = eax_46
        var_8_2.b = 3
        int32_t* eax_47
        
        if (eax_46 == 0)
            eax_47 = nullptr
        else
            eax_47 = Concurrency::details::SchedulingNode::SchedulingNode(eax_46, &var_58, eax_28, 
                var_1c_1)
        
        int32_t* ecx_48 = var_1c_1
        var_8_2.b = 1
        ecx_48[1] = eax_47
        
        if (j_5 != 0)
            int32_t* j_1 = j_2
            void* var_3c_2 = &eax_47[4]
            
            do
                int32_t var_40 = var_24_1
                int32_t esi_14 = *(*j_1 + 4)
                j_sub_4033e0()
                int32_t var_44 = esi_14()
                Concurrency::details::Hash<uint32_t,uint32_t>::Insert(&eax_47[4], &var_44, &var_40)
                var_24_1 += 1
                int32_t esi_15 = **j_1
                j_sub_4033e0()
                j_1 = esi_15()
            while (j_1 != 0)
            
            ebx_1 = var_48
            edi_3 = var_18
            ecx_48 = var_1c_1
        
        int32_t edx_3 = var_20
        *(ebx_1[9] + (edx_3 << 2)) = ecx_48
        *(ebx_1[8] + (edx_3 << 2)) = eax_47
        int32_t esi_16 = **i_2
        j_sub_4033e0()
        int32_t var_8_3 = 0xffffffff
        i_1 = esi_16()
        i_2 = i_1
        _free(var_54)
    while (i_1 != 0)

Concurrency::details::ReferenceCountedQuickBitSet::Grow(&ebx_1[0xf], var_18)
Concurrency::details::ReferenceCountedQuickBitSet::Grow(&ebx_1[0x12], var_18)
Concurrency::details::QuickBitSet::Grow(&ebx_1[0x15], var_18)
Concurrency::details::ReferenceCountedQuickBitSet::Grow(&ebx_1[0xc], var_18)
int32_t esi_18 = var_18 << 5
int32_t var_6c_13 = 4
int32_t ecx_57
ecx_57.b = mulu.dp.d(esi_18, 4) u>> 0x20 != 0
int32_t var_6c_14 = neg.d(ecx_57) | (esi_18 * 4)
int32_t ecx_60 = 0
ebx_1[0x17] = sub_6e8787()

if (esi_18 != 0)
    do
        *(ebx_1[0x17] + (ecx_60 << 2)) = 0
        ecx_60 += 1
    while (ecx_60 u< esi_18)

void* edi_6 = *ebx_1[0x6a]
int32_t esi_19 = *(*ebx_1 + 0x34)
j_sub_4033e0()
int32_t eax_65 = esi_19(0x10000)
*(edi_6 + 8)
j_sub_4033e0()
ebx_1[0x6a]
int32_t* eax_66 = (*(edi_6 + 8))(eax_65)
ebx_1[0x6b] = eax_66
int32_t esi_20 = **eax_66
j_sub_4033e0()
esi_20(0)
ebx_1[0x5e] = Concurrency::details::SchedulerBase::GetValidSchedulingRingIndex(ebx_1, 0)
int32_t eax_68 = ___crtCreateSemaphoreExW(0, 0, 0x7fffffff, 0, 0, 0x1f0003)
ebx_1[0x5f] = eax_68

if (eax_68 != 0)
    int32_t esi_21 = *(*ebx_1 + 0x4c)
    j_sub_4033e0()
    esi_21()
    int32_t var_74_2 = 4
    int32_t result = Concurrency::details::SchedulerBase::TraceSchedulerEvent(1, 4, ebx_1[0x5d])
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_6f193b
    return result

enum WIN32_ERROR eax_69 = GetLastError()

if (eax_69 s> NO_ERROR)
    eax_69 = zx.d(eax_69.w) | 0x80070000

struct std::exception::Concurrency::scheduler_resource_allocation_error::VTable* var_68
Concurrency::scheduler_resource_allocation_error::scheduler_resource_allocation_error(&var_68, 
    eax_69)
sub_70021b(&var_68, &data_7dd12c)
noreturn

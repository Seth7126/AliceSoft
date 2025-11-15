// 函数: sub_6fb353
// 地址: 0x6fb353
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = Concurrency::details::SchedulerBase::FindCurrentNode(arg1[1])
void* ebx

if (eax == 0)
    ebx = Concurrency::details::SchedulerBase::GetNextSchedulingRing(arg1[1])
else
    ebx = *(eax + 4)

void var_28
sub_6f887a(*(ebx + 4), &var_28)
int32_t* esi = arg2
void* var_8 = ebx
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_c = 0

if (Concurrency::location::_FastNodeIntersects(&var_28, esi) == 0)
    char i
    
    do
        ebx = sub_6f119d(arg1[1], 0, ebx)
        void var_38
        Concurrency::location::_Assign(&var_28, sub_6f887a(*(ebx + 4), &var_38))
        
        if (ebx == var_8)
            esi = &var_18
        
        i = Concurrency::location::_FastNodeIntersects(&var_28, esi)
    while (i == 0)
    arg2 = esi

int32_t esi_1 = *(*arg1 + 0x24)
j_sub_4033e0()
void* result = esi_1(esi, ebx)

if (result == 0 && arg3 != result.b)
    Concurrency::details::_NonReentrantLock::_Acquire(&arg1[2])
    int32_t esi_2 = *(*arg1 + 0x24)
    j_sub_4033e0()
    result = esi_2(arg2, ebx)
    
    if (result == 0)
        result = sub_6fae1d(arg1, arg2, ebx)
    
    arg1[2] = 0

return result

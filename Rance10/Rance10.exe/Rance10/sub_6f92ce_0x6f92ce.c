// 函数: sub_6f92ce
// 地址: 0x6f92ce
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = *(arg1 + 0xa0)
int32_t edx = *(arg1 + 0x1c)
int32_t var_14 = 0
void* var_c = nullptr
int32_t esi = *(edi + 0x48)
j_sub_4033e0()
void* ebx_1

if (esi(&var_14, edx, 0, 0x19) == 0)
    ebx_1 = sub_6f0fe5(*(arg1 + 0x20), 1)
    *arg2 = ebx_1 != 0
else
    if (var_14 == 1)
        return var_c
    
    ebx_1 = sub_6f0fe5(*(arg1 + 0x20), 1)
    
    if (ebx_1 == 0)
        int32_t edx_2 = *(arg1 + 0x1c)
        int32_t esi_3 = *(*(arg1 + 0xa0) + 0x48)
        j_sub_4033e0()
        
        if (esi_3(&var_14, edx_2, 0, 1) != 0)
            return Concurrency::details::WorkItem::Bind(&var_14)
    else if (Concurrency::details::WorkItem::ResolveToken(&var_14) == 0)
        int32_t edx_1 = *(arg1 + 0x1c)
        int32_t esi_2 = *(*(arg1 + 0xa0) + 0x48)
        j_sub_4033e0()
        
        if (esi_2(&var_14, edx_1, 0, 7) == 0)
            *arg2 = true
        else
            if (var_14 == 1)
                sub_6f21a9(*(arg1 + 0x20), ebx_1, 1)
                return Concurrency::details::WorkItem::Bind(&var_14)
            
            *arg3 = var_14 == 4
            Concurrency::details::WorkItem::BindTo(&var_14, ebx_1)
    else
        *arg3 = var_14 == 4
        Concurrency::details::WorkItem::BindTo(&var_14, ebx_1)

return ebx_1

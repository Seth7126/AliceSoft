// 函数: sub_6ee0eb
// 地址: 0x6ee0eb
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_10 = 0
void* edi = arg1
void* var_1c = edi
uint32_t (* result)[0x4] = Concurrency::details::ResourceManager::InitializeRMBuffers(arg1)
void* esi = *(edi + 0x64)
void* i

if (esi == 0)
    i = nullptr
else
    i = *(esi + 0x18)

void* i_1 = i

while (i != 0)
    int32_t* ebx_1 = i + 0x40
    _memset(ebx_1, 0, 0x38)
    Concurrency::details::ResourceManager::PopulateCommonAllocationData(edi, var_10, i, ebx_1)
    
    if (*(i + 0xcc) == 0)
        ebx_1[9] = *(i + 0xa0)
    else
        int32_t eax_1 = *(i + 0x78)
        int32_t* edi_1 = *(i + 8)
        int32_t ebx_2 = *(i + 0xa0)
        int32_t var_18 = 0
        int32_t var_14 = 0
        int32_t var_c = eax_1
        void* esi_1 = *edi_1
        *(esi_1 + 4)
        j_sub_4033e0()
        (*(esi_1 + 4))(&var_18, &var_14, &var_c)
        i = i_1
        int32_t eax_2 =
            Concurrency::details::HillClimbing::Update(*(i + 0x38), ebx_2, var_18, var_14, var_c)
        int16_t top = top - 1
        unimplemented  {call 0x6f59a9}
        ebx_1 = i + 0x40
        ebx_1[9] = eax_2
        
        if (eax_2 u> *(i + 0xa0))
            ebx_1[9] = Concurrency::details::SchedulerProxy::AdjustAllocationIncrease(i, eax_2)
        
        *(i + 0x78) = var_c
    
    int32_t edi_2 = *(i + 0xa0)
    char eax_6
    
    if (edi_2 != 0)
        if (ebx_1[5] == 0 && edi_2 u<= ebx_1[9])
            goto label_6ee1f1
        
        eax_6 = 0
    else if (*(i + 0xc4) u<= 0 || edi_2 u> ebx_1[9])
        eax_6 = 0
    else
    label_6ee1f1:
        
        if (edi_2 u>= Concurrency::details::SchedulerProxy::DesiredHWThreads(i))
            eax_6 = 0
        else
            eax_6 = 1
    
    edi = var_1c
    *(ebx_1 + 0x21) = eax_6
    result = *(edi + 0x54)
    (*result)[var_10] = ebx_1
    var_10 += 1
    
    if (i == *(edi + 0x64))
        i = nullptr
    else
        i = *(i + 0x18)
    
    i_1 = i

return result

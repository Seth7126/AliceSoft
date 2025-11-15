// 函数: sub_683720
// 地址: 0x683720
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 8)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 8) = 0

int32_t* ecx_1 = *(arg1 + 4)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(arg1 + 4) = 0

void* result = (*(*arg3 + 0xc))(0x100, 0x100, 0x20)
*(arg1 + 4) = result

if (result != 0)
    *(arg1 + 0xc)
    void* esi_1
    int32_t* edi
    result, esi_1 = sub_6837b0(result, edi)
    
    if (result.b != 0)
        result = (*(*arg2 + 0x54))()
        *(esi_1 + 8) = result
        
        if (result != 0)
            return (*(*result + 8))(*(esi_1 + 4), 0) != 0

result.b = 0
return result

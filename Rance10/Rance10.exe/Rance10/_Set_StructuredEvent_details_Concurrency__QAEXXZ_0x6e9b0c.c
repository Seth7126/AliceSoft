// 函数: ?Set@StructuredEvent@details@Concurrency@@QAEXXZ
// 地址: 0x6e9b0c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = *arg1
int32_t* result = edi

if (result == *arg1)
    *arg1 = 1
else
    result = *arg1

while (result != edi)
    edi = result
    
    if (result == *arg1)
        *arg1 = 1
    else
        result = *arg1

if (edi u> 1 && edi != 0)
    int32_t* i
    
    do
        i = *edi
        int32_t esi_1 = *(*edi[1] + 0xc)
        j_sub_4033e0()
        result = esi_1()
        edi = i
    while (i != 0)

return result

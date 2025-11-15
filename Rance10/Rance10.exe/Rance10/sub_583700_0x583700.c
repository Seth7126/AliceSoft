// 函数: sub_583700
// 地址: 0x583700
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg2
int32_t* edx

if (edi[5] u< 0x10)
    edx = edi
else
    edx = *edi

if (arg1[6] u< 0x10)
    arg2 = &arg1[1]
else
    arg2 = arg1[1]

int32_t ebp = edi[4]
int32_t eax_2 = ebp

if (arg1[5] u< ebp)
    eax_2 = arg1[5]

int32_t eax_3 = sub_406ac0(eax_2, edx, arg2, eax_2)
void* result

if (eax_3 == 0)
    result = arg1[5]

if (eax_3 != 0 || result u< ebp || result u> ebp)
    if (&arg1[1] != edi)
        sub_403590(&arg1[1], edi, 0, 0xffffffff)
    
    result = *arg1 - 1
    
    if (result u> 0xa)
        result.b = 0
        return result
    
    switch (result)
        case nullptr, 1, 9, 0xa
            result = sub_583f80(arg1)
        label_58377e:
            
            if (result.b == 0)
                result.b = 0
                return result
        case 2
            result = sub_582790(arg1)
            goto label_58377e
        case 3
            result = sub_5820b0(arg1)
            goto label_58377e
        case 4, 5, 6, 8
            result.b = 0
            return result
        case 7
            if (sub_582300(arg1).b == 0)
                result.b = 0
                return result

result.b = 1
return result

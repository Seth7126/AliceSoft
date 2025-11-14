// 函数: sub_699610
// 地址: 0x699610
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t edi = SizeofResource(arg3, arg4)
uint32_t hResData

if (edi != 0)
    hResData = LoadResource(arg3, arg4)
    
    if (hResData != 0)
        hResData = LockResource(hResData)
        
        if (hResData != 0)
            sub_403540(arg2, edi)
            sub_69d850(*arg2, hResData, edi)
            int32_t* eax
            eax.b = 1
            return eax

hResData.b = 0
return hResData

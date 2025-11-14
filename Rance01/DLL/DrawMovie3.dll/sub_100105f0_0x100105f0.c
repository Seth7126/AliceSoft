// 函数: sub_100105f0
// 地址: 0x100105f0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t* eax_1 = (*(arg1[-4] + 0x20))()

if (eax_1 == 0)
    return eax_1 + 1

CoInitialize(nullptr)
HRESULT edi = CoCreateInstance(&data_1001bc10, 0, CLSCTX_INPROC_SERVER, &data_1001bd50, &arg1)

if (edi s>= 0)
    edi = sub_10010130(eax_1, arg1, 0)
    int32_t* eax_5 = arg1
    (*(*eax_5 + 8))(eax_5)

CoFreeUnusedLibraries()
CoUninitialize()
int32_t eax_9 = neg.d(edi + 0x7ff8fffe)
return sbb.d(eax_9, eax_9, edi != 0x80070002) & edi


// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. This
// project loosely follows the Google C++ styleguide and uses a tab-size of two spaces and a max-
// width of 100 characters per line.
//
// Author(s):
//   Database generator <database.py>
//
// This file populates the database with best-found tuning parameters for the 'Xgemm_Direct' kernels.
//
// =================================================================================================

namespace clblast {
// =================================================================================================

const Database::DatabaseEntry Database::XgemmDirectHalf = {
  "XgemmDirect", Precision::kHalf, {
    { // Default
      kDeviceTypeAll, "default", {
        { "default",                                         { {"KWID",2}, {"MDIMAD",8}, {"MDIMCD",8}, {"NDIMBD",8}, {"NDIMCD",8}, {"PADA",1}, {"PADB",1}, {"VWMD",4}, {"VWND",4}, {"WGD",32} } },
      }
    },
  }
};

// =================================================================================================

const Database::DatabaseEntry Database::XgemmDirectSingle = {
  "XgemmDirect", Precision::kSingle, {
    { // AMD GPUs
      kDeviceTypeGPU, "AMD", {
        { "AMD Radeon R9 M370X Compute Engine",              { {"KWID",2}, {"MDIMAD",8}, {"MDIMCD",8}, {"NDIMBD",8}, {"NDIMCD",8}, {"PADA",1}, {"PADB",1}, {"VWMD",2}, {"VWND",2}, {"WGD",32} } },
        { "default",                                         { {"KWID",2}, {"MDIMAD",8}, {"MDIMCD",8}, {"NDIMBD",8}, {"NDIMCD",8}, {"PADA",1}, {"PADB",1}, {"VWMD",2}, {"VWND",2}, {"WGD",32} } },
      }
    },
    { // Intel GPUs
      kDeviceTypeGPU, "Intel", {
        { "Iris Pro",                                        { {"KWID",2}, {"MDIMAD",16}, {"MDIMCD",16}, {"NDIMBD",8}, {"NDIMCD",8}, {"PADA",1}, {"PADB",1}, {"VWMD",2}, {"VWND",4}, {"WGD",32} } },
        { "default",                                         { {"KWID",2}, {"MDIMAD",16}, {"MDIMCD",16}, {"NDIMBD",8}, {"NDIMCD",8}, {"PADA",1}, {"PADB",1}, {"VWMD",2}, {"VWND",4}, {"WGD",32} } },
      }
    },
    { // NVIDIA GPUs
      kDeviceTypeGPU, "NVIDIA", {
        { "GeForce GTX 750 Ti",                              { {"KWID",2}, {"MDIMAD",8}, {"MDIMCD",8}, {"NDIMBD",8}, {"NDIMCD",8}, {"PADA",1}, {"PADB",1}, {"VWMD",4}, {"VWND",2}, {"WGD",32} } },
        { "default",                                         { {"KWID",2}, {"MDIMAD",8}, {"MDIMCD",8}, {"NDIMBD",8}, {"NDIMCD",8}, {"PADA",1}, {"PADB",1}, {"VWMD",4}, {"VWND",2}, {"WGD",32} } },
      }
    },
    { // Default
      kDeviceTypeAll, "default", {
        { "default",                                         { {"KWID",2}, {"MDIMAD",8}, {"MDIMCD",8}, {"NDIMBD",8}, {"NDIMCD",8}, {"PADA",1}, {"PADB",1}, {"VWMD",4}, {"VWND",4}, {"WGD",32} } },
      }
    },
  }
};

// =================================================================================================

const Database::DatabaseEntry Database::XgemmDirectComplexSingle = {
  "XgemmDirect", Precision::kComplexSingle, {
    { // AMD GPUs
      kDeviceTypeGPU, "AMD", {
        { "AMD Radeon R9 M370X Compute Engine",              { {"KWID",2}, {"MDIMAD",16}, {"MDIMCD",16}, {"NDIMBD",16}, {"NDIMCD",16}, {"PADA",1}, {"PADB",1}, {"VWMD",1}, {"VWND",1}, {"WGD",16} } },
        { "default",                                         { {"KWID",2}, {"MDIMAD",16}, {"MDIMCD",16}, {"NDIMBD",16}, {"NDIMCD",16}, {"PADA",1}, {"PADB",1}, {"VWMD",1}, {"VWND",1}, {"WGD",16} } },
      }
    },
    { // Intel GPUs
      kDeviceTypeGPU, "Intel", {
        { "Iris Pro",                                        { {"KWID",2}, {"MDIMAD",16}, {"MDIMCD",16}, {"NDIMBD",8}, {"NDIMCD",8}, {"PADA",1}, {"PADB",1}, {"VWMD",2}, {"VWND",2}, {"WGD",32} } },
        { "default",                                         { {"KWID",2}, {"MDIMAD",16}, {"MDIMCD",16}, {"NDIMBD",8}, {"NDIMCD",8}, {"PADA",1}, {"PADB",1}, {"VWMD",2}, {"VWND",2}, {"WGD",32} } },
      }
    },
    { // NVIDIA GPUs
      kDeviceTypeGPU, "NVIDIA", {
        { "GeForce GTX 750 Ti",                              { {"KWID",16}, {"MDIMAD",8}, {"MDIMCD",8}, {"NDIMBD",16}, {"NDIMCD",8}, {"PADA",1}, {"PADB",1}, {"VWMD",2}, {"VWND",1}, {"WGD",16} } },
        { "default",                                         { {"KWID",16}, {"MDIMAD",8}, {"MDIMCD",8}, {"NDIMBD",16}, {"NDIMCD",8}, {"PADA",1}, {"PADB",1}, {"VWMD",2}, {"VWND",1}, {"WGD",16} } },
      }
    },
    { // Default
      kDeviceTypeAll, "default", {
        { "default",                                         { {"KWID",2}, {"MDIMAD",16}, {"MDIMCD",16}, {"NDIMBD",8}, {"NDIMCD",8}, {"PADA",1}, {"PADB",1}, {"VWMD",2}, {"VWND",2}, {"WGD",32} } },
      }
    },
  }
};

// =================================================================================================

const Database::DatabaseEntry Database::XgemmDirectDouble = {
  "XgemmDirect", Precision::kDouble, {
    { // AMD GPUs
      kDeviceTypeGPU, "AMD", {
        { "AMD Radeon R9 M370X Compute Engine",              { {"KWID",2}, {"MDIMAD",16}, {"MDIMCD",16}, {"NDIMBD",8}, {"NDIMCD",8}, {"PADA",1}, {"PADB",1}, {"VWMD",1}, {"VWND",1}, {"WGD",16} } },
        { "default",                                         { {"KWID",2}, {"MDIMAD",16}, {"MDIMCD",16}, {"NDIMBD",8}, {"NDIMCD",8}, {"PADA",1}, {"PADB",1}, {"VWMD",1}, {"VWND",1}, {"WGD",16} } },
      }
    },
    { // NVIDIA GPUs
      kDeviceTypeGPU, "NVIDIA", {
        { "GeForce GTX 750 Ti",                              { {"KWID",2}, {"MDIMAD",8}, {"MDIMCD",8}, {"NDIMBD",8}, {"NDIMCD",8}, {"PADA",1}, {"PADB",1}, {"VWMD",2}, {"VWND",4}, {"WGD",32} } },
        { "default",                                         { {"KWID",2}, {"MDIMAD",8}, {"MDIMCD",8}, {"NDIMBD",8}, {"NDIMCD",8}, {"PADA",1}, {"PADB",1}, {"VWMD",2}, {"VWND",4}, {"WGD",32} } },
      }
    },
    { // Default
      kDeviceTypeAll, "default", {
        { "default",                                         { {"KWID",2}, {"MDIMAD",16}, {"MDIMCD",16}, {"NDIMBD",8}, {"NDIMCD",8}, {"PADA",1}, {"PADB",1}, {"VWMD",1}, {"VWND",1}, {"WGD",16} } },
      }
    },
  }
};

// =================================================================================================

const Database::DatabaseEntry Database::XgemmDirectComplexDouble = {
  "XgemmDirect", Precision::kComplexDouble, {
    { // AMD GPUs
      kDeviceTypeGPU, "AMD", {
        { "AMD Radeon R9 M370X Compute Engine",              { {"KWID",2}, {"MDIMAD",16}, {"MDIMCD",16}, {"NDIMBD",16}, {"NDIMCD",16}, {"PADA",1}, {"PADB",1}, {"VWMD",1}, {"VWND",1}, {"WGD",16} } },
        { "default",                                         { {"KWID",2}, {"MDIMAD",16}, {"MDIMCD",16}, {"NDIMBD",16}, {"NDIMCD",16}, {"PADA",1}, {"PADB",1}, {"VWMD",1}, {"VWND",1}, {"WGD",16} } },
      }
    },
    { // NVIDIA GPUs
      kDeviceTypeGPU, "NVIDIA", {
        { "GeForce GTX 750 Ti",                              { {"KWID",2}, {"MDIMAD",32}, {"MDIMCD",32}, {"NDIMBD",8}, {"NDIMCD",8}, {"PADA",1}, {"PADB",1}, {"VWMD",1}, {"VWND",1}, {"WGD",32} } },
        { "default",                                         { {"KWID",2}, {"MDIMAD",32}, {"MDIMCD",32}, {"NDIMBD",8}, {"NDIMCD",8}, {"PADA",1}, {"PADB",1}, {"VWMD",1}, {"VWND",1}, {"WGD",32} } },
      }
    },
    { // Default
      kDeviceTypeAll, "default", {
        { "default",                                         { {"KWID",2}, {"MDIMAD",8}, {"MDIMCD",8}, {"NDIMBD",8}, {"NDIMCD",8}, {"PADA",1}, {"PADB",1}, {"VWMD",1}, {"VWND",2}, {"WGD",16} } },
      }
    },
  }
};

// =================================================================================================
} // namespace clblast

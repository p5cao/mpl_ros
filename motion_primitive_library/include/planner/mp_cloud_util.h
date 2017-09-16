/**
 * @file mp_cloud_util.h
 * @brief motion primitive cloud util
 */
#include <planner/env_cloud.h>
#include <planner/mp_base_util.h>

/**
 * @brief Motion primitive planner using point cloud
 */
class MPCloudUtil : public MPBaseUtil
{
  public:
    /**
     * @brief Simple constructor
     * @param verbose enable print out
     */
    MPDecompUtil(bool verbose);
    ///Planning from start to goal
    bool plan(const Waypoint &start, const Waypoint &goal);
    ///Set map util
    void setMap(const vec_Vec3f& obs, decimal_t r, const Vec3f& ori, const Vec3f& dim);
    ///Get polyhedra
    Polyhedra getPolyhedra();
};

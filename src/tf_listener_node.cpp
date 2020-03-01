#include <ros/ros.h>

#include <iostream>
// #include <geometry_msgs/PointStamped.h>
#include <tf/transform_listener.h>
#include <tf/transform_broadcaster.h>

using namespace std;
/*
void transform_tf(const sensor_msgs::PointCloud *input_cloud, ){

}
*/


int main(int argc, char** argv){
  ros::init(argc, argv, "topic_tf_listener");
  ros::NodeHandle node;

  tf::Quaternion q;
  tf::Vector3 v;

  tf::TransformListener tf_listener;

  ros::Rate rate(10);

  while(node.ok()){
    tf::StampedTransform transform;
    try{
      //tf_listener.waitForTransform("/camera_init", "/camera", ros::Time(0), ros::Duration(3.0));
      //tf_listener.lookupTransform("/camera_init", "/camera", ros::Time(0), transform);

      double xyz[3] = {0.0, };
      double quat[4] = {0.0, };
/*
      xyz[0]=transform.getOrigin().x();
      xyz[1]=transform.getOrigin().y();
      xyz[2]=transform.getOrigin().z();

      v.setValue(xyz[0] , xyz[1] , xyz[2]);

      cout << " ======= translation======== " << endl;
      cout << "      x   : " << xyz[0] << endl;
      cout << "      y   : " << xyz[1] << endl;
      cout << "      z   : " << xyz[2] << endl;

      quat[0] = transform.getRotation().x();
      quat[1] = transform.getRotation().y();
      quat[2] = transform.getRotation().z();
      quat[3] = transform.getRotation().w();

      cout << " =========rotation========== " << endl;
      cout << "      x   : " << quat[0] << endl;
      cout << "      y   : "<< quat[1] << endl;
      cout << "      z   : "<< quat[2] << endl;
      cout << "      w   : "<< quat[3] << endl;

*/
    }
    catch(tf::TransformException ex){
        ROS_ERROR("%s", ex.what());
        ros::Duration(1.0).sleep();
        rate.sleep();

    }

  }
  return 0;
}

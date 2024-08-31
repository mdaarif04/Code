from instagram import InstagramAPI

username = input("Enter the number: ")
user = InstagramAPI(username)
print("Following: ", user.number_of_followings)
print("Followers: ", user.number_of_followers)
print("Posts: ", user.number_of_posts)
print("Bio: ", user.number_of_posts)
print("Website: ", user.website)